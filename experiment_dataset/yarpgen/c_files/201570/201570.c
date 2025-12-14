/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201570
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_13 -= (min((arr_1 [i_0]), (!-8631)));

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_14 = (min(var_14, (((~((((arr_3 [i_0] [i_0]) <= var_7))))))));

            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                var_15 = (max(var_15, (((var_12 > (var_1 && var_8))))));
                var_16 = (!8603);
            }
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                arr_12 [i_0] [i_1] [i_0] = ((((!(!var_4))) ? (min(((15980092105828762763 ? 9473146921828057728 : 15980092105828762763)), 127)) : var_4));
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        {
                            arr_21 [i_0] [i_4] [i_0] [i_4] [i_0] [i_0] = ((!(((arr_3 [i_4 - 1] [i_4 + 1]) <= 9642070225222775408))));
                            arr_22 [i_0] [i_0] [i_4] [i_0] [i_0] [i_0] = (min(((((arr_14 [i_4 - 1] [i_4] [i_4] [i_4] [i_4]) >= (arr_19 [i_4 - 1] [i_4] [i_4 - 1] [i_4])))), ((0 ? 2609046417 : 10))));
                        }
                    }
                }
            }
        }
    }
    var_17 = ((5745025817171337908 && var_1) ? ((((~var_10) | ((var_8 ? 8630 : var_8))))) : var_5);
    var_18 &= 2759852013345772029;
    #pragma endscop
}
