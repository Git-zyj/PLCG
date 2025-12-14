/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221197
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        arr_2 [i_0] [i_0 + 1] = var_10;
        var_15 |= (((((((var_5 ? var_0 : (arr_0 [i_0] [i_0])))))) - (((((var_14 ? var_13 : 122))) / (max(var_6, (arr_0 [i_0 - 3] [i_0])))))));
        var_16 = (max(var_13, (max(((max((arr_1 [i_0]), var_3))), (min(3794559473257083289, (arr_1 [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 13;i_4 += 1)
                    {
                        for (int i_5 = 4; i_5 < 14;i_5 += 1)
                        {
                            {
                                arr_17 [i_1] [i_4] [i_3] [i_3] [i_3] = (max(((max((max(var_10, var_1)), (((~(arr_10 [i_5]))))))), -var_10));
                                arr_18 [i_4] [i_4] [i_2] [i_3] [i_4] [i_4] [i_5] = var_12;
                                var_17 = (min((arr_4 [i_1] [i_2]), (arr_6 [i_2])));
                                arr_19 [i_1] [i_2] [i_4] [7] [i_5] = ((-(((arr_16 [i_1] [i_5] [i_4 + 1] [1] [i_1] [i_1]) ? var_13 : (max(var_9, var_13))))));
                            }
                        }
                    }
                    var_18 = var_0;
                    var_19 &= (((((-(arr_9 [i_1] [i_1] [i_1])))) ? (min((((arr_7 [i_3]) - 18776)), (arr_9 [i_3] [i_2] [i_3]))) : (((arr_13 [i_1] [i_2] [i_3] [i_3] [i_2]) ? (arr_11 [i_1] [i_1] [i_1] [i_1]) : (arr_11 [i_3] [i_2] [i_1] [i_1])))));
                    var_20 -= ((((~((127 ? 8184500245292085377 : 18446744073709551603)))) >> (((((min((arr_10 [5]), (arr_3 [i_3] [i_2]))) ^ (!var_6))) - 1265113558))));
                }
            }
        }
        var_21 = (min(var_21, (((+(((arr_16 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) ? var_6 : (arr_16 [i_1] [1] [1] [i_1] [i_1] [i_1]))))))));
        var_22 = (max(var_22, (arr_4 [i_1] [i_1])));
        arr_20 [7] [i_1] = (((~(arr_8 [i_1] [i_1] [i_1]))));
    }
    var_23 = (((((12 ? 23451 : 42330))) ? var_4 : (max(((min(251, 5))), (~var_11)))));
    #pragma endscop
}
