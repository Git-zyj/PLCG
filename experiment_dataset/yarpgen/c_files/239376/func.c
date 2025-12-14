/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239376
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
    var_18 += ((/* implicit */signed char) var_11);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            var_19 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_0 [i_0] [i_0])))) ? (((((/* implicit */int) arr_0 [i_0] [i_1])) / (((/* implicit */int) arr_0 [i_0] [i_0])))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_0 [8LL] [i_1])) : (((/* implicit */int) var_15))))));
            var_20 = ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? ((-(arr_2 [8] [i_1]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) (unsigned short)14486)) : (var_16))))));
        }
        /* vectorizable */
        for (long long int i_2 = 0; i_2 < 10; i_2 += 2) 
        {
            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)14487)) && (((/* implicit */_Bool) (unsigned short)51048))));
            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (arr_3 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)51050)))))) ? (arr_3 [i_0]) : (arr_3 [(unsigned short)5])));
        }
        /* LoopSeq 2 */
        for (signed char i_3 = 0; i_3 < 10; i_3 += 4) 
        {
            var_23 = ((/* implicit */int) max((var_23), (var_16)));
            var_24 = (-(((/* implicit */int) (unsigned short)51053)));
        }
        for (unsigned long long int i_4 = 3; i_4 < 7; i_4 += 4) 
        {
            var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_4 - 2] [i_4 + 2])) ? (((/* implicit */int) (unsigned short)51053)) : (((((/* implicit */_Bool) (unsigned short)14486)) ? (((/* implicit */int) (unsigned short)14487)) : (((/* implicit */int) (unsigned short)14489))))))) ? (((/* implicit */int) arr_0 [i_4 - 2] [i_4 + 1])) : ((-(((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) (unsigned short)14492))))))))))));
            var_26 = ((/* implicit */short) var_11);
        }
        var_27 -= min((((((/* implicit */_Bool) (unsigned short)47081)) ? ((+(((/* implicit */int) (unsigned short)51047)))) : (((/* implicit */int) (unsigned short)51056)))), (((/* implicit */int) ((short) ((unsigned short) (unsigned char)124)))));
    }
    var_28 -= ((/* implicit */long long int) var_16);
}
