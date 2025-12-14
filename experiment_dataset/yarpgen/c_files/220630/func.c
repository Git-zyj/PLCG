/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220630
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
    for (long long int i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */signed char) ((unsigned char) min((((unsigned short) 2165769917U)), (((/* implicit */unsigned short) (_Bool)1)))));
                /* LoopSeq 2 */
                for (unsigned char i_2 = 3; i_2 < 20; i_2 += 2) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            arr_15 [i_0] [i_2] [i_2] [i_2] [i_3] [i_2] [i_4] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)41))))) - (((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_8))))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [19ULL] [i_1] [i_0])))));
                            var_12 = ((/* implicit */unsigned short) ((arr_3 [i_1] [i_1]) - (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) arr_13 [i_0] [i_1] [i_2] [i_3] [i_3] [i_0])))))))));
                            var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)38629)) ? (((/* implicit */int) (unsigned short)31801)) : (((/* implicit */int) (_Bool)1)))))));
                        }
                        var_14 = ((/* implicit */long long int) ((unsigned short) var_6));
                    }
                    var_15 += ((/* implicit */unsigned long long int) max((min((((/* implicit */unsigned short) min((arr_1 [i_0 + 1]), (((/* implicit */short) var_9))))), (var_7))), (((/* implicit */unsigned short) ((_Bool) ((((/* implicit */int) (short)29641)) % (((/* implicit */int) (unsigned char)69))))))));
                    arr_16 [i_2] [i_2] = ((/* implicit */unsigned short) arr_1 [21LL]);
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 2; i_5 < 21; i_5 += 3) 
                    {
                        for (unsigned short i_6 = 1; i_6 < 20; i_6 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((unsigned char) (-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_7 [i_0 + 1] [i_0 + 1] [i_0])) : (((/* implicit */int) (unsigned char)78))))))))));
                                arr_25 [i_0] [i_0] [7U] [i_2] [i_2] [i_6] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)118)) | (((/* implicit */int) var_1))))), ((~(arr_19 [i_0 + 2] [i_2 - 2] [i_2 - 1] [i_5 - 1])))));
                            }
                        } 
                    } 
                }
                for (long long int i_7 = 1; i_7 < 20; i_7 += 1) 
                {
                    /* LoopSeq 1 */
                    for (short i_8 = 0; i_8 < 22; i_8 += 3) 
                    {
                        var_17 = (unsigned char)186;
                        arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] [i_8] = ((/* implicit */unsigned short) var_5);
                    }
                    /* LoopNest 2 */
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                    {
                        for (long long int i_10 = 0; i_10 < 22; i_10 += 3) 
                        {
                            {
                                arr_37 [i_0] [(unsigned short)10] [i_9] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) var_8)))))) ? (((((/* implicit */int) ((unsigned char) (signed char)-46))) + (((/* implicit */int) max((((/* implicit */unsigned short) arr_27 [i_0] [i_1] [i_1] [i_0])), (var_6)))))) : (((/* implicit */int) ((unsigned short) arr_33 [i_0 - 1] [i_1])))));
                                var_18 = ((/* implicit */unsigned short) min(((unsigned char)26), (((/* implicit */unsigned char) (signed char)-44))));
                                arr_38 [(signed char)18] [i_1] [(signed char)18] [i_9] [i_10] = ((/* implicit */unsigned char) (((~((+(((/* implicit */int) var_7)))))) == (((/* implicit */int) ((((((/* implicit */_Bool) arr_8 [i_0] [i_7] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_7] [i_1] [12U] [(unsigned short)6] [i_7]))) : (var_2))) == (max((((/* implicit */long long int) var_10)), (arr_28 [i_7] [i_7] [i_7] [(short)18]))))))));
                            }
                        } 
                    } 
                    arr_39 [i_1] = ((/* implicit */long long int) ((_Bool) 15586463112611158687ULL));
                }
                /* LoopNest 2 */
                for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                {
                    for (signed char i_12 = 1; i_12 < 19; i_12 += 1) 
                    {
                        {
                            var_19 ^= ((((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)186)) * (((/* implicit */int) (_Bool)0))))) == (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)206))) - (8917395167055980841ULL))))) || (((/* implicit */_Bool) arr_2 [i_11 + 1] [i_1] [i_11 + 1])));
                            /* LoopSeq 4 */
                            /* vectorizable */
                            for (unsigned short i_13 = 1; i_13 < 21; i_13 += 2) /* same iter space */
                            {
                                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)58086)) ? (((/* implicit */int) (unsigned short)59937)) : (((/* implicit */int) (_Bool)1)))))));
                                arr_49 [i_12] [i_12] [i_12] [i_12] [i_12] = ((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_11])) <= (((/* implicit */int) arr_23 [i_0] [i_0 + 1] [i_12] [i_12 + 3] [8LL]))));
                                var_21 += ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) arr_26 [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_6 [i_0] [i_1] [(unsigned char)19])))) : (((/* implicit */int) ((unsigned short) 2695242260U)))));
                                arr_50 [i_13] [i_12] [i_11] [i_12] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65103)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_11 + 1]))));
                                var_22 = ((/* implicit */unsigned short) ((signed char) var_8));
                            }
                            for (unsigned short i_14 = 1; i_14 < 21; i_14 += 2) /* same iter space */
                            {
                                var_23 = ((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_11] [i_1] [i_14] [i_0] [i_12]);
                                arr_53 [i_14] [i_12] [i_12] [i_12] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) var_6)) & (((/* implicit */int) (signed char)43))))));
                                var_24 -= ((/* implicit */long long int) ((signed char) (-(((/* implicit */int) arr_52 [i_14 - 1] [(unsigned short)0] [i_11 + 1] [(unsigned short)0] [i_0])))));
                            }
                            for (unsigned short i_15 = 1; i_15 < 21; i_15 += 2) /* same iter space */
                            {
                                var_25 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((unsigned long long int) (signed char)-60))) ? (((/* implicit */unsigned long long int) ((arr_42 [i_0] [i_0] [i_0] [i_0]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6))))) : (arr_14 [i_15 - 1] [i_15] [i_15] [i_15 - 1] [i_15 - 1] [i_15 - 1] [i_15 + 1]))), ((((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */unsigned long long int) (~(arr_8 [i_12] [21LL] [i_1])))) : (min((((/* implicit */unsigned long long int) arr_21 [i_15] [i_12] [i_11] [i_1] [8U])), (arr_0 [i_12] [i_0])))))));
                                var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_48 [(unsigned char)15] [i_11] [i_11] [i_11 + 1] [i_11 + 1] [i_15 - 1] [i_15])))) ? ((~(((long long int) arr_45 [i_1] [(unsigned short)19] [i_15] [i_12 + 3] [i_15 + 1])))) : (((/* implicit */long long int) ((/* implicit */int) ((short) ((arr_32 [i_0] [i_0] [i_0]) | (arr_29 [i_0] [i_0] [i_12] [i_12]))))))));
                                var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) ((unsigned int) (~(((/* implicit */int) (signed char)44))))))));
                            }
                            for (unsigned char i_16 = 0; i_16 < 22; i_16 += 2) 
                            {
                                var_28 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned char) ((arr_58 [i_0] [i_0] [(unsigned short)1] [i_12] [i_16] [i_12] [i_0]) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
                                var_29 |= ((/* implicit */_Bool) arr_35 [i_0] [i_1] [i_1] [i_11] [i_11] [i_12] [i_11]);
                            }
                            /* LoopSeq 2 */
                            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                            {
                                var_30 = ((/* implicit */unsigned long long int) var_7);
                                var_31 = ((/* implicit */unsigned char) arr_27 [i_1] [i_1] [i_11] [i_17]);
                            }
                            for (unsigned short i_18 = 0; i_18 < 22; i_18 += 3) 
                            {
                                arr_65 [i_0] [i_0] [i_0] [i_12] [i_0] [(unsigned short)4] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)44))));
                                var_32 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)42369))))) ? (((((/* implicit */_Bool) arr_21 [i_18] [i_12] [i_11] [i_1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [21LL] [i_1] [i_11] [i_12]))) : (((unsigned int) arr_34 [i_18])))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)186)))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */short) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_4))))), (min((((/* implicit */short) var_1)), (var_10)))))) ? (((((/* implicit */int) var_9)) / (((/* implicit */int) var_6)))) : (((/* implicit */int) var_9))));
}
