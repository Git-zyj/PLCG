/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225261
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
    var_10 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_3)))));
    var_11 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 2114398076U)) & (7238549655311002ULL)))) ? (((/* implicit */unsigned long long int) var_0)) : (7238549655311002ULL)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_2 [(short)8] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (arr_0 [i_0])))) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)24))) : (18439505524054240607ULL))) : (((/* implicit */unsigned long long int) (~(arr_0 [i_0]))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                for (unsigned int i_3 = 1; i_3 < 9; i_3 += 1) 
                {
                    {
                        /* LoopSeq 4 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            arr_13 [1LL] [i_1] [i_2] [(short)2] [i_1] = ((/* implicit */long long int) (+(((/* implicit */int) arr_9 [i_4] [i_1] [i_1] [i_0]))));
                            arr_14 [5U] [i_3] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) arr_12 [(_Bool)1] [i_3 - 1] [i_3 - 1] [i_3 + 1] [(unsigned char)0] [i_3] [(unsigned short)7])) + (((/* implicit */int) arr_7 [6LL] [i_3] [i_3 + 2] [i_3 - 1]))));
                        }
                        for (unsigned int i_5 = 1; i_5 < 10; i_5 += 2) 
                        {
                            arr_18 [i_1] [i_1] [i_2] [i_3] [(unsigned char)0] = ((/* implicit */short) arr_11 [i_0] [i_1]);
                            var_12 ^= ((/* implicit */long long int) ((short) (~(arr_0 [i_3]))));
                            arr_19 [i_1] [i_1] [i_3 - 1] [i_5] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)93))));
                        }
                        for (unsigned int i_6 = 0; i_6 < 11; i_6 += 3) 
                        {
                            arr_22 [i_0] [i_1] [i_2] [i_1] [i_6] = ((/* implicit */short) (unsigned short)65535);
                            arr_23 [i_0] [i_0] [(signed char)6] [i_1] [i_2] [i_3] [i_6] = ((/* implicit */unsigned char) ((_Bool) (+(((/* implicit */int) (_Bool)1)))));
                        }
                        for (short i_7 = 1; i_7 < 9; i_7 += 2) 
                        {
                            var_13 = ((/* implicit */short) (-(((/* implicit */int) ((18439505524054240607ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)128))))))));
                            var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_1] [i_2] [i_3] [i_3 + 2] [8U]))) - (14410457814982599364ULL)))) ? (2399215650U) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_1)))))));
                            var_15 -= ((_Bool) (-(((/* implicit */int) arr_1 [i_3]))));
                        }
                        arr_26 [i_0] [i_1] [i_2] [i_2] [i_3] [i_1] = ((/* implicit */short) ((((arr_4 [i_0] [i_1] [i_3]) <= (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_1] [8U] [i_1] [i_1]))))) ? (((/* implicit */int) ((_Bool) var_9))) : (((/* implicit */int) ((unsigned char) (signed char)15)))));
                        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-16953)) ? (((/* implicit */int) (unsigned char)240)) : (((/* implicit */int) (unsigned short)4064))));
                        /* LoopSeq 1 */
                        for (short i_8 = 2; i_8 < 10; i_8 += 4) 
                        {
                            var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) 780102422U))));
                            var_18 -= ((/* implicit */unsigned char) ((arr_28 [i_1] [i_1] [i_3 - 1] [(unsigned short)4] [i_8 - 2]) ^ (arr_28 [i_0] [(signed char)3] [i_3 - 1] [i_3] [i_8 - 2])));
                            var_19 &= ((/* implicit */unsigned int) ((int) arr_24 [i_8 - 2] [i_3] [i_2] [i_1] [i_0]));
                            arr_29 [i_0] [i_1] [i_2] [i_3 - 1] [i_1] [i_8] = ((/* implicit */short) 1819381455);
                        }
                        arr_30 [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_4 [i_0] [i_1] [i_2])))) ? (((int) arr_3 [i_0] [i_0] [i_0])) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_17 [i_3] [i_2] [i_0] [i_1] [6LL])) : (((/* implicit */int) arr_5 [i_0]))))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned char i_9 = 0; i_9 < 11; i_9 += 2) 
            {
                /* LoopSeq 2 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    arr_35 [(short)0] [i_1] [i_9] [i_9] [i_1] [i_10] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_11 [i_0] [i_9]))));
                    /* LoopSeq 1 */
                    for (signed char i_11 = 1; i_11 < 7; i_11 += 3) 
                    {
                        arr_39 [i_11] [10U] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) var_0);
                        var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_31 [i_1] [i_1] [i_9] [i_11 + 4])) & (arr_36 [i_0] [i_1] [i_9] [i_10] [(_Bool)1])));
                    }
                    var_21 = ((((/* implicit */_Bool) ((((/* implicit */long long int) arr_21 [i_0] [(_Bool)1] [i_9] [i_10] [i_1])) / (arr_32 [i_1] [i_9] [i_1])))) ? (((/* implicit */int) ((short) arr_6 [i_1] [(unsigned short)4] [(unsigned char)6]))) : (((/* implicit */int) var_1)));
                }
                for (int i_12 = 0; i_12 < 11; i_12 += 2) 
                {
                    var_22 = ((/* implicit */short) (((-(((/* implicit */int) (unsigned char)214)))) * ((~(((/* implicit */int) arr_24 [(unsigned short)10] [4] [9] [9U] [i_12]))))));
                    var_23 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-7310))) : (arr_28 [i_0] [i_0] [(_Bool)1] [i_0] [i_0])));
                }
                var_24 = ((/* implicit */unsigned int) (~(arr_33 [7U] [i_1] [i_9] [9ULL])));
            }
            for (unsigned char i_13 = 0; i_13 < 11; i_13 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned char i_14 = 0; i_14 < 11; i_14 += 3) 
                {
                    for (signed char i_15 = 0; i_15 < 11; i_15 += 1) 
                    {
                        {
                            arr_50 [i_0] [i_1] [i_1] [i_14] [i_15] = ((/* implicit */int) ((unsigned int) arr_17 [(_Bool)1] [i_1] [i_1] [(_Bool)1] [i_15]));
                            arr_51 [i_1] = ((/* implicit */short) (+(((/* implicit */int) arr_41 [i_15] [i_14] [i_13] [i_1]))));
                            arr_52 [i_0] [i_1] [(unsigned char)4] [(_Bool)1] [4U] = ((/* implicit */long long int) ((((/* implicit */int) arr_44 [(unsigned short)7] [i_1] [i_1] [i_0])) >> ((((-(((/* implicit */int) (signed char)-105)))) - (77)))));
                            var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [(unsigned char)6] [i_0] [i_13] [i_14])))))));
                            var_26 &= ((/* implicit */short) (-(((((/* implicit */int) (short)8202)) + (((/* implicit */int) arr_11 [i_0] [5]))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (short i_16 = 2; i_16 < 9; i_16 += 4) 
                {
                    var_27 += ((/* implicit */int) ((short) (-(((/* implicit */int) arr_55 [i_0] [(unsigned short)8] [8] [i_16 + 2])))));
                    var_28 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_9 [i_16 - 2] [i_16 + 2] [i_1] [i_16 - 2]))));
                    arr_56 [i_1] [i_13] [i_13] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */int) arr_38 [i_16] [i_13] [i_0])) - (((((/* implicit */_Bool) (unsigned char)0)) ? (arr_21 [i_0] [i_0] [i_1] [i_13] [i_1]) : (((/* implicit */int) (_Bool)1))))));
                    var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) ((arr_36 [2U] [i_16 + 1] [i_16 - 1] [6U] [i_16 - 1]) << ((((-(arr_54 [(short)1] [10U] [i_13] [i_16 + 2]))) + (1185413968))))))));
                    var_30 &= ((/* implicit */short) ((((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0] [(unsigned short)1] [i_0] [i_0])) ? (((/* implicit */long long int) 41997410)) : (arr_40 [i_16] [i_13] [i_16 + 2]))) == (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_0] [i_16 - 2] [i_16] [i_16 + 2])))));
                }
                for (unsigned char i_17 = 0; i_17 < 11; i_17 += 2) 
                {
                    arr_60 [i_17] [i_13] [i_1] [(signed char)1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)0)) && (((/* implicit */_Bool) arr_10 [3] [i_1] [i_13] [i_17]))));
                    arr_61 [i_1] [i_17] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_43 [i_13] [i_1] [i_0]) / (((/* implicit */int) arr_58 [6ULL] [i_1] [i_1] [8LL] [i_1] [i_1]))))) ? (((/* implicit */int) (short)15458)) : (((/* implicit */int) arr_34 [i_0] [i_1]))));
                }
                /* LoopSeq 1 */
                for (long long int i_18 = 0; i_18 < 11; i_18 += 2) 
                {
                    var_31 = ((/* implicit */unsigned short) (-((-(((/* implicit */int) (unsigned char)19))))));
                    var_32 = ((/* implicit */short) ((int) arr_47 [i_0] [8] [i_1] [0LL] [i_18] [i_18] [i_13]));
                    var_33 = ((((/* implicit */int) arr_63 [i_0] [i_1])) ^ (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_59 [i_0] [i_1] [i_1] [i_1] [i_13] [i_18])) : (((/* implicit */int) arr_11 [i_0] [(short)4])))));
                }
            }
        }
    }
    for (short i_19 = 0; i_19 < 12; i_19 += 2) 
    {
        var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) ((unsigned char) (+(1313843557152637131LL)))))));
        /* LoopNest 2 */
        for (int i_20 = 0; i_20 < 12; i_20 += 3) 
        {
            for (short i_21 = 0; i_21 < 12; i_21 += 2) 
            {
                {
                    var_35 = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned short)13)) ? (283726776524341248ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) < (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_66 [(unsigned short)10])) | (((/* implicit */int) arr_69 [(unsigned short)9] [9LL] [i_21])))))));
                    var_36 = ((/* implicit */long long int) arr_69 [i_21] [i_20] [i_19]);
                }
            } 
        } 
    }
    var_37 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_0)) : (14410457814982599373ULL))) / (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_1)), (var_6))))))));
}
