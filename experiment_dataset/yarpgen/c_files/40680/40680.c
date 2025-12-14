/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40680
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (11949 ^ 53587);
    var_19 ^= (-2823115 * 53595);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_20 += 1;
                var_21 = var_5;
                var_22 = ((max(((min((arr_0 [i_0]), var_0))), var_16)) < var_6);
                var_23 = ((((((min((arr_0 [i_0]), (arr_0 [i_1])))) ? (arr_0 [i_1]) : ((var_11 ? 3835214273036629303 : var_3)))) | var_14));
            }
        }
    }
    var_24 = ((((((((var_13 ? var_8 : 96))) ? (~53599) : (!var_16)))) * var_8));
    var_25 = (var_14 ? var_1 : (11949 % var_12));
    #pragma endscop
}
