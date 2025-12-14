/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229333
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((((var_1 ? var_8 : var_12)) & (var_14 <= var_8)))) ? var_2 : (var_5 / var_0)));
    var_19 = (min(var_19, var_14));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] &= ((((255 ? 3157711814 : 1)) & var_7));
        arr_3 [i_0] [i_0] = var_12;
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 20;i_4 += 1)
                {
                    {
                        var_20 += var_7;
                        var_21 *= (((((var_0 ? var_12 : var_14))) ? ((((var_16 == ((var_9 ? var_13 : var_11)))))) : ((var_14 ? (var_1 || var_17) : (var_7 ^ var_13)))));
                        var_22 = ((var_16 * (((-2147483647 - 1) * 0))));
                        arr_15 [i_4] = (22056 / 15243);
                        arr_16 [i_4] [i_2] = ((var_9 <= var_2) < var_16);
                    }
                }
            }
            arr_17 [4] [i_2] [i_2] = ((var_14 ? ((var_4 ? var_13 : var_2)) : (var_7 - var_16)));
        }
        var_23 = var_1;
    }
    var_24 = var_4;
    var_25 = ((((((1 - 1) ? (var_15 - var_4) : var_10))) || (var_11 | var_14)));
    #pragma endscop
}
