/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38868
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
    var_18 = ((/* implicit */signed char) var_7);
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((var_7), (((/* implicit */unsigned short) (unsigned char)128))))), (var_14)))) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((max((var_6), (((/* implicit */int) (signed char)-112)))) < (((/* implicit */int) ((short) var_6)))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((long long int) var_16)) <= (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_6) : (((/* implicit */int) (signed char)127)))))))) >> (((((((/* implicit */_Bool) arr_1 [(short)9])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))) - (63176)))));
        arr_3 [i_0] = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0])) / (((/* implicit */int) arr_1 [i_0]))))), (((long long int) var_9))));
        arr_4 [i_0] = (((+(arr_0 [i_0]))) > (((/* implicit */unsigned int) ((/* implicit */int) var_9))));
        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) min((((((((/* implicit */int) var_9)) ^ (var_6))) / (((/* implicit */int) max((((/* implicit */unsigned short) var_5)), (var_9)))))), (((/* implicit */int) ((((var_5) ? (var_0) : (((/* implicit */int) var_3)))) < (((/* implicit */int) arr_1 [i_0]))))))))));
        var_21 *= ((/* implicit */int) ((short) ((signed char) ((((/* implicit */_Bool) -594142197)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (1671175620U)))));
    }
}
