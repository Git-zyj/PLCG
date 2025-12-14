/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50198
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
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            {
                arr_7 [i_0] [i_1] = ((/* implicit */long long int) ((unsigned char) ((short) 14ULL)));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    for (unsigned char i_3 = 1; i_3 < 16; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 4 */
                            for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 3) 
                            {
                                var_10 = ((/* implicit */unsigned short) max((var_10), (((/* implicit */unsigned short) ((((unsigned int) 1645707578U)) <= (((/* implicit */unsigned int) ((int) arr_10 [i_4] [i_3] [i_1] [i_0]))))))));
                                var_11 = ((/* implicit */int) ((long long int) ((unsigned int) ((((/* implicit */int) (signed char)118)) << (((((/* implicit */int) (signed char)-54)) + (74)))))));
                                arr_15 [i_0] [i_2] [i_2] = ((/* implicit */_Bool) ((unsigned long long int) ((((var_4) | (((/* implicit */int) (unsigned char)120)))) | (((/* implicit */int) ((unsigned short) (_Bool)1))))));
                            }
                            for (unsigned int i_5 = 3; i_5 < 15; i_5 += 2) /* same iter space */
                            {
                                arr_18 [i_5] [12U] [i_2] [i_2] [12U] [12U] = ((/* implicit */short) ((_Bool) ((unsigned long long int) arr_13 [i_5] [i_5 + 1] [i_5] [i_5] [(unsigned short)14])));
                                arr_19 [i_0] &= ((/* implicit */short) ((unsigned int) ((((/* implicit */int) var_1)) != (((/* implicit */int) var_3)))));
                                var_12 = ((((/* implicit */int) ((signed char) var_2))) / (((/* implicit */int) ((((/* implicit */int) arr_11 [i_0 - 2] [i_0 - 2])) >= (((/* implicit */int) (signed char)30))))));
                                var_13 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) 14063456042836600895ULL)))) / (((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_1] [i_1 - 1] [i_1 - 1] [(signed char)4]))) + (((unsigned int) (_Bool)1))))));
                                var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) var_3))) + (arr_1 [i_3 - 1] [i_3]))) | (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (unsigned char)120)))))))));
                            }
                            /* vectorizable */
                            for (unsigned int i_6 = 3; i_6 < 15; i_6 += 2) /* same iter space */
                            {
                                var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((unsigned long long int) (unsigned char)253)))));
                                arr_22 [i_0 - 1] [(unsigned char)14] [11U] [(unsigned short)1] [i_6 + 1] [i_2] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) var_7)) * (((/* implicit */int) arr_5 [3] [i_1 + 3]))));
                                var_16 = ((/* implicit */signed char) ((unsigned int) arr_8 [i_0 - 2]));
                            }
                            /* vectorizable */
                            for (unsigned int i_7 = 3; i_7 < 15; i_7 += 2) /* same iter space */
                            {
                                var_17 = ((/* implicit */unsigned int) ((var_4) / (((/* implicit */int) (unsigned char)253))));
                                arr_25 [i_2] [i_2] = ((/* implicit */short) ((arr_3 [i_1 + 2]) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))));
                            }
                            arr_26 [i_3] [i_1 + 3] [i_2] [9LL] [9LL] [i_2] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_0 [i_0 + 1])))) > (((arr_0 [i_0 - 1]) ^ (arr_3 [i_0 + 1])))));
                        }
                    } 
                } 
                var_18 += ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) ((var_9) + (((/* implicit */long long int) ((/* implicit */int) var_6)))))) || (((/* implicit */_Bool) ((long long int) (unsigned char)233))))));
                arr_27 [(_Bool)0] [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) (unsigned short)39951))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_8 = 2; i_8 < 12; i_8 += 4) 
    {
        var_19 ^= ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) var_8))) << (((((/* implicit */int) ((short) arr_4 [i_8 + 1]))) + (30931)))));
        var_20 += ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (signed char)-1)));
        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((long long int) ((int) arr_20 [i_8] [i_8] [i_8 + 2]))))));
        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) var_3))) && (((/* implicit */_Bool) ((short) var_0))))))));
    }
    /* vectorizable */
    for (signed char i_9 = 0; i_9 < 16; i_9 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_10 = 1; i_10 < 15; i_10 += 3) 
        {
            arr_36 [i_10] = ((/* implicit */long long int) ((var_0) << (((var_0) - (3246839305U)))));
            var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((unsigned char) var_0)))));
            /* LoopNest 3 */
            for (long long int i_11 = 1; i_11 < 15; i_11 += 3) 
            {
                for (unsigned short i_12 = 1; i_12 < 14; i_12 += 4) 
                {
                    for (unsigned long long int i_13 = 2; i_13 < 12; i_13 += 1) 
                    {
                        {
                            arr_45 [i_9] [i_9] |= ((/* implicit */unsigned long long int) ((_Bool) var_8));
                            var_24 ^= ((int) arr_10 [i_11 + 1] [i_11 + 1] [i_11] [i_12]);
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            for (int i_14 = 0; i_14 < 16; i_14 += 3) 
            {
                /* LoopSeq 3 */
                for (unsigned int i_15 = 4; i_15 < 14; i_15 += 1) 
                {
                    var_25 = ((/* implicit */unsigned long long int) ((unsigned short) arr_17 [i_9] [i_15 + 1]));
                    arr_50 [i_9] [i_9] = ((/* implicit */short) ((((/* implicit */int) arr_43 [i_14] [i_15 - 2])) + (((/* implicit */int) var_2))));
                    arr_51 [i_15] = ((/* implicit */unsigned long long int) ((unsigned short) var_3));
                    var_26 = ((/* implicit */long long int) ((((/* implicit */int) arr_16 [(_Bool)1] [i_15 - 3] [i_14] [i_15 - 2] [3])) >> (((((/* implicit */int) arr_16 [i_9] [i_9] [i_9] [i_9] [i_9])) - (90)))));
                }
                for (unsigned short i_16 = 4; i_16 < 15; i_16 += 1) 
                {
                    var_27 -= ((/* implicit */unsigned long long int) ((unsigned int) arr_31 [i_10 - 1]));
                    arr_56 [i_9] [i_10] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) == (arr_55 [i_16] [i_16 - 4] [i_16 - 3] [i_16 - 3] [(unsigned short)6] [i_16])));
                    var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) ((((var_4) + (2147483647))) << (((/* implicit */int) var_1)))))));
                    arr_57 [i_16 - 2] [i_16 - 2] = ((/* implicit */int) ((((unsigned long long int) 914530306U)) & (((/* implicit */unsigned long long int) 354224375U))));
                }
                for (unsigned int i_17 = 1; i_17 < 13; i_17 += 3) 
                {
                    var_29 = ((/* implicit */long long int) ((((unsigned int) var_6)) >= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-54)))));
                    /* LoopSeq 2 */
                    for (long long int i_18 = 1; i_18 < 14; i_18 += 4) 
                    {
                        arr_62 [i_9] [i_10] = ((/* implicit */short) ((unsigned short) (signed char)120));
                        arr_63 [(short)8] [(short)8] [(_Bool)1] [(unsigned char)9] [i_17 + 1] [i_17] [i_18] = ((/* implicit */unsigned int) (((_Bool)0) || (((/* implicit */_Bool) arr_6 [i_17 + 1]))));
                    }
                    for (unsigned int i_19 = 0; i_19 < 16; i_19 += 3) 
                    {
                        var_30 = ((/* implicit */long long int) ((int) (signed char)-115));
                        var_31 = ((/* implicit */_Bool) ((int) arr_44 [i_17 + 3] [i_17] [i_17] [i_17 - 1] [(signed char)0]));
                    }
                    var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (unsigned short)39951)))))));
                    var_33 ^= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_44 [i_17 + 3] [i_9] [i_17 + 3] [i_10 - 1] [i_9]))) <= (arr_53 [i_17 + 3] [i_10 - 1] [i_10])));
                    var_34 -= ((/* implicit */unsigned long long int) ((unsigned short) var_1));
                }
                arr_67 [i_10] [i_10] [i_9] = ((/* implicit */_Bool) ((unsigned int) arr_21 [i_10 - 1] [i_14] [i_10 - 1] [i_10 - 1] [i_14]));
            }
            for (short i_20 = 1; i_20 < 15; i_20 += 3) 
            {
                arr_71 [i_20] [(unsigned char)10] = ((/* implicit */short) ((_Bool) (unsigned char)3));
                var_35 = ((unsigned int) (unsigned char)245);
            }
        }
        /* LoopNest 3 */
        for (unsigned char i_21 = 0; i_21 < 16; i_21 += 2) 
        {
            for (short i_22 = 0; i_22 < 16; i_22 += 4) 
            {
                for (unsigned char i_23 = 0; i_23 < 16; i_23 += 4) 
                {
                    {
                        var_36 = ((/* implicit */short) ((_Bool) (signed char)0));
                        arr_81 [i_9] [i_21] [i_22] [i_21] = ((/* implicit */signed char) ((int) arr_0 [i_21]));
                    }
                } 
            } 
        } 
    }
    var_37 = ((/* implicit */long long int) var_8);
}
