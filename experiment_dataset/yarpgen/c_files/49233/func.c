/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49233
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                arr_6 [i_1] [i_1] [i_1] = ((/* implicit */int) -8381649695469858298LL);
                var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((((/* implicit */_Bool) 9223372036854775784LL)) ? (((/* implicit */int) min((arr_0 [i_0]), (arr_0 [i_0])))) : (arr_2 [i_0] [i_1])))));
                var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_1 [i_0]), (arr_1 [i_0])))) ? (((/* implicit */long long int) min((arr_2 [i_0] [i_0]), (((/* implicit */int) arr_1 [i_0]))))) : (562675075514368LL))))));
                var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) arr_5 [i_0]))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (int i_2 = 3; i_2 < 17; i_2 += 1) 
                {
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        arr_13 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */signed char) var_8);
                        arr_14 [i_3] [i_1] [i_1] [i_0] = ((arr_5 [i_3]) + (arr_5 [i_1]));
                        var_15 = ((/* implicit */int) 7866776719373312829ULL);
                    }
                    for (long long int i_4 = 0; i_4 < 18; i_4 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (int i_5 = 0; i_5 < 18; i_5 += 2) 
                        {
                            var_16 = ((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_0]))));
                            var_17 = ((/* implicit */int) ((_Bool) arr_12 [i_1] [i_1] [i_2 + 1] [i_2 + 1]));
                        }
                        for (signed char i_6 = 2; i_6 < 16; i_6 += 1) 
                        {
                            var_18 = ((/* implicit */long long int) arr_0 [i_2 - 1]);
                            var_19 |= ((/* implicit */long long int) ((unsigned char) -1817489392));
                            var_20 *= ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)1))))) ? (arr_3 [i_2 - 1] [i_2]) : (((/* implicit */long long int) 1240433780U))));
                            arr_22 [(signed char)16] [i_1] [i_1] [(signed char)2] [(signed char)2] = ((/* implicit */int) (~(((unsigned int) arr_7 [i_0] [i_1] [i_2] [i_1]))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned char i_7 = 1; i_7 < 15; i_7 += 2) 
                        {
                            arr_26 [i_7] [i_7 + 1] [i_4] [i_1] [i_1] [i_1] [i_0] = arr_1 [i_0];
                            arr_27 [i_1] = ((/* implicit */short) arr_15 [i_0] [i_0] [i_1] [i_0]);
                            arr_28 [i_0] [i_1] [0ULL] [4LL] [i_7 + 2] [i_2 - 2] [i_1] = ((/* implicit */unsigned short) var_2);
                            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_18 [i_2 - 3] [i_2 - 3] [i_7 + 2] [i_2 - 3] [i_7])) || (((/* implicit */_Bool) arr_15 [i_2 - 3] [i_2 - 3] [i_1] [i_2 - 3]))));
                            var_22 += ((/* implicit */unsigned int) arr_15 [i_0] [i_1] [i_4] [i_1]);
                        }
                        for (unsigned int i_8 = 3; i_8 < 16; i_8 += 4) 
                        {
                            arr_31 [i_0] [i_1] [i_2] [i_1] [i_8 - 3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_8 - 3] [i_8 - 3] [i_2 + 1] [i_2 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_8 - 3] [i_1] [i_2] [i_2 - 2]))) : (1152921504606715904LL)));
                            var_23 = ((/* implicit */signed char) ((long long int) arr_30 [i_2 - 2] [i_2] [i_2 - 1] [i_2 + 1] [i_1]));
                            var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1)))))));
                        }
                        var_25 *= ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_2 - 1])) / (arr_20 [i_0] [i_1] [i_2] [i_0] [i_0] [(unsigned char)6] [i_2 - 2])));
                        /* LoopSeq 2 */
                        for (short i_9 = 1; i_9 < 17; i_9 += 3) /* same iter space */
                        {
                            arr_34 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) arr_18 [i_0] [i_9 - 1] [i_0] [i_2 - 1] [i_9 - 1]);
                            arr_35 [i_1] [4] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (arr_2 [i_1] [i_1]) : (arr_2 [i_1] [i_1])));
                        }
                        for (short i_10 = 1; i_10 < 17; i_10 += 3) /* same iter space */
                        {
                            arr_40 [i_10 - 1] [i_1] [i_1] [i_0] = ((((/* implicit */unsigned long long int) arr_21 [i_1])) % (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)2047))) : (arr_9 [i_4] [i_4] [i_2 + 1] [i_1]))));
                            var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_0] [i_10 + 1] [i_0] [i_2 - 2] [i_0]))) + ((+(7866776719373312810ULL))))))));
                            arr_41 [i_4] [i_4] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_17 [(signed char)17] [i_1] [i_10] [i_2 - 1])) ? (((/* implicit */int) (signed char)-10)) : (arr_17 [(signed char)17] [i_1] [i_1] [i_2 - 2])));
                        }
                        var_27 = ((/* implicit */unsigned int) max((var_27), (((((/* implicit */_Bool) arr_19 [i_2] [i_2] [(_Bool)1] [i_2 + 1] [i_4])) ? (arr_10 [10] [i_1] [i_4] [i_2 - 1]) : (arr_7 [i_4] [i_2 + 1] [(unsigned char)8] [i_4])))));
                    }
                    arr_42 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-17219))))) ? (((((/* implicit */int) (signed char)-40)) & (((/* implicit */int) arr_29 [i_0] [i_0] [14LL] [i_0] [i_0])))) : (arr_38 [i_0] [i_1] [i_2 - 1] [i_2 - 2] [i_1] [10U])));
                }
                for (int i_11 = 4; i_11 < 14; i_11 += 1) 
                {
                    var_28 += ((/* implicit */unsigned long long int) min((arr_10 [i_0] [i_0] [i_0] [i_11 - 1]), (61440U)));
                    var_29 *= arr_10 [i_11 - 1] [i_0] [i_0] [i_11 - 1];
                    var_30 = ((/* implicit */int) max((((arr_21 [i_1]) + (8191U))), (((/* implicit */unsigned int) min((((int) 8201U)), (((/* implicit */int) (signed char)85)))))));
                }
                for (signed char i_12 = 2; i_12 < 17; i_12 += 2) 
                {
                    var_31 *= ((/* implicit */signed char) arr_44 [i_0] [i_1] [i_12] [i_12 - 1]);
                    arr_48 [3] [i_1] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) var_11))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned short i_13 = 1; i_13 < 17; i_13 += 1) 
                    {
                        arr_52 [i_1] [(unsigned short)4] [i_1] [i_1] = ((signed char) (signed char)43);
                        var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) arr_19 [i_12 - 1] [i_1] [4ULL] [i_13] [i_0]))));
                        var_33 = ((/* implicit */unsigned int) arr_20 [i_0] [i_0] [i_1] [i_1] [i_1] [i_13 + 1] [i_13 - 1]);
                    }
                    for (signed char i_14 = 1; i_14 < 14; i_14 += 2) /* same iter space */
                    {
                        var_34 = ((/* implicit */int) max((var_34), (max(((-(arr_53 [i_0] [i_0] [i_1] [i_12] [i_12 - 2] [i_14]))), (max((arr_53 [i_0] [i_12 + 1] [8U] [i_0] [i_12 + 1] [i_1]), (arr_53 [i_0] [i_12 - 2] [i_12 - 2] [i_12] [i_12] [i_0])))))));
                        var_35 = ((/* implicit */signed char) ((unsigned long long int) min((arr_49 [i_14 + 2] [i_12 - 1] [i_12 - 1] [i_1]), (arr_49 [i_14 + 2] [i_12 - 1] [i_12 - 1] [i_12]))));
                    }
                    for (signed char i_15 = 1; i_15 < 14; i_15 += 2) /* same iter space */
                    {
                        var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) arr_11 [i_0] [i_0] [(signed char)6] [i_15]))));
                        var_37 = ((/* implicit */unsigned long long int) ((int) ((signed char) arr_10 [10] [i_12 + 1] [i_1] [10])));
                    }
                    for (signed char i_16 = 1; i_16 < 14; i_16 += 2) /* same iter space */
                    {
                        arr_61 [i_0] [3LL] [i_1] [i_16] [i_1] [(short)7] = ((/* implicit */signed char) ((_Bool) max((-1103485078), (((/* implicit */int) (_Bool)1)))));
                        arr_62 [i_1] [i_1] [i_1] [i_1] [i_12] [i_16 + 1] = ((/* implicit */long long int) arr_29 [(_Bool)1] [i_1] [i_12 + 1] [i_16] [i_1]);
                        var_38 = ((/* implicit */unsigned long long int) arr_36 [i_0] [i_0] [(signed char)14] [i_0] [i_0] [i_0]);
                        arr_63 [(unsigned char)13] [i_1] [i_1] [i_16 + 2] = ((/* implicit */unsigned short) arr_39 [i_1] [i_1] [i_12] [(unsigned short)17] [i_16] [i_16] [(signed char)0]);
                    }
                    arr_64 [i_1] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)-49)), (8213U)));
                    arr_65 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_53 [i_0] [i_1] [i_0] [i_1] [i_0] [i_12 + 1]), (arr_53 [i_0] [i_0] [8] [i_1] [i_12] [i_1])))) ? (((/* implicit */int) ((unsigned char) arr_53 [i_0] [i_1] [(short)14] [i_1] [i_1] [i_1]))) : (((8388604) - (arr_53 [i_0] [i_0] [i_0] [i_1] [i_12 - 1] [i_12 - 1])))));
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_17 = 3; i_17 < 14; i_17 += 4) 
    {
        for (signed char i_18 = 0; i_18 < 15; i_18 += 2) 
        {
            for (unsigned int i_19 = 0; i_19 < 15; i_19 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_20 = 2; i_20 < 11; i_20 += 2) 
                    {
                        for (long long int i_21 = 2; i_21 < 13; i_21 += 4) 
                        {
                            {
                                var_39 = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) arr_39 [i_19] [i_19] [i_20 + 3] [i_20 - 2] [i_21] [i_21 - 2] [i_19])) ? (((/* implicit */int) arr_39 [i_19] [i_18] [i_18] [i_21] [i_21] [i_21 - 2] [i_21])) : (arr_20 [i_21 + 2] [(_Bool)1] [10] [8U] [i_21] [i_21] [i_21 + 1]))));
                                var_40 = ((/* implicit */unsigned short) (unsigned char)252);
                                arr_79 [i_17] [6ULL] [i_18] [i_19] [i_20] [i_21 + 1] [i_19] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_9) : (((/* implicit */unsigned long long int) 152467086U))))) ? (((arr_38 [i_21] [i_19] [0U] [i_18] [i_19] [i_17]) - (((/* implicit */int) arr_57 [i_19] [2U] [i_19] [(short)4] [i_21 + 2])))) : (arr_76 [4ULL] [i_18] [i_19] [i_20] [i_21] [i_19])))) ? (arr_17 [i_17 - 3] [i_19] [i_19] [(signed char)6]) : (arr_5 [(signed char)9]));
                                arr_80 [i_17] [i_18] [i_18] [i_19] [i_20] [i_21] = ((/* implicit */signed char) (short)-6511);
                            }
                        } 
                    } 
                    var_41 |= ((/* implicit */signed char) ((((/* implicit */int) ((arr_47 [i_17 - 2] [i_18]) >= (arr_47 [i_17 + 1] [i_19])))) <= ((~(arr_47 [i_17 - 1] [i_18])))));
                    var_42 = ((/* implicit */signed char) max((var_42), (((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_8 [i_17] [(short)7] [i_18] [i_19])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_46 [i_17 - 2] [i_17 + 1] [i_19]), (arr_46 [i_17] [i_17 - 1] [i_18]))))) : (var_9))))));
                }
            } 
        } 
    } 
}
