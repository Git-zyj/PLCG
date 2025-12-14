/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239189
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
    var_12 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) max((3375972028U), (((/* implicit */unsigned int) var_10))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_13 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(max((((/* implicit */long long int) var_7)), (-8902952299087703601LL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (846161774U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))) ? (((/* implicit */unsigned long long int) ((int) 0U))) : (min((arr_0 [12U]), (((/* implicit */unsigned long long int) var_10)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
        var_14 = ((/* implicit */short) 7486706048549676239ULL);
        var_15 = (((_Bool)1) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 1]))) - (var_4))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_1 [i_0 - 1]))))));
        var_16 &= ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) arr_0 [(short)14])) ? (arr_0 [(unsigned char)8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))));
        var_17 = ((/* implicit */unsigned char) ((((((/* implicit */int) var_11)) < (((((/* implicit */_Bool) 4294967266U)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_0)))))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_0 [i_0]))))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (unsigned short)64653)) : (((arr_1 [i_0 - 1]) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_10))))))));
    }
    var_18 = ((/* implicit */unsigned long long int) var_6);
}
