/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28476
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
    var_11 = ((/* implicit */_Bool) var_7);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 10; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (unsigned short i_4 = 0; i_4 < 11; i_4 += 1) 
                            {
                                arr_13 [i_0] [(signed char)5] [0U] [i_3] [i_4] = ((/* implicit */unsigned short) arr_7 [i_3 - 2] [(unsigned short)5] [i_4] [i_4] [i_4]);
                                var_12 = (short)11590;
                                arr_14 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-29676)) / (((/* implicit */int) arr_3 [i_2] [i_0]))))) ? (((((/* implicit */int) (unsigned char)255)) * (((/* implicit */int) var_3)))) : (((var_0) ? (((/* implicit */int) (short)8545)) : (((/* implicit */int) arr_2 [i_0] [i_2]))))));
                            }
                            /* vectorizable */
                            for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 2) 
                            {
                                var_13 = ((/* implicit */short) (+(((/* implicit */int) var_6))));
                                var_14 = ((/* implicit */unsigned int) (short)28672);
                            }
                            for (unsigned char i_6 = 0; i_6 < 11; i_6 += 4) 
                            {
                                arr_22 [i_0] [i_3] [i_2] [i_2] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) == (4294967295U)));
                                arr_23 [i_2] [i_1] [1ULL] [1ULL] [i_6] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) var_0)) / (((((/* implicit */_Bool) min(((short)8545), (((/* implicit */short) (_Bool)0))))) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_1])) : (((/* implicit */int) min((((/* implicit */signed char) var_5)), (var_9))))))));
                            }
                            var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) var_9)), (min((arr_5 [i_0]), (((/* implicit */int) arr_3 [i_0] [i_0]))))))) ? (((((/* implicit */_Bool) arr_2 [i_2] [i_2])) ? (min((arr_21 [i_0] [i_2] [i_0] [(short)4] [i_1] [i_0] [i_3]), (((/* implicit */unsigned long long int) var_9)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [(short)6] [i_3] [i_2] [i_1] [i_0]))) <= (1U))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 206794896)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)105))))) && (((/* implicit */_Bool) arr_15 [i_0] [i_1]))))))));
                            arr_24 [i_0] [i_0] [i_2] [i_3 + 1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_1 [i_2]), (((/* implicit */short) (signed char)-1))))) ? (((/* implicit */int) ((signed char) (unsigned char)15))) : (((/* implicit */int) (!((_Bool)1))))));
                        }
                    } 
                } 
                /* LoopSeq 4 */
                for (long long int i_7 = 0; i_7 < 11; i_7 += 2) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (long long int i_8 = 0; i_8 < 11; i_8 += 1) 
                    {
                        arr_31 [i_1] [i_0] [i_7] [i_8] = ((/* implicit */short) (_Bool)1);
                        var_16 = ((((/* implicit */_Bool) (short)-12071)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) : (3031635975U));
                    }
                    /* vectorizable */
                    for (unsigned short i_9 = 0; i_9 < 11; i_9 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (short i_10 = 0; i_10 < 11; i_10 += 2) 
                        {
                            arr_36 [i_10] [i_9] [(_Bool)1] [i_7] [i_1] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_10 [i_7] [i_7] [i_7] [i_9] [i_7]))))) ? (((/* implicit */int) (unsigned short)126)) : ((+(((/* implicit */int) var_8))))));
                            arr_37 [i_1] [(signed char)9] [(signed char)9] [i_7] [i_10] [i_7] = ((/* implicit */unsigned char) (_Bool)1);
                        }
                        var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) (signed char)-88))) | (((((/* implicit */_Bool) (unsigned char)21)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_28 [i_9] [0LL] [(signed char)6]))))));
                    }
                    arr_38 [i_0] [i_1] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)63)) & (((/* implicit */int) (_Bool)1))));
                }
                /* vectorizable */
                for (long long int i_11 = 0; i_11 < 11; i_11 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_12 = 0; i_12 < 11; i_12 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (short i_13 = 0; i_13 < 11; i_13 += 4) 
                        {
                            var_18 = ((/* implicit */long long int) ((short) (signed char)-61));
                            var_19 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) 1U)) ? (arr_44 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) 1U)))));
                        }
                        for (unsigned int i_14 = 3; i_14 < 10; i_14 += 2) 
                        {
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) var_7))) ? (arr_43 [i_12]) : (((/* implicit */int) var_5))));
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_20 [9] [i_11] [9] [i_14 - 1] [i_14])) ? (((/* implicit */int) arr_20 [0U] [i_1] [i_12] [i_14 - 1] [(unsigned char)2])) : (((/* implicit */int) arr_20 [i_11] [(short)2] [i_12] [i_14 - 2] [i_14]))));
                            arr_48 [i_0] [10] [i_11] [10] [i_11] [i_12] [i_12] = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (signed char)-4)) : (((/* implicit */int) ((signed char) (short)-7151)))));
                            var_22 = ((/* implicit */unsigned long long int) ((unsigned int) 3707852795U));
                        }
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            var_23 = ((/* implicit */signed char) ((((_Bool) arr_35 [i_15] [i_1] [i_1] [i_1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (1221246185U)));
                            var_24 = ((/* implicit */unsigned char) (signed char)-67);
                            var_25 = ((/* implicit */unsigned int) ((unsigned char) (_Bool)1));
                        }
                        /* LoopSeq 3 */
                        for (signed char i_16 = 1; i_16 < 8; i_16 += 1) /* same iter space */
                        {
                            var_26 = ((/* implicit */signed char) ((((/* implicit */int) arr_54 [i_0] [i_0] [i_12] [i_0] [i_0] [7])) & (((/* implicit */int) arr_33 [5] [i_1] [i_16] [i_16 + 1] [i_16 + 2] [8]))));
                            var_27 = ((/* implicit */short) (-((+(((/* implicit */int) arr_49 [i_0] [i_12] [i_11] [i_12] [i_16]))))));
                        }
                        for (signed char i_17 = 1; i_17 < 8; i_17 += 1) /* same iter space */
                        {
                            arr_58 [i_0] [i_1] [i_1] [i_11] [i_1] [i_12] [(short)0] = ((/* implicit */unsigned long long int) (_Bool)1);
                            var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [i_17 + 3] [i_17] [i_17 + 1] [i_17 + 3] [i_17 + 3])) - (((/* implicit */int) (unsigned char)191))));
                            arr_59 [i_0] [i_1] [i_11] [i_12] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_53 [i_17 - 1] [i_17 + 1] [i_17 + 2] [i_17 + 1] [i_12])) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_17 + 2] [i_17] [i_17 + 2] [i_17] [i_17])))));
                            var_29 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_12 [i_0] [i_12] [i_11] [i_12] [i_17 + 2]))));
                        }
                        for (signed char i_18 = 1; i_18 < 8; i_18 += 1) /* same iter space */
                        {
                            arr_62 [i_0] [i_0] [i_0] [i_11] [i_12] = ((/* implicit */long long int) ((signed char) ((_Bool) var_1)));
                            var_30 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_2))));
                            var_31 = ((/* implicit */_Bool) ((arr_51 [i_18] [i_18] [i_18 + 2] [i_18 + 3] [i_18 + 1] [i_18 + 3]) ? (((/* implicit */int) arr_51 [i_18 + 2] [0U] [i_18 + 1] [i_18 + 1] [i_18 - 1] [i_18 + 2])) : (((/* implicit */int) (unsigned short)0))));
                        }
                        var_32 = ((/* implicit */unsigned int) (!(arr_17 [i_0] [i_1] [i_11] [i_11] [i_0])));
                    }
                    arr_63 [1U] = ((/* implicit */unsigned char) (_Bool)1);
                }
                for (int i_19 = 3; i_19 < 10; i_19 += 1) 
                {
                    arr_66 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) 3851469472U)) ? (((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) (short)8545)) ? (((/* implicit */int) (short)1239)) : (2147483643))))) : (((unsigned int) ((unsigned char) (unsigned char)10)))));
                    arr_67 [i_0] [10] = ((/* implicit */unsigned short) var_9);
                    var_33 = ((/* implicit */unsigned short) max((arr_10 [i_0] [i_0] [(unsigned char)3] [i_1] [i_19]), (((/* implicit */unsigned char) (signed char)101))));
                }
                /* vectorizable */
                for (unsigned char i_20 = 0; i_20 < 11; i_20 += 2) 
                {
                    var_34 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_34 [i_1] [(_Bool)1] [i_1] [i_1] [i_1] [i_1] [(_Bool)1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)8))) : (arr_53 [i_0] [i_0] [i_1] [i_20] [i_20])))));
                    var_35 = ((/* implicit */unsigned long long int) 5456316U);
                }
                arr_70 [i_0] [10U] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_35 [i_0] [i_0] [i_1] [i_0] [i_1]))))) >= (((/* implicit */int) min((arr_39 [i_0] [i_0] [i_0] [i_0]), (arr_39 [i_0] [i_0] [i_1] [i_1]))))));
                arr_71 [i_1] [(signed char)3] [i_0] = ((short) (+(((/* implicit */int) var_4))));
            }
        } 
    } 
}
