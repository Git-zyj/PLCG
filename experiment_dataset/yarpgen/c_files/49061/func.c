/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49061
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
    var_20 = ((/* implicit */signed char) max(((-(-9208070916683017393LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-34)) ? ((+(((/* implicit */int) var_0)))) : (var_14))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            var_21 = (!(((((/* implicit */int) arr_3 [i_1] [i_1 + 2] [i_1])) < (((/* implicit */int) arr_3 [i_1] [i_1 + 2] [i_1])))));
            var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) var_19)) - (arr_4 [i_0]))))));
        }
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            var_23 *= arr_8 [i_0] [2U];
            var_24 = ((/* implicit */short) (!(((/* implicit */_Bool) ((signed char) (unsigned char)61)))));
            var_25 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [(unsigned short)0] [i_0]))))), ((~(((/* implicit */int) (signed char)49))))))) ? (((/* implicit */unsigned long long int) ((var_4) & (((/* implicit */long long int) var_8))))) : (var_9)));
            var_26 = ((/* implicit */_Bool) max(((+(arr_7 [i_0] [i_2 + 1] [i_0]))), (((/* implicit */int) max((((/* implicit */unsigned char) arr_1 [i_0] [i_2 + 1])), (var_0))))));
        }
        var_27 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)139), (((/* implicit */unsigned char) (_Bool)0)))))) : (((((/* implicit */_Bool) var_6)) ? (var_18) : (((/* implicit */unsigned int) var_12))))))) ? (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0))))), (var_7))) : (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (67104768U)))) ? (((/* implicit */int) arr_5 [i_0] [i_0])) : (min((arr_7 [i_0] [i_0] [i_0]), (((/* implicit */int) arr_5 [i_0] [9])))))))));
        var_28 = ((/* implicit */_Bool) max((var_19), (((/* implicit */unsigned short) var_5))));
        var_29 = ((/* implicit */long long int) 67104768U);
    }
    /* vectorizable */
    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 4) 
    {
        var_30 = ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_3])) ? ((+(18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_3] [i_3] [i_3])))));
        var_31 = ((/* implicit */long long int) (!(arr_10 [i_3] [i_3])));
        var_32 &= ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)0))))) >> (((/* implicit */int) var_3)));
    }
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_33 = ((/* implicit */_Bool) ((unsigned int) (+((-9223372036854775807LL - 1LL)))));
        var_34 = ((/* implicit */int) var_1);
    }
    var_35 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((short) var_18)))));
}
