/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197777
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((((!(arr_0 [i_0] [i_0]))) ? ((((((arr_2 [i_0] [i_0]) ? (arr_1 [1]) : 9424997297021875209))) ? var_10 : (arr_2 [i_0] [i_0]))) : (arr_2 [i_0] [i_0])));
        var_12 ^= (-(arr_1 [0]));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = (((arr_1 [i_1]) < (arr_4 [i_1])));
        var_13 = (((arr_4 [8]) < 5));
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        arr_10 [i_2] [i_2] = ((~(((arr_7 [i_2] [i_2]) % 40561))));
        arr_11 [i_2] = (arr_8 [i_2]);
        arr_12 [i_2] = var_1;
        var_14 = ((-(min(((((arr_7 [i_2] [i_2]) ? 65535 : 202934816))), (min(9021746776687676407, var_2))))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                {
                    arr_19 [i_3] [i_3] [i_2] = (min((arr_9 [i_4] [i_3]), ((max(1, (arr_9 [i_2] [i_4]))))));
                    arr_20 [i_2] [i_2] [i_2] = ((var_10 ? (((min((arr_9 [i_2] [i_3]), 5685)))) : (((arr_7 [i_2] [i_3]) ? (arr_14 [i_4]) : 23854))));
                }
            }
        }
    }
    var_15 = var_1;
    var_16 = var_4;
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 23;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            {
                var_17 = (((((var_3 ? var_1 : ((var_9 ? 65535 : 1069547520))))) % (((arr_17 [i_5 - 1] [10] [i_5] [i_5 - 1]) ? (arr_17 [i_5 + 1] [i_6] [i_6] [i_6]) : var_6))));
                var_18 = (min((arr_22 [i_5]), ((((min(1, var_6)) || -1271220566)))));
            }
        }
    }
    #pragma endscop
}
