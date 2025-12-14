/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51241
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_0 [i_0]))));
        arr_4 [(unsigned char)2] |= ((/* implicit */unsigned int) arr_2 [(unsigned short)6]);
        arr_5 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)129)) ? (arr_1 [i_0]) : (arr_1 [i_0])))) ? (((arr_2 [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)57687))) : (((((/* implicit */_Bool) var_3)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0])))));
        var_15 = ((/* implicit */_Bool) (~(((arr_2 [i_0]) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_2 [i_0]))))));
    }
    for (int i_1 = 1; i_1 < 12; i_1 += 2) 
    {
        var_16 = ((/* implicit */unsigned short) var_2);
        arr_8 [i_1 - 1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1 - 1] [i_1]))) / (((((/* implicit */_Bool) var_8)) ? (arr_6 [i_1 - 1]) : (863925613U)))));
        var_17 = ((/* implicit */unsigned int) max((var_17), (arr_6 [i_1 + 1])));
        var_18 = ((/* implicit */_Bool) (-(((((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (863925586U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1 - 1] [i_1 + 1])))))) | ((~(6423172037891286520LL)))))));
    }
    var_19 = ((/* implicit */unsigned short) var_8);
}
