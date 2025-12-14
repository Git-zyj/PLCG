/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235777
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(((((var_7 > 255) > (min(18346846546400774391, 9223372036854775807))))), ((var_12 ? var_6 : (min(var_17, var_0))))));
    var_20 = (max(var_20, ((((((~((50163 << (48557 - 48547)))))) ? ((~(~var_18))) : (((~((max(0, 0)))))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        var_21 = ((min((max((arr_9 [i_2] [i_0] [i_3] [i_0] [i_3] [i_0]), (arr_5 [i_3]))), ((((arr_0 [i_1]) > 230))))) & (arr_0 [i_0]));
                        var_22 = (min(var_22, 9223372036854775807));
                    }
                    /* vectorizable */
                    for (int i_4 = 2; i_4 < 19;i_4 += 1)
                    {
                        var_23 = (((arr_8 [i_0] [i_0] [i_0] [i_0]) >= 255));
                        var_24 = (min(var_24, ((((arr_9 [i_1 + 3] [i_1] [i_1] [i_1] [i_2] [i_4 + 1]) ? (arr_9 [i_1 - 1] [i_4] [i_4] [i_4 - 2] [i_2] [i_4 + 2]) : 7893526816737939524)))));
                    }
                    for (int i_5 = 1; i_5 < 19;i_5 += 1)
                    {
                        var_25 = (max(var_25, 1));
                        var_26 = (min(var_26, ((min(((min(26171, 26151))), (262143 * 4294705153))))));
                        arr_18 [i_5] [i_1] [16] [i_5] = ((((-(arr_2 [i_1 + 1]))) > (((arr_2 [i_1 - 1]) << (((arr_2 [i_1 + 1]) - 98226109))))));
                    }
                    var_27 = 9223372036854775790;
                    var_28 = ((+(((!((min((arr_7 [i_0]), 70665143))))))));
                }
            }
        }
    }
    #pragma endscop
}
