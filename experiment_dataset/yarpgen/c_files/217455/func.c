/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217455
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
    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) var_14))));
    var_21 += ((/* implicit */short) ((((_Bool) var_8)) ? (((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) (unsigned char)80))))) : (((((((/* implicit */_Bool) var_10)) ? (var_15) : (((/* implicit */long long int) var_19)))) / (((/* implicit */long long int) (-(4181817624U))))))));
    var_22 -= ((/* implicit */unsigned char) ((((/* implicit */long long int) var_16)) * (min((5069249929944028237LL), (((/* implicit */long long int) (_Bool)1))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_23 = ((/* implicit */_Bool) min((var_23), ((_Bool)0)));
                arr_6 [i_0 + 1] &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-3184913690229375345LL))))));
                var_24 &= ((/* implicit */unsigned long long int) ((max((min((((/* implicit */unsigned int) (_Bool)1)), (2243023478U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 72022409665839104LL)) ? (((/* implicit */int) (unsigned short)63471)) : (((/* implicit */int) (_Bool)1))))))) != (arr_0 [i_1])));
                var_25 = ((/* implicit */int) max((((/* implicit */unsigned long long int) arr_1 [i_0])), (min((((/* implicit */unsigned long long int) (short)2047)), (8324706160028174068ULL)))));
            }
        } 
    } 
}
