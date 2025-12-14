/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41146
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        arr_2 [i_0] &= (~(((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (arr_1 [i_0] [(unsigned char)3]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) == (3063808203U))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [(_Bool)1] [i_1] [i_2] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max(((~(arr_1 [i_0] [i_1]))), (max((arr_1 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_2])))))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 4; i_3 < 18; i_3 += 3) 
                    {
                        /* LoopSeq 4 */
                        for (long long int i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            arr_15 [i_0] [i_1] [i_0] [i_3 + 1] [i_0] [i_0] [i_1] = ((/* implicit */short) var_8);
                            var_15 = ((/* implicit */long long int) ((((((/* implicit */_Bool) 7440952416886379971ULL)) ? ((+(arr_1 [i_1] [i_1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1826885590U)) ? (-14LL) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2468081679U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_1))))))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_5 = 0; i_5 < 20; i_5 += 2) 
                        {
                            var_16 -= ((/* implicit */short) (~(((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_12))))));
                            var_17 ^= ((/* implicit */short) (-((-(arr_12 [19U] [i_1] [i_2] [i_3] [i_5])))));
                            arr_18 [i_0] [i_1] [i_1] [i_3] [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)0)) ? (15ULL) : (4ULL)));
                            var_18 = ((/* implicit */unsigned long long int) (short)3994);
                        }
                        /* vectorizable */
                        for (long long int i_6 = 0; i_6 < 20; i_6 += 3) 
                        {
                            var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((unsigned long long int) arr_13 [i_0] [i_1] [i_2] [i_2] [i_2] [i_3 + 1])))));
                            var_20 = ((/* implicit */unsigned long long int) ((long long int) ((unsigned int) 3815535942U)));
                            arr_22 [i_0] [i_1] [i_2] [i_3 - 2] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 11384000177150338745ULL)) ? (arr_17 [i_0] [i_1] [12U] [i_3] [12U]) : (((/* implicit */unsigned long long int) var_2))))) ? (561359427634056059ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [i_1] [i_2])))));
                            var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_1 [i_0] [i_1]))));
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 4) 
                        {
                            var_22 = ((/* implicit */unsigned int) arr_5 [9ULL] [i_1] [i_2]);
                            var_23 &= ((/* implicit */unsigned char) min((((arr_16 [i_0] [i_3 + 1] [i_2] [i_3 - 2] [i_7]) ^ (((long long int) arr_10 [i_0])))), (((/* implicit */long long int) var_11))));
                            var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((long long int) var_14))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_9 [1ULL] [i_1] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_0]))) : ((-(var_4))))))));
                        }
                        arr_26 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (max((var_4), (((/* implicit */unsigned int) var_14))))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_8 = 0; i_8 < 20; i_8 += 2) /* same iter space */
                        {
                            arr_29 [i_0] = ((/* implicit */unsigned long long int) ((long long int) arr_17 [i_3] [2U] [i_2] [i_3] [i_8]));
                            arr_30 [i_0] [i_1] [i_2] [i_0] [i_0] [i_2] [i_8] = ((/* implicit */unsigned int) ((((1826885589U) >= (var_13))) ? (arr_12 [i_0] [i_1] [i_2] [i_3] [i_8]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1]))) : (4294967270U))))));
                            var_25 += ((signed char) arr_11 [i_0] [i_0] [i_0] [i_3 - 3] [i_8]);
                        }
                        for (unsigned int i_9 = 0; i_9 < 20; i_9 += 2) /* same iter space */
                        {
                            var_26 = ((/* implicit */unsigned char) (-(arr_32 [8LL] [i_3 - 1] [i_2] [i_3] [i_9])));
                            var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) arr_5 [i_0] [(unsigned char)8] [9LL]))));
                            arr_34 [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_0] [i_3 - 3] [i_0] [i_0] [i_1] [i_9] [i_1])) ? (max((arr_27 [i_0] [i_3 - 3] [i_2] [i_3] [i_9] [0U] [i_2]), (arr_27 [i_0] [i_3 + 2] [i_2] [i_3 - 3] [i_9] [i_2] [i_1]))) : (((arr_27 [i_0] [i_3 - 1] [i_9] [11LL] [11LL] [i_1] [i_1]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
                        }
                    }
                    for (unsigned char i_10 = 2; i_10 < 19; i_10 += 4) 
                    {
                        var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) (-(((((/* implicit */_Bool) min((8968922446348369894ULL), (((/* implicit */unsigned long long int) arr_21 [i_0] [i_1] [i_1] [i_10] [i_1] [i_1] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 0U)))) : (min((((/* implicit */unsigned long long int) var_12)), (arr_17 [i_0] [(short)10] [i_2] [i_10] [i_2]))))))))));
                        arr_38 [i_0] [i_0] [i_2] [i_2] [4ULL] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((8727373545472ULL) >> (((561359427634056059ULL) - (561359427634056029ULL)))))) ? (((/* implicit */int) ((7440952416886379971ULL) == (((/* implicit */unsigned long long int) 0U))))) : (((/* implicit */int) arr_14 [i_0] [i_1] [0LL] [i_0] [i_1]))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)34))))) == ((~(var_4)))))) : (((/* implicit */int) ((((/* implicit */_Bool) 2ULL)) || ((!(arr_13 [i_0] [i_0] [i_2] [i_10] [i_10] [0LL]))))))));
                        var_29 = ((((((/* implicit */_Bool) (-(9223372036854775807LL)))) ? (((((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_2] [i_2] [i_0])) ? (arr_20 [i_0] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 28U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_13)))))) % (((7440952416886379963ULL) >> (((((/* implicit */int) arr_35 [i_10 + 1] [i_1] [i_2] [i_10 - 1])) + (93))))));
                        arr_39 [i_0] [i_1] [i_2] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_8))));
                        var_30 = ((/* implicit */long long int) arr_4 [i_0] [i_1]);
                    }
                    arr_40 [i_0] [i_0] [i_1] [i_0] = (!(((/* implicit */_Bool) ((arr_4 [9LL] [i_1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)27)))))));
                    arr_41 [i_0] [i_1] [i_2] [5U] &= ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_25 [i_0] [(unsigned char)1] [i_2] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (4682527178443910240ULL))) == (((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_2]))));
                }
            } 
        } 
        arr_42 [i_0] = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_3))))), ((-(arr_17 [i_0] [i_0] [i_0] [i_0] [i_0]))))) + (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (short)27420)), (-3LL))))));
        arr_43 [i_0] = ((/* implicit */unsigned long long int) 4294967295U);
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_11 = 0; i_11 < 13; i_11 += 1) 
    {
        var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) (+(((((/* implicit */_Bool) max((arr_17 [i_11] [i_11] [i_11] [i_11] [i_11]), (((/* implicit */unsigned long long int) var_3))))) ? ((+(864691128455135232ULL))) : (((((/* implicit */_Bool) (signed char)57)) ? (arr_33 [i_11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))))))));
        var_32 *= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 480LL)) ? (-2777257174803489421LL) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))) ? (((((/* implicit */_Bool) (unsigned char)48)) ? (8070450532247928832LL) : (((/* implicit */long long int) 1560910467U)))) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_11]))))) << (((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_45 [i_11] [6LL])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_11] [(unsigned char)17] [i_11] [i_11] [i_11] [i_11] [i_11])) || (((/* implicit */_Bool) var_14))))))) - (13799)))));
    }
    /* vectorizable */
    for (unsigned long long int i_12 = 1; i_12 < 15; i_12 += 1) 
    {
        /* LoopSeq 2 */
        for (long long int i_13 = 2; i_13 < 14; i_13 += 1) 
        {
            arr_53 [(unsigned char)14] = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_13 - 2])) ? (((/* implicit */long long int) 1942317917U)) : ((-(var_5)))));
            arr_54 [i_12] [i_13] [i_12 + 1] = ((/* implicit */unsigned char) arr_27 [i_12] [i_12] [i_13] [i_13] [i_12] [i_12] [i_12]);
        }
        for (unsigned int i_14 = 0; i_14 < 16; i_14 += 1) 
        {
            arr_57 [i_12] [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_35 [i_12 + 1] [i_14] [i_12 + 1] [(signed char)1])) ? (((/* implicit */int) arr_35 [i_12 - 1] [i_14] [i_14] [i_14])) : (((/* implicit */int) arr_35 [i_12 - 1] [i_14] [i_14] [i_14]))));
            var_33 = ((/* implicit */unsigned char) (((((_Bool)1) || (((/* implicit */_Bool) 4294967295U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 22U)))) : ((~(arr_33 [i_12])))));
        }
        arr_58 [i_12] = ((/* implicit */short) arr_55 [i_12] [(_Bool)1] [i_12]);
    }
}
