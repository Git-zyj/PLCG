/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226425
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((((((1792660358964212104 ? 15426728693319160292 : 1792660358964212104)) >= var_1)))) / ((-20158 ? 17234022221487227416 : 8452811230458111301))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_0] = 1;
                var_17 = (((((((var_12 ? (arr_2 [i_1]) : 3020015380390391340))) ? ((var_14 ? (arr_4 [i_0] [i_0] [i_1]) : (arr_1 [i_0] [i_1]))) : ((1 ? 1 : -14468))))) | (((((903290493 ? 17220551180849823477 : 1))) ? ((227802844843331512 ? 9989780492071703451 : 3020015380390391340)) : 3207158781930142272)));
                var_18 -= (((((12 * var_2) <= (var_13 > var_14))) ? ((((((32146 ? 14464 : 0))) ? (((arr_0 [1]) ? (arr_0 [i_0]) : var_14)) : var_14))) : (((arr_0 [i_0]) ? 1792660358964212104 : var_8))));
            }
        }
    }
    var_19 = (((((var_15 ? var_9 : var_2)) << ((-7468654728223379464 ? 0 : 17443)))));
    var_20 -= (((((var_4 ? var_6 : 1)) * (((var_10 ? var_0 : var_1))))));
    #pragma endscop
}
