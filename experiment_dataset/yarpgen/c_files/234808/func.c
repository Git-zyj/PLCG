/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234808
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
    var_19 = ((/* implicit */unsigned short) var_5);
    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) min((((max((((/* implicit */unsigned long long int) var_16)), (var_3))) * (((/* implicit */unsigned long long int) (-(var_4)))))), (((/* implicit */unsigned long long int) var_1)))))));
    var_21 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_3))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) var_15)) * (((/* implicit */int) var_10)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) max((549232398U), (396095126U)))) ? (((/* implicit */unsigned long long int) 4294967288U)) : (var_9)))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        var_22 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) != (arr_1 [i_0]))) ? (max((arr_1 [11ULL]), (((/* implicit */unsigned int) var_15)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U))))))));
        var_23 &= ((/* implicit */unsigned int) ((((unsigned long long int) var_7)) <= (((/* implicit */unsigned long long int) arr_1 [i_0]))));
        var_24 = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_0 [i_0] [i_0]) % (((/* implicit */unsigned long long int) var_12))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))), ((-(((((/* implicit */_Bool) arr_0 [i_0] [i_0 - 2])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned long long int) 2675618426U)))))));
        var_25 = ((((((/* implicit */_Bool) arr_0 [i_0 - 2] [i_0 + 1])) || (((/* implicit */_Bool) arr_0 [i_0] [i_0 - 1])))) ? (((/* implicit */unsigned long long int) ((unsigned int) arr_1 [i_0]))) : (((max((16152894572315342528ULL), (((/* implicit */unsigned long long int) arr_1 [i_0])))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))));
    }
}
