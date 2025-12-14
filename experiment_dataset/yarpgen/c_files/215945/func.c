/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215945
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
    var_13 = ((/* implicit */unsigned short) (~(((((/* implicit */int) max((((/* implicit */signed char) var_10)), (var_7)))) * ((~(((/* implicit */int) var_10))))))));
    var_14 *= ((/* implicit */unsigned long long int) var_5);
    var_15 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) var_12)), (((((/* implicit */_Bool) var_11)) ? ((+(1325411496272523584ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (var_12) : (((/* implicit */int) var_11)))))))));
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_7)) ? (var_6) : (1325411496272523584ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)0)) : (var_12))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) (signed char)(-127 - 1))) : ((~(((/* implicit */int) var_3)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 8; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((((/* implicit */int) var_7)) <= (((/* implicit */int) (unsigned short)65532)));
        var_17 = ((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? ((+(arr_0 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [(short)6] [i_0 + 1]))));
    }
    for (unsigned char i_1 = 1; i_1 < 8; i_1 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) arr_5 [i_1])) : (var_6))))) ? (((((/* implicit */_Bool) arr_5 [i_1 + 1])) ? (((/* implicit */long long int) var_12)) : (arr_5 [i_1 + 2]))) : (((/* implicit */long long int) (+(((/* implicit */int) ((arr_4 [(short)9]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1 + 2] [i_1])))))))))));
        var_19 = ((/* implicit */unsigned int) (-(1325411496272523600ULL)));
    }
}
