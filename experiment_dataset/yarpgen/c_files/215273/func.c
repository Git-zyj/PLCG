/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215273
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
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_9)));
    var_16 = 126976;
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */short) ((max((arr_2 [i_0]), (arr_2 [i_0]))) > (min((arr_2 [i_0]), (((/* implicit */unsigned long long int) -1LL))))));
        var_18 += ((/* implicit */signed char) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) 126953)), (9223372036854775807LL)))) % (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (arr_1 [18]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0)))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [10ULL] [i_0]))) / (18446744073709551615ULL))) : (max((0ULL), (18446744073709551615ULL)))))));
        arr_4 [i_0] [(unsigned char)16] = ((/* implicit */unsigned long long int) var_2);
        arr_5 [(unsigned short)17] = ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)3)), (arr_1 [i_0]))))));
        arr_6 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)255)) >> (((((/* implicit */int) arr_0 [i_0] [i_0])) - (191)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) var_8)), (126981))))))) : (((/* implicit */int) ((short) ((signed char) var_2))))));
    }
    for (short i_1 = 0; i_1 < 20; i_1 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) 126979)) ? ((-(((((/* implicit */int) (signed char)64)) << (((((((/* implicit */int) (signed char)-104)) + (129))) - (1))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775807LL)))))));
        arr_11 [i_1] = ((/* implicit */short) ((((/* implicit */int) var_8)) << ((((~((((_Bool)1) ? (arr_1 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4096))))))) - (16672675782414419852ULL)))));
    }
}
