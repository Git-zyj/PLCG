/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22262
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
    var_10 = ((((((0LL) == (var_7))) ? (((var_9) | (var_1))) : (var_4))) % (var_7));
    var_11 = ((6460198939270806968LL) % ((~(max((var_8), (6915243833280790186LL))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_2) : (9223372036854775796LL)))) && (((/* implicit */_Bool) arr_1 [i_0]))));
        arr_2 [i_0] = ((long long int) (!(((/* implicit */_Bool) 0LL))));
    }
    for (long long int i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((arr_4 [i_1]) - (arr_4 [i_1]))))))));
        arr_6 [i_1] = min((((long long int) -6915243833280790169LL)), (min((0LL), (arr_4 [i_1]))));
        var_13 = arr_4 [i_1];
    }
    var_14 = ((long long int) max((((((-4003250481511748764LL) + (9223372036854775807LL))) >> (((var_5) - (2142182509616384672LL))))), (var_9)));
}
