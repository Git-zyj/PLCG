/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203035
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 2) /* same iter space */
        {
            var_13 |= ((/* implicit */int) arr_0 [i_1] [i_0]);
            /* LoopNest 2 */
            for (short i_2 = 4; i_2 < 12; i_2 += 4) 
            {
                for (unsigned short i_3 = 0; i_3 < 15; i_3 += 4) 
                {
                    {
                        var_14 |= ((/* implicit */short) arr_12 [i_2] [i_2 + 3] [i_2] [i_2] [i_2]);
                        var_15 += arr_7 [i_0] [i_1] [i_2] [i_3];
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 1; i_4 < 13; i_4 += 1) /* same iter space */
                        {
                            var_16 |= arr_12 [i_4] [i_0] [i_1] [i_0] [i_0];
                            var_17 |= ((/* implicit */unsigned long long int) ((arr_5 [8] [i_0]) > (((/* implicit */int) arr_3 [i_4]))));
                            arr_15 [i_0] [i_1] [i_3] [i_3] [i_4 + 1] |= ((/* implicit */unsigned char) ((short) arr_2 [i_1 + 1] [i_4]));
                        }
                        for (unsigned char i_5 = 1; i_5 < 13; i_5 += 1) /* same iter space */
                        {
                            var_18 |= ((/* implicit */unsigned long long int) ((unsigned char) arr_5 [i_1 + 2] [i_2 - 1]));
                            var_19 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_3])) ? ((-(((/* implicit */int) arr_7 [i_0] [i_2] [i_3] [i_5])))) : ((+(769973385)))));
                        }
                        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)38)))))));
                        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_0] [i_2] [i_2])) ? (((/* implicit */int) arr_16 [i_0] [i_0] [i_3])) : (((/* implicit */int) arr_6 [i_0]))))) ? (((/* implicit */int) arr_13 [i_3] [i_3] [i_1] [i_1] [i_3] [i_0])) : (((/* implicit */int) arr_16 [i_2] [i_2] [i_3])))))));
                    }
                } 
            } 
            var_22 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_1 + 2] [i_1 - 1] [i_1 + 2] [12] [i_0] [i_1 + 1])) ? (((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_1])) ? (((/* implicit */int) arr_11 [i_0] [i_1] [i_0] [i_1] [i_1] [i_1 + 2])) : (arr_5 [i_0] [i_1]))) : (((/* implicit */int) arr_12 [i_1 + 2] [i_0] [i_1 - 1] [i_0] [i_0]))));
            /* LoopSeq 3 */
            for (short i_6 = 0; i_6 < 15; i_6 += 2) 
            {
                var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)27)) ? (((/* implicit */int) (signed char)-50)) : (((/* implicit */int) (signed char)69)))))));
                var_24 += ((/* implicit */short) arr_13 [(short)2] [i_0] [i_0] [i_1] [i_6] [i_6]);
                /* LoopSeq 2 */
                for (int i_7 = 0; i_7 < 15; i_7 += 4) 
                {
                    var_25 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_1 + 1])) ? (((/* implicit */int) arr_1 [i_1 - 1])) : (((/* implicit */int) arr_6 [i_1 + 1]))));
                    var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) arr_7 [i_7] [i_0] [i_1] [i_0]))));
                    var_27 |= ((/* implicit */short) arr_0 [i_6] [i_7]);
                }
                for (long long int i_8 = 0; i_8 < 15; i_8 += 2) 
                {
                    var_28 += ((/* implicit */unsigned char) arr_28 [i_0] [i_6] [i_1] [i_0]);
                    var_29 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) (signed char)69))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-94))) : (-7726219186242240988LL)));
                    var_30 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_20 [i_1 + 1] [i_8])) ? (((/* implicit */int) arr_20 [i_1 + 2] [i_0])) : (((/* implicit */int) arr_20 [i_1 + 1] [i_0]))));
                }
            }
            for (long long int i_9 = 2; i_9 < 12; i_9 += 1) 
            {
                var_31 += ((/* implicit */int) ((_Bool) arr_31 [i_0] [(unsigned short)10] [i_0] [i_0]));
                arr_33 [i_0] |= ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) (short)31549)) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_1] [i_1] [i_1] [i_9]))) : (arr_28 [i_0] [7LL] [i_0] [i_0]))));
                var_32 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_9 + 2] [i_1 - 1] [i_1 - 1] [i_1 + 1])) ? (((/* implicit */int) arr_22 [i_1 + 1] [0] [i_0] [i_1 - 1] [i_9] [i_9])) : ((+(((/* implicit */int) (signed char)66))))));
            }
            for (unsigned char i_10 = 2; i_10 < 11; i_10 += 4) 
            {
                var_33 |= ((/* implicit */unsigned long long int) arr_14 [i_10] [i_10 + 1] [i_10] [i_10] [i_10] [i_10 + 4] [i_1 + 2]);
                var_34 += (+(((/* implicit */int) arr_1 [i_0])));
                var_35 |= ((/* implicit */short) ((((((/* implicit */int) arr_24 [i_10] [i_10] [i_10] [i_10] [i_0] [i_0])) & (((/* implicit */int) (short)-27060)))) > (((/* implicit */int) (unsigned char)240))));
                var_36 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [(short)7] [i_1 + 1] [i_1] [i_10])) ? (((/* implicit */int) arr_11 [i_0] [i_1] [i_10] [i_10] [11ULL] [i_10 + 4])) : (((/* implicit */int) (signed char)(-127 - 1)))));
            }
        }
        for (unsigned long long int i_11 = 1; i_11 < 13; i_11 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (short i_12 = 3; i_12 < 13; i_12 += 4) 
            {
                for (int i_13 = 0; i_13 < 15; i_13 += 4) 
                {
                    {
                        var_37 |= ((/* implicit */_Bool) ((unsigned char) (short)-13257));
                        /* LoopSeq 2 */
                        for (unsigned char i_14 = 0; i_14 < 15; i_14 += 4) 
                        {
                            var_38 += ((/* implicit */int) arr_42 [i_12 - 2] [i_12 + 1] [i_12 - 2] [i_12 + 2]);
                            var_39 = ((/* implicit */_Bool) min((var_39), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_43 [i_0])) ? (arr_21 [i_11 - 1] [i_12 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_45 [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
                            var_40 = ((/* implicit */long long int) min((var_40), (((/* implicit */long long int) arr_26 [i_13] [i_12] [i_11] [i_0]))));
                        }
                        for (unsigned char i_15 = 0; i_15 < 15; i_15 += 1) 
                        {
                            var_41 += ((/* implicit */long long int) (-(((arr_2 [i_13] [i_11]) ? (arr_5 [(short)2] [(short)2]) : (((/* implicit */int) arr_13 [i_0] [i_11] [i_12] [i_13] [i_0] [i_11]))))));
                            var_42 |= ((((/* implicit */_Bool) arr_11 [i_13] [i_13] [i_13] [i_12 + 1] [i_11 + 2] [i_11])) ? (((/* implicit */int) arr_11 [i_12 + 1] [i_15] [i_13] [i_12 + 1] [i_11 + 2] [(unsigned short)3])) : (((/* implicit */int) arr_11 [i_15] [i_15] [i_15] [i_12 - 2] [i_11 + 1] [(unsigned char)7])));
                        }
                        /* LoopSeq 1 */
                        for (unsigned char i_16 = 2; i_16 < 14; i_16 += 3) 
                        {
                            var_43 |= ((/* implicit */_Bool) arr_45 [i_0] [i_0] [i_12 + 2] [i_13] [i_16]);
                            var_44 += ((((/* implicit */_Bool) arr_7 [i_16] [i_16 - 1] [i_12 + 1] [i_11 - 1])) ? (((/* implicit */int) arr_7 [i_11 + 1] [i_16 - 1] [i_12 - 2] [i_11 + 1])) : (((/* implicit */int) arr_20 [i_0] [i_0])));
                            var_45 |= ((/* implicit */unsigned short) (+(((/* implicit */int) arr_14 [i_11 + 2] [i_12 + 1] [i_12 + 1] [i_13] [i_13] [i_16] [i_16 - 2]))));
                        }
                        var_46 += ((/* implicit */unsigned short) ((((/* implicit */int) (short)27057)) >> (((/* implicit */int) arr_32 [i_11] [i_12] [i_13]))));
                    }
                } 
            } 
            var_47 = ((/* implicit */short) max((var_47), (((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_11 - 1] [i_0] [i_11 - 1] [i_11 - 1] [i_0] [i_11 + 1])) ? (((/* implicit */int) arr_13 [i_11 + 1] [i_0] [i_11 + 2] [i_11 + 2] [i_0] [i_11 - 1])) : (((/* implicit */int) arr_13 [i_11 + 2] [i_0] [i_11 + 2] [i_11 + 1] [i_0] [i_11 + 1])))))));
            var_48 = ((/* implicit */unsigned short) max((var_48), (((/* implicit */unsigned short) arr_40 [i_0] [i_0] [i_11 + 2]))));
            /* LoopNest 3 */
            for (long long int i_17 = 1; i_17 < 11; i_17 += 4) 
            {
                for (unsigned char i_18 = 0; i_18 < 15; i_18 += 3) 
                {
                    for (unsigned char i_19 = 3; i_19 < 14; i_19 += 2) 
                    {
                        {
                            var_49 = ((/* implicit */unsigned char) min((var_49), (((/* implicit */unsigned char) (signed char)15))));
                            var_50 |= ((/* implicit */unsigned char) arr_10 [i_0] [i_0]);
                            var_51 = ((/* implicit */unsigned long long int) min((var_51), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_1 [i_19]) ? (((/* implicit */int) (short)-13269)) : (((/* implicit */int) arr_19 [i_0]))))) ? (arr_54 [i_19] [i_18] [i_17] [i_11]) : (((/* implicit */int) arr_20 [i_0] [i_0])))))));
                        }
                    } 
                } 
            } 
            var_52 += ((/* implicit */unsigned short) ((unsigned char) (+(((/* implicit */int) (short)12137)))));
        }
        for (unsigned long long int i_20 = 1; i_20 < 13; i_20 += 2) /* same iter space */
        {
            var_53 |= ((/* implicit */short) arr_60 [i_0] [i_20] [9ULL]);
            var_54 += ((((/* implicit */_Bool) arr_21 [i_20 + 2] [i_20 + 1])) ? (((/* implicit */unsigned long long int) -3873054552695683549LL)) : (arr_21 [i_20 + 1] [i_20 + 1]));
            var_55 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_20] [i_0])) ? (((/* implicit */int) arr_43 [i_20 + 1])) : (((((/* implicit */int) arr_23 [i_0] [i_20] [i_0] [i_0])) + (((/* implicit */int) (short)-13262))))));
        }
        var_56 += ((/* implicit */unsigned char) arr_4 [i_0]);
    }
    var_57 += ((/* implicit */unsigned char) (short)-13262);
    var_58 = ((/* implicit */int) max((var_58), (((/* implicit */int) var_4))));
    var_59 = ((/* implicit */unsigned short) min((var_59), (((/* implicit */unsigned short) var_6))));
}
