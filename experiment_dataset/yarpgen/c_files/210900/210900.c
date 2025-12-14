/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210900
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max((((var_17 ? var_13 : var_16))), (((((-5192 ? var_17 : var_3))) || (((20 ? var_4 : var_0)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_20 = (max(var_20, -5192));
                            arr_11 [i_3] [i_1] [i_0] = var_14;
                            var_21 = ((max((arr_9 [i_3] [i_1]), (((arr_4 [i_3] [i_2] [i_1] [i_0]) ? 1 : var_0)))));
                        }
                    }
                }
                var_22 ^= (((((((max((arr_5 [i_0] [i_0] [i_0] [i_1]), var_17)))) ^ (arr_0 [i_0]))) | -111));
                var_23 = ((((((((arr_1 [i_1] [i_1]) >> (((arr_0 [i_1]) - 3210093837141323464))))) >= var_11)) ? (arr_7 [i_0] [i_0] [i_0] [i_0] [i_0]) : var_14));
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        {
                            var_24 = (min(var_24, (max(((~(arr_6 [i_0] [1] [i_4 + 1]))), ((var_10 ? ((((arr_6 [4] [i_1] [i_0]) < (arr_8 [i_0] [i_1] [i_0])))) : var_0))))));
                            var_25 = (min(var_25, ((((~var_7) ? (arr_9 [i_4 - 2] [i_4 - 2]) : (max(var_3, -4027287508977679823)))))));
                            var_26 -= (((((var_3 && (arr_12 [i_0] [i_5])))) < ((max((arr_3 [i_4 - 2] [i_4 - 1] [i_4 - 1]), (-127 - 1))))));
                        }
                    }
                }
            }
        }
    }
    var_27 = (max((var_10 * var_10), (((2134295091508026952 <= 32767) ? (~var_1) : ((((-4027287508977679806 + 9223372036854775807) << (((var_17 + 161) - 43)))))))));
    #pragma endscop
}
