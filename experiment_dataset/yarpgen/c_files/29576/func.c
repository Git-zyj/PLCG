/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29576
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
    var_15 |= ((/* implicit */unsigned long long int) 5458679272686502093LL);
    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */int) var_6)) << (((/* implicit */int) (!(((((/* implicit */_Bool) var_7)) && (var_9)))))))))));
    var_17 |= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (((((-(((/* implicit */int) var_5)))) + (2147483647))) << (((((/* implicit */int) (!(var_9)))) - (1)))))), (((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned long long int) var_4)) : (0ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 18446744073709551615ULL))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        for (long long int i_1 = 3; i_1 < 20; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) ((max((18446744073709551615ULL), (969449728583755885ULL))) << (((((1411322792050179235ULL) << (((/* implicit */int) (unsigned char)2)))) - (5645291168200716902ULL))))))));
                var_19 = ((/* implicit */_Bool) ((unsigned char) arr_0 [i_0]));
                var_20 |= ((/* implicit */unsigned char) ((long long int) ((((/* implicit */int) ((_Bool) arr_1 [(unsigned char)0]))) << (min((((/* implicit */unsigned long long int) var_9)), (0ULL))))));
            }
        } 
    } 
}
