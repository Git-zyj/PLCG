/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40365
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_17 = ((/* implicit */_Bool) ((short) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_2))))) >= ((~(4294967295U))))));
        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((arr_1 [i_0]) ? (arr_3 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_3 [i_0]) < (((/* implicit */unsigned long long int) var_16))))))))) ? (((((/* implicit */_Bool) -2600137884502147316LL)) ? ((~(((/* implicit */int) var_8)))) : (((/* implicit */int) var_12)))) : (((/* implicit */int) arr_1 [i_0]))));
        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) (+(((arr_3 [i_0]) / (arr_3 [i_0]))))))));
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) ((var_15) >> (((((/* implicit */int) var_6)) - (96))))))) ? (arr_3 [i_0]) : ((~(var_10)))));
        var_20 &= ((/* implicit */short) (_Bool)1);
    }
    var_21 = ((/* implicit */_Bool) 246290604621824ULL);
    var_22 = ((/* implicit */_Bool) var_4);
    var_23 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!((_Bool)0)))), (max((max((((/* implicit */unsigned long long int) var_3)), (var_9))), (((/* implicit */unsigned long long int) var_14))))));
}
