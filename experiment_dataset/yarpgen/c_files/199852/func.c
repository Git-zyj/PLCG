/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199852
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    /* LoopSeq 4 */
                    for (short i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        arr_11 [i_3] [i_1] [10U] [i_1] [i_1 + 3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)14424)) ? (((/* implicit */int) (short)-14425)) : (((/* implicit */int) (short)14424))));
                        arr_12 [i_3] [i_1] [i_3] [(short)12] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (short)16383)) ? (((/* implicit */int) (signed char)95)) : (((/* implicit */int) (short)14425))));
                        /* LoopSeq 1 */
                        for (short i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            var_19 -= ((/* implicit */short) (-(((/* implicit */int) arr_5 [i_0] [(short)9] [i_0] [i_0]))));
                            arr_15 [i_0] [i_0] [12] [(short)3] [(short)9] [i_3] [(short)3] = ((/* implicit */unsigned int) (short)-1);
                        }
                        var_20 = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_4 [i_0] [i_1 + 3] [i_2])) ? (((/* implicit */int) (short)-7315)) : (((/* implicit */int) (short)(-32767 - 1)))))));
                        /* LoopSeq 1 */
                        for (signed char i_5 = 0; i_5 < 14; i_5 += 4) 
                        {
                            arr_20 [i_0] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (short)14424))) ? (((/* implicit */int) (unsigned short)32452)) : (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (signed char)16)) : (((/* implicit */int) (short)-3118)))))))));
                            arr_21 [i_3] = max(((short)3118), ((short)(-32767 - 1)));
                            var_21 *= ((/* implicit */short) max((((((/* implicit */int) (unsigned short)4093)) + (((/* implicit */int) arr_10 [i_1 + 3] [i_1] [i_0] [6] [i_5])))), (((/* implicit */int) arr_10 [i_1 - 2] [i_3] [i_0] [i_3] [i_3]))));
                            var_22 = 137438953464LL;
                            arr_22 [i_3] [i_3] [i_2] [(short)11] [(short)1] [i_2] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_1 + 2] [i_1] [(signed char)9])) && (((/* implicit */_Bool) (unsigned short)65280))))) ^ (((/* implicit */int) (short)-15745))));
                        }
                    }
                    for (short i_6 = 0; i_6 < 14; i_6 += 3) /* same iter space */
                    {
                        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) 72057594037927872LL))));
                        /* LoopSeq 1 */
                        for (short i_7 = 3; i_7 < 13; i_7 += 4) 
                        {
                            arr_31 [(short)4] [i_7] [i_7] [i_6] [(short)4] [(short)4] [i_1] = ((/* implicit */short) min((arr_30 [i_0] [i_0] [i_2] [(short)8] [(short)2]), (((/* implicit */unsigned int) ((((/* implicit */int) arr_26 [i_1] [i_1 + 1] [i_2])) * (((/* implicit */int) arr_7 [i_0] [i_1 - 2] [i_6] [i_6])))))));
                            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) -1978776437)) ? (min((((/* implicit */long long int) arr_9 [i_7] [i_1] [i_1] [(unsigned short)12])), (max((((/* implicit */long long int) (short)-5689)), (36028797018959872LL))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)252)))));
                            var_25 = ((/* implicit */short) (~((-(((/* implicit */int) (signed char)23))))));
                            arr_32 [i_0] [i_1] [i_2] [i_0] [(signed char)2] = ((/* implicit */short) (+(((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [6] [6] [i_7]))))) ? (((/* implicit */int) max((((/* implicit */short) (unsigned char)165)), (arr_4 [i_0] [i_1 - 2] [i_2])))) : (((/* implicit */int) (unsigned short)768))))));
                        }
                        var_26 = ((/* implicit */short) (+(((((/* implicit */_Bool) (short)-32184)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (short)15761)))))));
                        var_27 ^= ((/* implicit */short) (+(((((/* implicit */int) arr_2 [i_1 + 1] [i_6])) << (((((((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_6] [i_6])) - (var_17))) + (1515516800)))))));
                    }
                    for (short i_8 = 0; i_8 < 14; i_8 += 3) /* same iter space */
                    {
                        var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_35 [i_1 + 1] [i_1 + 3] [i_1] [i_1 + 2])) + (arr_0 [i_1 - 1])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_14 [i_0] [i_0] [i_1] [i_1 + 3] [i_1 + 3])) > (((/* implicit */int) (short)-23935)))))) : (((((((/* implicit */int) (short)768)) != (((/* implicit */int) (short)(-32767 - 1))))) ? (max((var_9), (7086075337633036658LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)-29746)) : (((/* implicit */int) (signed char)-108))))))))))));
                        var_29 += ((/* implicit */short) (((!(((/* implicit */_Bool) arr_18 [i_0] [i_1 - 1] [(signed char)5] [i_1] [i_2])))) ? (((/* implicit */long long int) max((((/* implicit */int) (short)-12302)), ((~(((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0]))))))) : (((long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) arr_29 [i_0] [(short)5])) : (((/* implicit */int) arr_18 [i_0] [i_1] [i_1] [(short)5] [i_8])))))));
                        arr_36 [i_0] [9U] = ((/* implicit */short) (~(min(((-(((/* implicit */int) arr_5 [i_0] [i_0] [i_2] [i_2])))), (((/* implicit */int) (short)-1))))));
                        /* LoopSeq 4 */
                        for (unsigned short i_9 = 3; i_9 < 12; i_9 += 4) 
                        {
                            var_30 = ((/* implicit */signed char) (unsigned short)2105);
                            var_31 = ((/* implicit */signed char) arr_14 [i_9] [i_9 + 2] [i_9 + 1] [i_9 - 2] [i_9 - 2]);
                        }
                        for (unsigned short i_10 = 0; i_10 < 14; i_10 += 1) 
                        {
                            var_32 = ((/* implicit */short) ((((((((/* implicit */_Bool) (short)-24917)) ? (((/* implicit */long long int) (-2147483647 - 1))) : (3336725774571934411LL))) - (((/* implicit */long long int) (~(arr_30 [i_0] [i_1] [i_8] [i_8] [i_10])))))) < (min((((/* implicit */long long int) arr_7 [i_0] [i_2] [i_8] [i_0])), (var_16)))));
                            var_33 = ((/* implicit */signed char) min((((((((/* implicit */_Bool) arr_24 [i_0] [(unsigned short)0] [(unsigned short)0])) ? (131071U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))))) >> (((((/* implicit */int) (short)(-32767 - 1))) + (32785))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((-3336725774571934412LL) ^ (((/* implicit */long long int) ((/* implicit */int) (short)11588)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_29 [i_1] [i_8]))))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (-931684599) : (((/* implicit */int) (signed char)18)))))))));
                        }
                        for (unsigned int i_11 = 0; i_11 < 14; i_11 += 4) 
                        {
                            arr_43 [i_0] [(short)2] [(short)2] [(short)2] [i_11] |= min((((/* implicit */short) (signed char)25)), ((short)(-32767 - 1)));
                            arr_44 [i_0] [(signed char)13] [(signed char)13] [i_8] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-16)) ? (((/* implicit */int) (short)992)) : (1756851942)));
                            var_34 -= ((/* implicit */signed char) (!(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_0] [i_0] [i_0] [i_8])) ? (1756851942) : (((/* implicit */int) (short)-12547))))) && (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) || (((/* implicit */_Bool) (signed char)-94))))))));
                            arr_45 [i_2] [i_1] = ((/* implicit */signed char) (((-(((((/* implicit */int) (short)992)) ^ (((/* implicit */int) var_15)))))) ^ (((/* implicit */int) (short)3921))));
                        }
                        for (signed char i_12 = 0; i_12 < 14; i_12 += 2) 
                        {
                            arr_48 [i_0] [i_1] [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) (short)13574))));
                            arr_49 [i_0] [(signed char)10] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(9065246679139046248LL))))));
                            var_35 = ((/* implicit */short) arr_29 [i_2] [(signed char)3]);
                        }
                        var_36 += ((/* implicit */short) arr_29 [i_0] [i_0]);
                    }
                    for (unsigned short i_13 = 2; i_13 < 13; i_13 += 1) 
                    {
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (short i_14 = 0; i_14 < 14; i_14 += 4) 
                        {
                            var_37 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_39 [i_1 - 1] [i_13] [i_13] [i_13 - 2])) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_1 - 2] [(short)13] [i_2] [i_13 - 2])))));
                            var_38 = ((/* implicit */short) ((((/* implicit */_Bool) arr_34 [i_1 + 3] [i_1 + 1] [i_1 - 1] [i_13 - 1])) ? (arr_34 [i_1 + 2] [i_1 + 2] [i_1 - 2] [i_13 + 1]) : (arr_34 [i_1 + 1] [i_1 + 3] [i_1 - 2] [i_13 + 1])));
                            arr_54 [i_14] [i_13] [i_13] [i_2] [i_0] [i_13] [i_0] = ((/* implicit */unsigned short) (+(arr_34 [i_14] [i_13 - 1] [i_13 + 1] [i_1 - 1])));
                            arr_55 [(short)7] [i_13] [(signed char)13] [i_0] [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_24 [(unsigned short)3] [i_1 + 1] [i_13 + 1])) ? (((/* implicit */int) arr_24 [(unsigned short)4] [i_1 - 2] [i_13 + 1])) : (((/* implicit */int) arr_24 [i_0] [i_1 + 3] [i_13 - 1]))));
                            var_39 = ((/* implicit */long long int) (short)3921);
                        }
                        for (unsigned short i_15 = 4; i_15 < 11; i_15 += 2) /* same iter space */
                        {
                            arr_58 [i_13] = ((/* implicit */short) ((((((/* implicit */int) var_2)) - (((/* implicit */int) (signed char)9)))) * (((/* implicit */int) (short)(-32767 - 1)))));
                            var_40 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_0] [(signed char)11] [i_0] [i_0] [i_0]))))) % (((/* implicit */int) (short)14336))));
                        }
                        for (unsigned short i_16 = 4; i_16 < 11; i_16 += 2) /* same iter space */
                        {
                            var_41 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_29 [i_1 + 2] [i_13 - 1])) : (((/* implicit */int) arr_29 [i_1 - 2] [i_13 - 1]))))) ? (min((((/* implicit */unsigned int) var_14)), (var_10))) : (min((((/* implicit */unsigned int) (unsigned short)5522)), (var_10)))));
                            var_42 = ((/* implicit */short) ((((/* implicit */int) (signed char)-57)) * (((/* implicit */int) (short)(-32767 - 1)))));
                        }
                        for (short i_17 = 1; i_17 < 10; i_17 += 4) 
                        {
                            var_43 = ((/* implicit */unsigned short) max((var_43), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 1852632652U)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-18728)) ? (((/* implicit */int) arr_46 [i_0] [i_1 - 1] [i_0] [(unsigned short)12] [i_17])) : (((/* implicit */int) var_13))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_61 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))) : (((((/* implicit */_Bool) arr_30 [i_0] [i_0] [i_0] [(signed char)6] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (short)4906))) : (var_9))))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_41 [i_17] [1U] [i_13] [i_17] [i_17 - 1] [i_17 + 2] [i_13]), (arr_41 [i_17] [i_17] [i_17] [i_17 + 3] [i_17 + 3] [i_17 + 2] [(short)3]))))))))));
                            var_44 *= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) min(((short)960), (((/* implicit */short) (signed char)(-127 - 1)))))) ? (((((/* implicit */_Bool) (short)4333)) ? (((/* implicit */int) (short)4333)) : (((/* implicit */int) (unsigned char)181)))) : (((((/* implicit */int) (short)13453)) | (((/* implicit */int) (short)4333)))))), ((+(((/* implicit */int) (unsigned short)1))))));
                            arr_66 [i_13] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (~(((/* implicit */int) (short)(-32767 - 1)))))) ? (max((((/* implicit */int) (short)(-32767 - 1))), (1730080684))) : (((/* implicit */int) arr_38 [i_1 - 2] [i_1] [i_17 - 1] [i_13] [i_13] [i_17])))) * (((/* implicit */int) (unsigned short)0))));
                            var_45 &= ((/* implicit */short) ((((/* implicit */int) (short)14336)) << (((((((/* implicit */_Bool) min((arr_6 [i_0] [(short)2] [i_0]), (var_10)))) ? (((((/* implicit */_Bool) arr_13 [i_1] [i_0] [i_13] [i_2])) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) arr_53 [i_17] [i_1] [i_2] [(short)2] [i_13 - 1] [(short)4] [(unsigned char)6]))))) : (arr_30 [i_0] [i_13 + 1] [i_0] [i_17] [i_17]))) - (493840136U)))));
                        }
                        var_46 = ((/* implicit */unsigned char) max((var_46), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) (short)28121)) ? (2130706432U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-28))))) == (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_10 [i_13 - 1] [(unsigned short)2] [i_2] [i_13] [i_1 + 2])) > (((/* implicit */int) (short)-12376)))))))))));
                        var_47 = ((/* implicit */short) min((var_47), (((/* implicit */short) min((((((/* implicit */int) arr_26 [10LL] [i_1] [i_1])) + (((/* implicit */int) arr_5 [(short)1] [i_0] [i_0] [(unsigned char)10])))), (min((var_17), (((/* implicit */int) arr_42 [i_0] [i_0] [i_0])))))))));
                    }
                    var_48 = ((/* implicit */unsigned char) max((var_48), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-29195)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)34857))))) : (((((/* implicit */_Bool) (short)18890)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (short)6488)))))))));
                    arr_67 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) -656672333);
                }
            } 
        } 
    } 
    var_49 = ((/* implicit */short) ((unsigned char) (unsigned char)44));
    var_50 = ((/* implicit */unsigned int) max((var_50), (((/* implicit */unsigned int) (+(min((((((/* implicit */int) var_12)) % (((/* implicit */int) var_0)))), (((/* implicit */int) min((var_1), ((short)(-32767 - 1))))))))))));
    var_51 = ((/* implicit */short) min((var_5), (((/* implicit */unsigned int) ((((/* implicit */int) (short)-16604)) | (((/* implicit */int) (unsigned char)44)))))));
}
