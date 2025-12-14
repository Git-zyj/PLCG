/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212693
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            {
                arr_4 [i_1] &= ((/* implicit */int) min((916693324093398022ULL), (((/* implicit */unsigned long long int) -1540158057))));
                var_17 = ((((((((/* implicit */_Bool) 1540158066)) ? (arr_0 [i_1 - 2]) : (916693324093398022ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (signed char)66)))))) | ((~((~(0ULL))))));
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) max((((var_11) * (((/* implicit */unsigned int) ((/* implicit */int) min((var_12), (((/* implicit */short) var_16)))))))), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 8080229865078954717ULL)))) > (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)101))) : (10366514208630596915ULL))))))));
    var_19 = ((/* implicit */signed char) ((((((/* implicit */int) var_10)) + (2147483647))) << (((((unsigned long long int) min((5524717565569297058ULL), (916693324093398022ULL)))) - (916693324093398022ULL)))));
}
