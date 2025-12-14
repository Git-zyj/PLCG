/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218720
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
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 4) /* same iter space */
    {
        var_10 *= ((/* implicit */short) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (signed char)0))));
        arr_2 [i_0] [i_0] = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [0ULL])) ? (var_2) : (((/* implicit */int) var_0))))) >= (((((/* implicit */_Bool) var_4)) ? (8827279196812206951ULL) : (((/* implicit */unsigned long long int) var_3)))));
        var_11 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_0)))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 4) /* same iter space */
    {
        var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) ((((9619464876897344665ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) arr_0 [i_1])) : (127LL))))))));
        var_13 = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) -1331718645)) ? (((/* implicit */unsigned long long int) 2147483647)) : (arr_3 [i_1]))));
    }
    var_14 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) * (((((/* implicit */_Bool) ((int) var_9))) ? ((~(12425987840199649613ULL))) : (((/* implicit */unsigned long long int) var_1))))));
    var_15 = ((/* implicit */int) var_9);
    var_16 = ((/* implicit */int) min((var_16), (var_2)));
}
