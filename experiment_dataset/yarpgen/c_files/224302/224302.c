/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224302
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_11, 26));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_21 = ((((((min((arr_4 [i_0] [i_0]), (arr_4 [i_0] [i_0])))) == (arr_2 [i_0] [i_1]))) ? (((arr_4 [i_0] [i_0]) ? var_7 : var_18)) : var_16));
                var_22 = (((((arr_4 [i_0 - 1] [i_0]) << ((((arr_4 [i_0] [i_0]) > var_7))))) * (var_18 / 32767)));

                for (int i_2 = 3; i_2 < 16;i_2 += 1) /* same iter space */
                {
                    var_23 = ((!((min((~var_8), (arr_2 [i_0] [i_1]))))));
                    var_24 = ((max((max((arr_5 [i_0] [i_1] [i_1]), var_5)), ((min(var_2, var_6))))));

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        arr_11 [i_0] = (((arr_9 [i_3 + 1] [i_0] [i_0] [i_2]) - -3464683473412117393));
                        arr_12 [i_0] [i_0] [i_0] [13] [i_1] = ((((arr_1 [i_0] [i_0]) ? var_4 : var_4)));
                        var_25 = (arr_9 [i_1] [i_0] [i_0 + 1] [i_0 + 1]);
                    }
                }
                /* vectorizable */
                for (int i_4 = 3; i_4 < 16;i_4 += 1) /* same iter space */
                {
                    arr_15 [i_0 + 1] [2] [i_1] [i_4] |= ((~((var_12 ? 101 : -32767))));
                    var_26 = 255;
                }
                var_27 = ((((min(var_18, (arr_2 [i_0] [i_1])))) == (var_19 == 32767)));
            }
        }
    }
    var_28 = var_7;
    #pragma endscop
}
