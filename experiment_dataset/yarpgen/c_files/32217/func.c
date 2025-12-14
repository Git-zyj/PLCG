/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32217
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_2 [i_0] [(unsigned char)12] &= ((/* implicit */unsigned long long int) arr_1 [(unsigned char)14]);
        arr_3 [10U] = ((/* implicit */long long int) max((var_2), (((/* implicit */unsigned short) max(((unsigned char)67), ((unsigned char)183))))));
        arr_4 [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (-(arr_0 [i_0] [i_0])))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [i_0] [i_0]) : ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) (+(((/* implicit */int) var_9))))))), (min((((/* implicit */long long int) var_0)), (arr_0 [i_0] [i_0])))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_11 [3LL] [i_2] = ((/* implicit */unsigned long long int) arr_5 [i_1]);
            arr_12 [(unsigned short)8] [13] [i_1] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_2])) ^ (((/* implicit */int) var_5))))) ? (((/* implicit */long long int) max((((/* implicit */int) arr_6 [i_1] [i_2])), (-2133664643)))) : (((((/* implicit */_Bool) 2133664643)) ? (arr_7 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))))));
        }
        for (unsigned char i_3 = 1; i_3 < 21; i_3 += 3) 
        {
            arr_15 [(signed char)20] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_10 [19U] [i_3] [i_3 - 1]))))) & (18446744073709551613ULL)));
            /* LoopSeq 4 */
            for (long long int i_4 = 0; i_4 < 22; i_4 += 3) 
            {
                arr_18 [(signed char)0] [i_4] [i_4] = -14296273;
                arr_19 [(unsigned short)6] [i_1] [i_3 + 1] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)22158)) - (((/* implicit */int) (unsigned char)186))));
            }
            for (signed char i_5 = 0; i_5 < 22; i_5 += 3) 
            {
                arr_22 [i_1] [6LL] [(signed char)13] [(_Bool)1] = ((/* implicit */unsigned char) (((+(((/* implicit */int) arr_10 [i_3] [i_3 - 1] [i_5])))) + (((/* implicit */int) arr_10 [i_1] [i_3 - 1] [i_5]))));
                arr_23 [i_5] [i_3] = ((/* implicit */short) var_7);
            }
            /* vectorizable */
            for (int i_6 = 0; i_6 < 22; i_6 += 2) 
            {
                arr_27 [i_1] [(_Bool)0] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_7) * (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_1] [i_3 - 1] [(unsigned char)6])))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_26 [i_1] [i_3] [(unsigned char)3])) : (((/* implicit */int) var_8)))) : (((/* implicit */int) arr_10 [12LL] [i_3 + 1] [(signed char)19]))));
                arr_28 [15] = var_7;
                arr_29 [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [i_1] [i_3 - 1] [i_6] [i_1])) ? (((/* implicit */int) arr_24 [(short)2] [i_3 - 1] [i_1] [i_6])) : (((/* implicit */int) arr_24 [i_1] [i_3 + 1] [i_6] [i_1]))));
            }
            for (unsigned int i_7 = 0; i_7 < 22; i_7 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned int i_8 = 0; i_8 < 22; i_8 += 4) 
                {
                    for (unsigned short i_9 = 2; i_9 < 20; i_9 += 3) 
                    {
                        {
                            arr_36 [(signed char)8] [i_9] [i_7] = ((((/* implicit */_Bool) arr_7 [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((((/* implicit */int) (unsigned short)22158)) >= (((/* implicit */int) (unsigned short)30720)))), (((((/* implicit */_Bool) 4160749568U)) && (((/* implicit */_Bool) 14296272)))))))) : (((unsigned int) arr_7 [i_3 - 1])));
                            arr_37 [12LL] [(unsigned char)18] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_35 [(unsigned short)8] [i_9 + 2] [21ULL] [i_9] [13U])) | (((((/* implicit */int) arr_35 [i_3 - 1] [i_9 - 2] [i_9] [(unsigned char)7] [i_9])) + (((/* implicit */int) arr_35 [i_7] [i_9 + 2] [i_9] [i_9] [i_9]))))));
                            arr_38 [(unsigned short)4] [i_1] [i_3] [i_8] [(_Bool)0] [i_9] = ((/* implicit */short) ((((/* implicit */int) ((signed char) min((((/* implicit */long long int) var_9)), (var_4))))) / (((/* implicit */int) var_6))));
                            arr_39 [i_1] [i_9] [i_7] [i_9] [i_3] [i_3] [(unsigned char)18] = ((/* implicit */unsigned int) max((((/* implicit */int) arr_30 [7U] [i_3] [i_1])), ((+(((/* implicit */int) max(((unsigned short)43376), (((/* implicit */unsigned short) var_8)))))))));
                            arr_40 [i_1] [i_9] [i_7] [(unsigned short)10] [i_8] [(unsigned short)20] = (unsigned short)22167;
                        }
                    } 
                } 
                arr_41 [(short)7] [i_3] |= ((/* implicit */short) (((-(((/* implicit */int) arr_33 [15U] [i_1] [i_3 - 1] [5U])))) ^ (((((/* implicit */int) arr_10 [i_3 - 1] [i_3 + 1] [i_3 - 1])) / (((/* implicit */int) min((arr_31 [19U] [(unsigned char)13]), (arr_31 [i_1] [i_3]))))))));
                arr_42 [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_26 [6LL] [i_3] [i_7]))) : (arr_9 [i_1] [i_7])))))) && (((/* implicit */_Bool) 125853772708982062ULL))));
            }
            arr_43 [(unsigned char)5] [i_1] [i_3] = ((/* implicit */unsigned long long int) var_9);
            arr_44 [i_1] [(unsigned char)7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))) ? (min((-2133664643), (((-369436372) * (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) (((!((_Bool)1))) && (((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))));
        }
        /* LoopNest 2 */
        for (long long int i_10 = 3; i_10 < 21; i_10 += 2) 
        {
            for (unsigned short i_11 = 2; i_11 < 21; i_11 += 4) 
            {
                {
                    arr_52 [10U] [(short)11] [i_11 + 1] [i_11 - 2] = ((/* implicit */unsigned char) ((((/* implicit */int) var_8)) >> (((/* implicit */int) (_Bool)1))));
                    /* LoopSeq 1 */
                    for (signed char i_12 = 1; i_12 < 21; i_12 += 1) 
                    {
                        arr_55 [i_1] [i_10] [i_12] [i_12] = ((/* implicit */unsigned int) var_2);
                        arr_56 [i_1] [i_10] [i_12] [i_12] = ((/* implicit */long long int) min((arr_48 [i_1] [i_10 - 3] [i_11] [i_12]), (((unsigned char) arr_48 [i_1] [i_10 + 1] [i_11] [i_11]))));
                    }
                    arr_57 [i_1] [i_10] [i_10] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_9))))) : (((min((var_1), (((/* implicit */long long int) (short)16352)))) / (((/* implicit */long long int) (-(var_7))))))));
                    /* LoopNest 2 */
                    for (signed char i_13 = 0; i_13 < 22; i_13 += 4) 
                    {
                        for (unsigned short i_14 = 0; i_14 < 22; i_14 += 3) 
                        {
                            {
                                arr_63 [i_13] [i_11] [i_1] = ((short) (+(((/* implicit */int) arr_34 [i_10 - 2] [i_10 - 3]))));
                                arr_64 [i_1] [(short)11] [i_11] [i_13] [i_14] = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_34 [i_10 + 1] [i_11 - 1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_8)))), (((/* implicit */int) arr_5 [i_14]))));
                                arr_65 [i_13] = ((/* implicit */unsigned char) var_5);
                                arr_66 [i_1] [i_10] [i_11] [i_11] [i_14] = ((((/* implicit */int) min((arr_26 [i_10 + 1] [i_10 - 3] [i_10 - 1]), (arr_26 [i_10 - 1] [i_10 + 1] [i_10 - 3])))) % (((/* implicit */int) ((short) max((((/* implicit */unsigned long long int) var_9)), (arr_47 [i_13]))))));
                                arr_67 [i_1] [11LL] [i_11] [(unsigned short)16] [i_14] = ((/* implicit */signed char) -14296273);
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_68 [8LL] = ((/* implicit */long long int) (-(((/* implicit */int) max((arr_34 [(signed char)5] [i_1]), (((/* implicit */short) var_9)))))));
    }
    for (unsigned int i_15 = 0; i_15 < 22; i_15 += 4) 
    {
        arr_73 [i_15] [i_15] = ((((/* implicit */_Bool) (+(arr_62 [i_15])))) ? (((/* implicit */int) ((_Bool) 3185807868U))) : (((/* implicit */int) arr_35 [i_15] [i_15] [i_15] [i_15] [i_15])));
        arr_74 [13U] [7ULL] = ((/* implicit */unsigned long long int) 0U);
    }
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) >= ((+(((/* implicit */int) ((var_0) <= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
}
