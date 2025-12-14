/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192229
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
    var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_1))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 8; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                arr_4 [i_0 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_1 [i_1])))) && (((/* implicit */_Bool) ((arr_2 [i_0 - 1] [i_0 + 1] [i_0 + 2]) << (((arr_3 [i_0 - 2] [i_0 + 2]) - (1455260780U))))))));
                arr_5 [i_0 - 2] [i_0 - 1] [i_0 + 1] = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned int) -1812552267)), (arr_3 [i_0] [i_1]))) << ((((-(arr_2 [i_1] [i_0 - 2] [i_0 - 2]))) - (3032280920U)))));
                /* LoopSeq 3 */
                for (unsigned int i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    var_18 *= ((/* implicit */unsigned short) ((((/* implicit */int) (short)-1)) / (((/* implicit */int) (unsigned short)50796))));
                    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+((-(arr_2 [i_0 + 2] [i_1] [i_2])))))) ? (min((min((arr_1 [i_0 - 1]), (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_0] [i_0])))), (((((/* implicit */_Bool) var_2)) ? (7ULL) : (((/* implicit */unsigned long long int) var_2)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)250)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-10))) <= (14800817378725356100ULL)))) : (((/* implicit */int) (unsigned char)240))))))))));
                }
                /* vectorizable */
                for (short i_3 = 0; i_3 < 10; i_3 += 4) 
                {
                    /* LoopSeq 4 */
                    for (short i_4 = 1; i_4 < 7; i_4 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_5 = 2; i_5 < 9; i_5 += 2) 
                        {
                            var_20 = ((/* implicit */long long int) ((((((/* implicit */int) var_5)) + (2147483647))) << (((((/* implicit */int) (signed char)10)) - (10)))));
                            var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_13 [i_0] [(_Bool)1] [i_3] [i_4 - 1] [i_5 - 2]) < (((/* implicit */long long int) ((/* implicit */int) var_11))))))) + (((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_3] [i_0] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (26388279066624ULL))))))));
                        }
                        arr_15 [(unsigned char)8] &= (+(((long long int) arr_10 [i_0])));
                        var_22 = ((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_4] [i_4 + 1] [i_4 + 1] [i_4 + 1])) < (((/* implicit */int) (!(((/* implicit */_Bool) (short)20801)))))));
                        var_23 = ((/* implicit */long long int) ((signed char) (~(((/* implicit */int) arr_10 [i_4])))));
                        var_24 ^= ((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned char)215)) ? (((/* implicit */int) arr_10 [i_4])) : (((/* implicit */int) (signed char)-49)))) / (((((/* implicit */int) arr_12 [i_4] [7] [i_1] [i_0])) / (((/* implicit */int) (unsigned char)59))))));
                    }
                    for (short i_6 = 1; i_6 < 7; i_6 += 1) /* same iter space */
                    {
                        var_25 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1517581493U)) ? (-4418478433332974491LL) : (7330687924443068636LL)))) ? ((+(arr_16 [i_0] [i_3]))) : (((((/* implicit */_Bool) var_2)) ? (arr_17 [i_0] [i_3] [i_6]) : (-2003862206500720427LL)))));
                        var_26 += ((/* implicit */long long int) ((unsigned char) 3382669332U));
                        var_27 *= ((/* implicit */signed char) (!(((((/* implicit */int) (unsigned short)19653)) <= (((/* implicit */int) (_Bool)0))))));
                        var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) (-(((int) var_12)))))));
                        var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) (unsigned char)250))) ^ (((/* implicit */int) arr_0 [i_0 - 1])))))));
                    }
                    for (unsigned long long int i_7 = 2; i_7 < 9; i_7 += 4) /* same iter space */
                    {
                        var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) (+(arr_3 [i_3] [1]))))));
                        /* LoopSeq 4 */
                        for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 4) /* same iter space */
                        {
                            var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_3] [i_7] [i_8])) ? (arr_19 [i_8] [i_7 + 1] [i_3] [(unsigned short)1] [2LL]) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_0] [i_0 + 1] [i_1] [i_3] [i_0 + 1] [i_8])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2777385777U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (358862769U)))) : ((+(8262690911754153867ULL)))));
                            var_32 += ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned short)65524)) ? (((/* implicit */int) (signed char)-11)) : (1747767126))) / ((+(((/* implicit */int) (short)-13919))))));
                            var_33 = ((/* implicit */unsigned char) max((var_33), (((unsigned char) ((((/* implicit */int) arr_9 [i_8] [i_1] [i_3] [i_7])) < (((/* implicit */int) arr_9 [i_8] [(unsigned short)5] [i_0] [i_0])))))));
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 4) /* same iter space */
                        {
                            var_34 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) (signed char)117))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_23 [(signed char)0] [i_7] [4ULL] [i_1] [(short)3] [i_0])) < (((/* implicit */int) arr_12 [9ULL] [9ULL] [i_7] [i_9])))))) : ((-(arr_27 [(unsigned short)1] [i_1] [i_3] [i_7])))));
                            var_35 = ((/* implicit */unsigned char) (~(arr_14 [i_7] [i_7 - 1] [i_0 - 2] [(signed char)0] [i_0 + 1])));
                            var_36 = ((/* implicit */long long int) (~(((/* implicit */int) var_4))));
                            arr_29 [i_0 + 1] [(unsigned short)0] [i_3] = ((/* implicit */short) arr_21 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 - 1]);
                        }
                        for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 4) /* same iter space */
                        {
                            var_37 *= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)117))) - (arr_3 [i_0 - 2] [i_7 + 1])));
                            var_38 = ((/* implicit */unsigned short) max((var_38), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0 - 2] [i_0 - 2] [i_0 + 1] [i_0]))) | (arr_27 [i_0 + 2] [i_0 - 1] [i_0 - 1] [1ULL]))))));
                            var_39 += ((/* implicit */short) ((((arr_8 [i_0 - 2] [i_0 - 2] [8]) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) ? (((/* implicit */int) arr_12 [i_0] [i_1] [i_3] [4LL])) : (-1812552286)));
                        }
                        for (unsigned short i_11 = 0; i_11 < 10; i_11 += 2) 
                        {
                            var_40 = ((/* implicit */unsigned int) min((var_40), (((/* implicit */unsigned int) ((short) ((arr_11 [2LL] [2LL] [i_3] [i_7] [i_11] [i_7]) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7077)))))))));
                            arr_35 [i_0] [i_0] [6LL] [i_3] [i_7] [i_7 - 2] [i_11] = ((/* implicit */int) ((short) var_6));
                        }
                        var_41 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_20 [i_1] [i_0 - 2] [i_0 - 2] [i_7 + 1])) ? (((/* implicit */int) arr_20 [i_0] [i_0 - 1] [i_3] [i_7 + 1])) : (((/* implicit */int) arr_20 [(signed char)3] [i_0 + 1] [1LL] [i_7 - 1]))));
                        var_42 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) 912297964U)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)117))))));
                        var_43 -= ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */long long int) arr_22 [(unsigned short)9] [i_1] [3] [i_7])) >= (var_0)))) == (((/* implicit */int) arr_0 [(unsigned short)6]))));
                    }
                    for (unsigned long long int i_12 = 2; i_12 < 9; i_12 += 4) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_13 = 0; i_13 < 10; i_13 += 4) /* same iter space */
                        {
                            var_44 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-20911)) ? (2147450880ULL) : (((/* implicit */unsigned long long int) 4006604964U))));
                            arr_41 [i_0] [i_0] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_12 - 2] [i_0 - 1] [i_0] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_11 [(short)2] [i_1] [i_12 - 2] [i_0 + 2] [i_12 - 2] [i_3])));
                        }
                        for (unsigned int i_14 = 0; i_14 < 10; i_14 += 4) /* same iter space */
                        {
                            arr_44 [i_0] [(unsigned short)7] [i_1] [1U] [i_12] [i_14] = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_25 [i_14] [i_12])) : (((/* implicit */int) arr_12 [i_1] [i_3] [i_1] [(unsigned char)0]))))) | (3211690382U)));
                            var_45 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)42)) + (((/* implicit */int) (unsigned char)225))));
                            arr_45 [(_Bool)1] [i_3] [0LL] = ((/* implicit */unsigned long long int) var_15);
                            arr_46 [i_0] &= ((/* implicit */unsigned short) (-(((/* implicit */int) arr_32 [i_0 + 1] [i_3] [i_3]))));
                            var_46 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) 3936104510U)))))));
                        }
                        for (unsigned short i_15 = 0; i_15 < 10; i_15 += 3) 
                        {
                            arr_50 [i_0] [i_0] [i_0] [i_3] [9U] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_33 [i_0 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_15] [i_1] [i_15] [i_3] [i_15] [i_0 - 2]))) : (var_3)));
                            var_47 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_36 [i_0 + 1] [i_12 - 2])) + (((/* implicit */int) arr_36 [i_0 + 1] [i_12 - 2]))));
                        }
                        arr_51 [i_0 + 2] [4ULL] [i_3] [i_1] [i_3] [i_3] = ((/* implicit */signed char) var_0);
                        arr_52 [i_0 - 1] [i_1] [i_0 - 1] = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) < (arr_3 [i_3] [i_1]))))));
                    }
                    arr_53 [i_0] [i_3] [i_3] [i_0 + 2] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_49 [(unsigned short)1] [i_1] [i_0 - 1] [i_0 - 2] [i_0 + 2]))));
                }
                /* vectorizable */
                for (unsigned int i_16 = 0; i_16 < 10; i_16 += 1) 
                {
                    arr_58 [i_0] [i_1] [i_16] [i_16] &= ((/* implicit */signed char) ((unsigned int) (~(((/* implicit */int) arr_36 [i_1] [i_16])))));
                    arr_59 [i_16] [i_1] [i_0] &= ((/* implicit */long long int) ((2147450880ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_0 - 2])))));
                }
            }
        } 
    } 
    var_48 = ((/* implicit */short) min((var_48), (((/* implicit */short) ((var_6) + (((/* implicit */long long int) ((((/* implicit */_Bool) (+(8756380109041627651ULL)))) ? (((/* implicit */int) ((signed char) (signed char)-41))) : ((~(((/* implicit */int) (short)19368))))))))))));
}
