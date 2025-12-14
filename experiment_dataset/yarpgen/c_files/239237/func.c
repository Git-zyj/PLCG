/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239237
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
    var_18 = ((long long int) var_7);
    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) ((var_1) ? (var_17) : (((/* implicit */int) var_2)))))) << (((((((/* implicit */unsigned int) ((/* implicit */int) var_8))) ^ (1398776096U))) - (2896176656U))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 -= ((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)238)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (signed char)-88)) : (((/* implicit */int) arr_0 [(short)22])))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_0 [(unsigned char)10])) : (((/* implicit */int) arr_0 [6LL]))))) ? (((/* implicit */int) ((unsigned short) var_3))) : ((~(((/* implicit */int) var_1))))))));
        arr_4 [i_0] = ((/* implicit */short) ((min((min((((/* implicit */unsigned long long int) var_7)), (18446744073709551615ULL))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)20))))))) <= (((/* implicit */unsigned long long int) var_13))));
        arr_5 [i_0] = ((/* implicit */long long int) ((unsigned short) ((short) ((((/* implicit */_Bool) 1766990030510492645ULL)) || (((/* implicit */_Bool) arr_2 [i_0]))))));
    }
    var_21 *= ((_Bool) var_16);
    var_22 = ((/* implicit */int) min((var_22), ((-(((/* implicit */int) var_7))))));
}
