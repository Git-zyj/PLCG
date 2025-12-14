/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20875
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (var_15 ? (9223372036854775807 + var_3) : ((min(var_13, -25909))));
    var_19 = var_16;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_20 = (max((max((140307376 ^ var_6), var_5)), (((arr_9 [i_4] [1] [i_2 + 1] [i_1] [i_0 + 1]) / (((arr_10 [i_1] [i_2] [i_1] [i_0]) ? (arr_6 [i_4] [i_1]) : var_0))))));
                                var_21 = (arr_0 [i_1]);
                            }
                        }
                    }
                    var_22 = (min((!6442398280156030735), var_9));

                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        var_23 = (min(((!((var_13 && (arr_0 [i_2]))))), ((!(((var_4 ? 89 : (arr_7 [i_0]))))))));
                        var_24 = (min((-140307398 - var_14), 1));
                    }
                    var_25 = (min(var_15, 1451294007));
                    var_26 = ((!(!var_15)));
                }
            }
        }
    }
    #pragma endscop
}
