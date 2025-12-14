/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217688
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_1, var_0));
    var_18 = (min(var_18, ((43129 ? 1 : 1))));
    var_19 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_20 |= ((1 ? 3671012958 : 3671012939));

                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        var_21 = ((((((arr_4 [i_1 - 1]) ? 43129 : var_7))) | var_10));
                        arr_10 [i_1] = (arr_1 [i_1 - 1]);
                        var_22 = (arr_0 [i_0] [2]);
                    }
                    var_23 = (arr_3 [0] [i_1] [i_2]);
                    /* LoopNest 2 */
                    for (int i_4 = 3; i_4 < 8;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                arr_17 [i_0] [i_1] [i_1] [0] [i_5] = ((((((arr_11 [i_4 - 3] [i_5]) ? (arr_11 [i_0] [i_5]) : (arr_11 [i_0] [i_0])))) ? (arr_13 [i_0] [i_0] [i_2]) : ((((((arr_0 [i_0] [i_0]) ? 1 : var_13))) / (max(var_6, var_9))))));
                                arr_18 [i_1] [i_4 - 3] [i_1] = ((15018073161719986912 ? 9541 : 4294967285));
                                var_24 = (-9223372036854775807 - 1);
                                var_25 = (1 ? 19 : 238);
                            }
                        }
                    }
                }
            }
        }
    }
    var_26 = (min(var_26, 1152921504606845952));
    #pragma endscop
}
