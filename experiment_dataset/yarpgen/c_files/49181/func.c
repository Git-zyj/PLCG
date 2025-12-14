/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49181
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
    for (int i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        var_18 = arr_1 [i_0 - 2];
        var_19 = ((/* implicit */unsigned short) (-(((((((((/* implicit */_Bool) (short)-19686)) ? (((/* implicit */int) (short)-19686)) : (((/* implicit */int) (unsigned short)15503)))) + (2147483647))) >> (((/* implicit */int) ((802016272U) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)-19686))))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_1 = 4; i_1 < 15; i_1 += 2) 
        {
            var_20 = ((/* implicit */int) (unsigned short)27664);
            var_21 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-78)) ? (arr_2 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5)))))) ? (11610555128264428217ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)19685)))));
            var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (+(((((/* implicit */_Bool) arr_2 [i_1])) ? (6) : (((/* implicit */int) (unsigned short)65535)))))))));
        }
        var_23 = ((/* implicit */unsigned char) -6);
    }
    for (unsigned char i_2 = 1; i_2 < 24; i_2 += 2) 
    {
        var_24 -= ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)14843)) ? (((/* implicit */int) (signed char)111)) : (((/* implicit */int) arr_7 [i_2] [i_2]))))) ? ((+(((/* implicit */int) arr_7 [i_2] [i_2])))) : (((((/* implicit */int) (unsigned char)253)) - (((/* implicit */int) (short)14852)))))) == ((~(min((arr_8 [i_2]), (((/* implicit */int) (signed char)(-127 - 1)))))))));
        var_25 += ((/* implicit */short) (unsigned char)55);
        var_26 = ((/* implicit */int) ((((/* implicit */_Bool) (short)-14853)) ? (min((((/* implicit */unsigned long long int) arr_6 [i_2])), (((((/* implicit */_Bool) -7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-126))) : (16ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5251)))));
    }
    var_27 = ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)126)) && (((-6) > (((/* implicit */int) var_2))))))) > (((/* implicit */int) var_4)));
}
