/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230900
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (~var_8);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_13 = (((var_8 / var_2) * (((!(arr_2 [i_0]))))));
                            var_14 = (~20);
                        }
                    }
                }
                var_15 = (max(var_15, (((((min(var_11, (arr_0 [i_1])))) == (((arr_5 [0] [i_1]) ? (arr_5 [0] [i_1]) : (arr_7 [i_0] [i_0] [i_1] [10]))))))));

                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    var_16 = ((20 ? (arr_8 [i_1] [i_4]) : (max(0, 2697128997))));
                    arr_13 [i_0] [i_0] [i_0] [i_1] = (((((12649474811047538515 && var_9) ? var_3 : (((var_7 + 9223372036854775807) >> (13173880015454210496 - 13173880015454210448))))) * (((var_5 & (min(2697128997, 0)))))));
                }
            }
        }
    }
    var_17 = (min((((((min(255, 0))) + 268))), (!var_8)));
    var_18 = (max(var_18, (var_1 + var_3)));
    #pragma endscop
}
