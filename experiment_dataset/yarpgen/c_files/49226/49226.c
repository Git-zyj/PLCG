/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49226
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((((max(var_10, var_7))) ? (1961717425 / -898939163) : (var_5 & var_13)))) ? (((!(var_3 >= var_6)))) : (((var_10 % var_4) ? (!225) : ((31 >> (var_4 - 21122)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_1] = ((+((var_1 ? (!var_1) : (112 * var_13)))));
                var_15 = (-(min((max(3693063517, var_10)), (((-898939163 ? 898939156 : 209))))));
                var_16 = (min(var_16, (((~(min(var_1, (var_6 * var_5))))))));
            }
        }
    }
    var_17 = var_4;
    #pragma endscop
}
