/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208478
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
    for (int i_0 = 4; i_0 < 23; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_3 = 2; i_3 < 23; i_3 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_0] [(signed char)18] [i_0] [(signed char)18])) ? (max((var_7), (((/* implicit */long long int) var_9)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */unsigned int) var_0)) : (arr_10 [i_3] [i_3 + 1] [i_3 - 2] [i_2] [i_0 - 4]))))));
                            var_15 = ((/* implicit */_Bool) var_0);
                        }
                        arr_13 [i_0] [i_0 - 4] [i_0] [i_0] = ((/* implicit */int) ((var_10) >> (((unsigned int) arr_1 [i_0] [i_0]))));
                        var_16 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2]))) : (var_7)))) ? (((/* implicit */unsigned int) arr_7 [i_0] [i_0] [i_0] [i_0 - 4])) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_10 [i_0] [i_0 - 3] [i_0 - 3] [i_0 - 3] [i_0])))))));
                        arr_14 [5] [2LL] [2LL] [i_0] = ((/* implicit */_Bool) (+((-(((/* implicit */int) var_3))))));
                    }
                    for (int i_5 = 0; i_5 < 24; i_5 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (signed char i_6 = 0; i_6 < 24; i_6 += 2) 
                        {
                            var_17 = ((/* implicit */unsigned int) var_0);
                            var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 17179869183LL)) ? (((/* implicit */unsigned int) (+(arr_20 [i_0] [i_1] [i_2] [i_5] [i_6])))) : (((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0 - 1])) ? (((/* implicit */unsigned int) arr_15 [i_0] [i_0] [i_0] [i_0])) : (arr_10 [i_0] [i_0 - 1] [i_0 - 1] [i_0] [i_0])))))) ? (arr_5 [i_0] [i_5]) : ((+(((/* implicit */int) var_3))))));
                        }
                        /* vectorizable */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_7] [(signed char)6] [i_2] [i_0] [i_0])) ? (arr_10 [i_0 - 3] [(_Bool)1] [i_2] [(short)20] [i_7]) : (arr_10 [i_0 - 1] [i_0 - 1] [i_2] [i_5] [i_7])));
                            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_17 [i_0] [i_0 + 1])) : (((/* implicit */int) arr_16 [i_0] [i_0 - 1] [i_0] [i_0 - 3] [i_0 + 1]))));
                            arr_24 [i_7] [i_0] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)7)) ? (arr_9 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (((((/* implicit */_Bool) arr_12 [i_0] [12LL] [(unsigned char)4] [i_0] [i_7])) ? (((/* implicit */int) (unsigned char)7)) : (var_0))) : (var_0));
                        }
                        /* vectorizable */
                        for (unsigned short i_8 = 3; i_8 < 23; i_8 += 2) 
                        {
                            arr_27 [i_0] [i_1] [i_2] [i_8 - 1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_4 [i_0 - 3])) && (((/* implicit */_Bool) (unsigned short)65508)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0 - 4] [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) var_0)))))) : (var_7)));
                            var_21 = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) var_8))) == (arr_6 [i_0] [i_1] [i_0] [i_5]))) ? (((/* implicit */int) arr_4 [i_0 + 1])) : (((/* implicit */int) var_9))));
                            var_22 = ((/* implicit */int) ((((/* implicit */int) (unsigned char)7)) == ((+(((/* implicit */int) var_11))))));
                        }
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)246))) : (arr_21 [i_0] [i_0] [i_0] [i_0 - 2] [i_0] [15] [i_0])))) ? (((((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_0] [i_0 - 4] [i_0 + 1] [i_0] [i_0])) ? (((/* implicit */int) arr_22 [i_0 - 4])) : (((/* implicit */int) var_12)))) : ((~(var_13)))));
                        var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0 - 2])))))))) ? (((/* implicit */int) ((((var_4) ^ (((/* implicit */int) (signed char)-3)))) >= (((arr_18 [i_5] [3U] [i_1] [i_1] [i_1] [i_0]) ? (((/* implicit */int) arr_18 [i_0 - 3] [i_1] [i_2] [i_2] [i_5] [i_5])) : (((/* implicit */int) (signed char)-3))))))) : (((/* implicit */int) var_12))));
                        var_25 = ((/* implicit */unsigned long long int) arr_22 [i_2]);
                    }
                    arr_28 [i_0 - 1] [i_1] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_22 [i_0 - 3])) : (((/* implicit */int) (_Bool)1)))) != (((/* implicit */int) var_8))));
                }
            } 
        } 
        arr_29 [i_0] = ((/* implicit */unsigned short) var_1);
    }
    /* LoopNest 3 */
    for (int i_9 = 2; i_9 < 22; i_9 += 1) 
    {
        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
        {
            for (signed char i_11 = 0; i_11 < 24; i_11 += 1) 
            {
                {
                    arr_37 [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_9] = ((/* implicit */unsigned char) 1413868892605476930LL);
                    arr_38 [i_9] [(signed char)8] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((arr_18 [i_9] [i_9] [i_9] [(_Bool)1] [(unsigned char)5] [i_9]) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)169)))))))) == (((((/* implicit */_Bool) arr_22 [i_9 + 2])) ? (((/* implicit */int) arr_22 [i_9 - 1])) : (((/* implicit */int) arr_22 [i_9 - 1]))))));
                    var_26 = ((/* implicit */_Bool) min((arr_15 [12ULL] [i_9 - 2] [i_9 + 1] [12ULL]), (min((((((/* implicit */_Bool) var_11)) ? (var_6) : (((/* implicit */int) arr_22 [i_9])))), (((/* implicit */int) arr_1 [18LL] [i_10]))))));
                    var_27 = ((/* implicit */unsigned short) var_13);
                    var_28 = ((/* implicit */unsigned short) (+((~(((((/* implicit */int) arr_12 [6ULL] [i_9] [i_10] [(unsigned char)20] [0])) % (((/* implicit */int) arr_12 [(unsigned short)0] [14LL] [i_10] [(unsigned char)12] [i_11]))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (short i_12 = 0; i_12 < 17; i_12 += 2) 
    {
        /* LoopSeq 2 */
        for (int i_13 = 0; i_13 < 17; i_13 += 1) 
        {
            var_29 = (i_13 % 2 == 0) ? (((/* implicit */unsigned short) ((int) ((arr_15 [(_Bool)1] [i_13] [(signed char)2] [i_13]) + (arr_15 [16] [i_13] [i_13] [i_13]))))) : (((/* implicit */unsigned short) ((int) ((arr_15 [(_Bool)1] [i_13] [(signed char)2] [i_13]) - (arr_15 [16] [i_13] [i_13] [i_13])))));
            arr_44 [i_13] [i_13] = ((/* implicit */unsigned int) var_9);
            arr_45 [i_13] [i_12] = ((/* implicit */int) ((((/* implicit */_Bool) (~(arr_30 [i_12])))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (max((arr_30 [i_12]), (arr_30 [i_12])))));
        }
        for (signed char i_14 = 0; i_14 < 17; i_14 += 3) 
        {
            arr_50 [i_12] [i_14] = ((/* implicit */short) min((((((/* implicit */_Bool) arr_8 [i_12] [i_12] [i_14] [i_12])) ? (((arr_46 [i_12] [i_14]) / (((/* implicit */long long int) arr_9 [i_12] [i_12] [i_14] [i_14])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_14] [i_12] [i_14])) ? (var_6) : (arr_20 [i_14] [i_14] [i_12] [i_14] [i_14])))))), (((/* implicit */long long int) var_2))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_15 = 0; i_15 < 17; i_15 += 4) 
            {
                arr_55 [i_14] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_4)) ? (arr_31 [i_15]) : (((/* implicit */long long int) var_13)))) >= (((/* implicit */long long int) (+(arr_10 [i_12] [i_15] [i_12] [i_14] [i_12]))))));
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 17; i_16 += 1) 
                {
                    for (unsigned char i_17 = 0; i_17 < 17; i_17 += 3) 
                    {
                        {
                            arr_62 [(_Bool)1] [i_14] [i_12] [i_14] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)(-127 - 1))) ^ (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_12] [i_14] [i_14] [i_17])) && ((_Bool)1))))));
                            arr_63 [i_14] = ((/* implicit */signed char) var_0);
                            var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) + (var_4)))) ? (((var_2) - (((/* implicit */unsigned int) ((/* implicit */int) arr_47 [i_14]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)2)) ? (var_6) : (var_6))))));
                            var_31 = ((/* implicit */long long int) var_10);
                        }
                    } 
                } 
                arr_64 [(unsigned char)5] [i_14] [i_15] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) arr_60 [i_12] [i_12] [i_12] [i_14] [i_12] [i_12])) : (arr_30 [i_14])))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_57 [i_12] [i_12] [(_Bool)1] [i_12])));
                var_32 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_12))))) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_12] [i_14] [23] [23])))));
            }
            arr_65 [i_14] [i_14] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_14] [i_12] [i_12] [i_12])) ? (arr_60 [3] [(unsigned short)5] [i_12] [i_14] [i_14] [i_12]) : (arr_8 [7] [7] [i_14] [i_12])))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) var_13)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)28151)))))))) ? (min((((/* implicit */unsigned long long int) arr_43 [i_14])), (((unsigned long long int) arr_35 [i_12] [i_14] [i_14] [19LL])))) : (((/* implicit */unsigned long long int) min(((~(arr_10 [i_12] [i_12] [i_12] [i_12] [i_12]))), (((/* implicit */unsigned int) ((arr_58 [i_12] [i_12] [i_14] [i_14] [i_12]) / (arr_15 [i_12] [i_12] [i_12] [i_14]))))))));
        }
        arr_66 [9LL] = arr_23 [i_12] [i_12] [i_12] [i_12] [i_12];
    }
    var_33 = ((/* implicit */long long int) var_8);
    var_34 = ((/* implicit */unsigned char) (~(var_4)));
}
