/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45454
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_14;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 14;i_2 += 1)
            {
                {
                    var_16 -= (((min(var_4, ((var_12 ? 65534 : var_6)))) / (((2147483647 <= var_6) ? -3401113760 : ((6 ? 1024 : var_6))))));
                    arr_9 [i_1] = ((((5063070668331804278 ? 0 : -862497643))) ? (-9223372036854775807 - 1) : (((((var_0 ? var_9 : 3401113760))) ? 182 : -6459621955661146810)));

                    for (int i_3 = 3; i_3 < 15;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            var_17 = 6;
                            arr_14 [i_0] [i_0] [i_2 + 1] [14] [10] [i_4 - 1] [i_4] &= var_3;
                        }
                        for (int i_5 = 2; i_5 < 13;i_5 += 1)
                        {
                            var_18 = (min(var_18, (((((((-1 ? var_12 : var_0))) != ((var_8 ? var_8 : (-127 - 1))))) ? -var_4 : (((!(var_6 >= var_5))))))));
                            arr_17 [i_0] [i_0] [i_1] = (((-2147483647 - 1) * (((-50 != 48877) ? (!-862497643) : ((var_2 ? 248 : 3401113760))))));
                            arr_18 [i_3] [i_1] = (((((var_1 | 20029) + 2147483647)) >> (((((max(-6227, var_8)) ^ 467513430)) - 3827455973))));
                        }

                        /* vectorizable */
                        for (int i_6 = 2; i_6 < 12;i_6 += 1)
                        {
                            arr_21 [i_1] [4] [i_2] = (((3 ? var_6 : 7)) - -86);
                            var_19 = 385213376;
                            var_20 = var_7;
                            var_21 = 2887730815;
                        }
                    }
                }
            }
        }
    }
    var_22 ^= 37883;
    #pragma endscop
}
