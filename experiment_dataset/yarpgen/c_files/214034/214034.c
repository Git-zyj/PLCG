/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214034
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, ((((var_8 ^ var_13) + var_7)))));
    var_16 = ((-(((var_5 == (var_6 / var_5))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    var_17 |= (((max(((65535 ? 36 : 150)), 1)) >> (((10 - 255) - 4294967031))));
                    var_18 -= 14;
                    var_19 = ((!(((((arr_5 [i_0] [i_0]) - (arr_1 [i_0])))))));
                }
                arr_7 [1] [i_0] = (min((max((arr_6 [i_0 - 1] [i_1]), var_1)), (arr_2 [i_0])));
                var_20 = (((max(((var_0 ? var_4 : var_0)), -var_6)) + (((((((var_8 ? var_12 : var_3))) || var_1))))));
            }
        }
    }
    var_21 -= (min((~var_4), var_13));
    #pragma endscop
}
