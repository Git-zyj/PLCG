/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29651
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
    var_18 = var_8;
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 22; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            {
                var_19 ^= ((/* implicit */unsigned int) arr_3 [i_0 - 3] [0]);
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    var_20 = ((/* implicit */int) var_8);
                    arr_9 [i_1] [i_1] = ((/* implicit */short) arr_6 [i_0] [i_0] [i_1]);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        arr_12 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)103))) % (4294967289U)));
                        arr_13 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_0 + 2])) ? (((/* implicit */int) arr_11 [19] [19] [19] [19] [19] [19])) : (((/* implicit */int) arr_11 [i_0 - 1] [i_0 + 2] [i_0 + 2] [i_0] [i_0 - 1] [i_0]))));
                        arr_14 [i_0] [i_0] [i_2] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_1] [i_3])) || (((/* implicit */_Bool) (unsigned char)111))));
                    }
                }
                /* vectorizable */
                for (signed char i_4 = 0; i_4 < 24; i_4 += 4) 
                {
                    arr_17 [i_1] [i_1] [i_1] = ((/* implicit */short) (((-(((/* implicit */int) arr_11 [i_0 - 3] [i_0 - 3] [i_0 - 3] [i_0] [i_0 - 3] [i_0])))) >= (((/* implicit */int) ((_Bool) arr_1 [i_0])))));
                    arr_18 [i_0 + 1] [i_0 + 1] [i_1] [i_4] = ((/* implicit */unsigned long long int) ((((unsigned int) arr_10 [i_0])) < (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [(unsigned char)21])))));
                }
                /* LoopSeq 1 */
                for (unsigned long long int i_5 = 2; i_5 < 22; i_5 += 1) 
                {
                    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) var_4))));
                    var_22 ^= (unsigned char)88;
                }
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) var_16);
    /* LoopNest 2 */
    for (long long int i_6 = 1; i_6 < 14; i_6 += 2) 
    {
        for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 4) 
        {
            {
                var_24 = ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_7])) && (((/* implicit */_Bool) arr_7 [i_6 + 3] [i_7] [i_6] [i_6 + 3]))));
                /* LoopSeq 4 */
                for (short i_8 = 1; i_8 < 17; i_8 += 2) 
                {
                    arr_32 [i_6] [i_7] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */int) var_1)) <= ((((-(((/* implicit */int) arr_3 [i_6] [i_6])))) ^ (((/* implicit */int) var_7))))));
                    arr_33 [i_6] [i_6] [i_8] [i_7] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_6] [(unsigned char)5] [(unsigned char)5] [i_6]))) < ((-(var_2)))))) == (((/* implicit */int) ((18446744073709551601ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)100))))))));
                    var_25 = ((/* implicit */int) ((arr_31 [i_6 + 3] [i_6 + 3] [i_6]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_6] [i_6])))));
                    arr_34 [i_8] [i_7] [i_6] &= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_28 [i_7] [i_7])) << (((arr_21 [i_6] [i_6] [i_6]) - (18231478328354499922ULL))))))));
                    var_26 = ((/* implicit */short) (((+(arr_30 [i_6] [i_7] [(_Bool)1]))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_6] [i_6] [i_7] [i_7] [i_7] [(short)17])))));
                }
                for (long long int i_9 = 0; i_9 < 18; i_9 += 1) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_10 = 3; i_10 < 17; i_10 += 4) 
                    {
                        var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) (+(arr_30 [i_6 + 4] [i_6 + 4] [i_9]))))));
                        arr_41 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */short) arr_2 [i_6 + 2] [i_6 + 2]);
                        var_28 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_35 [i_6] [i_6] [i_6] [i_10]))));
                        var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) var_0))));
                    }
                    arr_42 [i_6] [i_6] = ((/* implicit */unsigned long long int) var_14);
                }
                for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                {
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 18; i_12 += 4) 
                    {
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            {
                                var_30 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_6] [i_6]))) == (((((unsigned int) var_14)) % (((/* implicit */unsigned int) arr_48 [i_6]))))));
                                var_31 = (unsigned char)178;
                            }
                        } 
                    } 
                    var_32 = (signed char)-108;
                    var_33 += ((/* implicit */unsigned char) arr_19 [i_11 - 1] [i_11 - 1] [i_11 - 1]);
                }
                for (unsigned char i_14 = 0; i_14 < 18; i_14 += 2) 
                {
                    var_34 = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) (+(var_9)))) ? (((/* implicit */int) arr_1 [i_6 + 1])) : (((/* implicit */int) arr_44 [i_6 - 1])))));
                    var_35 *= ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -8032323786226162027LL)) ? (((/* implicit */unsigned int) -1483151267)) : (4294967295U)))) | (arr_21 [i_6] [i_7] [i_14]))));
                    /* LoopSeq 2 */
                    for (int i_15 = 0; i_15 < 18; i_15 += 3) 
                    {
                        var_36 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)94))))) | (arr_16 [i_15] [i_14] [i_7] [i_6])));
                        arr_55 [i_6] = ((/* implicit */unsigned long long int) arr_50 [i_6] [i_6] [i_6] [i_6]);
                    }
                    for (unsigned long long int i_16 = 0; i_16 < 18; i_16 += 1) 
                    {
                        var_37 = ((/* implicit */signed char) ((((((/* implicit */int) arr_11 [i_6 + 2] [i_7] [i_7] [i_14] [i_14] [i_16])) != (((/* implicit */int) arr_37 [i_6 + 3] [i_7] [i_7])))) ? (((/* implicit */int) ((((((/* implicit */int) arr_40 [i_6] [0])) % (((/* implicit */int) (_Bool)1)))) == (arr_5 [i_6 + 1])))) : (((/* implicit */int) (_Bool)1))));
                        arr_59 [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)244))))) ? (((/* implicit */int) ((((/* implicit */int) var_5)) <= (arr_53 [i_6] [i_6] [i_6])))) : (arr_2 [i_14] [i_7])))) >= (arr_58 [i_6] [i_7] [i_6])));
                        var_38 = ((/* implicit */int) min((var_38), (((/* implicit */int) (unsigned short)16368))));
                        arr_60 [i_6] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [11])) - (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_44 [i_6])) && (((/* implicit */_Bool) arr_2 [i_6] [16LL]))))))));
                    }
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 18; i_17 += 4) 
                    {
                        for (signed char i_18 = 0; i_18 < 18; i_18 += 2) 
                        {
                            {
                                var_39 = ((/* implicit */short) min((var_39), (((/* implicit */short) arr_47 [i_6] [i_7] [i_14] [i_14] [i_14]))));
                                arr_65 [i_6] [i_7] [i_14] [i_17] [i_18] |= ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_8 [0U] [0U] [i_14] [0U])) || (((/* implicit */_Bool) 16048468941239461720ULL)))))));
                                arr_66 [i_6] [i_7] [i_6] [i_17] [i_18] = ((/* implicit */unsigned short) arr_35 [i_6] [i_7] [i_6] [i_18]);
                                var_40 = ((/* implicit */unsigned int) max((var_40), (((/* implicit */unsigned int) arr_31 [i_6 + 2] [i_7] [i_14]))));
                                var_41 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_51 [i_6] [i_6] [i_17])))) ? (((/* implicit */int) arr_37 [i_6] [i_7] [i_6])) : (((((/* implicit */int) (short)31513)) >> (((((/* implicit */int) var_1)) - (47)))))))) ? ((~(((/* implicit */int) ((_Bool) arr_15 [i_6]))))) : (((/* implicit */int) ((unsigned char) var_14)))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (signed char i_19 = 0; i_19 < 18; i_19 += 1) 
                    {
                        var_42 = ((/* implicit */unsigned char) ((((((/* implicit */int) (_Bool)1)) & (-80584526))) << (((((/* implicit */int) var_1)) - (19)))));
                        var_43 = ((/* implicit */int) (+(arr_54 [i_6] [i_7] [i_14] [i_6])));
                        var_44 |= ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_14])) && (((/* implicit */_Bool) arr_8 [i_14] [i_7] [i_19] [i_19])))))));
                    }
                }
            }
        } 
    } 
}
