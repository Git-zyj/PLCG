/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34792
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
    var_17 = ((/* implicit */signed char) min((((unsigned long long int) min((2147483647), (852928236)))), (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (_Bool)1)))))))));
    var_18 *= ((/* implicit */unsigned char) ((((/* implicit */int) var_12)) >> (((max(((~(var_11))), (((/* implicit */unsigned long long int) ((signed char) var_6))))) - (13081959270551568738ULL)))));
    var_19 = var_11;
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned long long int) (((+(min((var_11), (((/* implicit */unsigned long long int) (_Bool)1)))))) >= (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1)))))));
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)127)) ? (2147483639) : (((/* implicit */int) (_Bool)1))))) + (((-3600345810399109814LL) - (((/* implicit */long long int) ((/* implicit */int) var_15)))))));
    }
    for (unsigned char i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        var_22 *= ((/* implicit */unsigned char) arr_0 [i_1]);
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1])) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 983040U)) - (arr_4 [i_1]))))))) >> (((/* implicit */int) ((((arr_4 [i_1]) / (((/* implicit */unsigned long long int) var_7)))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -852928236)) ? (-2147483640) : (((/* implicit */int) (unsigned char)235))))))))));
        var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) (unsigned char)176))));
    }
    var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) var_0))));
}
