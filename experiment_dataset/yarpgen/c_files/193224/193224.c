/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193224
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= (8226271981983341226 + -8226271981983341254);
    var_19 = (((((~(((var_6 + 2147483647) << (var_16 - 32)))))) || (((var_1 * (var_12 / var_0))))));
    var_20 = (((((-8226271981983341232 | 268304384) <= (var_7 <= -21002))) && (((var_15 * var_15) || (-64 <= 14234977660178580704)))));
    var_21 = (max(var_21, ((((((((~var_14) + 9223372036854775807)) >> (((~var_10) + 252)))) * (((((min(var_4, 5)) >= (57 + 40))))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_8 [i_0] [i_1] [i_1] [i_0] = ((((((66 + (arr_3 [i_3] [i_0] [i_0]))) + -190)) == (((((arr_7 [i_0] [i_1 + 1] [i_0] [i_1 + 1]) + 85)) + (((((arr_0 [i_0]) || var_1))))))));
                            arr_9 [i_0] [9] [i_2] [i_0] = (max(((((min(-8226271981983341244, (arr_6 [i_0] [i_0] [i_2] [i_0])))) + (((arr_1 [i_1] [i_1]) * (arr_2 [i_0]))))), (max((var_2 * 268304384), (max(var_3, (arr_7 [i_1] [i_1] [i_3] [i_3])))))));
                        }
                    }
                }
                var_22 = (max(var_22, (((!((min(((((arr_3 [i_0] [i_0] [i_1 + 1]) > (arr_4 [i_1] [i_1 - 1] [i_0])))), (max((arr_1 [i_1 + 1] [i_0]), var_15))))))))));
            }
        }
    }
    #pragma endscop
}
