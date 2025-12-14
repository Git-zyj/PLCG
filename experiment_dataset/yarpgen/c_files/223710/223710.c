/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223710
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= (((((var_10 ? ((9223372036854775796 ? 18058205978488008158 : 2457793977)) : (((5372066988752375280 ? var_3 : var_2)))))) ? ((((!1) ? var_9 : ((var_1 ? var_8 : var_8))))) : ((var_0 ? 4294967295 : var_10))));
    var_13 = (((((!-9223372036854775807) ? ((var_11 ? var_1 : var_7)) : ((var_3 ? var_1 : var_9))))) ? (((9223372036854775807 ? 1090660972 : var_6))) : (!9223372036854775796));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_14 += (~((5372066988752375286 ? 1901396326 : 246)));
                    var_15 = (min(var_15, (((~(((((-2295808025549875569 ? var_7 : (arr_0 [18])))) ? ((8 ? (arr_1 [i_0]) : (arr_4 [1]))) : var_4)))))));
                }
            }
        }
    }
    #pragma endscop
}
