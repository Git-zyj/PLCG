/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214922
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min((((min(-14118, 16964622414755047263)) * 16964622414755047263)), var_1));
    var_20 = (((var_14 << (var_10 + 117))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_21 = (max(var_21, 1));
                            var_22 = (((1482121658954504359 > 1475538950) ^ (((arr_8 [i_1] [i_2 - 2] [i_2 - 1]) / ((((arr_4 [i_1] [i_1]) != var_11)))))));
                        }
                    }
                }
                var_23 = (!var_16);
            }
        }
    }
    var_24 += var_7;
    #pragma endscop
}
