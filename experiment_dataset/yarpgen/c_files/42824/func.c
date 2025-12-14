/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42824
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] |= ((/* implicit */unsigned char) (+(var_1)));
        var_20 = ((/* implicit */int) (((-(4532123931338011038ULL))) + (((/* implicit */unsigned long long int) arr_0 [i_0]))));
    }
    var_21 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) 13914620142371540576ULL)) ? (13914620142371540580ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)25)))))));
    var_22 = ((/* implicit */signed char) var_9);
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_1 = 0; i_1 < 16; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (signed char i_3 = 2; i_3 < 12; i_3 += 4) 
            {
                {
                    var_23 = ((/* implicit */unsigned char) (-(arr_5 [i_2] [i_2])));
                    var_24 = ((/* implicit */long long int) var_1);
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (short i_5 = 3; i_5 < 15; i_5 += 1) 
            {
                {
                    arr_16 [i_1] [i_4] [i_1] [(unsigned char)6] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_11 [i_4] [i_4]))));
                    var_25 = (unsigned char)230;
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_6 = 0; i_6 < 16; i_6 += 3) 
        {
            for (unsigned int i_7 = 0; i_7 < 16; i_7 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (signed char i_8 = 3; i_8 < 14; i_8 += 1) 
                    {
                        var_26 *= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)6178))) ^ (((((/* implicit */_Bool) arr_21 [i_6] [i_7] [i_7] [i_8])) ? (4532123931338011041ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)35445)))))));
                        var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) (+(((((/* implicit */int) var_7)) & (-1225054734))))))));
                    }
                    for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                    {
                        var_28 ^= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) % (arr_7 [i_9 + 1])));
                        var_29 = ((/* implicit */short) (!(((/* implicit */_Bool) (+(4532123931338011039ULL))))));
                        /* LoopSeq 2 */
                        for (long long int i_10 = 0; i_10 < 16; i_10 += 2) 
                        {
                            arr_30 [i_1] [i_6] [i_7] [i_6] [(unsigned char)10] = (-(((/* implicit */int) arr_11 [i_6] [i_10])));
                            var_30 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-12111))) % (arr_1 [i_9 + 1])));
                        }
                        for (unsigned int i_11 = 1; i_11 < 15; i_11 += 1) 
                        {
                            arr_33 [i_6] [i_6] [i_7] [i_9] = ((/* implicit */unsigned long long int) arr_26 [i_6] [i_7]);
                            var_31 = ((/* implicit */unsigned short) ((unsigned char) arr_9 [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_6]));
                        }
                        arr_34 [i_9] [i_7] [i_6] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_6] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_6] [i_7] [i_6]))) : (3565809797U)))) ? (((((/* implicit */_Bool) 2146981177U)) ? (4532123931338011031ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-83))))) : (((/* implicit */unsigned long long int) arr_13 [i_1] [i_6] [12LL]))));
                    }
                    for (signed char i_12 = 0; i_12 < 16; i_12 += 4) 
                    {
                        var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) ((((arr_8 [i_1] [i_1] [i_7] [i_12]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_1] [i_6] [i_7] [i_7] [i_6]))))) / (((/* implicit */unsigned int) 1798869676)))))));
                        var_33 = ((/* implicit */signed char) ((unsigned long long int) arr_13 [i_12] [i_6] [i_6]));
                    }
                    /* LoopNest 2 */
                    for (signed char i_13 = 2; i_13 < 15; i_13 += 3) 
                    {
                        for (unsigned int i_14 = 2; i_14 < 15; i_14 += 1) 
                        {
                            {
                                arr_43 [i_6] [(_Bool)1] [i_7] [i_6] [i_6] = ((unsigned char) var_5);
                                arr_44 [i_1] [i_7] [i_6] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) arr_5 [i_6] [i_6])))))));
                                arr_45 [i_6] [i_6] [i_14 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)96)) ? (613842399U) : (((/* implicit */unsigned int) 858421173))));
                            }
                        } 
                    } 
                    var_34 = ((/* implicit */signed char) (unsigned char)185);
                    /* LoopSeq 3 */
                    for (short i_15 = 0; i_15 < 16; i_15 += 1) 
                    {
                        arr_49 [i_6] [6] [(unsigned short)8] [i_15] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) arr_6 [i_6] [i_7])) : (var_19)))) ? (13914620142371540577ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))));
                        arr_50 [(unsigned char)7] [10U] [i_7] [i_6] [10U] [4] = ((/* implicit */unsigned short) (+(((var_18) ? (arr_25 [i_1] [i_1] [i_7] [i_15]) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))));
                    }
                    for (long long int i_16 = 0; i_16 < 16; i_16 += 1) 
                    {
                        var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) var_9))));
                        var_36 = ((/* implicit */short) ((((/* implicit */_Bool) arr_46 [i_16] [i_7] [i_1])) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_46 [i_6] [i_7] [i_16])))));
                    }
                    for (short i_17 = 1; i_17 < 15; i_17 += 4) 
                    {
                        var_37 = ((/* implicit */unsigned long long int) min((var_37), (((/* implicit */unsigned long long int) var_13))));
                        var_38 = ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))));
                    }
                    arr_56 [i_6] = ((/* implicit */unsigned char) ((11338459679823748913ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_1] [i_1] [i_7] [i_7])))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (int i_18 = 0; i_18 < 16; i_18 += 3) 
        {
            var_39 = ((/* implicit */int) min((var_39), (((((/* implicit */int) arr_3 [i_18])) + (((/* implicit */int) var_7))))));
            /* LoopNest 2 */
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
            {
                for (unsigned short i_20 = 3; i_20 < 15; i_20 += 4) 
                {
                    {
                        var_40 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_40 [i_1] [i_18] [i_18] [i_19])) : (((/* implicit */int) (unsigned short)2229))));
                        /* LoopSeq 4 */
                        for (short i_21 = 0; i_21 < 16; i_21 += 4) 
                        {
                            arr_66 [i_1] [i_1] [i_1] [i_18] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2147483647)) ? (arr_37 [i_1] [i_1] [i_1] [11U] [11U] [i_21]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_20 - 3] [i_20 - 2] [i_19] [i_19])))));
                            var_41 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_23 [i_1] [1ULL] [i_19])) && (var_18)));
                        }
                        for (signed char i_22 = 0; i_22 < 16; i_22 += 2) 
                        {
                            arr_71 [i_1] [i_18] [i_1] [i_20] = ((((/* implicit */int) arr_65 [i_20 + 1] [i_20] [i_20 - 3] [i_20] [i_22])) * (((/* implicit */int) (unsigned char)130)));
                            arr_72 [(unsigned char)15] [i_18] [(unsigned char)14] [i_20] = ((/* implicit */_Bool) arr_70 [13U] [i_18] [i_20 - 1] [15U] [i_22] [13U]);
                        }
                        for (unsigned short i_23 = 0; i_23 < 16; i_23 += 3) 
                        {
                            arr_75 [15ULL] [i_18] [i_19] [5U] [i_23] [i_1] [i_1] = ((/* implicit */unsigned char) ((short) 13914620142371540564ULL));
                            arr_76 [i_18] [i_18] [i_19] [i_20 - 3] [(unsigned short)7] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_65 [(short)3] [(short)4] [(short)4] [i_20] [i_20 - 1])) ? (((/* implicit */int) arr_65 [i_19] [i_19] [i_19] [4U] [i_18])) : (((/* implicit */int) arr_65 [i_1] [i_18] [i_23] [i_20] [i_23]))));
                            arr_77 [i_1] [i_18] [i_19] [i_19] [i_23] = ((/* implicit */unsigned long long int) (-(arr_53 [i_20 - 1] [i_20 - 3] [i_20 - 2] [i_20 - 3])));
                            var_42 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_60 [i_20 - 1])) % (((/* implicit */int) arr_60 [i_20 - 2]))));
                        }
                        for (unsigned int i_24 = 2; i_24 < 15; i_24 += 1) 
                        {
                            var_43 = ((/* implicit */unsigned long long int) arr_55 [i_20 - 3] [i_18]);
                            arr_80 [i_1] [i_18] [i_1] [(_Bool)0] [i_1] = ((/* implicit */long long int) (+(((/* implicit */int) (short)17344))));
                            var_44 *= ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) (signed char)94)))));
                            arr_81 [i_1] [(unsigned char)1] [i_18] [i_18] [i_18] = ((/* implicit */long long int) var_16);
                        }
                    }
                } 
            } 
        }
    }
    var_45 = ((/* implicit */short) ((((/* implicit */_Bool) min((max((var_1), (var_16))), (((/* implicit */unsigned int) ((int) var_11)))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_4))) - (var_12))) : (((/* implicit */unsigned int) var_0))));
}
