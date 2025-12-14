/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38767
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
    for (int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_13 = ((/* implicit */signed char) ((min((((/* implicit */unsigned int) arr_0 [14ULL])), (arr_1 [i_0]))) == (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (arr_1 [i_0])))));
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (0U) : (min((arr_1 [i_0]), (4294967295U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (arr_1 [i_0])))));
        var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (min((arr_1 [i_0]), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) == (arr_1 [i_0])))))) : (((((/* implicit */_Bool) 0U)) ? (4294967295U) : (0U)))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 3; i_1 < 10; i_1 += 2) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned int) var_7);
        var_15 = arr_4 [i_1 - 2];
        var_16 = ((/* implicit */unsigned int) (_Bool)1);
    }
    var_17 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_10))));
    var_18 = min((((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) (signed char)-18)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)480))) : (var_1))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967295U)) ? (var_5) : (((/* implicit */int) var_8))))))), (((/* implicit */unsigned int) var_3)));
}
