/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201035
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= (!var_9);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                var_17 = ((~(~var_6)));

                for (int i_2 = 1; i_2 < 9;i_2 += 1)
                {
                    var_18 = ((!(+-9)));

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        arr_9 [2] [2] [i_1 - 2] [i_2 + 2] [i_1] = ((-(((!(arr_2 [i_0]))))));
                        var_19 = ((!(!4294967295)));
                    }
                    /* vectorizable */
                    for (int i_4 = 2; i_4 < 9;i_4 += 1)
                    {
                        var_20 = (+-59400);
                        var_21 = (!-6662131801582199506);
                    }
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        var_22 = -var_12;

                        for (int i_6 = 2; i_6 < 10;i_6 += 1)
                        {
                            var_23 = (!var_5);
                            arr_16 [i_1] [4] [i_2 + 1] = (!6662131801582199535);
                        }
                    }
                    var_24 = (~-6662131801582199497);
                }
                var_25 = ((!(!2976505871)));
                var_26 = (min(var_26, (+-var_5)));
            }
        }
    }
    var_27 &= ((!(!-var_10)));
    #pragma endscop
}
