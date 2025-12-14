/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233467
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
    var_17 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_16)) && ((!(((/* implicit */_Bool) var_13))))));
    var_18 |= ((/* implicit */unsigned int) (-(max((var_0), (((/* implicit */unsigned long long int) var_12))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 += ((/* implicit */_Bool) ((((arr_0 [(signed char)24] [(signed char)24]) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_1 [14U])) < (arr_0 [(short)18] [(short)18]))))))) + (((((/* implicit */_Bool) ((arr_1 [20U]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0])))))) ? (((/* implicit */unsigned long long int) (~(arr_1 [(unsigned short)18])))) : (var_11)))));
        var_20 *= ((/* implicit */short) ((((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_3 [i_0] [i_0])))) ? ((~(((/* implicit */int) arr_2 [i_0] [20LL])))) : (((/* implicit */int) arr_3 [i_0] [i_0]))))) < (((((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) | (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0]))) & (arr_1 [22ULL]))))))));
    }
    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) var_11))));
}
