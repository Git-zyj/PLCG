/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193344
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 3; i_0 < 11; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (unsigned char i_2 = 2; i_2 < 12; i_2 += 1) 
            {
                {
                    arr_7 [i_2] [i_2] = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_4 [i_1] [i_2 - 1] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0 + 1] [i_2 + 1] [i_0] [i_0 + 1]))) : (var_10))), ((~(arr_5 [i_2 + 2] [i_2 - 2] [6U] [(signed char)14])))));
                    var_16 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 91030295U)) ? (134201344U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-7115))))))));
                }
            } 
        } 
    } 
    var_17 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) 4160765930U))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) : (min((var_6), (var_3)))));
    var_18 = ((/* implicit */short) (-((-(max((((/* implicit */unsigned int) var_4)), (var_12)))))));
    var_19 = ((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) var_14))))), (max((var_13), (((/* implicit */int) var_0))))));
}
