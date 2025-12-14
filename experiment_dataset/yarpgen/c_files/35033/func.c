/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35033
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
    var_20 *= ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) ((unsigned int) var_17))) ? (((/* implicit */int) (unsigned char)247)) : ((~(((/* implicit */int) var_10)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (!(((/* implicit */_Bool) 1837640728U)))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_2 = 2; i_2 < 7; i_2 += 2) 
                {
                    var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((((arr_0 [i_2]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [1U]))))) < (((/* implicit */unsigned int) ((((/* implicit */int) var_10)) % (((/* implicit */int) (unsigned char)224))))))))));
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 3; i_3 < 9; i_3 += 3) /* same iter space */
                    {
                        var_23 ^= ((short) arr_1 [i_2 + 3] [i_2 + 3]);
                        arr_11 [i_1] [i_1] [(unsigned char)4] = ((/* implicit */unsigned long long int) arr_2 [i_1] [i_2 - 1]);
                        /* LoopSeq 2 */
                        for (short i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(1837640726U)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_4])) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_4] [i_1]))))))));
                            var_25 = ((/* implicit */unsigned short) (+(arr_14 [i_1] [i_2 - 2] [i_3] [i_4] [i_4])));
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 1) 
                        {
                            var_26 = ((/* implicit */unsigned short) (+(1129940094U)));
                            var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-10)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_17 [i_5]))))))))));
                            arr_18 [i_1] [i_1] [i_2] [(unsigned short)9] = ((/* implicit */short) ((arr_8 [i_0] [i_2 - 1] [i_2] [i_1]) <= (arr_8 [i_0] [i_2 + 2] [i_3] [i_1])));
                            var_28 -= (~(((((/* implicit */unsigned int) ((/* implicit */int) (short)9668))) | (var_1))));
                        }
                    }
                    for (unsigned short i_6 = 3; i_6 < 9; i_6 += 3) /* same iter space */
                    {
                        var_29 *= ((5607600529769169404ULL) % (((/* implicit */unsigned long long int) 1837640726U)));
                        var_30 -= (+(663478690U));
                        var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_1] [i_2 + 1] [i_2] [i_2])) ? (arr_8 [i_1] [i_2 + 1] [8ULL] [i_2]) : (arr_16 [i_2] [i_2 + 1] [i_2] [i_2] [i_2 - 1] [i_6 + 1] [i_2]))))));
                    }
                    for (unsigned char i_7 = 2; i_7 < 8; i_7 += 1) 
                    {
                        var_32 = ((/* implicit */short) min((var_32), (((short) arr_10 [i_7 + 1] [i_2 + 2]))));
                        /* LoopSeq 2 */
                        for (unsigned char i_8 = 0; i_8 < 10; i_8 += 3) 
                        {
                            var_33 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_15 [i_1] [i_2 + 3] [i_7 - 1] [i_2 + 3] [i_1] [i_1])) + ((+(18446744073709551615ULL)))));
                            arr_29 [i_0] [i_2] &= ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_1] [i_1] [i_1] [i_1] [i_1] [i_2]))) : (arr_8 [i_1] [i_2 - 2] [(unsigned short)2] [i_2])));
                        }
                        for (short i_9 = 0; i_9 < 10; i_9 += 2) 
                        {
                            var_34 = ((/* implicit */unsigned int) (short)-20739);
                            var_35 = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_17 [i_1])) * (((/* implicit */int) arr_9 [i_1])))) < (((/* implicit */int) ((arr_13 [i_0] [i_1] [i_2 + 3] [(unsigned char)2] [i_0]) == (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_9] [i_7] [i_2 + 2] [i_1]))))))));
                            var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_25 [i_0] [i_0] [i_1] [i_0] [i_2] [i_9] [6U])) ? (((/* implicit */int) arr_25 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_25 [i_0] [i_0] [i_1] [i_2] [1ULL] [i_7] [i_9]))));
                            var_37 += ((/* implicit */short) (+(((/* implicit */int) arr_25 [i_0] [i_0] [i_9] [i_2] [i_7 + 2] [i_7] [i_9]))));
                        }
                    }
                    arr_32 [i_1] = ((/* implicit */unsigned int) ((unsigned long long int) ((unsigned short) var_16)));
                    /* LoopNest 2 */
                    for (unsigned int i_10 = 1; i_10 < 9; i_10 += 3) 
                    {
                        for (short i_11 = 0; i_11 < 10; i_11 += 3) 
                        {
                            {
                                var_38 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_34 [i_2] [i_2] [i_2 - 1] [i_10] [i_1]))));
                                var_39 = var_14;
                                var_40 = ((/* implicit */unsigned short) arr_2 [i_2] [i_2]);
                            }
                        } 
                    } 
                    arr_38 [i_2] [i_2] [i_2] |= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) arr_25 [i_0] [i_0] [i_2] [i_0] [i_0] [i_0] [(short)6]))) ? (((((/* implicit */_Bool) arr_21 [i_2] [i_2] [0U] [(short)2] [i_1] [i_2])) ? (arr_6 [i_0]) : (arr_15 [i_0] [i_1] [i_1] [i_2] [6U] [i_2]))) : (arr_22 [i_2 + 3] [(short)8] [i_2] [i_2 + 2])));
                }
                for (unsigned int i_12 = 3; i_12 < 7; i_12 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_13 = 2; i_13 < 8; i_13 += 2) 
                    {
                        for (unsigned int i_14 = 0; i_14 < 10; i_14 += 1) 
                        {
                            {
                                var_41 = ((/* implicit */short) max((var_14), (((/* implicit */unsigned int) ((unsigned short) max((((/* implicit */unsigned long long int) arr_35 [i_0] [i_1] [i_0] [i_13 - 2] [i_1] [i_14])), (18446744073709551607ULL)))))));
                                var_42 = var_16;
                            }
                        } 
                    } 
                    arr_49 [i_0] [i_12 - 1] [5U] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_30 [i_0] [i_1] [i_1] [i_12])) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_12] [i_1] [i_0] [i_0]))))), (((/* implicit */unsigned int) (short)-20732)))))));
                }
            }
        } 
    } 
    var_43 = ((/* implicit */short) ((((/* implicit */_Bool) ((((unsigned long long int) var_17)) * (((/* implicit */unsigned long long int) (-(var_2))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) var_5)))))) : (((/* implicit */int) (short)-29075))));
    var_44 = ((/* implicit */unsigned long long int) var_13);
}
