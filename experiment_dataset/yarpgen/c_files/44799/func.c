/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44799
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
    var_13 = ((/* implicit */unsigned char) (short)32767);
    var_14 ^= ((/* implicit */signed char) (_Bool)1);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) arr_0 [i_0] [i_0]))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_1 = 2; i_1 < 7; i_1 += 4) 
        {
            var_16 = ((/* implicit */short) var_3);
            arr_6 [i_0] = ((/* implicit */long long int) arr_3 [i_0]);
        }
    }
    for (unsigned int i_2 = 0; i_2 < 25; i_2 += 4) 
    {
        arr_11 [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) var_1)) >> (((min((arr_8 [i_2]), (arr_8 [i_2]))) - (857602239)))));
        arr_12 [i_2] = ((/* implicit */long long int) ((((/* implicit */long long int) max((arr_7 [i_2]), (((/* implicit */int) arr_9 [i_2] [(unsigned short)7]))))) < (((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_10 [i_2] [i_2])))));
        arr_13 [i_2] = ((/* implicit */unsigned short) arr_10 [i_2] [i_2]);
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 12; i_3 += 4) 
    {
        for (long long int i_4 = 0; i_4 < 12; i_4 += 4) 
        {
            {
                /* LoopSeq 4 */
                for (int i_5 = 0; i_5 < 12; i_5 += 4) /* same iter space */
                {
                    arr_23 [(unsigned char)8] [i_4] [i_4] [i_4] = ((/* implicit */_Bool) 981572456);
                    var_17 += ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) arr_14 [i_5] [i_4]))) != (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_3])))))));
                }
                for (int i_6 = 0; i_6 < 12; i_6 += 4) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                    {
                        var_18 = ((/* implicit */long long int) (short)32743);
                        var_19 = ((/* implicit */long long int) arr_7 [i_4]);
                        var_20 = ((/* implicit */unsigned char) arr_20 [i_4] [(unsigned char)7] [i_6]);
                        arr_30 [i_7] [i_4] [i_4] [i_4] [i_4] = 228530840U;
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 4) 
                        {
                            arr_37 [i_3] [i_4] [i_6] [i_8] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (7) : (1295102646)))) ? (((/* implicit */int) arr_19 [i_4])) : (((((/* implicit */int) var_11)) + (((/* implicit */int) (short)32767))))))) ? (((/* implicit */int) var_11)) : (((((/* implicit */int) arr_31 [i_3] [i_3] [i_4] [i_3] [i_4] [i_4])) << (((((((/* implicit */_Bool) arr_20 [i_3] [i_4] [i_6])) ? (-2096055414) : (var_4))) + (2096055423)))))));
                            var_21 = ((/* implicit */unsigned char) ((((int) ((_Bool) arr_35 [i_8]))) >> (((/* implicit */int) var_11))));
                            arr_38 [i_3] [i_4] [i_6] [i_8] [i_9] = ((((/* implicit */_Bool) arr_16 [i_3])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_6])) ? (arr_10 [13] [13]) : (((/* implicit */long long int) var_2))))) ? (var_6) : (((((/* implicit */_Bool) arr_8 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_36 [i_3] [i_4] [i_6] [i_6] [i_8] [i_9]))))) : (arr_36 [i_3] [i_8] [i_6] [i_4] [i_3] [i_3]));
                            arr_39 [i_3] [i_4] [i_6] [i_3] [i_4] [i_6] = ((((((/* implicit */_Bool) arr_18 [i_4] [i_9])) ? (((/* implicit */int) arr_31 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])) : (((/* implicit */int) var_8)))) - (((/* implicit */int) ((18446744073709551615ULL) > (arr_29 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])))));
                        }
                        /* LoopSeq 3 */
                        for (int i_10 = 0; i_10 < 12; i_10 += 4) 
                        {
                            arr_42 [(unsigned char)3] [i_8] = ((/* implicit */unsigned int) var_5);
                            var_22 = ((/* implicit */unsigned long long int) ((unsigned short) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((8708345762761429642LL) / (((/* implicit */long long int) var_6))))) : (((arr_14 [i_3] [i_4]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_3] [i_4] [i_4] [i_3]))))))));
                            var_23 = ((/* implicit */signed char) var_5);
                            var_24 *= ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_8] [i_6])) ? (9727406747151559552ULL) : (arr_40 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])))) ? (12208314532902656710ULL) : (((((/* implicit */_Bool) arr_21 [i_3] [i_3] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_4] [i_6] [i_4] [i_10]))) : (arr_41 [i_3] [i_3] [i_3] [i_3] [i_6] [i_8] [i_10]))))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_2), (((/* implicit */int) arr_24 [i_3] [i_3] [i_10]))))) ? (((((/* implicit */_Bool) arr_15 [i_4])) ? (((/* implicit */int) var_10)) : (4))) : (((/* implicit */int) arr_19 [i_4])))))));
                        }
                        for (int i_11 = 2; i_11 < 10; i_11 += 4) /* same iter space */
                        {
                            arr_47 [i_3] [i_4] [i_6] [i_4] [i_11] = ((/* implicit */unsigned long long int) arr_43 [(signed char)8] [i_6]);
                            var_25 = ((/* implicit */short) arr_44 [i_11] [i_11] [i_11 - 1] [i_11] [i_11] [i_11 + 2] [i_11 + 2]);
                        }
                        /* vectorizable */
                        for (int i_12 = 2; i_12 < 10; i_12 += 4) /* same iter space */
                        {
                            arr_50 [i_12] [i_8] [i_6] [i_4] [i_3] = ((arr_7 [i_12 - 1]) - (arr_7 [i_12 + 2]));
                            var_26 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_36 [i_3] [i_4] [i_3] [i_8] [i_8] [i_3]) >> (((((/* implicit */int) var_3)) - (189)))))) ? (((/* implicit */int) arr_31 [i_12 - 2] [i_12 + 2] [i_12] [i_12] [i_12 + 1] [i_12 - 2])) : (((/* implicit */int) arr_19 [i_12 + 1]))));
                            var_27 = ((/* implicit */signed char) var_2);
                            var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_6] [i_12])) ? (arr_34 [i_6]) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_12 - 2])))))) ? ((+(var_4))) : (((/* implicit */int) arr_31 [i_12 + 1] [i_12 + 2] [i_12 + 1] [i_12 - 2] [i_8] [i_8]))));
                            var_29 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_34 [i_6]) + (((/* implicit */long long int) ((/* implicit */int) var_11)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (((((/* implicit */_Bool) -2147483635)) ? (arr_7 [i_4]) : (((/* implicit */int) var_1))))));
                        }
                        var_30 += ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */int) arr_18 [i_3] [i_4])) + (((/* implicit */int) (short)31817)))), (((/* implicit */int) arr_19 [i_4]))))) ? (((/* implicit */int) arr_19 [(_Bool)1])) : ((~(((/* implicit */int) var_8))))));
                    }
                    for (long long int i_13 = 0; i_13 < 12; i_13 += 4) 
                    {
                        var_31 -= ((/* implicit */unsigned char) ((((/* implicit */int) arr_25 [4ULL] [i_6] [i_4] [i_3])) ^ (max((arr_8 [i_4]), (arr_8 [i_13])))));
                        var_32 = ((/* implicit */unsigned int) var_11);
                        arr_54 [i_3] [i_4] [i_6] [i_13] = ((/* implicit */short) var_9);
                    }
                    var_33 = ((/* implicit */unsigned char) (((!((!(((/* implicit */_Bool) arr_14 [i_3] [i_4])))))) && (((/* implicit */_Bool) arr_26 [i_3] [i_3] [i_4] [i_6]))));
                }
                for (unsigned short i_14 = 0; i_14 < 12; i_14 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_15 = 2; i_15 < 11; i_15 += 4) 
                    {
                        arr_61 [i_3] [i_4] [i_14] [i_15] [i_15] [i_15] = ((/* implicit */unsigned long long int) arr_45 [i_3] [i_3] [i_3]);
                        arr_62 [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_19 [i_15 + 1])))))));
                        arr_63 [i_3] [i_3] = ((/* implicit */signed char) arr_7 [i_15]);
                    }
                    arr_64 [i_3] [i_4] [i_14] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_51 [i_14] [i_14] [i_4] [i_4] [i_3])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_18 [i_3] [i_3]))))) ? ((+(var_6))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_3] [(unsigned char)10] [i_14] [(unsigned char)3] [i_14] [i_14])))))) ? (max((((((/* implicit */_Bool) (short)4190)) ? (11956144413759022599ULL) : (((/* implicit */unsigned long long int) arr_58 [i_3] [i_3] [i_4] [i_14])))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)178))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */int) (unsigned short)65535)) * (((/* implicit */int) var_0)))) < (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_11))))))))));
                }
                for (unsigned char i_16 = 1; i_16 < 9; i_16 += 4) 
                {
                    var_34 = ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_35 [i_3])), (var_12)))) ? (((/* implicit */int) arr_56 [i_16 - 1] [i_16] [i_16 + 1] [i_16 + 3])) : (((/* implicit */int) ((unsigned char) var_9)))))), (arr_36 [(_Bool)1] [i_3] [i_3] [i_3] [i_3] [i_3])));
                    /* LoopNest 2 */
                    for (int i_17 = 2; i_17 < 10; i_17 += 3) 
                    {
                        for (short i_18 = 0; i_18 < 12; i_18 += 4) 
                        {
                            {
                                arr_73 [i_3] [i_3] [i_16] [i_17] [i_16] [i_18] [i_16] = ((/* implicit */short) arr_16 [(unsigned short)0]);
                                var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_57 [i_16 + 2] [i_17 - 1] [i_18] [i_18])) ? (arr_72 [i_3] [i_4] [i_16] [i_17 - 1] [i_3] [i_3]) : (((/* implicit */long long int) arr_7 [(signed char)18])))))))));
                            }
                        } 
                    } 
                }
                arr_74 [i_4] = ((/* implicit */unsigned int) var_11);
            }
        } 
    } 
}
