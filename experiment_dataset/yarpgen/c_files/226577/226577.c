/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226577
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (var_12 ? (!var_0) : var_13);

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 23;i_3 += 1)
                {
                    {
                        var_18 = (((((arr_12 [i_0] [i_0] [i_2] [i_0] [i_3 + 1]) > (arr_9 [i_2] [i_3] [i_2] [i_0]))) ? ((var_12 / (arr_9 [i_0] [i_1] [i_2] [i_3 + 2]))) : (((-(arr_12 [i_0] [i_1] [i_2] [i_1] [i_3 + 2]))))));
                        var_19 &= (((!(arr_12 [i_3] [i_3] [i_2] [i_1] [i_0]))));
                        var_20 -= (arr_4 [i_3 - 2]);

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_21 ^= max((((var_4 ? var_1 : var_7))), ((-(arr_8 [i_0] [i_1] [i_2] [i_3]))));
                            var_22 = (arr_6 [i_2]);
                            var_23 = ((((arr_16 [i_0] [i_0] [i_2] [i_3] [i_3]) ? 7322617737972624763 : var_7)));
                        }
                    }
                }
            }
        }
        var_24 = (max(var_24, ((((arr_6 [i_0]) ? ((var_1 ? ((max(var_2, 112))) : ((1 ? (arr_16 [i_0] [i_0] [i_0] [i_0] [i_0]) : 1)))) : (min((arr_1 [i_0]), ((-(arr_1 [i_0]))))))))));
    }
    /* vectorizable */
    for (int i_5 = 2; i_5 < 15;i_5 += 1)
    {
        arr_20 [i_5] = ((254 ? var_9 : var_0));
        var_25 ^= -var_9;
        var_26 = 7322617737972624753;
    }
    #pragma endscop
}
