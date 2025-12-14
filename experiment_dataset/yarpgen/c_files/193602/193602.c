/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193602
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((((((var_10 ? var_18 : 41))) ? ((var_19 ? 15184006455999176264 : var_18)) : var_5))) ? var_10 : ((var_10 + ((var_12 ? var_13 : var_5))))));
    var_21 = ((var_17 ? (((!var_12) ? var_5 : var_17)) : -var_19));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_22 = max(((((-480 + 2147483647) << (((var_6 + 60) - 9))))), (arr_0 [i_0 - 1]));
                var_23 = ((max((arr_3 [i_0 - 2]), (((arr_3 [10]) >> (((arr_2 [i_1] [i_1] [i_0]) - 23584)))))));
                arr_4 [i_0] [i_1] &= (((arr_0 [i_0 + 1]) != (((~((var_6 ? 4294967273 : var_8)))))));
                var_24 *= (((-(arr_2 [i_0] [i_0] [i_0]))));
            }
        }
    }
    var_25 = (max(-1121252917007002936, (~var_6)));
    #pragma endscop
}
