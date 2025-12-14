/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221296
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
    var_20 ^= ((/* implicit */unsigned int) var_9);
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((max((max((((/* implicit */unsigned int) 0)), (arr_0 [(unsigned char)7] [0]))), (((/* implicit */unsigned int) arr_6 [i_0 + 1] [i_0 - 1] [i_0 + 1])))) < (((/* implicit */unsigned int) (~(((/* implicit */int) ((arr_4 [0] [(signed char)8]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_19))))))))))))));
                arr_8 [1ULL] [(short)5] &= ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)229))));
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((/* implicit */int) var_18)) < (((/* implicit */int) var_19)))))));
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 14; i_2 += 4) 
    {
        for (short i_3 = 1; i_3 < 12; i_3 += 2) 
        {
            {
                var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) var_1))));
                /* LoopSeq 2 */
                for (signed char i_4 = 3; i_4 < 13; i_4 += 2) 
                {
                    arr_19 [4] [11LL] = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_14 [(_Bool)0] [(short)6] [(short)10]))))) ? (((/* implicit */int) var_18)) : (((/* implicit */int) ((var_2) < (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [(short)1] [11ULL]))))))))) < (((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) var_8))))) - (((arr_17 [(short)1] [6U] [8U]) << (((((/* implicit */int) var_0)) - (35)))))))));
                    arr_20 [(short)2] [(unsigned char)5] [(short)5] = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */int) ((short) var_4))) == (((((/* implicit */int) arr_14 [5U] [(signed char)8] [(_Bool)1])) >> (((/* implicit */int) arr_14 [(short)4] [3U] [13U]))))))), (((((/* implicit */_Bool) max((arr_12 [(_Bool)1] [2]), (((/* implicit */unsigned char) arr_10 [11]))))) ? (max((arr_13 [3ULL]), (((/* implicit */long long int) var_14)))) : (((/* implicit */long long int) var_17))))));
                    /* LoopSeq 2 */
                    for (long long int i_5 = 0; i_5 < 14; i_5 += 2) 
                    {
                        var_24 = ((/* implicit */int) min((var_15), (((/* implicit */long long int) var_6))));
                        /* LoopSeq 1 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_25 = ((/* implicit */unsigned int) ((arr_14 [(_Bool)1] [1U] [13]) ? (((/* implicit */int) var_4)) : ((-(((/* implicit */int) var_3))))));
                            var_26 = ((/* implicit */unsigned long long int) arr_17 [11U] [(short)0] [(_Bool)1]);
                        }
                        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */int) max((arr_18 [i_5]), (arr_18 [2])))) != ((+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_10 [(_Bool)1])) : (((/* implicit */int) arr_9 [3LL] [(signed char)8]))))))));
                    }
                    for (int i_7 = 0; i_7 < 14; i_7 += 4) 
                    {
                        var_28 = ((/* implicit */unsigned int) arr_27 [7] [4] [(short)2] [3ULL]);
                        var_29 &= ((/* implicit */short) arr_28 [0ULL] [0U] [13LL] [(short)6] [(short)8] [13]);
                    }
                    /* LoopSeq 4 */
                    for (int i_8 = 0; i_8 < 14; i_8 += 4) 
                    {
                        var_30 ^= ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_16))))) ? (((max((((/* implicit */unsigned long long int) arr_23 [i_2] [(_Bool)1] [(short)0] [8LL] [12LL] [(short)10])), (arr_30 [0LL] [1ULL] [(short)1] [(short)9]))) * (((/* implicit */unsigned long long int) var_17)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_15 [10U])))) ? (min((((/* implicit */unsigned int) var_0)), (arr_21 [(_Bool)1] [(signed char)5] [(short)10]))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                        var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) min((((arr_31 [i_3 + 2] [i_4 - 1]) ? (min((var_2), (((/* implicit */unsigned int) (unsigned char)51)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_28 [(signed char)1] [10LL] [10] [13] [(signed char)13] [4])) : (907237517)))))), (((/* implicit */unsigned int) ((((/* implicit */int) ((var_10) < (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) << (((/* implicit */int) arr_31 [i_3 + 1] [7LL]))))))))));
                        var_32 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)0))))) != ((-(arr_29 [4] [(unsigned char)13] [(_Bool)1] [3ULL] [11]))))))));
                        arr_32 [(short)5] [7U] [(_Bool)1] [(unsigned char)3] = ((arr_24 [11ULL] [5] [8U] [(signed char)1]) >> (((max((((/* implicit */int) arr_27 [(short)6] [(signed char)13] [9] [(_Bool)1])), (((((/* implicit */_Bool) arr_24 [13LL] [(_Bool)1] [(short)3] [(_Bool)0])) ? (var_17) : (((/* implicit */int) var_11)))))) + (32773))));
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_33 -= ((/* implicit */unsigned int) ((((/* implicit */int) ((((18446744073709551615ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [5] [0] [0U] [13ULL]))))) != (((/* implicit */unsigned long long int) (-(var_10))))))) / ((~(((/* implicit */int) arr_22 [10] [12] [(_Bool)1] [(_Bool)1]))))));
                        /* LoopSeq 4 */
                        for (unsigned int i_10 = 2; i_10 < 12; i_10 += 2) /* same iter space */
                        {
                            var_34 = ((/* implicit */int) min((var_34), (((/* implicit */int) ((max((((/* implicit */unsigned long long int) arr_28 [7] [i_10 + 2] [12ULL] [13ULL] [(short)2] [(unsigned char)7])), ((~(arr_15 [5]))))) >= (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_34 [12ULL] [12ULL] [10LL])) ? (arr_13 [10ULL]) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))))))))));
                            var_35 ^= ((/* implicit */unsigned long long int) var_15);
                        }
                        /* vectorizable */
                        for (unsigned int i_11 = 2; i_11 < 12; i_11 += 2) /* same iter space */
                        {
                            arr_39 [i_11] [(_Bool)1] |= ((/* implicit */long long int) ((arr_21 [(_Bool)1] [(_Bool)1] [(short)1]) == (2031075181U)));
                            var_36 = ((/* implicit */_Bool) var_18);
                            arr_40 [8] [5] [(short)0] [3] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_33 [i_9] [2U] [3] [9])))) ? (((/* implicit */long long int) ((int) 750795517U))) : (arr_36 [5U] [7] [(short)13] [i_3 + 1] [(_Bool)1] [11LL])));
                            var_37 ^= ((/* implicit */int) arr_13 [(unsigned char)3]);
                            arr_41 [4] [(_Bool)0] [0LL] [(short)8] [8U] [i_11] |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_27 [(short)3] [i_11 + 1] [i_11 + 2] [(_Bool)1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)1))) : (arr_36 [13LL] [(_Bool)1] [3LL] [12U] [(short)8] [(short)8])))) : (arr_30 [7LL] [1ULL] [8] [(_Bool)1])));
                        }
                        for (unsigned int i_12 = 2; i_12 < 12; i_12 += 2) /* same iter space */
                        {
                            var_38 = ((((/* implicit */_Bool) (((((~(((/* implicit */int) var_16)))) + (2147483647))) >> (((/* implicit */int) arr_14 [i_3 + 2] [i_4 + 1] [i_12 + 2]))))) && (((/* implicit */_Bool) 3674385888057763226ULL)));
                            var_39 = ((/* implicit */short) max(((+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [(signed char)9] [12ULL] [0ULL]))) != (3544171768U)))))), (((/* implicit */int) arr_14 [5] [9U] [9LL]))));
                        }
                        /* vectorizable */
                        for (unsigned int i_13 = 2; i_13 < 12; i_13 += 2) /* same iter space */
                        {
                            var_40 -= ((/* implicit */unsigned long long int) (-(arr_44 [4] [11U] [(_Bool)1] [i_3 + 1] [(_Bool)1] [8])));
                            arr_47 [(short)12] [i_9] = ((((/* implicit */int) arr_28 [(_Bool)1] [2] [0] [4ULL] [(_Bool)1] [(signed char)0])) - (var_12));
                        }
                    }
                    for (unsigned long long int i_14 = 3; i_14 < 10; i_14 += 4) 
                    {
                        var_41 = ((short) arr_46 [i_14 - 1] [i_14 - 1] [(short)6] [9] [i_14 + 1] [(_Bool)1]);
                        var_42 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_42 [i_4 - 3] [9ULL] [(_Bool)1] [(short)10]))))) ? (((/* implicit */long long int) max((-1080929105), (((/* implicit */int) (unsigned char)12))))) : (((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_26 [(_Bool)1] [2LL] [7] [(short)9])) : (((/* implicit */int) arr_16 [(_Bool)1] [10ULL] [(short)5] [8U]))))) : (((((/* implicit */_Bool) arr_11 [13ULL])) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [8U] [(signed char)8]))) : (var_1)))))));
                        var_43 = ((/* implicit */int) max((var_43), (((((/* implicit */int) arr_12 [i_14 - 3] [i_14 - 2])) >> ((((+(var_1))) - (7593234194252972394LL)))))));
                    }
                    for (short i_15 = 0; i_15 < 14; i_15 += 3) 
                    {
                        var_44 = ((/* implicit */unsigned long long int) min((var_44), (((/* implicit */unsigned long long int) arr_25 [(signed char)6] [8] [i_2] [(signed char)2] [(_Bool)0]))));
                        /* LoopSeq 1 */
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                        {
                            var_45 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_25 [(short)1] [(short)8] [i_15] [(short)13] [10ULL])) != (((/* implicit */int) max((var_5), (((/* implicit */short) var_9)))))))) * (((arr_34 [i_3 - 1] [i_3 + 1] [i_4 - 2]) ^ (((/* implicit */int) ((short) var_17)))))));
                            var_46 ^= ((/* implicit */int) (((-(max((arr_38 [i_2]), (((/* implicit */long long int) arr_50 [6U] [i_2] [8U])))))) <= (((/* implicit */long long int) (~((-(((/* implicit */int) var_8)))))))));
                            var_47 = ((/* implicit */short) ((((/* implicit */int) arr_14 [7LL] [3] [13])) << ((((-(((/* implicit */int) var_5)))) + (4124)))));
                        }
                    }
                    var_48 ^= ((/* implicit */unsigned long long int) (+((-((+(((/* implicit */int) arr_50 [(signed char)2] [i_2] [10U]))))))));
                }
                for (int i_17 = 0; i_17 < 14; i_17 += 3) 
                {
                    var_49 = (+(((((((/* implicit */int) arr_23 [i_17] [(short)5] [5ULL] [(_Bool)1] [i_17] [(short)11])) + (2147483647))) >> (((var_15) - (6791722317347480062LL))))));
                    arr_59 [9] [i_17] [(_Bool)1] [(_Bool)1] = ((/* implicit */int) arr_38 [i_17]);
                }
                var_50 = ((/* implicit */int) var_16);
            }
        } 
    } 
}
