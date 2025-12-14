/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35945
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
    for (int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        var_11 = ((/* implicit */unsigned long long int) arr_0 [i_0]);
        var_12 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0 + 1]))))) ? ((+(((/* implicit */int) arr_1 [i_0])))) : (((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_3)))))));
    }
    for (int i_1 = 0; i_1 < 14; i_1 += 1) 
    {
        arr_7 [i_1] = ((((/* implicit */int) arr_2 [i_1])) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1] [i_1]))))));
        var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))) ? (((/* implicit */int) ((min((arr_0 [i_1]), (var_1))) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_9)) >= (((/* implicit */int) var_10))))))))) : (((/* implicit */int) arr_6 [i_1]))));
    }
    var_14 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((unsigned int) var_0))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_0))))) : (((((/* implicit */_Bool) var_7)) ? (var_8) : (var_7)))))));
    var_15 &= ((/* implicit */unsigned long long int) var_5);
}
