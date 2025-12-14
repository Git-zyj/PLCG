/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226075
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 8;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_15 = (arr_2 [15] [i_1] [i_1]);
                var_16 = (max(var_16, ((((((~((18446744073709551615 ? 4294967289 : 4252903341))))) ? 8191 : var_12)))));
            }
        }
    }
    var_17 *= (114 != var_12);
    var_18 *= (((var_13 == var_6) ? (((((27123 ? var_12 : 8191)) == var_4))) : var_11));
    #pragma endscop
}
