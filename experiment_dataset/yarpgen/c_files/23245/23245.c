/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23245
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = ((((((max((arr_3 [i_1]), var_0))))) - ((var_11 ? (((max(0, 24576)))) : (max(var_2, var_4))))));
                var_14 = var_10;
                var_15 ^= ((((((((arr_0 [18]) && var_8)) ? ((min(var_5, var_1))) : (1680787014 && 1)))) ? (var_13 * var_3) : (((18 <= (arr_4 [12]))))));
                arr_6 [i_0] [i_1] = (min((arr_3 [i_1]), (min(var_12, 65520))));
            }
        }
    }
    var_16 *= 28758;
    var_17 = ((((((62 ? var_10 : -234257779442517640)) | var_3)) < ((((var_5 && ((min(19, 13)))))))));
    var_18 = (max(var_18, ((((((min(var_7, var_4)) ? ((var_8 ? 13089 : var_7)) : (!var_3))))))));
    #pragma endscop
}
