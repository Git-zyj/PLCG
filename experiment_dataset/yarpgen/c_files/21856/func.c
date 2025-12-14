/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21856
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
    var_19 = ((((/* implicit */_Bool) 562828854)) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((((/* implicit */int) var_12)) + (2147483647))) << (((((/* implicit */int) var_13)) + (28)))))), (((var_7) | (((/* implicit */unsigned int) ((/* implicit */int) var_18)))))))) : (((((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_0)))) ? (((((/* implicit */_Bool) -562828854)) ? (var_0) : (((/* implicit */unsigned long long int) var_16)))) : (max((((/* implicit */unsigned long long int) (_Bool)1)), (var_10))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 4; i_0 < 21; i_0 += 3) 
    {
        var_20 += ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)44404))))))), (max((134217727ULL), (((/* implicit */unsigned long long int) (-(4294967281U))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) min((((arr_3 [i_0 - 1]) & (18446744073709551615ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_0 [i_0] [i_0])), (((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (7U))))))));
    }
    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) var_5))));
    var_22 = ((/* implicit */int) (((((-(((/* implicit */int) var_6)))) == (((/* implicit */int) ((short) (_Bool)1))))) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
}
