/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29968
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
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) (+((-(((/* implicit */int) (unsigned short)6144)))))))));
        var_13 = ((/* implicit */short) var_7);
        arr_2 [i_0] [i_0] = (+(((/* implicit */int) arr_1 [10ULL] [i_0])));
    }
    for (short i_1 = 0; i_1 < 20; i_1 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned char i_2 = 4; i_2 < 18; i_2 += 1) 
        {
            for (signed char i_3 = 4; i_3 < 19; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 1) 
                {
                    {
                        arr_14 [i_1] [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) var_8);
                        var_14 = ((((/* implicit */int) (signed char)-125)) & (((/* implicit */int) var_1)));
                        var_15 = ((/* implicit */short) (signed char)43);
                        /* LoopSeq 3 */
                        for (long long int i_5 = 0; i_5 < 20; i_5 += 3) 
                        {
                            var_16 = ((/* implicit */unsigned char) -5LL);
                            arr_18 [i_1] [i_2] [8ULL] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((((/* implicit */int) (unsigned short)64446)) << (((((/* implicit */int) var_3)) - (48)))))))) ? (var_8) : (((/* implicit */unsigned int) (~(((/* implicit */int) min((((/* implicit */short) var_1)), (arr_6 [7] [i_2 - 3])))))))));
                        }
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((max((var_6), (((/* implicit */unsigned int) arr_4 [i_3])))) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_21 [(short)18] [i_2] [i_3 - 2] [i_4] [i_3 - 2] [i_3] [i_4])) ? (((/* implicit */int) arr_19 [i_1] [i_2] [i_3] [i_4] [15ULL])) : (((/* implicit */int) var_1)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((4294967291U), (((/* implicit */unsigned int) (unsigned short)64446))))) ? ((-(((/* implicit */int) arr_20 [i_1] [i_2] [15U] [i_4] [15U] [i_2])))) : (((/* implicit */int) arr_19 [i_4] [i_4] [i_3] [i_4] [i_6 - 1]))))) : (1297246903863970997ULL)));
                            var_18 *= ((/* implicit */long long int) ((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (signed char)115)) : (((/* implicit */int) (unsigned short)59391)))) + (((((/* implicit */_Bool) 840685699)) ? (((/* implicit */int) (short)-28432)) : (((/* implicit */int) (unsigned char)206))))));
                            var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_4] [i_4] [i_4] [i_4] [i_4] [4ULL])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_20 [(signed char)12] [i_1] [i_2 + 2] [i_3] [i_4] [i_1]))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_8 [i_1] [i_2] [i_3]))) : (((/* implicit */long long int) ((((/* implicit */int) var_10)) * (((/* implicit */int) (short)6435))))))) < (max((((/* implicit */long long int) (short)7418)), (1033476511825877239LL))))))));
                            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_12 [i_2] [i_3] [i_3] [i_3 - 2])) ? (var_0) : (((/* implicit */unsigned long long int) arr_12 [i_1] [i_1] [i_1] [i_3 - 3])))), (((/* implicit */unsigned long long int) arr_12 [i_2 + 2] [(unsigned char)5] [i_3 - 2] [i_3 - 4])))))));
                            arr_22 [i_1] [i_2] [i_2] [i_3 - 1] [i_4] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)970)) ? (9666845058951422040ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)87)))))) ? (-6957526099849638135LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)114)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_7)))))));
                        }
                        /* vectorizable */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            arr_27 [i_1] [i_2 + 2] [i_3] [i_4] [i_2] = ((/* implicit */signed char) (-(((/* implicit */int) var_4))));
                            var_21 = ((/* implicit */signed char) var_7);
                            var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)64446)) ? (17U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)21975)))))) : (((((/* implicit */_Bool) 9223372036854775799LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [14U] [14U]))) : (18446744073709551607ULL)))));
                        }
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_8 = 0; i_8 < 20; i_8 += 1) 
        {
            for (long long int i_9 = 0; i_9 < 20; i_9 += 1) 
            {
                {
                    arr_34 [i_9] [i_8] [i_1] = ((/* implicit */signed char) min(((~((+(((/* implicit */int) (unsigned char)13)))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-512)) ? (-840685704) : (((/* implicit */int) (short)-28432))))))))));
                    arr_35 [i_1] [9LL] [i_9] = ((/* implicit */short) arr_25 [i_1] [i_1] [i_1] [(unsigned short)12] [i_8] [i_8]);
                    arr_36 [(unsigned char)1] [10] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-32)) ? (((/* implicit */int) arr_9 [i_1] [i_1])) : (((/* implicit */int) arr_11 [(signed char)4] [i_1] [i_8] [i_1]))))) ? (((min((2409408726759282517LL), (((/* implicit */long long int) (short)6439)))) & (((/* implicit */long long int) max((1872388947U), (((/* implicit */unsigned int) (unsigned char)94))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (~(194789483)))) ? (((/* implicit */int) var_3)) : ((~(((/* implicit */int) arr_11 [i_1] [i_8] [i_8] [i_1])))))))));
                }
            } 
        } 
        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)14336))))) ? (((((/* implicit */_Bool) arr_33 [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_33 [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_33 [i_1] [i_1] [i_1])))) : (((/* implicit */int) arr_33 [i_1] [i_1] [i_1]))));
    }
    for (short i_10 = 2; i_10 < 18; i_10 += 3) 
    {
        var_24 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((9223372036854775794LL), (((/* implicit */long long int) arr_29 [i_10]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_10 - 2]))) : (((((/* implicit */_Bool) arr_29 [i_10])) ? (7956852644471344392ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_10] [i_10] [i_10] [i_10] [i_10])))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 8190LL)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (unsigned short)54573))))) ? (((((/* implicit */int) var_7)) + (((/* implicit */int) var_3)))) : (((((/* implicit */int) arr_17 [i_10] [i_10] [i_10] [i_10 + 1] [i_10])) / (((/* implicit */int) var_3)))))) : (((/* implicit */int) var_7))));
        var_25 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) arr_24 [i_10] [1U] [i_10 + 1] [i_10 - 1] [i_10])) ? (((/* implicit */int) (signed char)84)) : (arr_12 [i_10 + 1] [i_10 - 1] [i_10 + 1] [i_10]))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_11 = 0; i_11 < 19; i_11 += 3) 
        {
            var_26 = ((((/* implicit */unsigned int) ((/* implicit */int) (short)6454))) < (899801771U));
            arr_42 [i_10] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_10 - 1] [i_10 + 1])) ? ((~(arr_8 [i_10 - 1] [i_10 - 1] [i_10 - 1]))) : (((/* implicit */long long int) ((/* implicit */int) var_3)))));
            var_27 = ((/* implicit */int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) arr_40 [i_11])) : (arr_7 [i_10] [i_11]))) << (((((((/* implicit */_Bool) 7384835816376593947ULL)) ? (6121324582711560485ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))))) - (6121324582711560473ULL)))));
        }
        for (int i_12 = 0; i_12 < 19; i_12 += 2) 
        {
            var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_25 [i_12] [i_10] [i_10] [i_12] [i_10] [(unsigned char)6]), (((((/* implicit */_Bool) 2449547781U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1089))) : (var_6)))))) ? (arr_5 [i_10 - 1]) : (((/* implicit */unsigned long long int) (~(((unsigned int) arr_17 [i_12] [i_12] [i_10 + 1] [i_10 + 1] [i_10]))))))))));
            var_29 = ((/* implicit */unsigned long long int) arr_15 [i_10] [i_10] [i_12] [i_12]);
        }
        for (short i_13 = 0; i_13 < 19; i_13 += 1) 
        {
            var_30 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)6))));
            var_31 |= ((/* implicit */signed char) ((((/* implicit */_Bool) min(((unsigned short)43574), (((/* implicit */unsigned short) (signed char)126))))) ? (((/* implicit */unsigned long long int) (~((+(((/* implicit */int) (short)-28446))))))) : (min((arr_7 [2LL] [2LL]), (((/* implicit */unsigned long long int) arr_40 [i_10 - 1]))))));
            var_32 |= ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_43 [(unsigned char)2] [i_10 - 2] [i_10 - 1])), (var_8)))) ? ((+(((/* implicit */int) arr_43 [(unsigned short)12] [i_10] [i_10])))) : (((/* implicit */int) ((((var_7) ? (((/* implicit */int) (unsigned short)30)) : (((/* implicit */int) arr_6 [i_10] [i_13])))) > (((/* implicit */int) ((((/* implicit */int) (unsigned char)29)) >= (((/* implicit */int) var_7))))))))));
        }
    }
    var_33 |= ((/* implicit */long long int) var_2);
}
