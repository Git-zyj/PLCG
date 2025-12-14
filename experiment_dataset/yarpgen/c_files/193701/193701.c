/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193701
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 *= (-32767 - 1);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_16 = (-32767 - 1);
                arr_7 [i_0] [3] = (((((-(-32767 - 1)))) ? var_7 : (((-(arr_1 [i_0 + 1]))))));
                arr_8 [i_0] [i_0] = (var_5 > var_1);
                var_17 = (min(var_17, ((min(((((-8 - (arr_6 [i_1] [i_1] [i_0 + 1]))))), (((((var_5 ? 30 : var_11))) ? (((4444526931563476460 ? (-32767 - 1) : 7))) : (max(6529386412134156903, var_9)))))))));
            }
        }
    }
    var_18 = (!var_3);
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 14;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        {
                            var_19 = (max(var_19, (((max(var_6, (arr_9 [i_5])))))));
                            var_20 -= (((((-((var_1 ? (arr_16 [i_2] [1] [i_4]) : (arr_18 [i_2] [i_4] [i_4] [i_4] [i_4] [14])))))) ? 32767 : (((~(~var_9))))));
                        }
                    }
                }
                arr_21 [i_2] [i_2] = ((~(max((((arr_12 [i_2]) * (arr_13 [2] [i_2]))), -1546))));
            }
        }
    }

    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        var_21 = (((((arr_17 [2]) ? (arr_22 [i_6]) : (arr_17 [2]))) & (((arr_17 [16]) ^ (arr_22 [i_6])))));
        var_22 = ((47 ? -32741 : 225));
        var_23 = (((1 || 32767) ? (1 != -1) : (!32767)));
    }
    #pragma endscop
}
