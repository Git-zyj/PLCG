/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48443
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_13 = (((((max(var_11, -9098)))) * ((-(arr_2 [i_0])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_14 *= 67;
                            var_15 = (((((var_8 ? var_6 : (arr_7 [i_1 + 1] [i_3 + 1])))) ? var_2 : var_8));
                        }
                    }
                }
                arr_11 [i_0] [i_1] = var_7;
                var_16 = (max(var_16, (((2140201448 ? 10350445422009026281 : 118)))));
                arr_12 [i_0] [i_1] [i_1] = ((~((min(18153, -97)))));
            }
        }
    }
    var_17 = ((!((min((!3910173581), 536870911)))));
    #pragma endscop
}
