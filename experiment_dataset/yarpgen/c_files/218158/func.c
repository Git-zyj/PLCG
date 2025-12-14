/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218158
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
    for (long long int i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */unsigned short) max((min((((/* implicit */unsigned int) ((short) (_Bool)1))), (((unsigned int) (unsigned char)237)))), (((((/* implicit */_Bool) (+(13279739952114782766ULL)))) ? (((unsigned int) 18446744073709551615ULL)) : (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1)))))))));
                    var_15 |= ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -571056946)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (signed char)-71)) + (72))))) : (-571056946)))) - (((unsigned long long int) max((1441191609009351131LL), (((/* implicit */long long int) (signed char)70))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */signed char) (-(max((((long long int) (-9223372036854775807LL - 1LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)144)) ? (((/* implicit */int) (signed char)-85)) : (((/* implicit */int) (signed char)117)))))))));
    var_17 = ((/* implicit */unsigned long long int) ((short) ((((-571056946) > (((/* implicit */int) (_Bool)1)))) ? (((((/* implicit */_Bool) 9134332562983120294ULL)) ? (571056945) : (((/* implicit */int) (unsigned char)179)))) : (((((/* implicit */int) (_Bool)1)) << (((9223372036854775807LL) - (9223372036854775791LL))))))));
}
