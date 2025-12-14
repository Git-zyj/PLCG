/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232471
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
    var_18 = ((/* implicit */_Bool) min((max((max((var_16), (2510461138U))), (((/* implicit */unsigned int) var_9)))), (((/* implicit */unsigned int) var_14))));
    var_19 = ((/* implicit */signed char) (_Bool)1);
    var_20 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) min((max((((/* implicit */int) (_Bool)1)), (var_17))), (((/* implicit */int) (_Bool)1))))) : ((((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_16))) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
    var_21 ^= ((/* implicit */unsigned char) (_Bool)1);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_16)) ? (min((arr_0 [i_0]), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
        var_23 = ((/* implicit */short) min((((/* implicit */unsigned long long int) (_Bool)1)), (max((min((var_5), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned char) ((_Bool) ((((((/* implicit */_Bool) arr_2 [i_1])) ? (var_17) : (((/* implicit */int) var_7)))) == (((/* implicit */int) max(((_Bool)1), ((_Bool)1)))))));
        var_25 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_2 [i_1])) ? (arr_0 [21ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_12))))))))));
    }
}
