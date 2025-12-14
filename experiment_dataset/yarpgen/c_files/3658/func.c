/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3658
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)22548)) : (((/* implicit */int) (unsigned char)58))));
        var_18 ^= ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_0]))))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (1987176806U))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [8U])) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [4ULL]))) < (arr_2 [6U])))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_13)))))))));
        arr_4 [i_0] = ((/* implicit */short) (unsigned char)3);
    }
    var_19 = max((((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) var_4))))) || ((!(((/* implicit */_Bool) var_1))))))), (var_14));
}
