/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216433
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_7;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 20;i_3 += 1)
                {
                    {
                        arr_10 [i_3] [i_1] [i_2] [i_3] = arr_0 [i_1] [i_2 - 1];
                        var_13 = arr_9 [i_0] [i_1] [i_2] [i_2] [i_2] [i_3];
                    }
                }
            }
        }
        var_14 = var_4;
        var_15 = (((arr_7 [0] [8] [i_0] [i_0] [i_0] [i_0]) ? ((((((arr_3 [0] [i_0] [20]) ? (arr_9 [20] [i_0] [i_0] [i_0] [i_0] [2]) : (arr_8 [1] [i_0] [i_0] [i_0])))) ? var_9 : (((arr_7 [i_0] [1] [i_0] [i_0] [i_0] [i_0]) ? (arr_5 [i_0]) : var_11)))) : (((var_9 * 0) ? (arr_3 [i_0] [i_0] [i_0]) : (arr_0 [i_0] [i_0])))));
    }

    for (int i_4 = 3; i_4 < 10;i_4 += 1) /* same iter space */
    {
        var_16 |= 0;
        arr_13 [1] |= (min((((arr_4 [i_4 - 3]) ? 12 : (arr_4 [i_4 + 1]))), (arr_4 [i_4 - 3])));
        var_17 ^= max(15260, (max((arr_0 [i_4] [i_4]), (((!(arr_1 [i_4])))))));
    }
    for (int i_5 = 3; i_5 < 10;i_5 += 1) /* same iter space */
    {
        var_18 = (max((8 + 1), ((((8 + (arr_16 [i_5] [i_5]))) - 0))));
        var_19 = (((((36233 ? 21340 : 0))) ? (((arr_7 [i_5] [i_5] [i_5 - 1] [i_5 + 1] [i_5] [1]) ? (((arr_14 [i_5] [i_5]) ? var_6 : (arr_9 [i_5] [i_5] [12] [i_5] [i_5] [i_5]))) : (arr_12 [i_5 - 2]))) : (arr_1 [i_5])));
        arr_17 [i_5] = (max(15260, 1));
        arr_18 [i_5] = (((~(arr_14 [i_5] [i_5]))));
    }
    /* vectorizable */
    for (int i_6 = 3; i_6 < 10;i_6 += 1) /* same iter space */
    {
        var_20 ^= 65528;
        arr_23 [i_6] = -var_11;
    }
    #pragma endscop
}
