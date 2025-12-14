/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44378
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
    var_17 = ((/* implicit */int) var_10);
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        arr_3 [i_0 - 1] [i_0 + 1] = ((/* implicit */unsigned short) ((7168ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 + 1])))));
        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((arr_2 [i_0]) ? (((((/* implicit */_Bool) var_8)) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) >= (var_4))))))) : (((arr_0 [i_0] [i_0 - 2]) * (arr_0 [(signed char)11] [i_0 + 1]))))))));
        arr_4 [i_0 - 2] = ((/* implicit */short) (~(((/* implicit */int) var_10))));
    }
    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) min((var_7), (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))))));
}
