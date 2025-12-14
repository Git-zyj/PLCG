/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208199
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_10 |= -var_8;
            arr_5 [i_1] = -var_6;
            var_11 = var_5;
            arr_6 [i_1] = var_6;
        }
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            var_12 = (max(var_12, (~var_3)));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    {
                        var_13 = 1680701163279280702;
                        var_14 = (!var_7);
                    }
                }
            }
        }
        var_15 = (!var_2);
        var_16 *= -var_4;
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_7 = 1; i_7 < 20;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 21;i_9 += 1)
                        {
                            {
                                arr_29 [i_5] [i_6] [i_6] [i_6] = (min(-var_6, -31));
                                arr_30 [2] [2] [i_6] [2] [i_7] [i_8] [i_9] |= (max(32767, var_1));
                                var_17 = min(var_7, (!var_1));
                            }
                        }
                    }
                }
                var_18 = var_0;
                var_19 = (min((!var_9), (max((max(var_6, var_5)), var_8))));
                var_20 |= (~var_8);
                /* LoopNest 2 */
                for (int i_10 = 2; i_10 < 19;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        {
                            arr_37 [i_5] [i_5] [i_5] [i_5] = ((!(((-((min(var_4, var_9))))))));
                            var_21 = (!1);
                            var_22 = ((!(min((!var_6), (!var_7)))));
                        }
                    }
                }
            }
        }
    }
    var_23 = (min((min(var_0, (max(var_5, var_9)))), -var_9));
    #pragma endscop
}
