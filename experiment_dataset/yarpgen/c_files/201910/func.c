/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201910
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
    for (short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(var_12)))) ? (((((/* implicit */_Bool) max((var_10), (((/* implicit */short) (signed char)-27))))) ? (((arr_2 [i_0]) / (((/* implicit */int) var_5)))) : (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)0)), ((unsigned short)21303)))))) : ((-(((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_1] [i_0])) && (((/* implicit */_Bool) var_12)))))))));
                /* LoopSeq 4 */
                for (unsigned int i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 4) /* same iter space */
                    {
                        var_14 = ((/* implicit */unsigned long long int) (signed char)55);
                        var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) 2487383571U))) == (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)248)), (min((var_7), (((/* implicit */unsigned short) var_10))))))))))));
                        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [(_Bool)1])) > (arr_3 [i_0]))))))) || (((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_3] [i_3]))))))))));
                    }
                    for (unsigned int i_4 = 0; i_4 < 10; i_4 += 4) /* same iter space */
                    {
                        var_17 = ((/* implicit */signed char) ((short) var_8));
                        arr_14 [i_0] [i_1] [(short)3] [i_0] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) ? ((-(((/* implicit */int) arr_9 [i_1] [i_2] [i_0])))) : (((/* implicit */int) ((signed char) (unsigned char)7)))));
                        var_18 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */int) arr_9 [i_0] [i_0] [i_0])) + (((/* implicit */int) (unsigned char)8)))));
                        var_19 = ((/* implicit */unsigned int) ((int) min((((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_4])), ((-(((/* implicit */int) var_10)))))));
                        arr_15 [i_0] [i_0] [i_0] [i_0] [i_4] [i_4] = ((/* implicit */unsigned int) max((((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) max((((/* implicit */short) (_Bool)1)), (arr_4 [i_0]))))))), ((unsigned char)8)));
                    }
                    /* vectorizable */
                    for (short i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((((/* implicit */int) arr_16 [i_5] [i_1] [i_2] [i_5])) > (((/* implicit */int) var_8)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_8 [i_5] [i_2]))))))))));
                        var_21 += ((((/* implicit */int) arr_4 [i_5])) + (((/* implicit */int) arr_6 [i_0] [i_1] [i_5])));
                        var_22 = ((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-37)) < (((/* implicit */int) (signed char)32)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((3300158961U) < (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))));
                    }
                    var_23 *= ((/* implicit */unsigned int) (+((-((~(((/* implicit */int) arr_16 [(_Bool)0] [i_1] [(_Bool)0] [i_2]))))))));
                    var_24 = ((/* implicit */short) max((((/* implicit */int) ((((/* implicit */unsigned int) arr_3 [i_2])) > (arr_1 [i_0] [i_0])))), (min((((/* implicit */int) (signed char)-127)), (arr_3 [i_2])))));
                }
                for (unsigned int i_6 = 0; i_6 < 10; i_6 += 3) /* same iter space */
                {
                    var_25 = ((/* implicit */short) max((((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0] [i_1])) && (((/* implicit */_Bool) arr_1 [i_0] [i_0]))))), ((((~(((/* implicit */int) (unsigned char)7)))) | (((/* implicit */int) ((((/* implicit */int) (short)0)) >= (((/* implicit */int) arr_6 [i_0] [(_Bool)1] [i_0])))))))));
                    /* LoopNest 2 */
                    for (signed char i_7 = 2; i_7 < 9; i_7 += 1) 
                    {
                        for (signed char i_8 = 0; i_8 < 10; i_8 += 4) 
                        {
                            {
                                arr_27 [i_0] [i_1] [i_1] [i_0] [i_8] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? ((-(arr_2 [i_0]))) : (((/* implicit */int) max(((signed char)-44), ((signed char)23))))))));
                                arr_28 [(unsigned char)4] [i_8] [i_6] [i_6] [i_8] |= ((/* implicit */unsigned int) ((((/* implicit */int) arr_26 [i_7 - 1])) + (((((/* implicit */int) arr_6 [i_7] [i_7] [i_8])) + (((/* implicit */int) min((var_8), (((/* implicit */short) (signed char)118)))))))));
                                var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)21)) && (((((/* implicit */int) arr_19 [i_7 - 2] [i_7] [i_7 + 1] [i_7 - 2] [i_7 + 1] [i_0])) != (((/* implicit */int) arr_19 [i_7 - 1] [i_7 - 1] [i_7 + 1] [i_7 - 1] [i_7 - 1] [i_0]))))));
                                arr_29 [i_0] [i_7] [i_6] [i_1] [0U] [i_0] = ((/* implicit */int) var_1);
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */long long int) var_7);
                }
                for (unsigned int i_9 = 0; i_9 < 10; i_9 += 3) /* same iter space */
                {
                    arr_33 [i_0] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */int) ((signed char) arr_32 [i_0] [i_1] [i_0]))) == ((~(((/* implicit */int) (unsigned char)248)))))))));
                    var_28 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)511))))) < (((/* implicit */int) ((short) (unsigned char)248))))))));
                }
                /* vectorizable */
                for (unsigned int i_10 = 0; i_10 < 10; i_10 += 3) /* same iter space */
                {
                    var_29 |= ((/* implicit */unsigned short) var_6);
                    /* LoopSeq 1 */
                    for (signed char i_11 = 2; i_11 < 7; i_11 += 2) 
                    {
                        var_30 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_16 [i_11] [6U] [i_11] [i_11 - 1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_8 [i_11] [i_11]))));
                        var_31 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_4)))) <= (((((/* implicit */unsigned int) ((/* implicit */int) var_8))) ^ (510U)))));
                    }
                }
            }
        } 
    } 
    var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (signed char)-119)) : (((/* implicit */int) (_Bool)1)))))));
    var_33 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) << (((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-68))) : (var_2))) - (18446744073709551528ULL)))))) / (var_2)));
    var_34 |= ((/* implicit */unsigned short) ((((var_5) ? (((((/* implicit */_Bool) (unsigned short)19934)) ? (((/* implicit */int) (signed char)48)) : (((/* implicit */int) (unsigned short)19932)))) : ((+(((/* implicit */int) (unsigned short)2180)))))) & (min(((~(((/* implicit */int) (unsigned char)7)))), (((/* implicit */int) min(((unsigned short)45602), (((/* implicit */unsigned short) (short)23935)))))))));
    var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) ((unsigned int) (short)-32760)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_0)) ? (0U) : (1341922001U))) < (((/* implicit */unsigned int) ((/* implicit */int) ((2953045294U) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)249))))))))))) : ((+(13532630191747072718ULL)))));
}
