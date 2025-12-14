/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27400
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                var_18 = 1484478394;
                var_19 = (((-32767 - 1) ? 10508118635548194982 : 32942));
                var_20 = (min(((1 | (max(32749, var_8)))), 127));
                var_21 = (min((~var_0), var_8));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_22 |= (max((32591 < var_11), 1484478393));
                                arr_12 [i_1] = var_8;
                                var_23 = (max(var_23, ((((((max(99, var_14))) ^ 31747))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        for (int i_6 = 4; i_6 < 12;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 12;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        {
                            var_24 -= min(1, ((min(var_5, var_7))));

                            for (int i_9 = 0; i_9 < 0;i_9 += 1)
                            {
                                var_25 = ((((-641708871 ? 0 : 1))));
                                var_26 = (((((1 < (127 & -6584946071683030711)))) >> (((((-32767 - 1) ? 13960853337488692751 : var_7)) - 13960853337488692747))));
                            }
                            for (int i_10 = 0; i_10 < 15;i_10 += 1)
                            {
                                var_27 = (1484478379 - var_8);
                                var_28 = -32767;
                                arr_29 [i_5] [i_8] = 29753;
                            }
                        }
                    }
                }
                var_29 = var_10;
            }
        }
    }
    var_30 = (1 != var_2);
    #pragma endscop
}
