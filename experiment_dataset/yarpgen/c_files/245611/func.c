/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245611
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
    var_11 = ((/* implicit */unsigned char) (~(min((((((/* implicit */_Bool) var_2)) ? (var_1) : (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (var_4) : (var_10))))))));
    var_12 = max((var_2), (max((min((var_10), (var_4))), (((/* implicit */long long int) var_7)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_2 [i_0] [5U] = ((/* implicit */short) (-(((unsigned int) arr_0 [(unsigned char)11]))));
        var_13 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [(unsigned char)6])) : (((/* implicit */int) arr_0 [1LL]))))));
        var_14 = ((/* implicit */unsigned short) arr_0 [15LL]);
        var_15 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [7ULL] [i_0])) ? (arr_1 [(unsigned short)10] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [(_Bool)1]))))))));
    }
    var_16 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_1)) ? ((~(7618082519870767592LL))) : (max((var_0), (((/* implicit */long long int) (signed char)77)))))), (((/* implicit */long long int) max((max((var_8), (((/* implicit */unsigned int) var_5)))), (((/* implicit */unsigned int) ((unsigned short) var_4))))))));
    var_17 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned short) ((unsigned short) var_10))))));
}
