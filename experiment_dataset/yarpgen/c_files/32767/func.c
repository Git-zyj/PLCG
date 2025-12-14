/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32767
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
    for (unsigned char i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    var_18 = ((/* implicit */signed char) max(((+(((/* implicit */int) arr_4 [i_0] [i_1] [i_2] [i_0 - 1])))), (min((((/* implicit */int) arr_3 [i_0 + 1])), ((+(((/* implicit */int) (unsigned char)153))))))));
                    arr_7 [(unsigned char)13] [(signed char)6] [i_1] [(signed char)6] = (+(((((/* implicit */_Bool) ((int) (unsigned char)114))) ? (((((/* implicit */_Bool) (short)14202)) ? (((/* implicit */int) (unsigned char)121)) : (((/* implicit */int) (unsigned char)171)))) : (((/* implicit */int) arr_5 [i_1] [i_1])))));
                }
                for (signed char i_3 = 0; i_3 < 19; i_3 += 1) 
                {
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)153)) == (((/* implicit */int) (unsigned short)18943))))) < ((+(((/* implicit */int) (unsigned char)171))))));
                    var_20 = ((/* implicit */unsigned char) arr_0 [i_0] [5LL]);
                    arr_10 [2U] [i_1] [i_3] = ((/* implicit */signed char) arr_3 [i_0 - 1]);
                    var_21 = ((/* implicit */unsigned long long int) min((((((/* implicit */int) var_15)) * (((((/* implicit */int) (unsigned char)0)) >> (((/* implicit */int) arr_3 [i_1])))))), (((/* implicit */int) (_Bool)1))));
                    /* LoopSeq 4 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_22 = arr_12 [i_0 - 2] [(unsigned short)4] [(unsigned char)6] [(signed char)5] [i_3] [i_3];
                        /* LoopSeq 2 */
                        for (int i_5 = 0; i_5 < 19; i_5 += 3) 
                        {
                            var_23 = ((/* implicit */unsigned int) (unsigned short)1488);
                            var_24 |= ((/* implicit */int) arr_3 [i_4]);
                            var_25 = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_14 [i_0 + 2] [i_0 + 1] [i_0] [i_3] [i_0 + 2])))))));
                            arr_16 [i_3] [i_3] [i_3] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned short) arr_13 [i_0] [(signed char)15] [i_3] [i_3] [i_5])))))), (arr_11 [i_0] [i_4] [i_0])));
                            var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) max((min((var_8), (((/* implicit */long long int) var_4)))), (((/* implicit */long long int) arr_15 [i_0 + 1])))))));
                        }
                        for (int i_6 = 1; i_6 < 18; i_6 += 4) 
                        {
                            var_27 = ((/* implicit */unsigned short) (~(((/* implicit */int) max((((/* implicit */unsigned char) ((8) > (((/* implicit */int) arr_0 [i_6] [i_4]))))), (arr_18 [i_0] [i_0] [i_3] [i_4] [i_6]))))));
                            var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_18 [i_6 - 1] [i_6 - 1] [i_6 + 1] [i_6 + 1] [i_0 - 2])) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_1 [i_0])), (var_11)))) : (((/* implicit */int) arr_2 [i_3] [i_4])))))))));
                            arr_20 [i_0] [i_0 - 2] [(signed char)7] [i_3] [i_0 - 2] = ((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)38073)), (max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_9)))), (((/* implicit */int) min((((/* implicit */short) arr_15 [i_0])), (var_16))))))));
                        }
                        var_29 += ((/* implicit */int) (((+(((/* implicit */int) (signed char)38)))) != ((+(((/* implicit */int) (short)-18681))))));
                    }
                    for (signed char i_7 = 0; i_7 < 19; i_7 += 1) 
                    {
                        var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) ((min((((/* implicit */int) max((((/* implicit */unsigned char) var_5)), (arr_12 [i_0 - 1] [i_1] [i_3] [i_7] [i_3] [i_0])))), (((((/* implicit */int) (unsigned short)65535)) & (((/* implicit */int) arr_9 [i_0] [i_0] [i_0])))))) & (((/* implicit */int) arr_21 [i_0] [i_0])))))));
                        var_31 = ((/* implicit */_Bool) arr_11 [i_0 + 2] [i_1] [i_0 + 2]);
                    }
                    for (signed char i_8 = 0; i_8 < 19; i_8 += 1) /* same iter space */
                    {
                        arr_27 [i_0] [i_1] [i_3] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_8])) ? (arr_6 [i_0 + 1] [i_0 - 2] [i_0 + 2]) : (((/* implicit */long long int) ((/* implicit */int) var_16)))))) ? (((arr_6 [i_0] [(signed char)15] [i_8]) << (((var_12) - (1825550553))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0 + 2] [i_0 + 1] [i_0 + 1]))))))));
                        var_32 = ((/* implicit */signed char) (((+(arr_17 [i_0] [i_0 + 2] [i_3] [i_8] [(signed char)12] [i_8]))) / ((~(((/* implicit */int) arr_4 [i_0] [i_0 - 2] [i_0 + 2] [i_1]))))));
                    }
                    /* vectorizable */
                    for (signed char i_9 = 0; i_9 < 19; i_9 += 1) /* same iter space */
                    {
                        arr_31 [i_0 + 1] [i_1] [i_0 + 1] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [i_0 - 1] [i_0 - 1] [i_0 - 1] [(signed char)5] [i_0] [i_3])) / (((/* implicit */int) arr_4 [i_0 + 2] [i_0 + 1] [i_0 + 1] [i_0]))));
                        var_33 = ((/* implicit */short) ((arr_28 [i_0 - 2] [i_3] [i_0 - 1] [i_0 + 2]) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)121)))));
                    }
                }
                var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)50941)))))));
                /* LoopNest 3 */
                for (short i_10 = 1; i_10 < 17; i_10 += 1) 
                {
                    for (unsigned long long int i_11 = 0; i_11 < 19; i_11 += 2) 
                    {
                        for (unsigned char i_12 = 0; i_12 < 19; i_12 += 1) 
                        {
                            {
                                arr_40 [i_0 + 2] [i_0 + 2] [i_12] [i_11] [i_12] = ((/* implicit */unsigned short) (~(var_1)));
                                var_35 = ((/* implicit */unsigned long long int) (+(min((-12), (((/* implicit */int) var_16))))));
                                var_36 = ((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) arr_28 [i_0] [i_12] [i_10 + 1] [i_0 + 1])), (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-3235))) / (12479024242219890882ULL))))), (((/* implicit */unsigned long long int) (signed char)13))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_13 = 0; i_13 < 13; i_13 += 1) 
    {
        for (int i_14 = 0; i_14 < 13; i_14 += 3) 
        {
            {
                arr_45 [i_13] [i_14] [i_14] = ((/* implicit */unsigned long long int) var_13);
                var_37 = ((/* implicit */unsigned long long int) arr_8 [i_13] [13ULL]);
                var_38 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (signed char)38)) ? (-2060390664) : (((/* implicit */int) (signed char)-48))))));
                /* LoopNest 2 */
                for (unsigned char i_15 = 1; i_15 < 10; i_15 += 2) 
                {
                    for (int i_16 = 0; i_16 < 13; i_16 += 2) 
                    {
                        {
                            arr_50 [i_13] [i_14] [i_14] [i_15] [i_16] [i_16] = ((/* implicit */_Bool) arr_30 [i_15 + 3] [i_15 + 3] [i_15 + 2] [i_15 + 1]);
                            var_39 -= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) max((arr_49 [4ULL] [i_14] [i_14] [i_16]), (((/* implicit */unsigned long long int) arr_42 [(unsigned char)5]))))) ? (((/* implicit */int) arr_24 [i_15 + 1] [i_15 - 1])) : (((/* implicit */int) var_5)))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)14590)))))));
                            var_40 = ((/* implicit */signed char) arr_47 [i_13] [i_14]);
                            var_41 = ((/* implicit */signed char) max((var_41), (((/* implicit */signed char) ((((/* implicit */_Bool) ((int) arr_11 [i_15 + 2] [i_15 + 2] [i_15 + 1]))) ? (((((/* implicit */int) var_4)) * (((/* implicit */int) arr_3 [i_16])))) : (((/* implicit */int) ((unsigned char) arr_23 [i_15 - 1] [i_15 + 2] [i_15 - 1] [i_15 - 1] [i_15 - 1]))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
