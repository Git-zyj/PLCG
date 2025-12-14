/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226473
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */int) arr_0 [i_0]);
        arr_3 [4U] [4U] = ((/* implicit */unsigned short) arr_1 [(unsigned char)7]);
    }
    var_17 = ((/* implicit */_Bool) var_12);
    var_18 = ((/* implicit */_Bool) var_3);
    var_19 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (min((var_6), (((/* implicit */int) var_4)))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8))))))), (((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_12)) ? (var_5) : (((/* implicit */unsigned long long int) var_14)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_13)))))))));
}
