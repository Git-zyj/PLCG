/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37175
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_16 = (((1704527307 ? (arr_3 [i_1 - 1] [i_0 - 3] [i_0 + 1]) : 598179229)));
                var_17 ^= ((((-1 < (var_9 != -67))) ? (((min((arr_3 [i_0] [i_1 - 1] [i_0]), -45)))) : (max((arr_0 [i_0 + 3]), 1))));
                var_18 = (((((-386948615 ? (max(var_6, var_3)) : ((max(-24216, 32704)))))) & ((((~(arr_1 [i_0]))) * var_2))));
                arr_5 [i_1] = ((((max(-54, 3164))) != (((((var_13 ? var_1 : var_5))) ? ((min(59, var_9))) : -1))));
            }
        }
    }
    var_19 = (((((90 & 0) ^ (max(var_7, 1851791784565280894)))) ^ ((((var_5 ? 1851791784565280894 : var_0)) | var_9))));
    var_20 = ((var_7 ? ((var_1 ? (!1892157719) : (~222))) : ((((min(39, var_0))) * ((var_1 ? var_3 : var_12))))));
    var_21 = var_6;
    #pragma endscop
}
