/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193363
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
    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) var_12))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (short)29372)), (7272945992343080366LL))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_4] [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (short)-13300)) : (((/* implicit */int) (short)-32763))));
                                var_19 |= ((/* implicit */unsigned char) min((6688398184118149238ULL), (((/* implicit */unsigned long long int) (signed char)3))));
                                var_20 &= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (-1775700728) : (((/* implicit */int) arr_8 [i_0] [i_2] [i_4]))))) ? (((/* implicit */long long int) 400837833)) : (2695730724743554780LL))), (((/* implicit */long long int) arr_4 [i_1]))));
                                arr_15 [i_0] [i_1] [i_0] [i_4] [i_0] [(unsigned char)10] [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-((-(((/* implicit */int) (unsigned short)65535)))))))));
                                var_21 = ((/* implicit */unsigned short) ((15892327505755001676ULL) >> (((5170395367709255141ULL) - (5170395367709255095ULL)))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned char i_5 = 0; i_5 < 11; i_5 += 3) 
                    {
                        arr_18 [i_0] [i_5] [i_2] [i_5] = ((/* implicit */long long int) (-((-(((((/* implicit */_Bool) 2147483647)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)103)))))))));
                        arr_19 [i_0] [i_1] [i_5] [i_5] = ((/* implicit */long long int) (-(var_5)));
                        arr_20 [i_5] [i_2] [i_1] [i_5] = ((/* implicit */long long int) var_4);
                        arr_21 [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 939353768U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))));
                        arr_22 [i_0] [i_5] [4] [i_5] [i_1] = ((/* implicit */unsigned char) (-(arr_7 [i_5] [i_2] [i_1] [(_Bool)1])));
                    }
                    /* LoopSeq 4 */
                    for (long long int i_6 = 2; i_6 < 10; i_6 += 2) 
                    {
                        arr_25 [i_0] [i_2] [i_2] [i_6 - 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((-6012328843925091000LL), (((/* implicit */long long int) 1065875314U))))) ? (((/* implicit */int) ((((-7435032972143702655LL) <= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) && (arr_6 [i_0] [i_6 - 2])))) : (((/* implicit */int) ((((/* implicit */_Bool) (short)-22740)) && ((!(((/* implicit */_Bool) (short)-4)))))))));
                        var_22 = ((/* implicit */unsigned short) 939353768U);
                    }
                    for (unsigned char i_7 = 0; i_7 < 11; i_7 += 2) 
                    {
                        arr_28 [(short)5] [i_1] [(short)5] [i_1] = ((/* implicit */_Bool) arr_7 [i_0] [i_1] [2U] [i_1]);
                        var_23 = ((/* implicit */long long int) min((((/* implicit */unsigned int) (short)-28742)), (1255574852U)));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_8 = 2; i_8 < 10; i_8 += 4) 
                        {
                            var_24 -= (~(((/* implicit */int) (short)25693)));
                            var_25 = ((/* implicit */short) (~(((/* implicit */int) var_10))));
                            arr_31 [i_0] [9ULL] [i_1] [i_7] [i_8 - 2] &= ((/* implicit */int) arr_23 [0U] [0U] [i_2] [i_7]);
                            var_26 = ((/* implicit */unsigned char) ((arr_27 [i_0] [i_0] [i_1] [(_Bool)1] [i_7] [(_Bool)1]) - (arr_27 [i_0] [1U] [i_0] [(unsigned char)6] [i_0] [i_0])));
                        }
                        for (long long int i_9 = 3; i_9 < 10; i_9 += 3) 
                        {
                            var_27 = ((/* implicit */unsigned long long int) arr_0 [i_0]);
                            var_28 = ((/* implicit */unsigned short) arr_32 [i_1]);
                            arr_36 [9U] [i_0] [i_1] [i_2] [i_0] [(unsigned short)2] [(_Bool)1] = ((/* implicit */unsigned char) arr_10 [i_0] [i_1] [3LL] [3LL] [3LL] [i_1]);
                        }
                    }
                    for (long long int i_10 = 0; i_10 < 11; i_10 += 4) 
                    {
                        var_29 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_37 [7LL] [i_1] [i_2] [i_10])) ? (min((9013909407570369824LL), (((/* implicit */long long int) 3434709474U)))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_24 [i_1] [(short)4] [i_10]))))))) >> (((/* implicit */int) ((((/* implicit */_Bool) 134802520U)) || (((/* implicit */_Bool) var_2)))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            arr_43 [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)32))));
                            arr_44 [i_11] [i_10] [i_2] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)199))) == (4294967295U)));
                        }
                        var_30 = ((/* implicit */unsigned short) var_4);
                    }
                    /* vectorizable */
                    for (short i_12 = 3; i_12 < 8; i_12 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (int i_13 = 0; i_13 < 11; i_13 += 2) 
                        {
                            arr_51 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_2] [i_2])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((/* implicit */int) arr_23 [i_0] [2U] [i_2] [i_12]))));
                            var_31 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_16 [i_0] [i_2] [(unsigned short)6] [i_13]))));
                        }
                        var_32 ^= arr_13 [i_12 + 3] [i_12] [3ULL] [i_12] [i_12 + 1];
                        arr_52 [i_0] [i_1] [i_1] [i_12] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_0] [i_0] [i_0]))) & (((unsigned int) 7632936484323230635LL))));
                        arr_53 [i_12] [i_2] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) arr_29 [i_12 + 3]))));
                        var_33 ^= ((/* implicit */unsigned char) (unsigned short)3);
                    }
                }
            } 
        } 
    } 
    var_34 = (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_3)))) ^ (min((var_7), (((/* implicit */unsigned int) var_0))))))));
    var_35 = ((/* implicit */unsigned char) var_2);
}
