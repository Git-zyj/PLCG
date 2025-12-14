/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/390
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
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((min((((/* implicit */unsigned int) var_1)), (4294967295U))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_0)) == (((/* implicit */int) var_1))))))))) ? (var_8) : (((/* implicit */unsigned long long int) ((var_4) ? (((/* implicit */int) var_3)) : (((((/* implicit */int) var_4)) - (((/* implicit */int) (signed char)-10)))))))));
    var_13 = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9))))), (((((/* implicit */_Bool) var_10)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        arr_3 [i_0] = var_8;
        var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) min((((/* implicit */int) arr_1 [i_0])), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))))))));
    }
    var_15 = ((/* implicit */_Bool) var_11);
}
