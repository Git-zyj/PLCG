/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236202
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_19 = (((((~(arr_4 [i_0 - 1] [i_0 + 1] [i_0] [i_0 + 1])))) ? (((arr_4 [i_0 - 1] [i_0 + 1] [i_0 - 2] [17]) ^ (arr_3 [i_0 - 1] [i_0 + 1]))) : (min(0, (arr_3 [i_0 - 1] [i_0 + 1])))));
                    var_20 = (arr_1 [i_0]);
                    arr_6 [i_0] [i_0 - 1] [i_0 - 1] [i_2] = ((((~(-127 - 1)))) / var_14);
                    var_21 = (arr_5 [i_2] [i_1] [i_0] [i_0]);
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 23;i_5 += 1)
            {
                {
                    var_22 -= (22567 == 22567);
                    arr_16 [i_3] [i_4] [i_5 - 1] = (min((((((max(-6487626570664179098, (-9223372036854775807 - 1))) + 9223372036854775807)) << (((arr_15 [i_3] [i_5 - 1]) - 8034978917952721279)))), (((var_9 << (((arr_12 [i_4 + 1] [i_4 + 1] [i_5 - 2]) + 19754)))))));
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 24;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 23;i_7 += 1)
                        {
                            {
                                var_23 = ((~var_10) / (((6487626570664179098 | -9389) ? ((max((arr_19 [i_5 + 1] [i_5 + 2] [i_5 + 2] [i_5]), var_13))) : (min(1882997434, 9223372036854775802)))));
                                var_24 = (min(var_24, ((((max(-3355, 6487626570664179102)) < (((3109694368 >> ((min(0, var_12)))))))))));
                            }
                        }
                    }
                    arr_23 [i_5] [i_5] [i_5] = ((~(max((arr_19 [i_4 + 3] [i_5 - 1] [i_5 - 2] [i_5]), (arr_9 [i_4] [i_4 - 1])))));
                }
            }
        }
    }
    var_25 = var_15;
    var_26 = ((var_8 ? (((((max(var_12, var_4))) ? (!var_13) : var_4))) : ((var_2 ? (((min(var_16, var_7)))) : ((var_7 ? var_5 : var_0))))));
    #pragma endscop
}
