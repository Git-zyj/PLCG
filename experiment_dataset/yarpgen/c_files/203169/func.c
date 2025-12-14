/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203169
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */int) min((((((/* implicit */_Bool) 6472474876223086758ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)192))) : (6472474876223086734ULL))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_0])))))));
        var_20 *= ((/* implicit */unsigned char) ((1969248204U) + (905866875U)));
    }
    for (unsigned char i_1 = 0; i_1 < 13; i_1 += 4) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned char) var_0);
        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (+(max((((unsigned long long int) arr_2 [i_1])), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_1])) > (((/* implicit */int) arr_5 [i_1]))))))))))));
        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) (((~(arr_1 [i_1] [i_1]))) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) arr_0 [i_1]))))))))));
    }
    var_23 = ((/* implicit */signed char) var_4);
    var_24 = var_3;
    var_25 *= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_9))))) >> (((((/* implicit */int) var_14)) - (108)))));
    var_26 = ((/* implicit */unsigned long long int) (-((~(((/* implicit */int) var_8))))));
}
