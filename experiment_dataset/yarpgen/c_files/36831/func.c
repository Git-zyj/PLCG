/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36831
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
    for (short i_0 = 4; i_0 < 22; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            /* LoopSeq 2 */
            for (short i_2 = 2; i_2 < 20; i_2 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (unsigned short i_4 = 0; i_4 < 23; i_4 += 1) 
                    {
                        {
                            var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_5 [9] [9] [(unsigned short)1]) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))) ? (1836677660U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 1836677660U)))))))))));
                            var_13 = ((/* implicit */unsigned short) (-(arr_6 [i_1 + 1] [i_1 + 3] [i_1 + 3] [i_1 + 2])));
                        }
                    } 
                } 
                arr_14 [i_1] [i_0] = ((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_2] [i_2 + 3] [i_1 + 3] [i_1]))) * (2458289636U));
            }
            for (unsigned char i_5 = 0; i_5 < 23; i_5 += 1) 
            {
                /* LoopSeq 2 */
                for (short i_6 = 0; i_6 < 23; i_6 += 2) 
                {
                    var_14 = ((/* implicit */unsigned char) (+(var_6)));
                    var_15 *= ((/* implicit */unsigned short) (((_Bool)1) ? (465649816) : (((/* implicit */int) (signed char)-83))));
                }
                for (unsigned int i_7 = 0; i_7 < 23; i_7 += 1) 
                {
                    var_16 = ((/* implicit */long long int) arr_21 [i_0] [i_0 - 4] [i_0 - 2] [i_0 - 2] [i_1 - 1]);
                    var_17 = ((/* implicit */unsigned long long int) arr_11 [i_7] [i_0] [i_5] [i_7] [i_7]);
                    var_18 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_22 [i_0 + 1] [i_0 - 1] [i_0] [i_1 - 1] [i_5])) : (((/* implicit */int) arr_17 [i_0] [(signed char)22] [i_1 + 1] [i_0] [i_1]))));
                }
                arr_24 [i_0 - 1] [i_1 - 1] [i_0 - 1] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1836677646U)) ? (2006454293) : (465649816)));
            }
            var_19 = ((/* implicit */signed char) var_2);
        }
        for (unsigned char i_8 = 0; i_8 < 23; i_8 += 2) 
        {
            var_20 += ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) (unsigned short)41512))))));
            var_21 = ((/* implicit */int) var_0);
        }
        /* LoopSeq 2 */
        for (unsigned int i_9 = 0; i_9 < 23; i_9 += 2) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned int i_10 = 0; i_10 < 23; i_10 += 2) 
            {
                for (signed char i_11 = 0; i_11 < 23; i_11 += 2) 
                {
                    for (signed char i_12 = 0; i_12 < 23; i_12 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */long long int) (+(((/* implicit */int) arr_23 [i_0] [i_0] [i_0 - 3] [i_0 - 1] [i_9] [i_12]))));
                            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) 4294967294U)) : (var_10)));
                            arr_37 [i_12] [i_9] [i_0 - 4] [i_11] [i_11] [i_0 - 4] = ((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_10])) | (-465649811)));
                            var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) (~(((/* implicit */int) arr_10 [i_0 + 1] [i_0] [i_0] [i_0] [i_0] [i_0 - 3] [i_11])))))));
                        }
                    } 
                } 
            } 
            arr_38 [i_0 - 3] [i_0] [i_0 - 3] &= ((/* implicit */int) (-(1836677626U)));
            var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) arr_19 [i_0 - 2] [i_0 - 2] [i_0 - 3] [i_0 - 3]))));
            arr_39 [(unsigned char)11] [i_0 - 1] [i_0] = ((/* implicit */int) ((long long int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) + (var_11))));
            var_26 += ((((/* implicit */_Bool) 1480741188U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4))) : (4915563884401597686ULL));
        }
        for (unsigned int i_13 = 0; i_13 < 23; i_13 += 2) /* same iter space */
        {
            var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) (-(((/* implicit */int) var_7)))))));
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 23; i_14 += 2) 
            {
                for (int i_15 = 0; i_15 < 23; i_15 += 2) 
                {
                    {
                        var_28 = ((/* implicit */long long int) (-((-(-465649816)))));
                        var_29 += ((/* implicit */unsigned long long int) arr_12 [i_0] [i_13] [i_0] [i_15]);
                        var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_36 [i_0 - 2] [i_0 - 3] [i_0 - 2] [i_0 + 1] [i_13])) ? (((/* implicit */int) ((((/* implicit */int) (short)-1560)) != (((/* implicit */int) (_Bool)0))))) : (((/* implicit */int) arr_30 [i_0 - 4] [i_0 - 3]))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_16 = 1; i_16 < 22; i_16 += 1) 
                        {
                            var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) (short)0))));
                            var_32 = ((/* implicit */unsigned short) arr_2 [i_13]);
                            arr_50 [i_13] [i_14] [i_15] [i_16] |= ((/* implicit */signed char) arr_46 [i_0] [i_0] [i_15]);
                            arr_51 [8LL] [i_15] [i_14] [i_13] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (5342361376512240226ULL) : (((/* implicit */unsigned long long int) var_6))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)0)) && (arr_35 [i_0] [(short)20] [i_14] [(short)20] [i_16]))))) : ((+(1836677660U)))));
                        }
                        for (unsigned char i_17 = 1; i_17 < 22; i_17 += 2) 
                        {
                            var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) ((((/* implicit */long long int) -465649816)) != (-5370007177871776365LL))))));
                            arr_55 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) var_2);
                        }
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned int i_18 = 4; i_18 < 22; i_18 += 2) 
            {
                for (int i_19 = 4; i_19 < 21; i_19 += 1) 
                {
                    {
                        arr_61 [i_19 + 1] [i_18] [i_13] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_0 - 2] [i_0 - 3] [i_0 - 1] [i_0 - 2])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
                        /* LoopSeq 3 */
                        for (signed char i_20 = 0; i_20 < 23; i_20 += 1) /* same iter space */
                        {
                            arr_66 [i_18 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) (-(arr_19 [i_20] [i_19] [i_18 - 2] [i_13])))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (18446744073709551615ULL)))));
                            arr_67 [i_0] [(unsigned short)17] [(short)7] [i_19 - 3] [i_20] = ((/* implicit */long long int) ((int) (!(((/* implicit */_Bool) arr_26 [i_0] [i_13])))));
                        }
                        for (signed char i_21 = 0; i_21 < 23; i_21 += 1) /* same iter space */
                        {
                            var_34 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)49473)) | (((/* implicit */int) (unsigned short)65534))));
                            var_35 = ((/* implicit */int) max((var_35), ((-(((/* implicit */int) arr_3 [i_0 - 4]))))));
                            var_36 = ((/* implicit */unsigned int) arr_17 [i_0] [(unsigned char)14] [i_18 + 1] [i_19] [i_21]);
                            var_37 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0 - 3])) ? ((-(((/* implicit */int) (unsigned short)0)))) : (((/* implicit */int) arr_35 [(signed char)21] [i_19] [(signed char)21] [(unsigned char)17] [i_0]))));
                        }
                        for (signed char i_22 = 0; i_22 < 23; i_22 += 1) /* same iter space */
                        {
                            var_38 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_68 [i_0] [i_13] [i_18] [i_19 - 3] [i_22] [i_0])) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)65534)) : (((/* implicit */int) (unsigned short)6))))));
                            arr_72 [i_22] [i_19 - 1] [i_13] [i_0] = ((/* implicit */int) 2458289657U);
                            arr_73 [i_0 - 2] [i_18] [i_22] = ((((/* implicit */_Bool) arr_10 [i_0] [i_13] [i_19] [i_19] [i_19 - 4] [i_19 - 3] [i_19])) ? (((/* implicit */int) arr_10 [i_18] [i_18] [0] [i_18 - 2] [i_19 + 2] [i_19] [i_22])) : (((/* implicit */int) arr_17 [i_0] [i_13] [4ULL] [i_19] [i_19 - 1])));
                        }
                    }
                } 
            } 
        }
        var_39 = ((/* implicit */int) ((arr_42 [5LL] [i_0] [i_0] [i_0]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [i_0 - 1] [i_0 + 1] [i_0 + 1])))));
    }
    for (short i_23 = 4; i_23 < 22; i_23 += 2) /* same iter space */
    {
        arr_76 [i_23] = (+(((((/* implicit */_Bool) min((arr_42 [i_23] [i_23] [i_23] [i_23]), (((/* implicit */unsigned long long int) arr_52 [i_23] [i_23 - 1] [i_23] [i_23] [i_23]))))) ? (((/* implicit */long long int) (-(arr_16 [i_23] [i_23])))) : (max((var_10), (((/* implicit */long long int) 1836677633U)))))));
        var_40 *= ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) (unsigned short)16062)) ? (((/* implicit */int) (unsigned short)1)) : (-465649817))));
        arr_77 [i_23] [i_23 - 3] = ((/* implicit */long long int) max((var_3), (((/* implicit */unsigned int) ((short) arr_32 [i_23 + 1] [i_23 + 1])))));
    }
    for (short i_24 = 4; i_24 < 22; i_24 += 2) /* same iter space */
    {
        var_41 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_12 [i_24 + 1] [i_24] [i_24 + 1] [i_24]))));
        arr_80 [i_24] = ((/* implicit */short) 9915763797328791126ULL);
        arr_81 [(short)7] = ((/* implicit */_Bool) min(((unsigned char)163), ((unsigned char)198)));
        arr_82 [i_24] [i_24] = (unsigned char)255;
        arr_83 [i_24 - 4] = ((/* implicit */long long int) (unsigned short)16062);
    }
    var_42 = ((/* implicit */unsigned long long int) var_7);
}
