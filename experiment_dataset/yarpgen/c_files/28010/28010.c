/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28010
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((max(var_0, var_13))) == (min((var_1 & var_15), (((var_2 ? (-32767 - 1) : var_10)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                arr_4 [i_0] = (min(((((!var_14) ? 52880 : (~var_3)))), (min(((var_10 ? var_0 : (arr_1 [i_0]))), var_12))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_18 = (max(var_18, ((max((~var_12), (max((arr_5 [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 3]), var_16)))))));
                            var_19 *= ((((min(var_5, var_15)) ^ (!52883))) == (arr_2 [3]));
                        }
                    }
                }
                var_20 = (arr_6 [i_0] [i_0] [i_1]);
                arr_11 [i_0] [i_1] = (((min((arr_3 [i_1 - 1]), 480475629)) - (((min(var_8, (arr_6 [1] [i_1 + 3] [i_1 - 3])))))));
            }
        }
    }
    var_21 = (~32757);
    #pragma endscop
}
