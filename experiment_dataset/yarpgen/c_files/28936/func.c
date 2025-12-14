/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28936
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
    var_14 = ((/* implicit */signed char) var_6);
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */unsigned short) var_5)), (var_3)))) >> (((((((/* implicit */_Bool) (short)-17742)) ? (((/* implicit */int) (unsigned short)11589)) : (((/* implicit */int) var_9)))) - (11564)))))) ? ((~(((/* implicit */int) (short)-5958)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)8850)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) (unsigned short)32768)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)32768)))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)56686)) > (((/* implicit */int) (unsigned short)26788)))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_16 = ((/* implicit */short) (+(((/* implicit */int) (unsigned short)56686))));
        var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)34619)) ? (((((/* implicit */int) (signed char)77)) + (((/* implicit */int) var_7)))) : (((((/* implicit */int) (unsigned short)0)) + (((/* implicit */int) (unsigned short)41807)))))))));
        arr_3 [(signed char)9] [(signed char)9] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)11589)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [(unsigned short)8] [i_0])) : (((/* implicit */int) (short)6196)))) ^ (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_4)))))))));
    }
}
