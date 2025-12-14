/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201694
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
    var_11 = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)24)) ? (var_7) : (((/* implicit */long long int) var_4))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) : (((((/* implicit */_Bool) var_6)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-13))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) max((var_6), (var_1)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)58)) && (((/* implicit */_Bool) -9142888061328073470LL))))) : (((/* implicit */int) var_10))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)103)) ? (3784020784346605357ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -9142888061328073458LL)) ? (((/* implicit */long long int) 236357983U)) : ((-9223372036854775807LL - 1LL)))))));
        var_12 = ((/* implicit */_Bool) ((arr_0 [i_0]) ? (-9142888061328073470LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-39)))));
        arr_5 [i_0] = ((/* implicit */unsigned int) ((((arr_0 [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)179))) : (var_5))) & (arr_2 [i_0])));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 13; i_1 += 1) /* same iter space */
    {
        var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) ((((/* implicit */int) (signed char)1)) / (((((/* implicit */_Bool) arr_2 [(_Bool)1])) ? (((/* implicit */int) arr_1 [6U])) : (((/* implicit */int) var_9)))))))));
        arr_9 [8LL] = ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-8))));
    }
}
