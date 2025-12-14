/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224484
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
    var_14 = ((/* implicit */short) (+((-(((((/* implicit */unsigned int) ((/* implicit */int) var_10))) * (var_0)))))));
    var_15 = ((/* implicit */long long int) (-(((/* implicit */int) var_13))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        arr_3 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_0 [i_0])))) ? (((/* implicit */int) ((var_8) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) 12U)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))));
        var_16 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (((_Bool)1) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65522)))))), (((var_1) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))))));
        var_17 ^= ((/* implicit */long long int) (((~(((((/* implicit */_Bool) arr_1 [18U])) ? (((/* implicit */int) arr_1 [(short)4])) : (((/* implicit */int) var_2)))))) < (((/* implicit */int) arr_1 [(unsigned short)16]))));
        var_18 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_2)), (arr_0 [i_0])))), ((-(var_8)))));
    }
    var_19 = 2686014647251496134LL;
    var_20 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 9223372036854775800LL)) ? (2686014647251496129LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)114))))) & (((/* implicit */long long int) var_3))));
}
