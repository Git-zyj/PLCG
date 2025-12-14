/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47992
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
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)58254))) == (-127540251770415002LL)))) > (((/* implicit */int) ((((/* implicit */unsigned long long int) max((var_10), (var_9)))) >= (var_7))))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 22; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned int i_2 = 2; i_2 < 23; i_2 += 4) 
                {
                    arr_8 [14U] [14U] [14U] [i_0] = ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) >= (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_2 + 2])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_7 [(unsigned short)8] [i_0] [(unsigned short)8] [(_Bool)1]))))));
                    arr_9 [i_2] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) arr_4 [i_2 - 1] [i_1] [i_2])) >= (((/* implicit */int) arr_4 [i_2 - 2] [i_1] [i_1]))));
                    var_12 = ((/* implicit */int) arr_4 [i_0] [i_1 + 1] [i_2]);
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_2 - 1] [i_1 + 1] [i_0 + 2])) && (((/* implicit */_Bool) arr_5 [i_1 + 1] [i_2 + 1] [i_2 + 1] [i_0]))));
                        var_14 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) arr_0 [i_2 - 2])) ^ (arr_6 [i_2 + 2] [i_0 - 1] [i_1 + 1])));
                        arr_12 [i_3] [i_0] [i_1] = ((/* implicit */unsigned int) ((arr_11 [i_0 - 3] [i_1 + 1] [i_0 - 1] [i_2 + 2]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_6 [i_2] [i_1] [i_0]) != (arr_6 [i_0] [i_0] [21])))))));
                    }
                }
                for (unsigned char i_4 = 2; i_4 < 21; i_4 += 2) 
                {
                    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_0 + 3] [i_0] [(_Bool)1] [i_4 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_11 [i_0 + 3] [i_0 - 1] [(unsigned short)12] [i_4 - 2]) >= (arr_11 [i_0 + 3] [i_0] [i_0] [i_4 - 2]))))) : ((~(arr_11 [i_0 + 3] [i_4] [i_4] [i_4 - 2])))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_5 = 0; i_5 < 25; i_5 += 2) /* same iter space */
                    {
                        var_16 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((arr_2 [i_0]) >= (arr_2 [i_0]))))));
                        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_18 [(_Bool)1] [i_0] [i_1 + 1] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0 + 3]))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_5] [i_5] [i_0] [i_0] [i_0]))) % (arr_13 [i_0] [i_1] [i_4] [i_5])))));
                        /* LoopSeq 2 */
                        for (unsigned char i_6 = 1; i_6 < 24; i_6 += 2) /* same iter space */
                        {
                            var_18 = ((/* implicit */_Bool) arr_18 [6ULL] [i_0] [i_4] [i_5] [i_6 - 1] [19]);
                            arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_0] = ((/* implicit */unsigned int) arr_11 [i_6 - 1] [2] [i_4] [(signed char)11]);
                            arr_22 [i_0 + 2] [i_0] [i_4] [i_5] [19LL] = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)7257))));
                            var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned long long int) arr_0 [i_0])) <= (arr_6 [i_0] [i_1] [i_0])))) % (((/* implicit */int) ((arr_18 [i_0] [i_4] [i_0 - 3] [i_0] [i_0 - 2] [i_0]) >= (((/* implicit */int) arr_15 [i_0] [i_1] [i_0] [i_1]))))))))));
                            arr_23 [i_0] [i_5] [i_4 + 2] [(short)10] [i_0] = ((/* implicit */_Bool) (~(967628465)));
                        }
                        for (unsigned char i_7 = 1; i_7 < 24; i_7 += 2) /* same iter space */
                        {
                            var_20 = ((/* implicit */unsigned short) ((arr_19 [(unsigned short)21] [(unsigned short)21] [(unsigned short)21] [i_5] [i_7 - 1]) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_14 [i_0]) && (((/* implicit */_Bool) arr_2 [i_0]))))))));
                            arr_26 [i_0] [i_5] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */signed char) (~(arr_24 [i_7 + 1] [i_4 - 2] [i_4 - 2] [i_1 + 1] [i_0])));
                            var_21 = ((/* implicit */unsigned short) ((arr_13 [i_1 + 1] [i_7 + 1] [i_7] [i_7 - 1]) >= (arr_13 [i_1 + 1] [i_7 + 1] [i_7] [i_7])));
                        }
                        arr_27 [i_0] [i_4] [i_4] [i_5] |= ((/* implicit */short) (~(arr_24 [i_0] [i_1] [i_4] [i_4] [i_4])));
                    }
                    /* vectorizable */
                    for (short i_8 = 0; i_8 < 25; i_8 += 2) /* same iter space */
                    {
                        arr_31 [i_0] [i_0 + 2] [i_0] [i_1] [i_0] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_8] [i_4 + 1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_4] [i_4 - 1] [i_4 - 1] [i_0]))) : (arr_6 [7] [i_4 - 2] [i_4 + 4])));
                        var_22 = ((/* implicit */unsigned long long int) arr_30 [i_0] [i_1 + 1] [i_4 - 1] [(signed char)22] [i_0]);
                        var_23 = ((/* implicit */int) ((arr_13 [i_0] [i_1 + 1] [i_4 + 3] [i_0 + 3]) <= (arr_25 [i_0 + 2] [i_1 + 1] [i_1 + 1])));
                        var_24 = ((/* implicit */short) ((((arr_25 [i_0 - 3] [i_1] [i_8]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_4] [i_1 + 1] [i_0]))))) << (((arr_13 [i_1 + 1] [i_0 - 2] [i_0 - 1] [11U]) - (1838776791U)))));
                    }
                }
                for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 1) 
                {
                    /* LoopSeq 2 */
                    for (int i_10 = 0; i_10 < 25; i_10 += 4) /* same iter space */
                    {
                        var_25 = ((/* implicit */unsigned char) arr_4 [i_0] [i_1] [i_10]);
                        arr_39 [i_0] [i_0] [i_9] [i_10] = ((/* implicit */unsigned long long int) arr_33 [i_1]);
                        /* LoopSeq 1 */
                        for (short i_11 = 0; i_11 < 25; i_11 += 2) 
                        {
                            arr_43 [3LL] [i_10] [i_0] [i_0] [i_1] [i_0 - 1] = ((/* implicit */unsigned int) ((min((arr_19 [i_11] [i_10] [i_9] [i_1 + 1] [i_0 + 3]), (arr_19 [i_0 - 1] [i_0 - 1] [i_9] [i_10] [i_11]))) | ((~(arr_19 [i_0] [i_1 + 1] [i_9] [i_10] [i_11])))));
                            arr_44 [i_0] [i_1] [i_9] [i_9] [i_10] [i_11] [i_0] = ((/* implicit */signed char) arr_17 [i_0 - 3]);
                        }
                    }
                    for (int i_12 = 0; i_12 < 25; i_12 += 4) /* same iter space */
                    {
                        var_26 = ((/* implicit */short) (~(((arr_19 [i_0 - 2] [i_0 + 2] [i_1 + 1] [i_1 + 1] [i_1 + 1]) - (arr_19 [i_0 - 3] [i_0 + 1] [i_0 - 3] [i_1] [i_1 + 1])))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_13 = 1; i_13 < 22; i_13 += 4) 
                        {
                            var_27 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-24332))))) ? (((/* implicit */unsigned long long int) arr_20 [i_12])) : (arr_51 [i_0] [i_0 + 2] [i_0 + 2] [i_13 + 2] [i_1 + 1])));
                            arr_53 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((arr_19 [i_0 + 3] [i_0 + 3] [i_13 + 3] [i_13 + 3] [(signed char)0]) - (arr_19 [i_0 + 3] [i_1] [i_12] [i_13 + 2] [i_13])));
                            arr_54 [i_0] [i_13] [i_1 + 1] [i_12] [i_9] [i_1 + 1] [i_0] = arr_38 [i_0 + 3] [i_1] [i_9] [i_12] [i_0] [i_0 + 2];
                        }
                    }
                    var_28 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((arr_40 [4LL] [i_1] [(_Bool)1] [4LL]) + (arr_34 [8U] [i_1 + 1]))) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_1 + 1])))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_32 [i_1] [i_1])) < (((/* implicit */int) arr_4 [i_0] [i_1] [i_1])))))) >= (arr_29 [(_Bool)1] [i_0 - 2] [i_1 + 1] [i_1])))) : (((((/* implicit */int) arr_17 [i_1 + 1])) % (((((/* implicit */_Bool) arr_50 [i_9] [i_0 + 2] [i_0] [i_0 + 2] [i_0 + 2])) ? (((/* implicit */int) arr_17 [i_0 + 2])) : (((/* implicit */int) arr_4 [i_0 + 1] [i_1 + 1] [i_9]))))))));
                    arr_55 [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */int) arr_42 [i_0 + 1] [i_0 + 1] [i_9] [i_0 + 1] [i_1])) != (((/* implicit */int) ((arr_41 [i_0] [i_0] [i_0 + 3] [i_0] [i_0 - 2] [i_0]) <= (arr_41 [i_0 + 1] [i_0 - 3] [i_0] [i_0] [i_0 + 1] [i_0]))))));
                    arr_56 [i_0] [i_0] [i_9] = ((/* implicit */unsigned short) (((~(((/* implicit */int) arr_5 [i_0 - 2] [i_1 + 1] [i_1 + 1] [i_0])))) | (((/* implicit */int) min((arr_5 [i_0 - 2] [i_1 + 1] [i_1] [i_0]), (arr_5 [i_0 - 3] [i_1 + 1] [i_1 + 1] [i_0]))))));
                }
                arr_57 [i_0] [i_1 + 1] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_46 [i_0] [i_0] [i_0] [i_0])) ? (arr_46 [i_0] [i_1] [i_1 + 1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [(_Bool)1] [i_1] [i_1] [i_1] [i_0] [i_1]))))) <= (((arr_46 [i_1] [i_1] [i_1] [i_1]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_0] [i_0] [(_Bool)1] [23] [i_0] [i_1])))))));
                /* LoopSeq 3 */
                for (short i_14 = 3; i_14 < 24; i_14 += 4) /* same iter space */
                {
                    arr_61 [i_0] [i_0] = ((/* implicit */_Bool) (~(max((arr_28 [i_1 + 1] [i_1] [i_14 - 1] [i_14 - 2]), (((arr_28 [i_0] [i_0] [i_1] [i_0]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_59 [i_0] [(_Bool)1])))))))));
                    arr_62 [0] [i_1] |= ((/* implicit */signed char) (((~(arr_19 [i_0] [i_0 - 3] [i_1 + 1] [i_1 + 1] [i_14 - 3]))) ^ (min((arr_19 [i_0] [i_0 + 2] [i_1 + 1] [i_1 + 1] [i_14 - 2]), (arr_19 [i_0 - 1] [i_0 - 3] [i_1 + 1] [i_1 + 1] [i_14 - 3])))));
                    /* LoopNest 2 */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        for (short i_16 = 1; i_16 < 23; i_16 += 2) 
                        {
                            {
                                var_29 = (i_0 % 2 == zero) ? (((/* implicit */_Bool) max((((/* implicit */int) ((arr_51 [i_1 + 1] [i_1] [i_16 - 1] [i_0 + 1] [i_14 - 1]) > (arr_51 [i_1 + 1] [i_1] [i_16 + 2] [i_0 - 3] [i_14 - 2])))), (((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_15]))) > (arr_13 [i_1 + 1] [15ULL] [i_15] [i_16])))) % (((/* implicit */int) arr_63 [i_0] [i_1]))))))) : (((/* implicit */_Bool) max((((/* implicit */int) ((arr_51 [i_1 + 1] [i_1] [i_16 - 1] [i_0 + 1] [i_14 - 1]) > (arr_51 [i_1 + 1] [i_1] [i_16 + 2] [i_0 - 3] [i_14 - 2])))), (((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_15]))) > (arr_13 [i_1 + 1] [15ULL] [i_15] [i_16])))) * (((/* implicit */int) arr_63 [i_0] [i_1])))))));
                                arr_68 [i_0] [i_0] [i_1] [(unsigned short)19] [i_15] [i_16] [i_16 + 2] = (((~(716895615414260626ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)9791))));
                            }
                        } 
                    } 
                    var_30 = ((/* implicit */unsigned int) ((max((arr_2 [i_0 - 1]), (arr_2 [i_0 - 3]))) ^ ((~(arr_2 [i_0 - 3])))));
                }
                for (short i_17 = 3; i_17 < 24; i_17 += 4) /* same iter space */
                {
                    var_31 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_20 [i_0]) >= (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)58253))))))))) < (max((((((/* implicit */_Bool) arr_47 [i_1])) ? (arr_19 [i_1] [i_1] [i_1 + 1] [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_70 [i_17])))), (((arr_69 [i_0 - 3] [(unsigned short)9] [i_0 - 3]) | (arr_40 [i_0] [i_0] [i_0] [i_0]))))));
                    var_32 = ((/* implicit */unsigned int) ((((arr_71 [i_0] [i_17 - 3] [i_0]) | (arr_71 [i_0 + 3] [i_17 - 3] [i_17 - 3]))) <= ((~(arr_71 [i_0] [i_17 - 2] [i_17 - 3])))));
                }
                for (short i_18 = 3; i_18 < 24; i_18 += 4) /* same iter space */
                {
                    var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)58279)) ? (((/* implicit */int) (unsigned short)7242)) : (((/* implicit */int) (unsigned short)7257))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((min((arr_30 [i_0] [i_0 + 1] [i_1] [i_18] [i_18]), (((/* implicit */unsigned short) arr_32 [i_0] [i_1])))), (arr_35 [i_0 - 3] [i_18 + 1] [i_18 + 1]))))) : (((((((/* implicit */_Bool) arr_58 [i_0] [i_0] [(_Bool)1] [i_18])) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_50 [i_0] [i_1 + 1] [i_18] [(unsigned char)0] [i_1 + 1]))))) % (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_1 [i_1])), (arr_70 [i_0]))))))));
                    var_34 = ((/* implicit */unsigned long long int) arr_35 [i_0] [i_1] [i_1]);
                    arr_74 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_73 [i_0 + 3] [i_18])) ^ (((/* implicit */int) arr_7 [i_0] [i_0 + 3] [i_0] [i_0 - 2])))) | (((((/* implicit */_Bool) arr_24 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_48 [(unsigned char)0] [i_1] [i_18] [i_18 + 1])) : (((/* implicit */int) arr_35 [i_18] [i_1] [i_0]))))))) ? (((((arr_28 [i_0 - 1] [i_1] [i_18] [i_0 - 1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_0] [i_1]))))) ^ ((~(arr_40 [i_0] [i_0] [i_18] [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_25 [i_0] [i_0] [i_0]) <= (((/* implicit */unsigned int) arr_71 [(unsigned char)11] [i_0 + 1] [i_1 + 1]))))))));
                }
            }
        } 
    } 
    var_35 = ((/* implicit */unsigned char) max((((/* implicit */int) var_1)), (var_3)));
    var_36 = ((/* implicit */_Bool) var_2);
    var_37 = ((/* implicit */short) ((((/* implicit */int) (unsigned short)58298)) == (((/* implicit */int) (unsigned char)24))));
}
