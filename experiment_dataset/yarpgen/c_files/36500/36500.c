/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36500
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        var_11 -= (max((((-(min(var_7, (arr_6 [i_0])))))), (min((max(var_8, (arr_3 [i_3] [i_1] [i_0]))), ((min(var_3, 0)))))));
                        var_12 = (((min((max(65535, 65535), (var_9 || -29474))))));
                    }

                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_13 = (min(var_13, ((max(var_0, (min((min(var_4, var_7)), var_6)))))));
                        var_14 = (min(var_14, (((((((min(var_1, var_6)) | var_6))) ? (max((min((arr_0 [7]), 0)), -var_5)) : (min((arr_0 [i_1 + 2]), (min(var_1, var_2)))))))));
                    }
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        var_15 = (max((min((arr_7 [i_0] [i_1 - 1]), (arr_7 [i_0] [i_1 - 1]))), (var_6 / -var_6)));
                        var_16 = ((((max(var_1, (arr_13 [i_1] [i_1 + 2] [i_2] [20])))) << (((((min(var_10, (arr_11 [i_0] [13] [i_0] [i_0] [i_0] [i_0]))) - ((max(var_3, var_1))))) + 2480534427428183347))));
                        var_17 = ((((var_3 <= (min(0, var_2)))) ? (min(var_8, (arr_10 [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1 + 1]))) : (((-((29453 ? -1 : (arr_9 [i_0] [i_0]))))))));
                    }
                    var_18 = ((min(var_8, (max(var_6, (arr_0 [i_1]))))));
                    var_19 = (min(var_19, (40578 < var_8)));
                }
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    var_20 = max(-var_5, (arr_5 [i_1 + 1]));
                    var_21 = (min((max(var_1, ((var_5 & (arr_15 [i_1 + 1] [i_1] [i_6] [i_6]))))), (((min(var_10, (arr_5 [i_1 + 2])))))));
                    var_22 = (max((((-(min(var_0, var_7))))), -4029294157557203658));
                }
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    var_23 -= ((((min((29812 == var_5), (((arr_12 [12] [i_0] [12] [i_7] [i_0]) ? var_7 : 40811))))) ? (min((arr_20 [1] [i_1 - 1] [1] [i_7]), ((-(arr_11 [i_0] [5] [i_7] [i_0] [i_7] [i_0]))))) : ((((min(1210887834, -1)) + (arr_5 [i_0]))))));
                    var_24 = var_9;
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 23;i_9 += 1)
                        {
                            {
                                var_25 = (min((var_3 & var_9), ((max((arr_25 [i_0] [i_1 + 2] [i_7] [i_8]), -2067103743)))));
                                var_26 = (min(((!((min(var_0, var_3))))), ((((min((arr_12 [i_0] [14] [i_0] [i_0] [i_0]), -7864931928880129314))) && ((min((arr_23 [i_0] [i_1 - 1] [i_7] [i_7] [i_0]), var_0)))))));
                            }
                        }
                    }
                }
                var_27 = ((((((!(((var_6 ? (arr_11 [i_0] [i_0] [i_1] [i_0] [i_1] [i_0]) : var_10))))))) == (min(var_9, (arr_12 [i_1] [i_1 + 1] [8] [i_1] [i_0])))));
            }
        }
    }
    var_28 = max(var_0, ((var_9 >> (((var_1 - -1) - 22348)))));
    #pragma endscop
}
