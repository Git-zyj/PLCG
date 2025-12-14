/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203988
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
    var_15 = ((/* implicit */short) ((var_3) - (((/* implicit */long long int) ((/* implicit */int) ((short) min((281474976710655LL), (((/* implicit */long long int) (unsigned short)53325)))))))));
    var_16 = ((/* implicit */unsigned short) ((signed char) (!(((/* implicit */_Bool) var_4)))));
    var_17 += ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */int) var_6)) / (((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) var_7)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_11))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (-281474976710644LL))))), (((/* implicit */long long int) var_11))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-9252))) : (-281474976710655LL)))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))));
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_0] [i_0])) + (((/* implicit */int) arr_1 [i_0] [i_0]))));
    }
    for (unsigned char i_1 = 0; i_1 < 12; i_1 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */int) arr_5 [i_1])) & (((/* implicit */int) arr_5 [i_1])))));
        arr_7 [i_1] = (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) arr_6 [i_1]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1]))) : (-9223372036854775786LL))));
        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) arr_0 [(unsigned short)10]))));
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) max((arr_2 [i_1] [i_1]), (((/* implicit */unsigned short) arr_0 [i_1]))))) : (((/* implicit */int) min((arr_5 [i_1]), (((/* implicit */short) (unsigned char)47)))))));
    }
    var_22 |= ((/* implicit */signed char) (-(((/* implicit */int) var_1))));
}
