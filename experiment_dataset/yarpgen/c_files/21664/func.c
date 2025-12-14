/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21664
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
    var_13 = ((/* implicit */unsigned char) ((((-798857006) + (2147483647))) >> (((/* implicit */int) (_Bool)1))));
    var_14 -= ((/* implicit */unsigned short) 1607119669611842411ULL);
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */int) var_10);
        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned int) var_0)) : (var_12)))) && (((/* implicit */_Bool) min((((/* implicit */unsigned short) var_1)), (arr_1 [i_0])))))))));
        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) arr_0 [i_0]))));
    }
    for (unsigned short i_1 = 0; i_1 < 22; i_1 += 1) /* same iter space */
    {
        var_18 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)101)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) ((244812097) != (((/* implicit */int) var_3)))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_3 [i_1])), (arr_1 [i_1])))) ? ((~(var_11))) : (max((((/* implicit */unsigned int) (short)-3596)), (4294967286U))))))));
        arr_5 [(signed char)18] = min((var_12), (((/* implicit */unsigned int) ((short) min((((/* implicit */long long int) arr_0 [i_1])), (arr_2 [i_1]))))));
        arr_6 [i_1] [i_1] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) (+(arr_4 [i_1])))) ? (((2147483642) / (((/* implicit */int) (short)-3585)))) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_1]))))))));
        arr_7 [i_1] = ((/* implicit */int) (signed char)114);
    }
    for (unsigned short i_2 = 0; i_2 < 22; i_2 += 1) /* same iter space */
    {
        var_19 *= ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (var_4) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_2])) ? ((~(((/* implicit */int) (unsigned char)237)))) : (((/* implicit */int) (signed char)72)))))));
        var_20 = ((/* implicit */unsigned short) (signed char)20);
    }
    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [17LL])) ^ (((/* implicit */int) ((short) 244812097)))))) || (((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) 2147483642)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_12))))))))));
        arr_13 [i_3] [i_3] = ((/* implicit */short) (((+(arr_10 [i_3] [i_3]))) < (((/* implicit */int) var_3))));
        var_22 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned long long int) var_9))))) ? ((-(arr_11 [i_3]))) : ((((_Bool)1) ? (-1658629159) : (((/* implicit */int) (unsigned char)234))))))) ? (min((((/* implicit */unsigned int) (_Bool)1)), (var_7))) : (((/* implicit */unsigned int) max((-244812076), ((-(((/* implicit */int) arr_0 [i_3])))))))));
        arr_14 [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65524)) * (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1)) ? (2200830156573647489LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_3])))))))))));
    }
}
