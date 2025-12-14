/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222180
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_12 = ((((((arr_3 [i_0] [i_1]) ? var_5 : var_2))) ? ((~(arr_0 [i_0 + 1]))) : (!10386)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_13 = (((!var_9) == (min((arr_9 [i_0] [i_1] [i_0 + 1] [i_3 + 1]), var_9))));
                            var_14 = ((1792 ? -6763549059468283301 : (((min((arr_2 [i_0 + 1]), 63))))));
                        }
                    }
                }
                var_15 = (max(((max((arr_2 [i_0 + 1]), var_4))), (min((arr_8 [i_1] [13] [i_0]), 2854471491))));
            }
        }
    }
    var_16 = (((((-((var_11 ? var_11 : 127))))) ? var_1 : (min((var_4 ^ var_5), ((var_8 ? var_2 : var_10))))));
    var_17 = (max(var_17, var_3));
    var_18 = var_10;
    var_19 = var_9;
    #pragma endscop
}
