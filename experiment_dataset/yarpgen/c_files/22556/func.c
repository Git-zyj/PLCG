/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22556
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
    var_14 -= ((/* implicit */unsigned int) var_11);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 2) /* same iter space */
                    {
                        arr_9 [i_0] [(short)11] [i_2] [(short)11] = ((unsigned int) 9223372036837998592LL);
                        var_15 = ((/* implicit */unsigned long long int) arr_6 [i_3] [i_2] [(unsigned char)2] [(unsigned char)7]);
                    }
                    /* vectorizable */
                    for (unsigned char i_4 = 0; i_4 < 17; i_4 += 2) /* same iter space */
                    {
                        arr_13 [i_4] [i_2] [i_2] [i_0] [i_0] |= ((/* implicit */short) (-(((((/* implicit */_Bool) -9223372036837998595LL)) ? (2147483647) : (((/* implicit */int) (unsigned short)25260))))));
                        var_16 = ((/* implicit */_Bool) var_10);
                        /* LoopSeq 1 */
                        for (unsigned char i_5 = 0; i_5 < 17; i_5 += 3) 
                        {
                            arr_16 [13U] [(unsigned short)8] [i_0] [i_0] [i_0] [i_4] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-91))) : (-9223372036837998593LL)));
                            arr_17 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (+(((/* implicit */int) arr_2 [i_0]))));
                        }
                    }
                    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((long long int) var_5))))))));
                    arr_18 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_6 [i_0] [(signed char)9] [4ULL] [i_0]) == (((/* implicit */int) ((_Bool) (unsigned char)170))))))) - ((+(var_10)))));
                }
            } 
        } 
    } 
    var_18 -= ((/* implicit */short) var_4);
    /* LoopSeq 2 */
    for (unsigned char i_6 = 0; i_6 < 21; i_6 += 4) 
    {
        arr_21 [i_6] = ((/* implicit */short) (unsigned char)246);
        /* LoopNest 3 */
        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
        {
            for (unsigned char i_8 = 0; i_8 < 21; i_8 += 3) 
            {
                for (signed char i_9 = 0; i_9 < 21; i_9 += 4) 
                {
                    {
                        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)7977)) : ((+((+(((/* implicit */int) var_9))))))));
                        arr_29 [i_9] [i_9] [i_9] [i_9] &= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_27 [i_6] [(short)18] [i_8] [i_9] [i_8] [20]))) | (9223372036837998594LL)));
                        arr_30 [i_6] [i_7] = ((/* implicit */unsigned short) var_7);
                        var_20 = ((/* implicit */short) ((int) (!(((/* implicit */_Bool) (unsigned short)57559)))));
                        /* LoopSeq 3 */
                        for (signed char i_10 = 0; i_10 < 21; i_10 += 2) 
                        {
                            var_21 = ((/* implicit */unsigned long long int) arr_22 [i_10]);
                            arr_35 [i_6] [i_7 - 1] [i_7] [11] [i_10] = ((/* implicit */_Bool) -9223372036837998593LL);
                            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_24 [i_7 - 1] [i_7] [i_7 - 1] [i_7 - 1]) / (((/* implicit */long long int) ((/* implicit */int) (short)14)))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned int) (-(((/* implicit */int) arr_32 [(_Bool)1] [i_7] [i_8] [15U] [i_10] [i_8]))))), ((-(arr_33 [i_6] [(unsigned short)0] [i_6] [20] [(unsigned short)0]))))))));
                        }
                        for (unsigned int i_11 = 0; i_11 < 21; i_11 += 2) 
                        {
                            var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_34 [i_7] [i_7] [i_8] [i_8] [i_7 - 1])) ? ((+(((/* implicit */int) (unsigned char)201)))) : (((/* implicit */int) ((unsigned short) arr_34 [i_7] [i_7] [i_8] [i_7 - 1] [i_7 - 1])))));
                            var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((((/* implicit */_Bool) min((var_6), (((/* implicit */short) arr_22 [i_7 - 1]))))) ? (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) var_10)) ? (arr_19 [i_11]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))) : ((-((~(var_8))))))))));
                        }
                        for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
                        {
                            var_25 -= ((/* implicit */signed char) arr_37 [i_6] [i_6] [i_7 - 1] [i_7] [i_6] [i_6] [i_6]);
                            var_26 += ((/* implicit */unsigned short) (-(min((((/* implicit */unsigned int) var_0)), ((((_Bool)1) ? (((/* implicit */unsigned int) -1)) : (23U)))))));
                            var_27 = ((/* implicit */unsigned long long int) arr_20 [i_12 + 1]);
                            var_28 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) 0LL)) ? (16717461330421465244ULL) : (((/* implicit */unsigned long long int) -9223372036837998595LL))))));
                        }
                    }
                } 
            } 
        } 
    }
    for (signed char i_13 = 1; i_13 < 12; i_13 += 2) 
    {
        var_29 = ((/* implicit */unsigned int) ((((((/* implicit */int) (short)-5821)) ^ (((/* implicit */int) var_11)))) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)7977)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))) : (1695943092356054853ULL)))) ? (((/* implicit */int) ((unsigned short) arr_8 [i_13]))) : (((/* implicit */int) (unsigned char)222))))));
        var_30 = ((/* implicit */unsigned char) ((signed char) min(((+(23U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_13] [i_13] [i_13 + 2] [i_13] [i_13] [i_13 - 1])) ? (((/* implicit */int) arr_32 [(unsigned short)5] [(_Bool)1] [(unsigned short)5] [i_13 - 1] [17ULL] [i_13 + 2])) : (((/* implicit */int) (unsigned short)40603))))))));
        /* LoopSeq 4 */
        for (signed char i_14 = 0; i_14 < 14; i_14 += 2) 
        {
            var_31 *= ((/* implicit */unsigned char) ((short) (!(((/* implicit */_Bool) (unsigned short)65531)))));
            /* LoopSeq 1 */
            for (signed char i_15 = 0; i_15 < 14; i_15 += 4) 
            {
                arr_50 [i_13] = ((/* implicit */unsigned long long int) var_3);
                var_32 = ((/* implicit */int) max((var_32), (((/* implicit */int) arr_7 [(_Bool)1] [(_Bool)1] [i_15] [i_15]))));
            }
            var_33 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) arr_5 [i_14] [i_14] [i_14])) : (9223372036837998599LL)))) ? (min((var_10), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((0LL) & (((/* implicit */long long int) 1386465990U))))) ? (min((3932817687U), (((/* implicit */unsigned int) (unsigned short)57559)))) : (((/* implicit */unsigned int) var_3)))))));
            arr_51 [i_13] [i_13] [i_13] = ((/* implicit */signed char) min((((((var_4) * (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [(signed char)3]))))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_13] [i_13]))))), (((/* implicit */unsigned int) (((-(((/* implicit */int) (signed char)-61)))) - (((/* implicit */int) ((_Bool) var_12))))))));
        }
        /* vectorizable */
        for (int i_16 = 0; i_16 < 14; i_16 += 4) 
        {
            arr_56 [i_13] [i_13] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_25 [i_13 + 2]))));
            arr_57 [i_13] [i_16] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)120))));
            arr_58 [i_13] = ((unsigned int) arr_42 [i_13]);
        }
        /* vectorizable */
        for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) 
        {
            var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) ((_Bool) arr_12 [i_13 - 1] [i_17 + 1])))));
            arr_61 [i_13] = ((/* implicit */_Bool) ((((/* implicit */int) ((0) > (((/* implicit */int) arr_20 [i_17]))))) % (((/* implicit */int) (signed char)52))));
            var_35 = ((/* implicit */long long int) var_11);
        }
        for (int i_18 = 0; i_18 < 14; i_18 += 4) 
        {
            var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_63 [i_13] [i_13] [i_13])) ? (((/* implicit */long long int) var_13)) : (var_12)))) ? ((+(var_8))) : (((/* implicit */unsigned long long int) 2085736009))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) (-(arr_14 [i_18] [(unsigned char)14] [i_13 + 2] [i_13] [i_13 + 2] [(unsigned short)0] [i_13 + 2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))) : (arr_7 [i_13 - 1] [i_13 - 1] [i_13 - 1] [0U])))));
            var_37 -= ((/* implicit */signed char) ((unsigned char) 762160639U));
            var_38 = arr_28 [i_13];
        }
    }
}
