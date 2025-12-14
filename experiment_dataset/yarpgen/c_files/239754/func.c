/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239754
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
    var_14 = ((/* implicit */int) ((((((/* implicit */_Bool) ((unsigned short) var_6))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))) - (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) 2754763783U)) && (((/* implicit */_Bool) (unsigned short)35961))))) / (-1317764315))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) ((short) var_9))) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_2 [i_0])))))));
            var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0] [1LL])) * (((/* implicit */int) arr_5 [(unsigned short)10] [i_1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_5 [i_0] [i_1]), (arr_5 [i_1] [i_1]))))) : (((unsigned int) arr_5 [i_0] [i_1])))))));
            arr_6 [(signed char)10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_5 [(unsigned short)2] [i_1])))) : (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_1])))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_1]))) - (((((/* implicit */_Bool) arr_5 [7U] [i_1])) ? (arr_3 [i_0] [i_0]) : (((/* implicit */unsigned int) 1755411131))))))));
            var_17 = ((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */short) arr_2 [i_0])), (arr_5 [i_1] [i_0])))) & (((/* implicit */int) ((_Bool) arr_4 [i_1])))));
        }
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) arr_5 [i_0] [3ULL])) : (((/* implicit */int) arr_2 [i_0]))))) ? (((var_2) ? (((/* implicit */int) arr_5 [i_0] [i_0])) : (((/* implicit */int) var_6)))) : (((int) arr_2 [i_0]))));
    }
}
