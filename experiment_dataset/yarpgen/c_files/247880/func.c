/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247880
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
    var_16 *= ((/* implicit */long long int) ((((/* implicit */int) ((((((/* implicit */_Bool) var_8)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) == (((/* implicit */long long int) var_15))))) == (((/* implicit */int) ((unsigned short) var_11)))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) /* same iter space */
    {
        var_17 *= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)36464))) | (-2350170346530118523LL)));
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)23177))) == (4294967295U)));
        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((18446744073709551615ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))))) ? (((/* implicit */int) min((((/* implicit */short) arr_0 [i_0 + 1] [i_0])), ((short)32767)))) : (((/* implicit */int) var_9)))))));
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0 + 1]))))))));
        arr_4 [7LL] = ((((arr_0 [i_0 + 1] [i_0 + 1]) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)24))) < (2520405878084911925LL))))) : (((((/* implicit */_Bool) (unsigned short)38821)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (9223372036854775784LL))))) & (((/* implicit */long long int) arr_1 [i_0 + 1])));
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */_Bool) ((arr_5 [i_1]) - (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)29071))))))));
        var_20 ^= ((/* implicit */unsigned short) min((((max((((/* implicit */unsigned long long int) -9223372036854775784LL)), (18446744073709551602ULL))) | (5672450861972992087ULL))), (((/* implicit */unsigned long long int) min((min((4294967295U), (((/* implicit */unsigned int) (unsigned short)65535)))), (((/* implicit */unsigned int) (!((_Bool)0)))))))));
    }
}
