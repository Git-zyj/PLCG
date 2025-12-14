/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216570
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
    var_14 += ((/* implicit */unsigned short) max(((~((~(((/* implicit */int) var_8)))))), (min((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) > (var_12)))), ((~(((/* implicit */int) var_0))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        var_15 += ((/* implicit */unsigned short) (+(((min(((_Bool)0), ((_Bool)1))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)38016))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-116)))))))));
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) || (((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (arr_2 [i_0]) : (arr_2 [i_0]))) - (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_1)), (arr_0 [i_0])))))))));
        var_16 = ((/* implicit */unsigned short) (-(max((arr_2 [i_0 - 1]), (((/* implicit */unsigned long long int) arr_1 [i_0 - 1]))))));
        var_17 = ((/* implicit */long long int) ((((/* implicit */int) ((signed char) ((short) arr_0 [i_0])))) + (((((/* implicit */_Bool) var_11)) ? (min((2147483647), (((/* implicit */int) var_6)))) : (arr_1 [i_0])))));
    }
    for (short i_1 = 0; i_1 < 19; i_1 += 4) 
    {
        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (-(arr_4 [i_1]))))));
        var_19 += ((/* implicit */unsigned int) ((int) (~(((((/* implicit */_Bool) (unsigned short)37997)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_6)))))));
        arr_6 [i_1] = ((/* implicit */int) (-(((((/* implicit */long long int) ((/* implicit */int) arr_5 [(unsigned short)16]))) / (arr_4 [i_1])))));
    }
}
