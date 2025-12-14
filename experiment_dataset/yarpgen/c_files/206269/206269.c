/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206269
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_10 ^= (((arr_0 [i_0] [8]) ? (arr_1 [3]) : 225));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_11 -= ((((arr_0 [i_0] [i_1]) ^ -29933)));
                        var_12 = (((arr_2 [i_0]) ? var_5 : ((((!(arr_3 [i_3])))))));
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        arr_15 [i_4] = (-1135 - -118);
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                {
                    var_13 = ((var_9 ^ (min(((-(arr_19 [i_5] [i_5] [i_5]))), (var_5 ^ var_8)))));
                    arr_20 [i_4] = var_3;
                }
            }
        }
    }
    var_14 = var_2;
    var_15 = ((var_5 ? ((130 ? ((max(var_8, var_5))) : (max(var_7, var_0)))) : (((var_3 ? (min(var_1, 42)) : (min(var_2, var_5)))))));
    /* LoopNest 2 */
    for (int i_7 = 4; i_7 < 14;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 14;i_8 += 1)
        {
            {
                var_16 |= var_5;
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    for (int i_10 = 4; i_10 < 13;i_10 += 1)
                    {
                        {
                            var_17 = ((!((max(30, var_7)))));

                            for (int i_11 = 0; i_11 < 15;i_11 += 1)
                            {
                                arr_35 [i_7] [i_8] [14] [i_10] [i_11] [i_11] = (((~((var_4 ^ (arr_28 [i_7] [i_8 - 1]))))));
                                var_18 = (max(var_18, var_3));
                                var_19 = ((((9419351364279063715 ? (((arr_33 [6] [i_8] [9] [i_8] [9]) ? var_7 : 47346)) : var_3)) - (arr_30 [9] [5])));
                            }
                        }
                    }
                }
                var_20 = (max(var_20, (((((!(arr_30 [i_7] [i_7 - 1]))) && (!1))))));
                var_21 = (((((1 ? (arr_34 [i_8] [i_8 + 1] [i_8]) : (arr_34 [5] [i_8 + 1] [i_7])))) && (arr_34 [i_8 + 1] [i_8 + 1] [i_7 - 4])));
            }
        }
    }
    #pragma endscop
}
