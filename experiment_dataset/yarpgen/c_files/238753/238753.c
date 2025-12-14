/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238753
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= (max((min(16566315780096842705, -100)), var_1));
    var_19 = (min(var_19, (~var_5)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        var_20 *= 20467;
                        var_21 = (arr_9 [i_3] [9]);
                    }
                    for (int i_4 = 4; i_4 < 9;i_4 += 1)
                    {
                        var_22 = (((-((var_2 ? var_17 : var_11)))));

                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            var_23 -= (((((max(770757652, 1595526948))) ? var_12 : (arr_5 [i_4 - 4]))));
                            var_24 = (min((arr_2 [i_4 - 2]), ((min((arr_2 [i_4 + 1]), (arr_2 [i_4 - 2]))))));
                            var_25 = (((((~var_5) ? (arr_12 [i_4 - 1] [i_1] [i_2] [i_4 - 3] [i_4] [i_2]) : (arr_1 [i_4 - 1] [i_0]))) & 237));
                        }
                        var_26 = ((~(-1048737972 && var_8)));
                        var_27 = max((max(((((arr_2 [i_4 - 1]) == 45068))), (arr_14 [i_4] [1] [i_0] [1] [i_0] [i_4 - 3]))), (arr_14 [i_4] [i_1] [1] [i_4 - 3] [i_4] [1]));
                        var_28 = ((min(-624735164, 4173255748768132332)));
                    }
                    var_29 = var_13;
                    var_30 -= (~45090);
                    var_31 = (min(var_31, ((((((-(((arr_1 [2] [4]) ? 624735191 : 45068))))) * (((arr_15 [6] [i_2] [8] [i_0] [i_2] [i_0]) ? var_4 : (arr_15 [8] [i_1] [i_2] [i_2] [i_2] [2]))))))));
                    var_32 = ((20445 ? 7 : 11961638845034987540));
                }
                var_33 = var_13;
                var_34 = max(var_1, ((-(arr_16 [i_0] [i_0] [i_1]))));
            }
        }
    }
    var_35 = var_0;
    #pragma endscop
}
