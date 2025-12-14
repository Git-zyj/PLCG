/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209270
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= (max(var_13, 1));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_6 [i_0] = ((1 ? 31 : 31));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_19 = ((~(((min(1, var_5)) % 31))));
                            var_20 = max(((var_16 << (-47 == -7919044072458845001))), ((((~6064) >= ((-6064 ? (arr_0 [i_0]) : var_11))))));
                            var_21 = (min((min(((37 ? (-2147483647 - 1) : 0)), ((min(255, 4294967295))))), ((max((((arr_2 [i_0]) ? (arr_2 [i_0]) : -8704290912839965867)), ((var_9 ? var_15 : -7919044072458845001)))))));
                        }
                    }
                }
                var_22 -= ((-((((~29) >= (~-6073))))));
            }
        }
    }
    var_23 = ((var_5 ? ((-((1 ? -32 : var_13)))) : ((((((-32 ? 1 : var_12))) ? ((var_10 ? var_10 : 6058)) : var_14)))));
    #pragma endscop
}
