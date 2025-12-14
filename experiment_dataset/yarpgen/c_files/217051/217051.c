/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217051
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0] [i_0]);
        arr_3 [i_0] = var_8;
        var_18 = 32752;
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = (arr_5 [i_1]);
        var_19 &= (((((~(arr_0 [i_1] [i_1])))) && (arr_4 [i_1])));
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                {
                    var_20 &= (((-2147483647 - 1) != (65535 || -2147483644)));
                    arr_14 [i_2] [9] [i_4] [i_3] = (((arr_12 [i_2] [i_2] [i_2]) <= (((-(var_10 != var_8))))));
                    arr_15 [0] [0] = ((~((((var_17 ? (arr_8 [i_4]) : (arr_11 [i_2] [i_2] [i_2])))))));
                    arr_16 [i_3] = (arr_12 [i_4] [17] [i_2]);
                }
            }
        }
    }
    #pragma endscop
}
