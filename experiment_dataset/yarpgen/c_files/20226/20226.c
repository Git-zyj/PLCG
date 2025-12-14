/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20226
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(9223372036854775807, 14613859079678482748));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_12 = (((((min((arr_4 [i_0] [17] [i_0]), (arr_2 [i_0] [i_1]))))) ? (arr_2 [i_0] [12]) : (min((min((arr_2 [i_0] [i_1]), (arr_0 [i_1]))), (arr_2 [i_0] [i_0])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_12 [i_3] [i_2] [i_3] [i_3] [i_0] [i_0] = (var_9 ? (max((arr_3 [i_0] [1]), (min(var_10, (arr_0 [11]))))) : ((max((max((arr_8 [i_0] [i_1] [i_2] [i_2]), var_10)), ((min(var_3, (arr_11 [i_0] [i_0] [8] [i_0] [16]))))))));
                            var_13 = ((!var_2) ? (min((arr_0 [13]), (max((arr_3 [7] [i_2]), var_6)))) : (arr_3 [i_0] [i_0]));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 18;i_6 += 1)
                            {
                                arr_21 [i_0] [i_1] [i_0] [8] [i_6] = (~(arr_16 [i_0] [i_1]));
                                arr_22 [i_0] [i_1] [i_4] [i_6] [i_5] [i_6] = (arr_9 [i_0] [1] [i_0]);
                                arr_23 [i_0] [i_0] [i_4] [i_5] [i_4] = (arr_4 [i_5] [i_4] [i_0]);
                            }
                            for (int i_7 = 0; i_7 < 18;i_7 += 1)
                            {
                                arr_26 [i_0] [2] = (max((((!((min(var_7, (arr_11 [i_7] [i_7] [i_7] [i_7] [i_7]))))))), (max(var_1, (arr_16 [i_0] [i_7])))));
                                arr_27 [i_1] [i_5] [i_1] [i_1] [i_1] [i_0] = (arr_3 [i_4] [i_1]);
                                arr_28 [i_5] = ((-(arr_6 [i_0] [1])));
                            }
                            for (int i_8 = 0; i_8 < 18;i_8 += 1)
                            {
                                var_14 = ((+(min(((min((arr_17 [i_8] [i_5] [i_0] [i_0] [i_1] [i_0]), (arr_8 [i_8] [11] [11] [i_0])))), (min(var_6, (arr_18 [7] [7] [i_1] [i_1])))))));
                                arr_31 [i_8] [i_0] [i_0] [1] [i_0] [i_0] = (min((min(250, 28057)), ((max((((var_9 > (arr_1 [i_1])))), (arr_17 [4] [i_1] [i_5] [i_4] [i_1] [i_0]))))));
                            }
                            for (int i_9 = 1; i_9 < 16;i_9 += 1)
                            {
                                arr_34 [i_0] [i_1] [i_4] = min((((((var_0 ? var_3 : (arr_7 [i_5] [i_5] [i_4] [i_1])))) % (max(2549232246353995650, 3413)))), ((min(var_1, (arr_3 [i_0] [i_1])))));
                                arr_35 [i_9] = ((((max((min((arr_6 [i_5] [i_4]), var_5)), (((-(arr_13 [i_5] [i_5] [i_1] [i_1]))))))) ? var_1 : (((!(arr_15 [i_0] [i_1] [i_5]))))));
                                arr_36 [9] [i_1] [i_4] [i_5] [1] [i_5] [i_1] = (((+(max((arr_9 [i_0] [5] [i_0]), (arr_17 [i_0] [i_1] [17] [3] [i_5] [i_9]))))));
                                arr_37 [i_4] = var_9;
                            }
                            var_15 = (min((arr_0 [i_0]), (arr_17 [i_0] [i_1] [0] [i_5] [0] [i_4])));
                            arr_38 [i_0] [13] [i_4] [i_0] = (min((max((min((arr_1 [i_1]), (arr_16 [i_1] [i_5]))), (min(var_7, var_4)))), (((arr_7 [i_1] [i_0] [12] [1]) ? (!var_3) : (((arr_29 [i_4] [13] [13]) ? var_6 : (arr_16 [i_5] [i_5])))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
