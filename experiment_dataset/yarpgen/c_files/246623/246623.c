/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246623
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(1, (!1)));
    var_13 = (max(var_11, (((~var_8) ? (0 & var_7) : var_6))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_14 = (max(var_14, ((((((~(arr_1 [i_0])))) ? -817174079296490078 : ((((arr_1 [i_0]) * var_11))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_0] [i_0] [i_0] = (((((!var_1) * 0)) == (min(699784042, (arr_2 [i_0] [i_2 + 3] [i_2 + 1])))));
                    var_15 = (max((min(((var_6 ? 9544163690325981508 : 9223372036854775807)), var_6)), var_11));
                    var_16 ^= ((((!((!(arr_3 [i_2]))))) ? ((~(arr_4 [i_2] [i_2 + 2] [i_2] [i_2]))) : (!2147733760)));
                    arr_8 [i_0] [i_0] = ((min((min(var_0, 427334998)), (!var_2))));
                }
            }
        }
        arr_9 [i_0] = ((((min((~var_3), (((arr_2 [i_0] [i_0] [i_0]) ? var_7 : var_0))))) ? var_8 : (arr_1 [i_0])));
        arr_10 [i_0] [i_0] = 0;
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 12;i_4 += 1)
        {
            {
                arr_19 [i_3] = ((-(2147483647 ^ -var_6)));
                arr_20 [i_3] [i_3] = ((((((14587127776999580430 ? 2062781749 : 1))) - 1)) ^ ((min((-18609 || 8283), 0))));
                var_17 = var_10;

                /* vectorizable */
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    var_18 = var_7;
                    arr_24 [i_3] = (-5283505329040693807 || (arr_4 [i_4 - 3] [i_4 + 1] [i_4 - 3] [i_4 + 2]));
                    var_19 ^= (~var_9);
                    arr_25 [i_3] [i_3] |= (arr_17 [i_3] [i_4 - 2] [i_5]);
                    arr_26 [i_3] [i_4] [i_5] |= (((9544163690325981508 + var_0) ^ 1957793505));
                }
            }
        }
    }
    var_20 = ((~(((((1 ? var_8 : var_5))) ? var_10 : (var_11 && var_6)))));
    #pragma endscop
}
