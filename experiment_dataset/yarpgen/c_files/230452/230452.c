/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230452
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                var_19 = (max(var_19, 4294967295));

                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    arr_8 [i_0] [i_1] [i_0] = ((-28 == (arr_2 [i_2])));
                    var_20 = (max(var_20, ((((max(4294967295, -93))) ? (max(-4294967295, (arr_2 [i_0]))) : (((max(var_5, (arr_0 [i_0]))) | 27))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_21 = (max(var_21, 1008935530));
                                arr_16 [i_0] [i_1] [i_2 - 1] [i_3] [i_3] = (i_3 % 2 == zero) ? ((((((arr_12 [i_1] [i_1 - 2] [i_1 + 2] [i_3] [i_1 - 2]) ? var_15 : 1565292510)) >> ((((max((-127 - 1), (arr_12 [i_1] [i_1 - 2] [i_1] [i_3] [i_1 - 1])))) - 66))))) : ((((((arr_12 [i_1] [i_1 - 2] [i_1 + 2] [i_3] [i_1 - 2]) ? var_15 : 1565292510)) >> ((((((max((-127 - 1), (arr_12 [i_1] [i_1 - 2] [i_1] [i_3] [i_1 - 1])))) - 66)) + 88)))));
                                var_22 |= var_18;
                            }
                        }
                    }
                    var_23 += 1008935530;
                }
                /* vectorizable */
                for (int i_5 = 3; i_5 < 22;i_5 += 1)
                {
                    var_24 = (max(var_24, (((754916937 ? (arr_15 [i_5 + 1] [i_5 + 2] [i_5] [i_5 + 2] [i_5]) : 130)))));
                    arr_21 [i_0] [i_1] = ((18 % (81 || 242)));
                }
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    var_25 |= var_17;

                    for (int i_7 = 2; i_7 < 23;i_7 += 1)
                    {
                        arr_27 [i_1] [i_6] [i_1] [i_0] = ((+(((arr_9 [i_7] [i_6] [i_1 + 2] [i_0]) - var_6))));
                        arr_28 [i_0] [i_1] [i_6] [i_7] = (min(((min(-var_15, 117))), (min(var_17, (arr_11 [i_1 - 1] [i_1 - 2] [i_1 + 1])))));
                        var_26 = (min(var_26, ((((arr_22 [i_0] [i_0]) < (arr_14 [i_7] [i_1 - 2] [i_1 - 2] [19] [i_1 - 2]))))));
                        var_27 = (max(var_27, ((min(3798878065, 2578634820)))));
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        var_28 -= ((~(arr_9 [i_1 - 1] [i_1 + 3] [i_1 + 2] [i_1 - 2])));
                        var_29 = ((var_18 ? -var_10 : (((arr_22 [i_0] [i_1]) + 46))));
                    }
                }
                var_30 = (!var_0);
                arr_32 [6] [i_1] = min(var_18, (496089230 == 137));
            }
        }
    }
    var_31 = (min(var_31, (((((((var_17 - var_6) ? var_18 : (((min(-1, -88))))))) ? var_8 : var_7)))));
    var_32 = 65;
    var_33 = ((((-(var_1 - -21))) != (((-((min(-50, 5))))))));
    #pragma endscop
}
