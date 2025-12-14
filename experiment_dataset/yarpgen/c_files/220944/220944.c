/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220944
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((var_19 | var_4) == var_11));
    var_21 = (min(var_21, ((max(((((max(var_10, 1902322971))) ? (1 <= var_12) : (max(var_15, var_5)))), var_8)))));
    var_22 ^= ((((max((max(var_1, var_8)), var_5))) ? (var_5 / var_7) : (min(-var_10, (var_6 * 0)))));

    for (int i_0 = 2; i_0 < 14;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    var_23 = (((((min((arr_1 [i_0]), (arr_4 [i_0] [i_1]))) > (1 <= var_6))) ? (((min((arr_0 [i_0]), var_2)) + (((max((arr_2 [i_0 + 4] [i_0] [i_0 + 4]), var_14)))))) : ((min((max((arr_3 [i_0]), (arr_5 [i_0] [i_1]))), (arr_5 [i_2 - 1] [i_0 + 3]))))));
                    var_24 = ((arr_6 [i_0] [i_1] [i_1] [i_2]) < (((arr_4 [i_2 - 1] [i_0 + 1]) ? (arr_4 [i_2 - 1] [i_0 + 1]) : (arr_4 [i_2 - 1] [i_0 - 1]))));
                    var_25 = (min(var_25, var_15));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_26 += (min((((-((min((arr_2 [i_0] [2] [i_3]), var_9)))))), (((arr_1 [i_4 - 2]) - (arr_9 [i_4] [i_4 - 1] [i_4] [i_4])))));
                                var_27 = (arr_8 [i_2] [i_3] [i_2 - 1] [i_1] [i_2]);
                                var_28 *= (((max(((min(var_9, var_19))), ((-(arr_12 [i_0] [i_1] [i_2] [i_3 - 1] [i_4 + 1]))))) & -28983));
                                var_29 *= (((min((var_8 - var_14), (((arr_5 [i_0] [i_2]) ? (arr_6 [i_4] [2] [i_2] [i_4]) : (arr_4 [i_0 + 2] [i_2 + 1])))))) ? var_15 : ((((arr_8 [i_4] [i_3] [i_3] [i_3 - 1] [i_3 - 1]) ? (((arr_3 [i_4 + 1]) >> (var_1 - 2482405886))) : var_16))));
                                var_30 -= ((var_12 ? -715910960 : (max((((arr_13 [i_0 + 2] [i_1] [i_0 + 2]) ? var_14 : (arr_3 [1]))), ((var_14 >> (var_17 - 447972019)))))));
                            }
                        }
                    }
                }
            }
        }
        var_31 = (arr_0 [1]);
    }
    for (int i_5 = 2; i_5 < 14;i_5 += 1) /* same iter space */
    {
        arr_16 [i_5] = var_14;
        var_32 = var_17;
    }
    #pragma endscop
}
