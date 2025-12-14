/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48708
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_4;
    var_18 = min(((((1637586513 ? var_4 : var_7)) > ((min(var_6, 2657380782))))), (!var_10));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_19 = min((((((min(var_10, 2235248603))) && ((min(var_7, -1)))))), (~1));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_20 = (max(var_20, ((-((((var_9 ? var_11 : var_7)) + 1))))));
                                arr_13 [i_0] [i_1] [i_2] [14] [i_4] [19] [i_0] = (min((min((((22 || (-9223372036854775807 - 1)))), var_11)), ((max(-30546, (-9223372036854775807 - 1))))));
                                var_21 = 176;
                                arr_14 [i_4] [i_4] [i_0] [i_2] [i_0] [1] [i_0] = ((2657380782 ? 1 : 2657380782));
                                var_22 = (min(var_22, ((min((((!-2147483638) >= (~-24972))), (3522939154 != 0))))));
                            }
                        }
                    }
                }
                var_23 = (((arr_9 [i_1] [i_0] [i_0] [i_0] [i_0]) ? (arr_10 [i_0] [i_0] [i_1] [i_0] [i_0]) : (min((min((arr_7 [i_1] [i_0] [i_0] [i_0]), var_11)), (max(var_4, (arr_9 [i_0] [i_1] [i_0] [i_1] [1])))))));
            }
        }
    }
    #pragma endscop
}
