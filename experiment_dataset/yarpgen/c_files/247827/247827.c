/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247827
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_4;
    var_17 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_18 *= (((536870911 ^ 23590) >= ((max((arr_3 [i_0]), 23590)))));
                    var_19 |= 11846;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_20 = (max(1327716345, ((~(((arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1]) ? var_14 : var_6))))));
                                var_21 *= (max((-262144 | 134217727), 97));
                                var_22 = (arr_7 [19] [i_1] [i_1] [i_1] [i_1] [i_1]);
                                var_23 = ((-(max((arr_7 [i_0] [i_1] [i_2] [i_3] [i_1] [i_1]), 0))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = (var_9 ? var_9 : (min((~var_15), 89916580)));

    /* vectorizable */
    for (int i_5 = 3; i_5 < 9;i_5 += 1)
    {
        var_25 &= 134217727;
        /* LoopNest 3 */
        for (int i_6 = 2; i_6 < 9;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 8;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    {
                        var_26 -= -6495609623754742108;
                        var_27 = -1851462416;
                        var_28 = (1 & 1937296945);
                        var_29 = ((var_4 ? 32767 : (arr_5 [i_8] [i_6 + 1] [i_5])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
