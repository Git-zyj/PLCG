/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31348
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))));
        var_21 *= ((/* implicit */short) ((((/* implicit */_Bool) 1268792861U)) ? (((((/* implicit */unsigned int) ((/* implicit */int) ((var_2) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))))) & (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-112))) / (2323675049U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((short) arr_0 [i_0])))))));
    }
    var_22 &= ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((((/* implicit */int) var_5)) + (2147483647))) << (((17079074237626129493ULL) - (17079074237626129493ULL)))))), (min((((/* implicit */unsigned int) var_4)), ((-(1971292246U)))))));
    var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((((/* implicit */int) ((signed char) (unsigned char)249))) * (((/* implicit */int) ((((/* implicit */_Bool) var_18)) && (((/* implicit */_Bool) var_17))))))))));
}
