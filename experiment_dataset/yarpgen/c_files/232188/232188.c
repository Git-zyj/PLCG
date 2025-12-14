/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232188
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_15 = (((((var_5 ? var_2 : var_8))) ? (min(var_11, var_1)) : (((min(var_14, var_7))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_16 = (min(var_16, ((min(((min(((var_8 ? var_5 : var_0)), ((var_7 ? var_13 : var_14))))), (max(-5195461579199604957, 5211)))))));
                            var_17 ^= ((((min((((var_1 ? var_13 : var_5))), ((var_1 ? 5739846723157876712 : -1))))) ? var_1 : (!var_3)));
                            var_18 = (!var_1);
                            var_19 += ((((((((var_2 ? var_10 : var_8))) ? (((var_11 ? var_5 : var_12))) : ((var_13 ? var_1 : var_10))))) ? ((((((min(var_13, var_5)))) * ((var_14 ? var_9 : var_11))))) : ((37135 ? -32744 : 13761436569897471194))));
                        }
                    }
                }
                var_20 = (((max(((min(var_13, var_8))), ((var_4 ? var_5 : var_9))))) ? ((44 ? 1 : 10)) : (((!(var_8 <= var_3)))));
            }
        }
    }
    var_21 = (min(var_21, ((((((211 ? 23 : -32417))) ? ((((!(var_11 % var_5))))) : (max(-10914, ((var_1 ? var_6 : var_0)))))))));
    #pragma endscop
}
