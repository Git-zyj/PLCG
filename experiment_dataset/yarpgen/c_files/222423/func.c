/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222423
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
    var_20 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (-5632047330805891382LL) : (((/* implicit */long long int) ((/* implicit */int) var_18)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned long long int) var_1);
        var_22 = ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (var_16))) - (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_1))))));
        var_23 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_18)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [12ULL])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) var_5)))))));
    }
    var_24 = ((/* implicit */signed char) ((2080768) - (((/* implicit */int) (unsigned char)17))));
}
