/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209359
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
    var_10 = (+(max((max((var_1), (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) - (var_8)))))));
    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((max((((/* implicit */long long int) var_9)), (var_5))) % (max((var_5), (((/* implicit */long long int) var_9))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)103))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9))))));
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((((((/* implicit */int) (signed char)-104)) + (2147483647))) << (((((/* implicit */int) (signed char)103)) - (103))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_4))))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_6))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        arr_3 [i_0] |= ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) (~(arr_2 [i_0 - 2] [i_0 - 2])))))))));
        arr_4 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (arr_2 [i_0 + 3] [i_0 + 2]) : (arr_2 [i_0 - 2] [i_0 + 2]))))));
    }
}
