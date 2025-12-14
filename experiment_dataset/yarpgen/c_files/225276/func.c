/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225276
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
    var_17 *= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */int) var_0)) + (((/* implicit */int) var_15))))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) / (var_11)))), (min((15ULL), (((/* implicit */unsigned long long int) -2063153003723983999LL)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2063153003723983983LL)) ? (-2063153003723983999LL) : (-2063153003723983999LL))))));
    var_18 = ((((/* implicit */_Bool) max((((/* implicit */long long int) var_10)), (((var_11) / (((/* implicit */long long int) var_6))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_2));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_19 ^= ((/* implicit */signed char) min((((/* implicit */int) ((short) var_16))), (min((((((/* implicit */int) var_4)) + (((/* implicit */int) var_9)))), (((/* implicit */int) var_7))))));
                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) max((-2063153003723983999LL), (((/* implicit */long long int) ((-2063153003723983999LL) != (2063153003723984013LL)))))))));
            }
        } 
    } 
}
