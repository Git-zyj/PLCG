/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243611
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_18 = ((3002709227 ? (max((((arr_1 [i_0]) ? var_16 : var_1)), (arr_1 [i_0]))) : (arr_2 [i_0] [i_0] [i_1])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {

                            for (int i_4 = 2; i_4 < 11;i_4 += 1)
                            {
                                var_19 += 1292258072;
                                var_20 = (((max((arr_10 [i_3] [i_4 + 1] [7] [i_4] [i_2]), (arr_10 [i_3] [i_4 + 1] [10] [i_4] [i_2])))) ? ((((min(var_10, var_16))) ? var_17 : ((((var_16 && (arr_10 [i_0] [i_1] [i_2] [4] [i_2]))))))) : ((max(((var_12 ? (arr_0 [i_3]) : (arr_5 [i_3] [i_2]))), var_8))));
                                var_21 = ((min((arr_6 [i_1] [i_2]), (arr_6 [i_0] [i_2]))));
                                arr_12 [7] [i_2] [i_2] [i_3] [7] [i_0] [i_3] = ((-(max((arr_9 [i_0] [i_4 - 2] [i_2] [i_3] [i_2] [i_2] [i_1]), var_10))));
                                var_22 = (min(var_22, ((max((!216), var_2)))));
                            }
                            var_23 = (min(var_23, (((((min(((55 ? 29419746 : var_7)), 1727458583))) ? (arr_7 [i_0] [i_1] [i_2] [i_1]) : (arr_3 [6] [i_1] [i_3]))))));
                            var_24 = (((7902857674456401199 ? -1 : 0)));
                            var_25 = (arr_2 [i_0] [i_1] [i_1]);
                        }
                    }
                }
                var_26 = (max(((((arr_8 [i_0] [i_0] [7]) ? (arr_8 [i_0] [i_0] [i_1]) : (arr_8 [i_0] [i_1] [i_1])))), -1292258072));
            }
        }
    }
    var_27 = var_8;
    var_28 = (((max(var_1, var_9))));
    #pragma endscop
}
