/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215980
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_12 [i_2] [i_2] [i_3] = (((((-1102784165 ? (max(var_2, 1102784165)) : ((3436923386 ? var_6 : (arr_4 [i_0] [i_0] [i_3])))))) ? ((-(min((arr_2 [i_1 + 3] [i_2] [i_3]), 3436923386)))) : (~var_14)));
                            var_16 = 1102784153;
                            var_17 = (arr_0 [i_3]);
                            var_18 = (((((arr_7 [i_0] [i_2] [i_0 + 2]) / (min((arr_2 [i_0] [i_3] [i_2]), var_9)))) * -1315880003));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 14;i_5 += 1)
                    {
                        {
                            var_19 = (((arr_5 [i_1 - 1] [i_0 + 3] [i_5 + 1]) ? (arr_5 [i_1 + 4] [i_0 + 1] [i_5 + 2]) : ((min((arr_5 [i_1 + 3] [i_0 + 2] [i_5 + 3]), var_3)))));
                            var_20 -= ((((((min(-16938, var_7))) && 3282711379)) ? (max((arr_3 [i_0 + 1] [i_5 - 1]), (arr_3 [i_0 - 2] [i_5 + 3]))) : ((~((var_3 ? (arr_2 [i_1] [i_1] [i_5 + 3]) : var_4))))));
                        }
                    }
                }
                var_21 = ((!((min(-var_5, var_5)))));
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 13;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 17;i_8 += 1)
                        {
                            {
                                var_22 ^= min(((max(var_7, var_4))), -16938);
                                arr_30 [i_0 + 2] [i_1] [i_0 + 2] [i_0 + 2] = (arr_13 [i_0 + 1] [i_1 + 1] [i_6] [i_8]);
                                arr_31 [i_0] [i_0] [i_0] [i_0 - 1] [i_0] = ((+(((arr_7 [i_1] [i_1] [8]) >> (var_5 - 23652)))));
                                arr_32 [i_0] [i_1 + 3] [i_7] [i_0] [i_0] = ((+((1290884296 ? (!3436923373) : (arr_13 [i_0 - 2] [i_0 + 3] [i_1 + 2] [i_7 + 4])))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 20;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 20;i_10 += 1)
        {
            {
                arr_37 [i_9] |= (-(max(var_4, (arr_34 [i_9]))));
                var_23 = max((min((arr_33 [i_10]), (arr_34 [i_10]))), -106148666);
                var_24 += (arr_33 [i_9]);
                var_25 = ((((min((arr_36 [i_9] [i_10]), (((arr_36 [i_9] [i_10]) ? (arr_33 [i_9]) : var_15))))) ? (((arr_35 [i_10] [i_10]) ? (arr_35 [i_10] [i_10]) : (arr_35 [i_10] [i_10]))) : ((var_12 ? ((var_14 & (arr_35 [i_10] [i_10]))) : ((min((arr_36 [i_9] [i_10]), (arr_36 [i_9] [i_9]))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 23;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 23;i_12 += 1)
        {
            {
                arr_43 [i_11] [i_11] = var_9;
                var_26 = var_5;
                var_27 ^= (max((max((arr_40 [i_11]), ((var_15 ? (arr_38 [i_12] [i_12]) : var_0)))), (!var_14)));
            }
        }
    }
    var_28 = var_2;
    #pragma endscop
}
