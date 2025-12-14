/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44348
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 1;
    var_20 = (max((max(var_18, 1)), 1));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            {
                var_21 = var_13;
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_22 = (!(((arr_6 [i_2 + 1] [i_1 - 1] [i_0 + 1] [i_0 + 1]) && (arr_2 [i_0]))));
                                arr_13 [i_0] = var_3;
                            }
                        }
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_5 = 1; i_5 < 13;i_5 += 1)
    {
        var_23 = ((-83 ? 3144353534 : 0));
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 0;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 13;i_8 += 1)
                {
                    {
                        var_24 = ((0 | (arr_0 [i_5])));
                        var_25 -= 1;
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 1; i_9 < 14;i_9 += 1)
    {
        for (int i_10 = 2; i_10 < 15;i_10 += 1)
        {
            {
                var_26 = var_4;
                var_27 = ((((min((arr_29 [i_9] [i_9] [i_9 + 1]), var_4))) ? ((((!(!1))))) : ((var_9 ? 97 : var_10))));
                var_28 ^= arr_1 [i_10];
            }
        }
    }
    #pragma endscop
}
