/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216276
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
    var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)3))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_18 ^= ((((/* implicit */_Bool) arr_0 [(unsigned char)7])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) * (((/* implicit */int) arr_1 [i_0 - 1]))))) : (((18446744073709551614ULL) * (4287575085155838787ULL))));
        var_19 = ((/* implicit */_Bool) (-(((/* implicit */int) max((((/* implicit */unsigned char) arr_1 [i_0 - 1])), ((unsigned char)124))))));
    }
    for (unsigned int i_1 = 0; i_1 < 19; i_1 += 2) 
    {
        var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_3 [i_1] [i_1]))));
        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (+(((/* implicit */int) var_4)))))));
    }
    for (short i_2 = 2; i_2 < 14; i_2 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_3 = 2; i_3 < 14; i_3 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 3) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        arr_13 [0LL] [i_3] [i_3] [i_3] = (-(1372996326));
                        arr_14 [i_2 - 1] [i_2] [(signed char)6] [i_2 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 18178613117996491633ULL)) ? (((/* implicit */unsigned long long int) 4U)) : (5446756848680377013ULL)));
                        var_22 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) -8589197263195481823LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)172))) : (0LL)));
                    }
                } 
            } 
            arr_15 [(short)11] [(unsigned short)13] [i_3] = ((/* implicit */unsigned char) 18446744073709551606ULL);
        }
        var_23 ^= (-((~(31ULL))));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_6 = 0; i_6 < 16; i_6 += 2) 
    {
        var_24 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_14)))))));
        /* LoopSeq 2 */
        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 4) 
            {
                /* LoopNest 2 */
                for (signed char i_9 = 0; i_9 < 16; i_9 += 4) 
                {
                    for (unsigned char i_10 = 3; i_10 < 15; i_10 += 3) 
                    {
                        {
                            var_25 += ((/* implicit */_Bool) (-(((/* implicit */int) arr_16 [i_6]))));
                            var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) (-(1379918802U))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned int i_11 = 1; i_11 < 12; i_11 += 2) /* same iter space */
                {
                    arr_34 [i_6] [5ULL] [i_6] [i_6] [13ULL] [(_Bool)1] = ((/* implicit */signed char) arr_21 [10U]);
                    var_27 = ((/* implicit */short) var_0);
                }
                for (unsigned int i_12 = 1; i_12 < 12; i_12 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_13 = 0; i_13 < 16; i_13 += 4) 
                    {
                        var_28 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_26 [(short)8] [i_12 + 3] [i_8] [(signed char)4] [i_6])) && ((_Bool)0)));
                        var_29 &= ((/* implicit */short) arr_25 [i_6] [i_7] [i_8] [i_12 + 3]);
                        var_30 -= ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [2] [(signed char)14] [i_7 - 1] [i_8] [i_12] [i_13])))))));
                    }
                    var_31 = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)252))));
                    var_32 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_32 [10U] [i_7 - 1])) ? (arr_32 [i_6] [i_7 - 1]) : (((/* implicit */unsigned long long int) var_12))));
                }
            }
            /* LoopSeq 1 */
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                var_33 = ((/* implicit */unsigned char) (+(var_10)));
                var_34 = (!(((/* implicit */_Bool) (-(var_0)))));
                arr_42 [i_6] &= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (195821018U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                arr_43 [1ULL] [i_7] [i_7] [9ULL] = (+(arr_3 [i_6] [i_7 - 1]));
            }
        }
        for (unsigned int i_15 = 0; i_15 < 16; i_15 += 1) 
        {
            arr_47 [i_15] [i_15] = ((/* implicit */unsigned int) var_9);
            /* LoopNest 3 */
            for (signed char i_16 = 0; i_16 < 16; i_16 += 1) 
            {
                for (signed char i_17 = 0; i_17 < 16; i_17 += 3) 
                {
                    for (unsigned long long int i_18 = 0; i_18 < 16; i_18 += 1) 
                    {
                        {
                            var_35 ^= ((/* implicit */unsigned char) (-(((/* implicit */int) var_8))));
                            arr_57 [i_15] [i_15] = ((/* implicit */_Bool) var_4);
                        }
                    } 
                } 
            } 
        }
    }
    for (signed char i_19 = 0; i_19 < 18; i_19 += 4) 
    {
        var_36 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)2518))))) / (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_58 [i_19]))) * (arr_2 [i_19])))));
        var_37 += ((/* implicit */_Bool) (~(223342804U)));
        var_38 = ((/* implicit */_Bool) (+((-(arr_3 [(_Bool)1] [15ULL])))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_20 = 3; i_20 < 16; i_20 += 3) 
        {
            var_39 = (-(9ULL));
            /* LoopSeq 1 */
            for (unsigned int i_21 = 0; i_21 < 18; i_21 += 3) 
            {
                var_40 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_62 [i_21] [14ULL] [i_19]))));
                var_41 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) -8589197263195481823LL)) : (arr_3 [i_19] [i_20 - 3])));
                var_42 = ((/* implicit */unsigned int) arr_61 [(signed char)13]);
            }
        }
        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
        {
            var_43 = ((/* implicit */signed char) arr_64 [i_19]);
            arr_70 [i_19] [i_19] = (~((-(((/* implicit */int) (signed char)-122)))));
        }
    }
    for (long long int i_23 = 0; i_23 < 16; i_23 += 2) 
    {
        var_44 += ((/* implicit */long long int) (short)32760);
        var_45 = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)72))));
        /* LoopNest 2 */
        for (unsigned long long int i_24 = 0; i_24 < 16; i_24 += 1) 
        {
            for (int i_25 = 2; i_25 < 13; i_25 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                    {
                        for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                        {
                            {
                                arr_83 [i_24] = ((/* implicit */unsigned short) (-(((/* implicit */int) max((arr_75 [i_23] [i_24] [(short)7] [i_24]), ((signed char)-88))))));
                                var_46 = ((/* implicit */signed char) (short)26707);
                                var_47 = ((/* implicit */_Bool) (~(-1LL)));
                                var_48 = (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_29 [i_24] [15ULL] [i_24] [i_26])), ((unsigned short)65509)))));
                                arr_84 [i_24] = ((/* implicit */long long int) var_1);
                            }
                        } 
                    } 
                    arr_85 [i_24] [i_24] [i_24] [i_24] = ((/* implicit */long long int) arr_63 [i_25] [i_23]);
                    /* LoopNest 2 */
                    for (_Bool i_28 = 1; i_28 < 1; i_28 += 1) 
                    {
                        for (unsigned short i_29 = 0; i_29 < 16; i_29 += 4) 
                        {
                            {
                                arr_90 [13LL] [13LL] [9] [i_28] [i_24] = ((/* implicit */unsigned int) min((((/* implicit */long long int) (short)30720)), (arr_35 [i_25 - 2] [i_25 - 1])));
                                arr_91 [9U] [i_24] [i_25] [i_24] [(short)8] = ((/* implicit */unsigned long long int) arr_66 [i_23]);
                                arr_92 [(_Bool)1] [i_24] [i_25 + 2] [i_25] [i_28] [i_28] [i_24] = (!((_Bool)1));
                                arr_93 [i_23] [i_24] [i_25] [i_24] [i_29] [i_25] [i_25] = ((/* implicit */int) max(((-((-(18446744073709551601ULL))))), (max((18446744073709551606ULL), (var_1)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
