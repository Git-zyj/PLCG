/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231205
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
    var_17 = (unsigned short)65520;
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) var_7))))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) (unsigned short)16)))) || (((/* implicit */_Bool) min((arr_0 [i_0]), (arr_0 [i_0]))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
        arr_2 [i_0] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) max((arr_1 [i_0]), (var_16)))) ? (((((/* implicit */_Bool) arr_1 [(unsigned short)7])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)16)))) : (((/* implicit */int) arr_1 [i_0]))))));
    }
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? ((~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_4)))))) : (max(((+(((/* implicit */int) (unsigned short)61712)))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_0))))))));
}
