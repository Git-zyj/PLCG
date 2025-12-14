/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38835
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
    var_10 = ((/* implicit */short) max((((/* implicit */unsigned short) var_3)), (var_8)));
    var_11 = ((/* implicit */unsigned short) var_3);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_1] [i_0] [i_0] |= ((/* implicit */unsigned int) (!((!(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_1]))) > (arr_5 [i_0] [i_0])))))));
                var_12 += arr_1 [i_1] [i_0];
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 17; i_2 += 1) 
    {
        var_13 = (~(((/* implicit */int) arr_8 [i_2] [i_2])));
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 16; i_3 += 1) 
        {
            for (unsigned char i_4 = 0; i_4 < 17; i_4 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_19 [i_2] [i_2] [i_2] [(short)2] [i_2] [i_4] [i_2] |= ((/* implicit */_Bool) (+(((int) var_0))));
                                arr_20 [i_2] [i_3] [i_4] [i_4] [i_3] [i_5] [i_6] = ((/* implicit */unsigned long long int) (!(arr_16 [i_3] [i_3 - 1] [i_5] [1])));
                                arr_21 [i_2] [i_3] [i_2] [i_5] [i_6] = ((/* implicit */unsigned short) ((signed char) arr_15 [i_3 + 1] [i_3] [i_3 - 1] [i_3 + 1] [(unsigned char)4]));
                                var_14 = ((/* implicit */_Bool) ((unsigned int) (signed char)89));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 0; i_7 < 17; i_7 += 3) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 3) 
                        {
                            {
                                var_15 -= ((/* implicit */unsigned int) ((unsigned char) arr_6 [i_3 - 1] [i_2]));
                                var_16 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_4] [i_3 + 1]))) * (arr_25 [i_8] [i_2])));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned short i_9 = 1; i_9 < 16; i_9 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (short i_10 = 1; i_10 < 16; i_10 += 3) 
                        {
                            arr_34 [i_3] [i_3] [14] [i_9 - 1] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) arr_10 [i_2] [i_3]))) << (((/* implicit */int) arr_10 [i_3] [i_3]))));
                            arr_35 [i_2] [i_3] [i_4] [i_9] [i_10] = (i_3 % 2 == zero) ? (((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_31 [i_2] [i_4] [7LL] [4] [i_3] [i_2])) + (2147483647))) >> (((((/* implicit */int) arr_28 [i_2] [4] [i_4])) - (41)))))) ? (((/* implicit */unsigned int) arr_17 [i_2] [i_9] [i_9 + 1] [i_9 + 1] [i_9 - 1])) : (((unsigned int) var_5))))) : (((/* implicit */signed char) ((((/* implicit */_Bool) ((((((((/* implicit */int) arr_31 [i_2] [i_4] [7LL] [4] [i_3] [i_2])) - (2147483647))) + (2147483647))) >> (((((/* implicit */int) arr_28 [i_2] [4] [i_4])) - (41)))))) ? (((/* implicit */unsigned int) arr_17 [i_2] [i_9] [i_9 + 1] [i_9 + 1] [i_9 - 1])) : (((unsigned int) var_5)))));
                            arr_36 [i_4] &= ((((/* implicit */int) arr_1 [i_3] [i_3])) > (((/* implicit */int) (unsigned short)6646)));
                            arr_37 [i_3] = ((/* implicit */unsigned short) var_1);
                        }
                        arr_38 [i_4] |= ((/* implicit */int) ((_Bool) arr_15 [i_9] [i_9] [i_9 + 1] [(_Bool)1] [i_9 + 1]));
                        /* LoopSeq 1 */
                        for (long long int i_11 = 2; i_11 < 13; i_11 += 3) 
                        {
                            var_17 += ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (signed char)-2)) : (((/* implicit */int) (unsigned short)65531))));
                            arr_43 [i_2] [i_3] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_40 [i_3 - 1] [i_3 - 1] [i_2] [i_9 - 1] [i_11] [i_4])) || (var_4)));
                        }
                        var_18 -= ((/* implicit */short) arr_14 [i_2] [i_3] [i_4] [i_9 + 1]);
                    }
                    var_19 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_40 [i_2] [(_Bool)1] [i_2] [i_2] [i_2] [i_2])))) ? ((~(((/* implicit */int) var_0)))) : ((-(((/* implicit */int) var_7))))));
                    arr_44 [i_3] [i_3] [9ULL] [i_3] = ((/* implicit */signed char) ((_Bool) (signed char)-1));
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_12 = 0; i_12 < 17; i_12 += 1) 
        {
            for (unsigned int i_13 = 4; i_13 < 15; i_13 += 2) 
            {
                {
                    arr_50 [1ULL] [i_12] [i_13 + 2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_40 [i_2] [i_2] [(_Bool)1] [i_12] [(unsigned char)8] [i_13])) ? (((/* implicit */int) arr_8 [i_2] [i_12])) : (((/* implicit */int) arr_10 [i_13] [i_12])))))));
                    arr_51 [(unsigned char)2] [i_13] [i_13] |= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_24 [(short)1] [i_12] [i_13])))) ? (((/* implicit */int) (unsigned short)26267)) : (((/* implicit */int) (unsigned short)65535))));
                    /* LoopSeq 1 */
                    for (short i_14 = 0; i_14 < 17; i_14 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (signed char i_15 = 0; i_15 < 17; i_15 += 2) 
                        {
                            var_20 ^= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [(signed char)5] [(signed char)0] [i_13] [i_13 + 2] [i_13 + 1]))) <= ((+(arr_5 [i_12] [i_12])))));
                            arr_57 [i_2] [i_12] [i_2] [i_2] [(signed char)10] = ((/* implicit */int) ((unsigned short) arr_45 [i_15] [i_13 - 3] [8U]));
                            arr_58 [i_2] [(unsigned char)7] [i_2] [i_14] [i_12] [i_15] [i_15] = ((/* implicit */_Bool) arr_24 [(_Bool)1] [i_13] [i_2]);
                        }
                        for (long long int i_16 = 1; i_16 < 15; i_16 += 3) 
                        {
                            var_21 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65519))) : (arr_5 [i_13] [i_14])))) ? (((((/* implicit */_Bool) (unsigned short)3)) ? (2738919061U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                            arr_61 [i_13] [i_13] [i_13] [i_13 - 2] [i_12] = ((/* implicit */unsigned long long int) ((arr_16 [i_13 - 1] [i_16 + 2] [i_16 + 2] [i_16 + 2]) || (((/* implicit */_Bool) arr_54 [i_13 - 1] [i_12] [i_12] [i_16 + 1] [i_16 + 2]))));
                            arr_62 [i_2] [i_12] [i_13] [i_12] [i_2] = ((/* implicit */int) (!(arr_23 [i_13 + 2] [i_16 + 2] [i_12] [i_14])));
                        }
                        for (unsigned int i_17 = 0; i_17 < 17; i_17 += 2) 
                        {
                            arr_65 [i_2] [i_12] [i_14] = ((/* implicit */unsigned long long int) (~((-(var_5)))));
                            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_13] [i_13 - 1] [i_13 - 3]))) <= (((((/* implicit */unsigned long long int) arr_12 [i_14])) * (arr_42 [i_2] [i_12] [i_13] [i_14])))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned int i_18 = 3; i_18 < 14; i_18 += 2) 
                        {
                            arr_68 [i_2] [i_12] [i_13] [i_14] [i_18] |= ((/* implicit */unsigned int) ((((((/* implicit */int) arr_39 [8U] [i_2] [i_13 - 4] [i_14] [i_18 - 1] [i_18])) + (2147483647))) >> (((((/* implicit */int) arr_39 [i_2] [7U] [i_13 - 4] [i_13 - 4] [i_18 - 3] [(short)7])) + (26343)))));
                            var_23 += ((((/* implicit */int) arr_16 [i_13 + 2] [i_13 - 1] [i_13 - 1] [i_13 + 2])) > (((/* implicit */int) arr_16 [i_13 - 3] [i_13 + 2] [i_13 + 1] [i_13 - 3])));
                            var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [i_12] [i_13 - 1] [i_18 + 1] [i_18 + 2])) ? (arr_14 [(short)3] [i_13 - 1] [i_18 - 3] [i_18 - 2]) : (arr_14 [i_2] [i_13 + 1] [i_18 - 1] [i_18]))))));
                        }
                        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                        {
                            var_25 += ((/* implicit */_Bool) ((unsigned long long int) arr_56 [i_13] [i_13] [i_13] [i_13] [i_13 - 1]));
                            var_26 = ((/* implicit */signed char) ((int) arr_30 [i_13 - 2] [i_12]));
                            var_27 = ((/* implicit */_Bool) ((unsigned short) 16764757790762086501ULL));
                            var_28 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_60 [i_13 - 1] [i_13] [i_13]))));
                            var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((arr_47 [i_12]) + (9223372036854775807LL))) << (((((((/* implicit */int) arr_60 [i_13] [i_14] [i_19])) + (8990))) - (8)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_28 [i_2] [i_2] [i_2])) || (var_9))))) : (arr_15 [i_12] [i_13 + 2] [i_13 - 3] [i_14] [i_19])));
                        }
                        arr_71 [i_2] [(signed char)0] [i_2] [i_14] [i_14] [(signed char)4] &= ((/* implicit */unsigned int) (-(((arr_70 [i_2] [i_14]) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_0))))));
                        var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_2] [(unsigned char)15] [i_2] [i_2] [(signed char)10])) ? (arr_17 [i_2] [i_12] [i_12] [i_2] [i_13]) : (arr_17 [i_2] [i_13] [i_13 - 3] [i_14] [(unsigned short)10]))))));
                        var_31 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_54 [i_13] [i_13] [i_13] [i_13 + 1] [i_14]))));
                    }
                }
            } 
        } 
    }
}
