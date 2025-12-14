/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203933
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 8;i_1 += 1)
        {
            {
                var_18 = (((((-(min(var_4, 8047562195717926345))))) ? (arr_0 [3]) : ((-2694 ? 301816438 : 14617779620054843811))));
                var_19 = (((((-(arr_3 [i_1 - 1])))) ? (min(16981183813144263633, var_12)) : (arr_3 [i_1 - 1])));
                var_20 += (arr_1 [i_1]);
            }
        }
    }
    var_21 = var_8;
    var_22 &= ((var_9 ? (((((-13224 ? var_12 : var_12))) ? (!510054196) : ((var_5 ? var_10 : var_0)))) : (((((min(var_8, -2745)))) | -var_15))));
    var_23 = ((((((-39 ? 2687246306823575386 : var_17))) ? ((var_15 ? -1001710574 : var_13)) : (~var_14))));
    var_24 = ((-(4582505864094759806 / -7607899285602851487)));
    #pragma endscop
}
