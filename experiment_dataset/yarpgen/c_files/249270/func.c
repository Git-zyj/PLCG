/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249270
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
    var_16 = ((/* implicit */unsigned int) var_9);
    var_17 ^= ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */unsigned long long int) var_4)) - (var_1))))) : (max((var_1), (((/* implicit */unsigned long long int) (+(var_6)))))));
    var_18 -= ((/* implicit */short) (-(((var_15) - (471477136327251716ULL)))));
    var_19 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_4)))) ? ((~(var_9))) : (((/* implicit */int) var_12))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -6094428299650228040LL)))))) : (var_1)));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_20 ^= ((/* implicit */_Bool) ((arr_1 [i_0]) ? (max((max((((/* implicit */unsigned long long int) arr_1 [i_0])), (var_2))), (((/* implicit */unsigned long long int) var_8)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1)))))));
        var_21 -= max((((((/* implicit */_Bool) (+(471477136327251716ULL)))) ? (var_2) : (((/* implicit */unsigned long long int) ((arr_1 [(short)6]) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) var_8))))))), (((/* implicit */unsigned long long int) max((arr_1 [i_0]), (arr_1 [i_0])))));
        var_22 &= ((/* implicit */unsigned long long int) min((((/* implicit */int) ((_Bool) arr_0 [i_0] [i_0]))), (max(((~(((/* implicit */int) var_12)))), (((/* implicit */int) max((arr_1 [i_0]), (arr_1 [(short)0]))))))));
        var_23 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
    }
}
