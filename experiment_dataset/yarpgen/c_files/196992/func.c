/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196992
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
    var_20 = ((/* implicit */_Bool) var_5);
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)0)))) & ((((_Bool)1) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) var_3)) : ((~(((/* implicit */int) var_1))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopSeq 4 */
                for (short i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    arr_8 [i_0 + 1] [i_0 + 1] [(_Bool)1] = ((/* implicit */signed char) (+(arr_5 [i_0] [(short)4] [i_0])));
                    arr_9 [i_2] [i_2] [i_1] = ((/* implicit */unsigned long long int) max((((unsigned short) ((var_15) ^ (((/* implicit */unsigned long long int) var_0))))), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)1)))) > (((/* implicit */int) var_6)))))));
                    arr_10 [i_0 - 1] [i_1] [i_1] [i_2] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_7)), (max(((((_Bool)1) ? (var_15) : (arr_5 [i_0 + 4] [i_1] [i_2]))), (((/* implicit */unsigned long long int) arr_6 [(signed char)4] [i_2] [i_0] [(signed char)4]))))));
                    arr_11 [(_Bool)1] [i_1] [i_1] [(_Bool)1] |= var_4;
                    arr_12 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((var_8) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))) ? (((/* implicit */int) (short)12884)) : (((((/* implicit */int) arr_0 [i_0 - 1])) ^ (((/* implicit */int) var_12))))))));
                }
                for (unsigned short i_3 = 0; i_3 < 21; i_3 += 3) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (signed char i_5 = 2; i_5 < 18; i_5 += 3) 
                        {
                            arr_21 [i_0] [i_3] [i_3] [i_3] [i_5 + 2] = ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((unsigned long long int) arr_16 [i_0 + 4] [i_3] [i_3] [i_4 - 1] [i_5 + 3])) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0 + 1] [(short)11] [i_3] [i_4 - 1] [i_5 + 3]))));
                            arr_22 [i_0] [i_1] [i_3] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) arr_4 [i_4 - 1]))) - (((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (_Bool)1))))));
                        }
                        arr_23 [i_3] = ((/* implicit */short) ((signed char) (_Bool)1));
                        arr_24 [i_0] [i_0] [(unsigned char)18] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_4)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 1073741823)))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8)))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)56)) ? (((/* implicit */int) (short)19984)) : (((/* implicit */int) (signed char)68)))))));
                    }
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) /* same iter space */
                    {
                        arr_27 [(signed char)10] [i_0 + 4] [i_3] [i_6] [i_0] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((signed char) var_16))), (max((0ULL), (((/* implicit */unsigned long long int) var_18))))))) ? (((/* implicit */long long int) max((((((/* implicit */unsigned int) ((/* implicit */int) var_5))) + (arr_19 [i_6 - 1] [i_3] [i_1] [i_0] [i_0]))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_6)))))))) : (max((((/* implicit */long long int) arr_7 [i_0])), (((524286LL) / (-2233814574662794114LL)))))));
                        arr_28 [i_0] [i_0] [i_3] [i_3] = ((/* implicit */short) max((((/* implicit */unsigned short) var_4)), (arr_6 [i_0 + 4] [i_0 - 2] [i_0] [i_0 + 1])));
                    }
                    arr_29 [i_0] [(_Bool)1] [i_3] [(unsigned short)20] = ((/* implicit */_Bool) ((unsigned long long int) max((arr_20 [i_0] [i_1] [(short)8] [i_1] [i_0 + 2]), (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-12197))))))));
                }
                /* vectorizable */
                for (unsigned short i_7 = 0; i_7 < 21; i_7 += 3) /* same iter space */
                {
                    arr_33 [i_0 + 2] [i_1] [(short)14] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((2671094028715723251ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))))))) > (((arr_19 [i_0] [i_1] [i_7] [i_7] [15]) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-99)))))));
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (unsigned long long int i_9 = 2; i_9 < 19; i_9 += 1) 
                        {
                            {
                                arr_40 [i_9] [i_8] [i_8] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_35 [i_7] [i_8])) ^ (((/* implicit */int) arr_35 [i_7] [i_8]))));
                                arr_41 [i_0] [i_1] [i_7] [i_8] [i_0] [i_9] = ((/* implicit */int) ((unsigned char) arr_1 [i_0 + 2] [(short)18]));
                                arr_42 [i_0] [i_1] [i_7] [i_8] [i_9 + 1] = ((/* implicit */unsigned long long int) (unsigned char)0);
                                arr_43 [i_0 + 3] [10] [i_7] [i_0 + 4] [i_9] [i_8] [i_9] = ((/* implicit */unsigned char) (short)-16561);
                            }
                        } 
                    } 
                }
                for (unsigned short i_10 = 0; i_10 < 21; i_10 += 3) /* same iter space */
                {
                    arr_47 [i_10] [(unsigned char)9] = ((/* implicit */short) (~(((/* implicit */int) max(((_Bool)1), ((!(((/* implicit */_Bool) var_2)))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_11 = 0; i_11 < 21; i_11 += 3) 
                    {
                        for (unsigned long long int i_12 = 0; i_12 < 21; i_12 += 3) 
                        {
                            {
                                arr_55 [i_0] [i_1] [i_1] [(_Bool)1] [i_12] &= ((/* implicit */int) (+(0ULL)));
                                arr_56 [i_0] [i_1] [i_0] [i_1] [i_12] [i_11] [i_0 - 1] = ((int) ((unsigned short) max(((unsigned char)143), ((unsigned char)136))));
                                arr_57 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) 8666729632454717582ULL))))) > (((/* implicit */int) max((((/* implicit */unsigned short) arr_49 [i_12] [i_0] [i_10] [i_0] [i_0])), (var_12))))))) - (((/* implicit */int) arr_6 [4LL] [4LL] [4LL] [4LL]))));
                                arr_58 [i_1] [i_10] [i_12] = ((/* implicit */_Bool) (+(var_19)));
                                arr_59 [i_0] [i_0] [i_10] [i_0] [i_10] [i_0] = ((/* implicit */int) (unsigned short)32764);
                            }
                        } 
                    } 
                    arr_60 [i_10] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_10] [i_1] [i_0 - 2]))) ^ (((arr_20 [i_10] [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0 + 1]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_18)))))));
                    arr_61 [i_0] [i_0] [i_1] [i_10] = ((/* implicit */short) var_0);
                    /* LoopNest 2 */
                    for (unsigned long long int i_13 = 0; i_13 < 21; i_13 += 3) 
                    {
                        for (short i_14 = 0; i_14 < 21; i_14 += 4) 
                        {
                            {
                                arr_67 [i_0] = ((/* implicit */short) ((max((var_9), (((/* implicit */unsigned long long int) arr_37 [i_0 + 3] [i_0 + 1] [i_0 - 1] [i_0] [i_0 - 1])))) == (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_37 [i_0 - 2] [i_0 - 1] [i_0 - 2] [i_1] [i_0 - 2])) - (((/* implicit */int) (_Bool)1)))))));
                                arr_68 [i_14] [i_10] [i_10] [i_1] [i_10] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) ((((/* implicit */int) arr_36 [i_10] [i_10] [i_10])) % (((/* implicit */int) var_12)))))) ? (((((/* implicit */_Bool) arr_15 [6ULL] [i_0 + 4] [i_0 + 4])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_15 [i_0 - 2] [i_0 + 2] [i_0 + 3])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_52 [i_0] [i_1] [i_10])) ? (((/* implicit */int) arr_53 [i_10] [i_1])) : (var_10)))) ? (arr_4 [i_0 + 2]) : (((/* implicit */int) (_Bool)1))))));
                                arr_69 [i_0] [i_0 + 2] [i_10] [i_0] [i_0 + 3] [i_0] [i_0] = ((/* implicit */short) (~(((((/* implicit */int) arr_63 [i_0] [i_1] [i_10] [i_13])) ^ (((/* implicit */int) arr_63 [i_0] [i_1] [i_13] [i_0]))))));
                                arr_70 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((long long int) max((((((/* implicit */_Bool) (short)-258)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_16))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned short)22911))))))));
                            }
                        } 
                    } 
                }
                /* LoopNest 2 */
                for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
                {
                    for (int i_16 = 0; i_16 < 21; i_16 += 1) 
                    {
                        {
                            arr_76 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_52 [i_0 + 2] [i_1] [i_1]))))) ? (((((/* implicit */int) arr_52 [i_0] [i_0] [i_1])) & (((/* implicit */int) arr_52 [i_0 - 2] [i_0 - 2] [i_1])))) : ((~(((/* implicit */int) var_13))))));
                            arr_77 [i_16] [i_16] [i_15 + 1] [i_15 + 1] = ((/* implicit */signed char) ((((arr_25 [i_16]) >= (((/* implicit */long long int) ((/* implicit */int) (short)3840))))) ? (((/* implicit */int) (((-(var_15))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) : (min((((arr_64 [i_16] [i_15] [i_0] [i_0] [i_0]) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_62 [i_0] [i_0] [i_0])))), (((/* implicit */int) (short)32752))))));
                            arr_78 [i_1] |= ((/* implicit */int) (!(((((((/* implicit */_Bool) arr_37 [i_0 - 2] [i_0 - 2] [i_1] [i_0] [i_16])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_35 [i_0] [i_0])))) >= (((/* implicit */int) var_4))))));
                            arr_79 [i_16] [i_16] = ((/* implicit */short) ((unsigned short) max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1]))) | (arr_5 [i_15 + 1] [(_Bool)1] [i_0 + 1]))), (((/* implicit */unsigned long long int) var_0)))));
                            arr_80 [i_0] [i_1] [i_16] [i_16] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_49 [(unsigned short)19] [i_1] [i_1] [i_16] [i_16]))));
                        }
                    } 
                } 
            }
        } 
    } 
}
