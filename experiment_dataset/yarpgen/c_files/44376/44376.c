/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44376
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_8;
    var_13 = (5657644008263635379 | -22254);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_14 -= (~-5657644008263635362);

        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            var_15 = (arr_4 [i_0] [i_1]);
            var_16 = var_7;
            var_17 = (min(var_17, (((((((arr_6 [i_1]) | var_7))) ? (arr_0 [i_1 + 1] [i_1 + 1]) : ((-(arr_2 [i_0] [i_1]))))))));
        }
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            var_18 = (((arr_4 [i_0] [i_0]) & (arr_4 [i_0] [i_0])));
            var_19 = ((((-11389 ? var_1 : (arr_8 [i_0] [i_0]))) <= 5657644008263635379));
        }
        var_20 = (((arr_2 [i_0] [i_0]) >= (~var_11)));
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    {
                        var_21 = (~9223372036854775807);
                        var_22 = (((arr_16 [i_3] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1]) <= (((9223372036854775807 == (arr_13 [i_3 - 1]))))));
                    }
                }
            }
        }
    }
    var_23 &= var_4;
    var_24 = ((+(((var_2 ^ 5657644008263635379) & (min(var_1, var_5))))));
    #pragma endscop
}
