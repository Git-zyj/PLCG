/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194168
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 0;
    var_18 = -537772194261692303;
    var_19 = (~var_7);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 14;i_2 += 1)
            {
                {
                    var_20 = ((((((((arr_6 [i_0] [i_1] [i_2]) && var_5)) ? (~1) : ((var_4 << (((arr_4 [i_0] [i_0] [i_1]) + 1843429978868752493))))))) ? (max(((min(var_16, 54854))), (arr_2 [i_0] [i_0] [i_1]))) : 33554400));
                    var_21 = (arr_4 [i_1 - 2] [i_1 - 1] [i_1]);
                    var_22 *= ((-(((((arr_2 [i_0] [1] [i_0]) + 2147483647)) >> (((arr_5 [i_0] [i_0] [i_0] [i_2 - 1]) / var_13))))));
                    var_23 = (min((5433252197975680694 / var_11), ((((arr_6 [i_1 - 2] [i_1] [i_1 - 3]) ? (arr_3 [i_1 - 3] [i_1 - 2] [i_1 - 3]) : var_14)))));
                    var_24 = ((-(~var_0)));
                }
            }
        }
    }
    var_25 = var_5;
    #pragma endscop
}
