/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50367
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [15] [i_1] [i_0] = var_15;
                var_19 = (min(var_19, var_15));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_20 = var_0;
                            var_21 = (max(var_21, var_3));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 24;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            {
                var_22 = (max(var_22, var_10));
                arr_18 [i_4] = (((~var_5) ? 0 : 18446744073709551615));
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 23;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 24;i_7 += 1)
                    {
                        {
                            arr_25 [1] [i_4] [i_6 + 2] [1] [i_7 + 1] [i_7] = ((((max(var_13, (arr_21 [i_7 - 1] [i_6 + 1] [i_4 + 1])))) ? (((arr_21 [i_7 + 1] [i_6 + 2] [i_4 - 1]) ? (arr_21 [i_7 - 1] [i_6 + 1] [i_4 + 1]) : (arr_21 [i_7 + 1] [i_6 + 1] [i_4 - 1]))) : (((-122 && (arr_21 [i_7 + 1] [i_6 + 1] [i_4 + 1]))))));
                            arr_26 [i_4] [i_5] [i_4] [i_7] [i_7] = 18446744073709551605;
                        }
                    }
                }
                var_23 |= ((-((((max(-99, -87))) ? var_14 : var_13))));
            }
        }
    }
    #pragma endscop
}
