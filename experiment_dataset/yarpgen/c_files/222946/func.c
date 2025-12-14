/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222946
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] = (signed char)11;
                var_20 ^= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)58))))), (max((((((/* implicit */_Bool) var_15)) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1]))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_1])) < (((/* implicit */int) (short)-26619)))))))));
                arr_6 [i_0] [i_1] = ((/* implicit */signed char) arr_3 [i_1] [i_1] [i_0 - 2]);
            }
        } 
    } 
    var_21 &= ((/* implicit */unsigned char) (signed char)114);
    var_22 = ((/* implicit */signed char) (~((+(((((/* implicit */int) var_17)) & (((/* implicit */int) (short)-14001))))))));
    var_23 = ((/* implicit */short) min((((((/* implicit */_Bool) (signed char)-55)) ? (((((/* implicit */_Bool) var_4)) ? (345843990U) : (var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned int) var_18))));
}
