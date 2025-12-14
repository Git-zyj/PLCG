/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228445
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
    var_14 += ((/* implicit */unsigned short) var_8);
    var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) (-(((((/* implicit */long long int) (-(((/* implicit */int) var_9))))) + (((((/* implicit */_Bool) var_13)) ? (2625525097502217665LL) : (var_10))))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_16 += ((/* implicit */short) ((max(((+(14577584132224293972ULL))), (((((/* implicit */_Bool) 1931877600U)) ? (14577584132224293973ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                var_17 -= ((/* implicit */unsigned short) 14577584132224293972ULL);
                arr_4 [(signed char)7] [7ULL] &= ((/* implicit */unsigned long long int) (~(((((/* implicit */long long int) (~(((/* implicit */int) (short)-1477))))) ^ (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (67108862LL)))))));
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (+(((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) >> (((((((((/* implicit */_Bool) var_2)) ? ((-2147483647 - 1)) : (var_7))) - (-2147483631))) + (17))))))))));
    var_19 = ((/* implicit */int) min((var_19), ((((~(((/* implicit */int) ((((/* implicit */_Bool) var_0)) || ((_Bool)1)))))) & (((/* implicit */int) (short)1496))))));
}
