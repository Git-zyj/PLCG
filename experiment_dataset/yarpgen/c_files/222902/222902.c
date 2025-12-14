/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222902
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_12 + ((((((var_16 ? var_10 : var_6))) && (((var_17 ? var_6 : 1867759040))))))));
    var_19 ^= 1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_20 = (min(42, var_14));
                var_21 = (min(var_21, ((((~var_7) ? (((var_5 ? 65408 : (arr_1 [i_0] [i_1])))) : (max(var_6, var_0)))))));
                var_22 -= ((241 ? 4263 : ((-42 ? 268163244 : var_13))));
                var_23 = var_11;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            {
                var_24 = 41211;
                arr_11 [i_2] [i_2] = var_9;
            }
        }
    }
    #pragma endscop
}
