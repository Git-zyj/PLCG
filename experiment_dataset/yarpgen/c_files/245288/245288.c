/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= (min((min(var_10, ((min(var_6, var_9))))), (var_11 / var_8)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 16;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_13 [8] [8] [i_2 - 2] [8] [i_3] [i_0] [i_0] = (min((4206297241 >= 4206297241), (min((arr_8 [i_4 - 2] [i_4] [i_2]), var_6))));
                                var_15 = (max(var_15, ((max(1, 64)))));
                            }
                        }
                    }

                    for (int i_5 = 1; i_5 < 15;i_5 += 1)
                    {
                        var_16 = (min(var_16, (((~(max((arr_3 [i_0] [16] [i_5]), var_5)))))));
                        var_17 += ((+(max((!var_9), (arr_1 [15])))));
                        var_18 ^= var_8;
                        var_19 = ((+(max((var_13 <= var_0), (arr_4 [i_0] [i_0] [i_0])))));
                    }
                }
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    arr_22 [i_0] [i_6] [i_0] = (min(var_10, (arr_14 [i_0] [i_0] [i_0] [i_6])));
                    arr_23 [i_0] [i_6] [i_0] [i_0] = ((((((194 * -61) ? ((max(191, 0))) : var_9))) ? var_4 : (arr_5 [i_0] [i_0] [i_0] [i_0])));
                    var_20 = (arr_17 [i_0] [i_1] [i_6] [i_1]);
                    arr_24 [i_0] [i_0] [i_6] = ((((min(var_12, (arr_17 [1] [i_1] [i_6] [i_6])))) ? ((((min(var_10, var_5))) ? ((-(arr_1 [i_0]))) : (((var_7 ? var_11 : (arr_15 [i_0] [i_1] [i_6] [i_0])))))) : (((var_11 ? (arr_18 [i_0] [i_0] [i_0]) : var_12)))));
                }
                for (int i_7 = 2; i_7 < 15;i_7 += 1)
                {
                    var_21 = (max(var_21, ((((min(var_4, (arr_3 [i_7 - 1] [i_7 + 1] [i_7 - 1]))) % (((~((max(var_2, var_6)))))))))));
                    arr_27 [i_0] [i_0] = var_10;
                    arr_28 [i_0] [i_0] [i_0] = (min(((max(var_2, var_1))), (((arr_2 [i_7 + 2]) << (((arr_17 [i_7 + 1] [i_7 - 1] [i_7 + 1] [9]) - 24233))))));
                    var_22 = ((-var_11 ? (var_1 & 3) : (var_4 % var_1)));
                }
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        {
                            var_23 = var_8;
                            var_24 = (((((((((arr_0 [i_9]) / (arr_6 [i_1] [i_0])))) ? -var_1 : (max(var_4, var_10))))) ? ((((max((arr_5 [13] [i_1] [i_1] [i_0]), (arr_20 [i_0] [i_1] [i_8] [i_0])))) ? (min(var_6, var_5)) : (((-(arr_12 [i_0] [i_0] [i_0] [5] [16] [7] [i_0])))))) : (((~(1 && 251))))));
                            var_25 |= ((((min(1, 65535))) ^ (arr_33 [i_0] [4] [i_8] [4] [i_0] [i_9])));
                        }
                    }
                }
                arr_35 [i_0] [i_0] = ((((max(var_4, (arr_11 [i_1] [i_1] [i_1] [i_0] [i_0])))) ? ((min(var_11, var_9))) : (max((arr_11 [i_0] [i_0] [i_1] [i_1] [i_0]), var_2))));
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 17;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 17;i_11 += 1)
                    {
                        {
                            arr_43 [i_0] [16] [i_0] [i_10] [i_10] = (((((arr_31 [i_0] [i_11] [i_10]) >= (arr_6 [i_0] [i_1]))) ? ((max((arr_6 [12] [12]), (min(var_1, var_12))))) : (min(((max(var_2, var_7))), var_2))));
                            var_26 *= max(1, 8);
                            var_27 &= (min(0, 235));
                        }
                    }
                }
            }
        }
    }
    var_28 = (max(var_28, var_2));
    var_29 += (((max(var_3, (min(var_4, var_1))))) ? -15439428270571280940 : var_3);
    #pragma endscop
}
