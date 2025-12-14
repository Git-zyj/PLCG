/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202295
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
    var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) ((max((((((/* implicit */int) (signed char)-9)) + (((/* implicit */int) var_5)))), (((/* implicit */int) (unsigned char)60)))) >> (((((/* implicit */int) (unsigned char)48)) - (48))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_0 = 3; i_0 < 7; i_0 += 4) 
    {
        arr_2 [i_0] = ((var_0) < (((/* implicit */unsigned int) ((int) 8537925904183176703LL))));
        var_13 = ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)));
        var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) (!(((/* implicit */_Bool) var_3)))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_0 + 3]))));
    }
    for (short i_1 = 1; i_1 < 10; i_1 += 3) 
    {
        var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((((/* implicit */unsigned int) max((((((/* implicit */int) (unsigned char)72)) | (((/* implicit */int) arr_4 [i_1])))), (((/* implicit */int) (unsigned char)63))))) < (((unsigned int) arr_4 [i_1 + 1])))))));
        var_16 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_4 [i_1 - 1])) ? (((/* implicit */int) arr_4 [i_1 + 2])) : (((/* implicit */int) var_4))))));
        var_17 -= ((/* implicit */unsigned int) 1689433575130482201ULL);
    }
    for (signed char i_2 = 0; i_2 < 23; i_2 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_2])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)212))) * (((((/* implicit */_Bool) (unsigned char)25)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)39))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((0LL), (((/* implicit */long long int) (unsigned char)71))))) || (((/* implicit */_Bool) arr_7 [0LL]))))))));
        arr_8 [2] &= ((/* implicit */signed char) ((((((min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) ((((((/* implicit */int) arr_7 [i_2])) + (2147483647))) >> (((-587638464) + (587638472)))))))) + (9223372036854775807LL))) + (9223372036854775807LL))) >> (((((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_6 [10LL])))) : (((/* implicit */int) min((arr_6 [2U]), (((/* implicit */short) (unsigned char)161))))))) + (17663)))));
    }
    /* vectorizable */
    for (signed char i_3 = 0; i_3 < 23; i_3 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)32766))));
        var_20 -= ((/* implicit */unsigned short) (unsigned char)21);
        arr_13 [i_3] = ((/* implicit */unsigned char) ((short) arr_12 [i_3]));
        arr_14 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)97)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)20))) : (9223372036854775807LL)));
    }
    var_21 -= ((/* implicit */unsigned char) ((var_6) == (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8796093022207ULL)) ? (497891766) : (var_11)))) && (((/* implicit */_Bool) 3906129188395890473LL)))))));
    var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_10))) | (9223372036854775807LL))))));
}
