/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219594
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
    var_15 -= ((/* implicit */signed char) ((((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)86))) : (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) ^ (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)228)))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            for (long long int i_2 = 4; i_2 < 18; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        arr_8 [i_0] [15U] [(unsigned short)13] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((max((var_7), (((/* implicit */unsigned long long int) 131941395333120LL)))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_2)))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))) : (max((var_13), (((/* implicit */long long int) arr_7 [i_3] [i_2 - 3] [19U] [1LL]))))));
                        arr_9 [i_0] [i_1] [i_2 + 2] [i_0] = ((/* implicit */unsigned char) arr_4 [i_0] [i_1 + 2] [i_1 + 2] [i_2 + 2]);
                    }
                    /* vectorizable */
                    for (unsigned char i_4 = 0; i_4 < 21; i_4 += 1) 
                    {
                        var_16 = ((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_1 - 1])) >> (((((/* implicit */int) arr_0 [i_1 - 2])) - (60)))));
                        var_17 = var_5;
                        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (-(arr_5 [i_2 + 3] [i_1 - 1] [i_1 - 1] [i_1 + 3]))))));
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_5 = 0; i_5 < 21; i_5 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_6 = 2; i_6 < 19; i_6 += 1) 
                        {
                            arr_17 [i_0] [i_1] [i_2] [i_0] [i_6 - 2] = ((/* implicit */int) ((arr_5 [i_1 - 2] [i_1 + 4] [i_2] [i_2 - 1]) ^ (((/* implicit */long long int) ((/* implicit */int) var_14)))));
                            var_19 = ((/* implicit */long long int) max((var_19), ((~(arr_4 [i_0] [i_0] [i_0] [i_0])))));
                            var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_8)) % (((/* implicit */int) (unsigned char)27)))))));
                            var_21 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_6 [i_1 + 2] [i_6 - 1] [i_2] [i_5]))));
                        }
                        var_22 ^= ((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_1 + 1]))));
                        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_1 + 1] [i_2] [i_5])) ? (((/* implicit */int) arr_12 [i_5] [5] [i_1] [i_0])) : (((/* implicit */int) arr_12 [i_5] [i_2 - 4] [i_1] [i_0]))))) ? (((((/* implicit */_Bool) arr_16 [i_0] [i_1 - 1] [2U] [i_1 - 2] [i_2] [i_2 - 1] [i_5])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_16 [i_0] [i_1] [i_1 - 1] [i_2 + 1] [i_2 + 3] [i_2 + 1] [i_5])))) : (((/* implicit */int) arr_3 [i_0] [i_0]))));
                        var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)228)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (arr_4 [i_5] [i_2] [i_1 + 3] [(signed char)11])))) ? (((/* implicit */int) (unsigned char)229)) : (((/* implicit */int) ((var_3) < (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))))))));
                    }
                    var_25 = ((/* implicit */int) (((-(var_7))) ^ (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_16 [i_0] [5U] [5LL] [i_1 + 1] [i_2] [i_0] [i_2 - 4])))))));
                    /* LoopSeq 3 */
                    for (signed char i_7 = 1; i_7 < 20; i_7 += 2) 
                    {
                        arr_20 [i_0] = ((/* implicit */unsigned short) (((!(((((/* implicit */_Bool) (unsigned char)24)) && (((/* implicit */_Bool) var_14)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_7])) ? (((/* implicit */int) arr_13 [i_0] [i_1 + 2] [i_0])) : (((/* implicit */int) arr_19 [i_7 + 1] [i_7] [i_2] [i_1 - 2] [i_1 - 2] [i_0]))))) ? (((long long int) var_1)) : (((/* implicit */long long int) ((/* implicit */int) ((var_5) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)27))))))))) : (((/* implicit */long long int) ((/* implicit */int) ((max((var_13), (((/* implicit */long long int) (unsigned char)228)))) < (((/* implicit */long long int) ((((/* implicit */_Bool) 743306026693222589LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_9))))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_8 = 0; i_8 < 21; i_8 += 4) 
                        {
                            var_26 |= var_13;
                            var_27 = (+((-(arr_4 [i_0] [i_1 + 2] [i_2] [i_1 + 1]))));
                            var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) ((((/* implicit */int) arr_16 [i_7 + 1] [i_2 + 3] [i_2 + 3] [i_2 + 1] [i_1 - 2] [i_0] [i_0])) & (((/* implicit */int) var_12)))))));
                        }
                        var_29 -= ((/* implicit */long long int) (((~(((4294967295U) | (((/* implicit */unsigned int) var_4)))))) & (((((/* implicit */unsigned int) ((arr_11 [i_7 + 1] [i_7] [(_Bool)1] [18LL] [i_0]) ^ (((/* implicit */int) var_12))))) | (min((var_5), (((/* implicit */unsigned int) var_0))))))));
                        /* LoopSeq 2 */
                        for (long long int i_9 = 1; i_9 < 20; i_9 += 2) 
                        {
                            var_30 = ((/* implicit */signed char) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) / (var_7))) >= (((/* implicit */unsigned long long int) var_9)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_13), (((/* implicit */long long int) 4278213461U))))) ? (((/* implicit */int) ((var_11) > (((/* implicit */long long int) arr_21 [i_0] [i_0] [i_2 + 1] [i_7]))))) : (((/* implicit */int) ((var_11) >= (((/* implicit */long long int) 2147483648U)))))))) : (max((((/* implicit */unsigned long long int) arr_0 [i_9 + 1])), (arr_15 [7LL] [i_7 + 1] [14] [i_2] [i_1 - 1] [(_Bool)0] [i_0])))));
                            arr_26 [i_9] [i_0] [(unsigned char)3] [i_0] [i_0] = ((/* implicit */long long int) min((var_10), (((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */int) arr_12 [i_0] [(_Bool)1] [11LL] [i_9])) != (((/* implicit */int) var_0))))))))));
                            var_31 = (~(min((((/* implicit */long long int) var_5)), (arr_22 [i_9 + 1] [i_1 + 1] [i_9 + 1] [i_1 + 1] [i_9 - 1] [i_7 - 1] [i_1 + 1]))));
                            var_32 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) arr_11 [i_0] [i_1 - 2] [19LL] [i_7 + 1] [16U])) : (536838144U))), (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (1990511989U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_2] [i_1] [i_2] [i_1] [i_2] [i_1 + 4])))))))) ? (((((/* implicit */_Bool) max((arr_3 [i_0] [i_1]), (((/* implicit */unsigned char) var_2))))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_24 [i_9 + 1] [i_9 + 1] [i_7] [i_2] [i_1 + 4] [i_0] [i_0]) < (((/* implicit */long long int) ((/* implicit */int) (signed char)-121))))))) : (var_13))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [16LL] [(unsigned char)8] [17U] [17U] [i_9 - 1])) ? (((/* implicit */unsigned long long int) arr_25 [i_2 - 1] [i_7 - 1] [i_2 - 1] [i_1])) : (var_7)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 0)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)33660)))))) : (min((arr_24 [i_2 - 3] [i_1] [3LL] [i_7 - 1] [i_9 + 1] [i_1] [i_7 + 1]), (((/* implicit */long long int) var_12))))))));
                            var_33 = ((((/* implicit */_Bool) min((arr_21 [i_7 - 1] [i_0] [i_0] [3LL]), (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_7] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)27))) : (var_13)))) ? (((/* implicit */long long int) ((/* implicit */int) ((3758129160U) < (var_10))))) : (((((/* implicit */_Bool) arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [(signed char)15] [(signed char)15])) ? (var_13) : (((/* implicit */long long int) var_9)))))) : (((/* implicit */long long int) (-(((((/* implicit */int) (unsigned char)27)) >> (((((/* implicit */int) arr_19 [i_9 - 1] [i_7] [i_7] [i_2] [i_1] [i_0])) - (24972)))))))));
                        }
                        for (unsigned long long int i_10 = 3; i_10 < 20; i_10 += 3) 
                        {
                            arr_29 [9] [i_10] [i_2] [i_7 + 1] [18U] [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((var_13) | (((/* implicit */long long int) var_9))))))))) / (arr_22 [i_10] [(signed char)17] [(signed char)17] [i_2] [8U] [i_0] [i_0])));
                            arr_30 [i_0] [i_1] [19LL] [i_2 - 1] [i_7 - 1] [i_0] = (!((!(((/* implicit */_Bool) ((arr_21 [i_1] [i_0] [i_0] [i_10 - 1]) + (((/* implicit */int) var_2))))))));
                            var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) 7U)) ? (((((/* implicit */_Bool) 16352U)) ? (((/* implicit */int) (unsigned char)27)) : (((/* implicit */int) arr_23 [i_0] [i_1 + 1] [i_2] [i_2] [11ULL] [i_10 - 3] [i_7])))) : (((/* implicit */int) arr_3 [i_2] [i_1])))))))));
                            arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (((((~(arr_4 [i_0] [(signed char)8] [i_1 + 2] [i_0]))) == (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_19 [i_2 + 3] [i_7 + 1] [i_2 - 1] [i_2 + 3] [i_1] [i_0]))) <= (var_11))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) < (var_10))))) < (((((/* implicit */_Bool) var_8)) ? (var_13) : (((/* implicit */long long int) var_10)))))))) : ((-(((var_9) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))));
                        }
                    }
                    for (unsigned char i_11 = 1; i_11 < 19; i_11 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_12 = 1; i_12 < 19; i_12 += 4) 
                        {
                            var_35 = ((/* implicit */unsigned int) min((var_35), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) 1990511989U))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))) : (((((/* implicit */_Bool) arr_37 [i_0] [i_12 - 1] [i_2] [i_2] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1] [i_1]))) : (arr_33 [i_0] [i_12])))))) != ((-(((arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) / (((/* implicit */unsigned long long int) var_10)))))))))));
                            var_36 = ((/* implicit */unsigned int) max((((/* implicit */int) max((var_14), (var_0)))), (min((((((/* implicit */_Bool) arr_6 [i_12] [i_11] [i_1] [18U])) ? (((/* implicit */int) (unsigned short)33660)) : (((/* implicit */int) var_2)))), (((/* implicit */int) arr_32 [i_0] [i_1] [11U] [i_12 - 1]))))));
                            var_37 += ((/* implicit */unsigned short) var_10);
                            arr_38 [i_0] [i_12 - 1] = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (var_11)))), (arr_27 [i_1 + 4] [i_12 - 1] [i_12 - 1] [i_0] [i_12 + 2] [i_2] [i_0]))) - (((/* implicit */unsigned long long int) var_4))));
                        }
                        var_38 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_12 [i_11 + 2] [i_2] [i_1] [i_0]))));
                        var_39 = ((/* implicit */long long int) arr_23 [i_0] [i_1 + 1] [i_1] [(_Bool)1] [i_2 - 3] [9LL] [i_1 + 1]);
                        var_40 = ((/* implicit */unsigned int) max((var_40), (((/* implicit */unsigned int) var_8))));
                    }
                    /* vectorizable */
                    for (unsigned int i_13 = 3; i_13 < 19; i_13 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_14 = 2; i_14 < 20; i_14 += 1) 
                        {
                            var_41 = ((arr_24 [i_14 - 1] [i_1 + 3] [9LL] [i_0] [i_0] [i_0] [i_0]) ^ (((/* implicit */long long int) var_4)));
                            var_42 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [(signed char)6] [i_1 + 2] [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */int) (unsigned char)13)) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) arr_16 [i_1 + 1] [i_2 + 3] [i_2] [i_2 - 3] [(_Bool)1] [i_13 + 2] [i_14 - 1])) : (((/* implicit */int) (!(((/* implicit */_Bool) 2668445604U)))))));
                        }
                        for (long long int i_15 = 0; i_15 < 21; i_15 += 2) 
                        {
                            arr_45 [i_15] [i_13 - 3] [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((arr_41 [13LL] [i_15] [i_15] [i_15] [i_13 + 2]) == (arr_6 [i_15] [i_13] [(unsigned char)10] [i_13 - 3])));
                            var_43 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_28 [(unsigned char)5] [i_1 + 3] [i_2 - 4] [6U] [i_15] [i_13 - 1] [i_1 + 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (arr_28 [i_0] [i_0] [i_2 - 4] [i_13 - 2] [i_15] [i_13 - 1] [i_1 + 4])));
                            var_44 = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) arr_35 [i_15] [i_0] [i_13] [i_2 + 3] [i_0] [i_0])) || (((/* implicit */_Bool) arr_5 [i_0] [i_1 + 4] [3U] [i_13 + 2])))));
                            var_45 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0]))) & (var_5)));
                            var_46 = ((/* implicit */signed char) var_12);
                        }
                        for (unsigned int i_16 = 1; i_16 < 17; i_16 += 4) 
                        {
                            arr_48 [i_0] [i_2 + 2] [i_2] [i_2 + 2] [i_0] |= ((/* implicit */unsigned int) arr_27 [6LL] [6LL] [i_1] [i_1] [i_2 - 1] [i_1] [i_1]);
                            arr_49 [i_0] [i_1 - 2] [i_2 + 1] [i_0] [i_13] [i_1 - 2] = ((/* implicit */unsigned int) ((var_11) >= (((/* implicit */long long int) arr_1 [i_1 + 4] [i_13 - 1]))));
                            var_47 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)26)) : (arr_21 [i_16 + 3] [i_0] [i_0] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_9)))));
                            var_48 -= ((/* implicit */unsigned short) arr_36 [i_1 + 3] [i_2 - 1] [i_13 + 1] [i_13 - 1] [i_13 + 2]);
                        }
                        /* LoopSeq 1 */
                        for (unsigned int i_17 = 0; i_17 < 21; i_17 += 3) 
                        {
                            var_49 |= ((/* implicit */long long int) ((0) + ((+(((/* implicit */int) (unsigned char)248))))));
                            var_50 = ((/* implicit */signed char) var_5);
                        }
                        var_51 = ((/* implicit */unsigned int) arr_4 [i_0] [i_0] [i_2 - 4] [15U]);
                    }
                    /* LoopNest 2 */
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        for (signed char i_19 = 0; i_19 < 21; i_19 += 1) 
                        {
                            {
                                arr_57 [i_0] [(_Bool)1] [i_0] [i_19] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_5))))) - (max((((/* implicit */unsigned long long int) min((arr_4 [i_0] [i_1 - 1] [i_18] [i_19]), (8796093022144LL)))), (((((/* implicit */_Bool) (signed char)-37)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)26))) : (arr_27 [i_0] [i_0] [i_1] [i_0] [1LL] [(_Bool)1] [i_19])))))));
                                var_52 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_0)) ? (arr_37 [i_19] [i_0] [i_0] [i_0] [i_1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_12))))), (((((/* implicit */long long int) ((/* implicit */int) var_14))) - (var_13)))))) ? (((((/* implicit */_Bool) arr_41 [6LL] [i_2 + 3] [i_2 + 1] [i_2 - 2] [i_2 - 3])) ? (arr_41 [i_2 + 2] [i_2 + 1] [i_2 + 1] [i_2] [i_2]) : (arr_41 [i_2] [i_2 + 3] [i_2 + 1] [7LL] [i_2]))) : ((-(((((/* implicit */_Bool) arr_40 [i_0] [i_0])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_12 [i_19] [1LL] [i_1] [i_0]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_20 = 4; i_20 < 9; i_20 += 4) 
    {
        for (unsigned int i_21 = 0; i_21 < 10; i_21 += 2) 
        {
            {
                arr_65 [i_20] [i_21] [4LL] = ((((min((var_11), (arr_4 [i_20 - 3] [i_20 - 4] [i_20 - 2] [i_20]))) ^ (((/* implicit */long long int) ((/* implicit */int) ((var_9) == (((/* implicit */unsigned int) ((/* implicit */int) (signed char)41))))))))) <= (((/* implicit */long long int) ((/* implicit */int) arr_64 [i_20] [i_20]))));
                var_53 = ((/* implicit */unsigned char) ((((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_11 [i_20 - 4] [5ULL] [9U] [i_21] [i_21])) ? (((/* implicit */int) arr_10 [i_20 - 2] [i_21] [i_21] [i_20 - 3])) : (((/* implicit */int) var_2))))))) ^ (((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned long long int) arr_50 [i_21] [i_20 - 3] [i_20 - 2] [(unsigned char)0]))))) ? (1301955964301950467LL) : (((/* implicit */long long int) ((/* implicit */int) var_14)))))));
            }
        } 
    } 
    var_54 &= ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) var_3)) != ((-(137438953471LL))))))) : ((((~(var_3))) / (((var_10) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)31875)))))))));
}
