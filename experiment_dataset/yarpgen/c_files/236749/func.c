/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236749
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
    var_18 = (~(((/* implicit */int) (!(((/* implicit */_Bool) ((var_4) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_7)))))))));
    var_19 = ((/* implicit */unsigned long long int) ((var_9) ? (((/* implicit */int) ((_Bool) (((_Bool)1) ? (34359738367LL) : (((/* implicit */long long int) ((/* implicit */int) var_13))))))) : (max((((/* implicit */int) (!(var_17)))), ((~(((/* implicit */int) var_0))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_20 = var_8;
        var_21 = ((/* implicit */short) max((var_21), (var_0)));
        var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (+(((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (34359738340LL))))))))));
        var_23 = ((/* implicit */unsigned long long int) (-(((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1]))) | (-34359738367LL)))));
    }
    for (long long int i_1 = 2; i_1 < 10; i_1 += 4) 
    {
        var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) max((((/* implicit */long long int) (_Bool)1)), (var_5))))));
        arr_4 [(_Bool)1] &= ((/* implicit */short) (-(max((((int) var_15)), (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1])))))))));
        var_25 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_3 [i_1 + 1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_3 [i_1]))))) : (((arr_1 [i_1]) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1] [i_1]))))))), (((/* implicit */long long int) arr_1 [i_1]))));
        var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) (_Bool)0))));
        arr_5 [(unsigned char)2] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */unsigned int) (~(-175639221)))) : ((-(var_16))))), (((/* implicit */unsigned int) arr_1 [i_1 + 1]))));
    }
}
