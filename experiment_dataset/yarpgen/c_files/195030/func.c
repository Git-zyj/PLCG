/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195030
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
    for (unsigned char i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */short) (+(max((((((/* implicit */_Bool) 6569351073755731394ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (var_6))), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]))))));
        var_10 = ((/* implicit */unsigned long long int) max((var_10), (var_9)));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 + 1])) ? (((/* implicit */long long int) 4016692026U)) : (arr_0 [i_0 + 1] [i_0]))));
        var_11 += ((/* implicit */short) (!(((/* implicit */_Bool) min((max((11877392999953820221ULL), (var_9))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 11877392999953820222ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_0 [i_0] [i_0])))))))));
    }
    var_12 = ((/* implicit */unsigned int) var_4);
    var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_9), (var_3)))) ? (((((/* implicit */_Bool) (~(var_6)))) ? (10206469712676831576ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) : ((-(((((/* implicit */_Bool) -1)) ? (18446744073709551615ULL) : (var_3))))))))));
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((11877392999953820221ULL), (13442562715238112581ULL)))) ? (((/* implicit */unsigned long long int) var_7)) : (((((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned long long int) 0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)16))) : (((((/* implicit */_Bool) (short)-16931)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (6569351073755731397ULL)))))));
}
