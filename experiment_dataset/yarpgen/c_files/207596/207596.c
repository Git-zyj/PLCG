/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207596
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_19 = (min((!var_8), ((((((-4764150745133757245 + 9223372036854775807) >> (((arr_0 [i_0] [i_1]) - 1619175586)))) != var_4)))));
                var_20 = (min((max((arr_2 [i_1] [i_0] [i_1]), ((var_4 ? var_17 : var_3)))), var_0));
                var_21 = (((var_8 + var_2) | (((((arr_1 [i_0]) > (max(var_7, (arr_4 [19] [19] [i_0])))))))));
            }
        }
    }
    #pragma endscop
}
