/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225223
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned long long int) (~(max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : ((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_0)))))))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                arr_15 [i_4] [i_3] [i_2] [1ULL] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((var_9) - (((/* implicit */int) (signed char)29)))) >> (8LL)))) & (((((((/* implicit */_Bool) (signed char)-117)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-3591166518618139275LL))) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_1)) == (((/* implicit */int) var_4))))))))));
                                var_12 ^= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned char)6)) && (((/* implicit */_Bool) arr_11 [i_1] [(unsigned char)3] [i_1 - 1] [i_1] [i_1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [7U] [i_1 + 1]))))) : (max((var_9), (((/* implicit */int) (unsigned char)215))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_5 = 0; i_5 < 19; i_5 += 4) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 2) 
                    {
                        for (long long int i_7 = 2; i_7 < 18; i_7 += 3) 
                        {
                            {
                                arr_25 [i_7] [i_7] = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) * (arr_2 [i_0] [i_6])))) ? (arr_18 [i_7 + 1]) : (((/* implicit */long long int) ((3042535761U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)34)))))))) > (((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_13 [i_7] [(unsigned short)0] [15])))) ? (((((/* implicit */_Bool) arr_2 [i_6] [i_7])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_3)))) : (((((/* implicit */int) (short)444)) - (var_5))))))));
                                arr_26 [i_0] [(signed char)17] [i_5] [i_5] [i_5] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((var_0) ? (6793360632979856369ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0]))))) + (0ULL)))) ? ((-(((/* implicit */int) var_4)))) : (((/* implicit */int) ((max((arr_19 [i_7] [i_6] [i_5] [i_1] [(signed char)1]), (((/* implicit */unsigned long long int) 9063801290926473446LL)))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)189))))))));
                            }
                        } 
                    } 
                } 
                arr_27 [i_0] = ((/* implicit */int) var_10);
            }
        } 
    } 
    var_13 ^= ((/* implicit */int) var_4);
    /* LoopNest 2 */
    for (unsigned int i_8 = 0; i_8 < 18; i_8 += 1) 
    {
        for (short i_9 = 0; i_9 < 18; i_9 += 2) 
        {
            {
                var_14 = ((/* implicit */unsigned char) ((signed char) (+(((/* implicit */int) ((signed char) -3685632513968984414LL))))));
                var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) (signed char)124)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)251))) : (-7508192627341353777LL))))) ? ((~(((((/* implicit */_Bool) (signed char)29)) ? (18ULL) : (18446744073709551607ULL))))) : (((((/* implicit */_Bool) min(((unsigned char)85), (((/* implicit */unsigned char) (signed char)-112))))) ? ((~(18ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))))))));
            }
        } 
    } 
    var_16 &= ((/* implicit */unsigned short) (((+(((-5684231212301712559LL) / (8575188126176739317LL))))) & (((/* implicit */long long int) ((/* implicit */int) var_10)))));
    var_17 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)12)) ? (((/* implicit */int) (signed char)87)) : (-1120293376)))) ? (((/* implicit */unsigned long long int) 9223372036854775805LL)) : (18446744073709551615ULL)));
}
