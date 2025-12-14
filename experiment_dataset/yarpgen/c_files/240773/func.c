/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240773
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240773 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240773
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) /* same iter space */
    {
        arr_4 [(short)16] = ((/* implicit */unsigned char) (_Bool)0);
        var_20 = ((/* implicit */int) ((unsigned long long int) var_16));
        arr_5 [i_0] [(short)15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -8175931383271117160LL)) ? (((/* implicit */int) (unsigned char)123)) : (((/* implicit */int) (signed char)-116))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_0 [i_0]))));
    }
    for (long long int i_1 = 0; i_1 < 20; i_1 += 1) /* same iter space */
    {
        var_21 = max((4398046511096LL), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-116)) ? (951564217U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-32742)))))));
        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_7 [i_1])) : (((/* implicit */int) arr_7 [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_2 [i_1])))) : (((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */unsigned long long int) 9223372036854775795LL)) : (10714573640812881339ULL)))));
        var_23 *= ((/* implicit */signed char) max((5631371207073464113LL), (((/* implicit */long long int) (signed char)116))));
    }
    /* LoopSeq 1 */
    for (int i_2 = 1; i_2 < 21; i_2 += 1) 
    {
        arr_10 [i_2] = ((/* implicit */unsigned char) 4285532322U);
        arr_11 [i_2] = 4398046511096LL;
        arr_12 [i_2] = ((/* implicit */long long int) (+(((unsigned int) ((((var_2) + (2147483647))) >> (((((/* implicit */int) (signed char)-127)) + (155))))))));
    }
    var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) var_11))));
    var_25 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) 10714573640812881317ULL))) ? (((((/* implicit */_Bool) (short)1020)) ? (((/* implicit */unsigned int) var_2)) : (3343403078U))) : (((/* implicit */unsigned int) min((((/* implicit */int) var_6)), (var_4))))))) ? (var_7) : (((/* implicit */unsigned long long int) (~(var_4))))));
}
