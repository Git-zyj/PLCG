/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241674
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
    var_12 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) == (((/* implicit */int) max((((/* implicit */unsigned short) var_7)), (var_4))))))), (((((16872424642564572454ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((unsigned long long int) arr_0 [i_0]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((251658240ULL), (11147946071575283760ULL))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
        arr_3 [i_0] = ((/* implicit */signed char) min((arr_1 [i_0 - 1] [i_0 + 1]), (((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0 + 1])) && (((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 + 1])))))));
    }
    for (unsigned short i_1 = 1; i_1 < 16; i_1 += 3) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */int) var_10);
        arr_8 [i_1] [i_1] = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) 7298798002134267845ULL)))))));
    }
    for (unsigned short i_2 = 1; i_2 < 16; i_2 += 3) /* same iter space */
    {
        arr_11 [i_2] &= ((/* implicit */int) ((7298798002134267855ULL) >> (((/* implicit */int) (signed char)63))));
        var_14 = ((/* implicit */long long int) (+(((/* implicit */int) var_10))));
        var_15 ^= ((/* implicit */long long int) ((short) (!(((/* implicit */_Bool) max((arr_5 [i_2 - 1] [i_2 - 1]), (((/* implicit */int) var_1))))))));
        arr_12 [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2 + 2] [i_2]))) - (((((arr_10 [(signed char)16]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) - (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_4 [i_2] [i_2 + 2])))))))));
        var_16 = ((/* implicit */_Bool) var_6);
    }
}
