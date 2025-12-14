/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40906
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
    var_15 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_2) : (((/* implicit */unsigned long long int) var_9))))) ? (((/* implicit */int) ((((/* implicit */int) var_0)) <= (var_13)))) : (((((/* implicit */_Bool) var_10)) ? (var_3) : (((/* implicit */int) var_14))))))) - (var_2));
    var_16 = var_7;
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        arr_2 [16] |= ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) arr_0 [(unsigned char)2] [(signed char)20])) ? (((/* implicit */int) arr_0 [i_0] [(signed char)4])) : (arr_1 [(short)16]))));
        arr_3 [4] &= ((/* implicit */signed char) arr_0 [i_0] [14LL]);
        var_17 = ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_1 [i_0]))))));
    }
    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(-5331199594907122780LL)))) ? (((((/* implicit */_Bool) -5331199594907122780LL)) ? (-5331199594907122755LL) : (((/* implicit */long long int) var_3)))) : (((/* implicit */long long int) (+(var_1))))))) ? (((((/* implicit */int) min((((/* implicit */short) var_5)), (var_12)))) << (((var_6) ? (var_11) : (((/* implicit */int) var_5)))))) : ((~(var_3))))))));
}
