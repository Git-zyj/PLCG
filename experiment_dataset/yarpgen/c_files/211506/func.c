/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211506
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
    var_17 &= var_2;
    var_18 *= ((/* implicit */unsigned short) max((((/* implicit */long long int) max((((/* implicit */unsigned int) var_14)), (min((((/* implicit */unsigned int) var_6)), (var_7)))))), (max((((/* implicit */long long int) (short)-1)), (min((((/* implicit */long long int) (signed char)-118)), (var_8)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned char i_1 = 3; i_1 < 21; i_1 += 2) 
        {
            {
                var_19 *= ((/* implicit */unsigned int) min(((-(((/* implicit */int) (signed char)-106)))), (arr_2 [i_0])));
                var_20 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((unsigned char) arr_3 [i_0] [12ULL] [i_1 + 3]))), (((unsigned long long int) arr_3 [(unsigned char)9] [i_0] [i_1 - 3]))));
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 12280978371164867331ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (6165765702544684287ULL)))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) ((1694496132U) <= (2600471179U))))))), (min((12280978371164867331ULL), (((/* implicit */unsigned long long int) (unsigned char)110))))));
}
