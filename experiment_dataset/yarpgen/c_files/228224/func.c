/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228224
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
    var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) 17467564797987604278ULL))));
    var_13 = ((/* implicit */int) (+(min((((/* implicit */unsigned long long int) var_4)), (((17467564797987604289ULL) + (((/* implicit */unsigned long long int) var_2))))))));
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)9)))))) < ((~(max((979179275721947309ULL), (979179275721947357ULL)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-119))) | (17467564797987604289ULL)));
                var_16 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)36))) != (17467564797987604271ULL)));
                var_17 = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_5 [i_0] [i_1]), (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) >= (((/* implicit */int) (unsigned char)221)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) % (arr_2 [i_1])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)20)) ? (((/* implicit */int) (unsigned char)252)) : (arr_2 [i_1])))) ? (17467564797987604273ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_2))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */short) ((((((/* implicit */int) ((short) (-(var_2))))) + (2147483647))) << (((((unsigned int) ((var_11) & (((/* implicit */long long int) 4235922214U))))) - (72941600U)))));
}
