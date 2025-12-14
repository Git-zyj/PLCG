/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35776
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
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                var_18 = 12365942216005544416ULL;
                arr_10 [1ULL] [i_1] [1ULL] = ((/* implicit */signed char) ((int) arr_6 [i_1 + 2] [i_1]));
                var_19 -= (~(((((/* implicit */int) var_11)) + (((/* implicit */int) arr_0 [i_0])))));
                arr_11 [i_0] [i_1] [10LL] &= ((/* implicit */unsigned int) arr_0 [16]);
            }
            for (short i_3 = 0; i_3 < 18; i_3 += 3) 
            {
                /* LoopSeq 3 */
                for (long long int i_4 = 0; i_4 < 18; i_4 += 1) /* same iter space */
                {
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 1] [i_4])) % (((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 3] [(_Bool)1]))));
                    var_21 -= ((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])) ^ (((/* implicit */int) arr_7 [i_4] [i_3] [i_0] [i_0]))));
                }
                for (long long int i_5 = 0; i_5 < 18; i_5 += 1) /* same iter space */
                {
                    arr_18 [1U] [1U] [i_1 + 4] [i_5] = ((/* implicit */long long int) (_Bool)1);
                    /* LoopSeq 1 */
                    for (int i_6 = 0; i_6 < 18; i_6 += 2) 
                    {
                        arr_21 [i_0] [i_0] [5U] [(_Bool)1] [i_5] [i_6] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_1 + 1] [i_1 + 2] [i_1 + 2] [i_1 - 1] [i_1] [i_1 - 1] [i_6])) ? ((-(6080801857704007221ULL))) : (((/* implicit */unsigned long long int) ((arr_12 [(signed char)14] [i_3] [0U] [i_6]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]))))))));
                        arr_22 [i_0] [i_1 + 2] [i_3] [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [14ULL] [i_0])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 5132143404045090930ULL))))) : (((/* implicit */int) var_11))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned short i_7 = 3; i_7 < 14; i_7 += 2) 
                    {
                        arr_26 [7] [i_7] [i_3] [i_3] [7] = ((/* implicit */unsigned int) ((((long long int) 13314600669664460685ULL)) >= (((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_0] [i_1 - 1] [i_5] [16U])) ? (((/* implicit */int) arr_15 [i_0] [i_1 + 2] [i_0] [i_5] [i_5] [i_7])) : (((/* implicit */int) (_Bool)1)))))));
                        var_22 = arr_19 [i_1] [7ULL] [i_1 + 4] [i_1] [i_1] [i_1] [i_1 + 3];
                        arr_27 [i_3] [i_3] [i_3] [i_0] |= (((-(12365942216005544400ULL))) & (13314600669664460711ULL));
                    }
                    for (unsigned char i_8 = 0; i_8 < 18; i_8 += 2) 
                    {
                        arr_30 [i_5] [i_5] [3LL] [3LL] [i_5] = ((var_3) / (arr_8 [i_1 + 4] [i_1 + 2]));
                        arr_31 [i_0] [i_1 - 1] [i_3] [i_0] [i_8] [i_8] = ((/* implicit */short) ((12365942216005544416ULL) / (((/* implicit */unsigned long long int) arr_17 [i_1] [i_3] [(signed char)3] [i_5] [i_1 + 2] [i_1]))));
                    }
                    /* LoopSeq 3 */
                    for (unsigned long long int i_9 = 0; i_9 < 18; i_9 += 3) 
                    {
                        arr_34 [i_9] [i_5] [i_9] = ((/* implicit */int) arr_23 [i_0] [(signed char)7] [i_9] [(signed char)7] [(signed char)7]);
                        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) (+(((/* implicit */int) var_1)))))));
                        var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_12 [(_Bool)1] [(_Bool)1] [i_3] [i_3]) & (arr_12 [i_9] [i_3] [10U] [i_0])))) ? (((((/* implicit */_Bool) 12365942216005544416ULL)) ? (arr_1 [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [4]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_1 + 3] [i_1 + 3]))))))));
                    }
                    for (unsigned char i_10 = 0; i_10 < 18; i_10 += 3) /* same iter space */
                    {
                        arr_38 [i_0] [i_1] [(unsigned char)3] [i_5] [i_1] [i_10] = ((/* implicit */_Bool) arr_35 [i_0] [i_5] [i_3] [i_5] [i_0] [i_0]);
                        arr_39 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)248)) ? (-803147371) : (((/* implicit */int) (_Bool)1)))) ^ (((((/* implicit */_Bool) arr_5 [i_3])) ? (((/* implicit */int) (unsigned char)244)) : (((/* implicit */int) arr_16 [i_5] [i_5] [i_3] [i_1] [i_0]))))));
                        arr_40 [i_0] [i_0] [10LL] [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_35 [i_5] [i_5] [i_5] [i_5] [i_5] [(short)0]);
                        arr_41 [i_5] [i_1] [i_1] = ((((/* implicit */int) var_12)) + (((/* implicit */int) (unsigned char)36)));
                    }
                    for (unsigned char i_11 = 0; i_11 < 18; i_11 += 3) /* same iter space */
                    {
                        arr_45 [(unsigned short)10] [(short)16] [(unsigned short)10] [i_0] [(unsigned short)10] |= ((/* implicit */unsigned int) arr_13 [(unsigned char)16] [(unsigned char)13] [i_3] [15ULL]);
                        arr_46 [i_0] [i_5] [i_0] [(unsigned short)14] [i_0] &= ((/* implicit */unsigned long long int) (-(arr_25 [i_0] [i_1] [i_1 + 2] [i_1 + 3] [i_1 + 1])));
                        arr_47 [i_0] [i_0] &= ((/* implicit */signed char) arr_8 [i_0] [i_1 + 1]);
                        arr_48 [(short)6] [i_11] [(short)6] [i_5] [(short)6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_32 [i_11] [i_1 - 1] [i_1 + 4])) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_2))) - (3106033445U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_1 + 3] [i_1])) ? (var_3) : (((/* implicit */int) arr_32 [i_11] [i_1] [i_0])))))));
                        arr_49 [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_12))))) ? (arr_6 [i_1 + 3] [i_1 + 1]) : (((/* implicit */unsigned long long int) (~(arr_19 [i_0] [i_0] [i_0] [8U] [i_0] [i_0] [8U]))))));
                    }
                    var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((arr_16 [i_0] [i_0] [i_0] [i_0] [i_5]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_0] [i_5] [i_0] [i_5] [i_1]))) : (arr_44 [i_5] [i_1] [i_3] [i_5] [(signed char)10] [i_5]))) : (((/* implicit */unsigned int) var_0))));
                }
                for (long long int i_12 = 0; i_12 < 18; i_12 += 1) /* same iter space */
                {
                    arr_52 [i_1 + 2] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1] [8])) && (var_11))))) % (((unsigned int) arr_37 [i_0]))));
                    /* LoopSeq 1 */
                    for (short i_13 = 0; i_13 < 18; i_13 += 2) 
                    {
                        arr_56 [i_13] [i_12] [i_0] [i_1 + 3] [i_0] = ((/* implicit */int) ((-7640918701540535271LL) < (((/* implicit */long long int) 1169318740))));
                        arr_57 [i_13] [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_17 [i_1 - 1] [i_1 - 1] [11] [i_1] [i_1 - 1] [i_13]))));
                        var_26 *= ((/* implicit */unsigned char) arr_28 [i_1 - 1]);
                    }
                    var_27 = ((/* implicit */_Bool) arr_14 [i_0] [i_0]);
                    arr_58 [i_12] [10U] [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_15))));
                }
                var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) arr_51 [i_0] [i_1 - 1] [i_1] [i_0] [i_3] [i_3]))));
            }
            arr_59 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 4] [i_1 + 4]))) > (arr_33 [i_1 + 1] [i_0] [i_1 - 1] [i_1] [i_1] [i_1])));
        }
        arr_60 [i_0] = ((/* implicit */unsigned short) (+(max((((/* implicit */int) var_8)), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [(unsigned char)15] [i_0])) : (arr_8 [i_0] [13])))))));
    }
    for (unsigned int i_14 = 0; i_14 < 19; i_14 += 3) 
    {
        /* LoopSeq 1 */
        for (int i_15 = 4; i_15 < 18; i_15 += 2) 
        {
            var_29 &= ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) arr_66 [i_14])) : (arr_67 [i_14] [i_15 - 3]))) ^ (var_13))) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_67 [i_15] [i_14])) ? (((/* implicit */int) arr_62 [i_14])) : (arr_66 [i_14])))) ? (arr_67 [i_15 + 1] [i_15 + 1]) : (((/* implicit */long long int) ((/* implicit */int) ((13314600669664460686ULL) <= (((/* implicit */unsigned long long int) 4423841687981451853LL))))))))));
            /* LoopSeq 2 */
            for (unsigned int i_16 = 2; i_16 < 18; i_16 += 2) 
            {
                arr_71 [i_14] [i_14] [i_14] = ((/* implicit */unsigned int) 3191446591226150916LL);
                /* LoopSeq 1 */
                for (unsigned int i_17 = 1; i_17 < 17; i_17 += 2) 
                {
                    /* LoopSeq 4 */
                    for (signed char i_18 = 0; i_18 < 19; i_18 += 3) 
                    {
                        var_30 ^= ((/* implicit */int) arr_65 [i_14] [i_15] [(_Bool)1]);
                        arr_77 [i_16] [i_16] [i_16] [i_16] [i_16] |= ((/* implicit */int) ((((arr_67 [i_15 - 1] [i_16 - 1]) / (((/* implicit */long long int) ((/* implicit */int) (short)-27055))))) + ((-(arr_67 [i_15 - 4] [i_16 - 2])))));
                    }
                    for (unsigned short i_19 = 0; i_19 < 19; i_19 += 3) 
                    {
                        var_31 = ((/* implicit */unsigned int) var_14);
                        arr_80 [i_14] [i_15 - 4] [(unsigned short)7] [i_17] [i_16 - 2] [2] = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) var_7)) ? (var_10) : (((/* implicit */unsigned int) arr_63 [i_15 - 1] [i_15 - 1])))));
                    }
                    for (unsigned int i_20 = 0; i_20 < 19; i_20 += 2) /* same iter space */
                    {
                        arr_84 [i_20] [i_17 - 1] [i_16 + 1] [i_15] [i_14] = ((/* implicit */short) (+(((((/* implicit */int) arr_81 [i_15 - 1] [i_16 - 1] [i_17] [i_17] [i_17] [i_17 + 2] [i_16 - 1])) - (((/* implicit */int) arr_81 [i_15 - 1] [i_16 - 1] [i_16 - 1] [i_17] [(signed char)5] [i_17 + 2] [i_17 + 2]))))));
                        var_32 ^= ((/* implicit */unsigned short) (+((-((+(((/* implicit */int) arr_68 [i_20] [i_15 - 3] [i_14] [i_17]))))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_21 = 0; i_21 < 19; i_21 += 2) /* same iter space */
                    {
                        arr_87 [i_14] &= ((/* implicit */unsigned long long int) ((arr_74 [i_15] [i_16 + 1] [i_17 + 1]) && (((/* implicit */_Bool) arr_68 [i_16 + 1] [i_15 - 4] [(short)1] [i_17 + 2]))));
                        arr_88 [i_14] [i_14] [9ULL] [i_14] [i_14] &= ((/* implicit */unsigned char) (-(arr_69 [i_14] [i_15 - 3] [i_16 - 1] [i_21])));
                        var_33 -= (!(((((/* implicit */_Bool) arr_68 [3LL] [17] [17] [i_21])) && (((/* implicit */_Bool) (short)16352)))));
                        var_34 += ((/* implicit */unsigned char) ((unsigned int) arr_68 [i_15] [i_16 - 1] [i_17 - 1] [i_17 + 2]));
                        var_35 += ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)12))));
                    }
                    /* LoopSeq 4 */
                    for (unsigned char i_22 = 3; i_22 < 16; i_22 += 1) 
                    {
                        var_36 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((0U) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3LL)) ? (((/* implicit */int) arr_73 [i_17])) : (479891043))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_61 [i_14]))) : (arr_70 [i_14] [i_15 - 3] [6U])));
                        arr_92 [i_14] [(signed char)4] [(signed char)4] [i_16] [i_17] [i_22] = ((/* implicit */int) min((((((/* implicit */_Bool) arr_63 [i_17 + 1] [i_14])) && (((/* implicit */_Bool) ((unsigned long long int) (unsigned char)25))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_85 [i_17 + 1] [i_17 + 1] [i_17] [12ULL] [i_17 - 1] [i_17])) ? (arr_63 [i_14] [i_14]) : (((/* implicit */int) arr_83 [i_22 - 3] [i_22] [i_22] [i_22]))))) || (((/* implicit */_Bool) arr_85 [i_22] [i_17] [(signed char)15] [(signed char)15] [i_14] [i_14]))))));
                        var_37 = ((/* implicit */unsigned short) ((((/* implicit */int) ((arr_69 [i_17] [i_16] [i_15] [i_14]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_81 [i_14] [i_15 + 1] [i_17 + 1] [i_22 - 1] [i_22] [i_17 + 1] [i_16])))))) & (((((/* implicit */_Bool) arr_67 [i_14] [i_14])) ? (((/* implicit */int) ((arr_69 [i_17 - 1] [i_16 - 1] [17LL] [(unsigned char)8]) > (((/* implicit */unsigned long long int) var_9))))) : (((/* implicit */int) ((1701710194592954779LL) > (4423841687981451853LL))))))));
                    }
                    for (unsigned int i_23 = 1; i_23 < 17; i_23 += 1) 
                    {
                        var_38 ^= ((/* implicit */unsigned char) min(((+(arr_75 [i_23 + 1] [i_23] [i_23] [i_23] [i_23] [i_23 - 1] [i_15]))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)248)))))));
                        arr_95 [i_23] [i_16 + 1] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_90 [i_23 + 1] [i_23 - 1] [i_23 + 2] [i_23] [i_23 - 1]))) > (arr_89 [i_23 + 2] [i_23] [i_23 + 2] [i_23 + 2] [i_23]))))) - (((((/* implicit */_Bool) arr_90 [i_23 + 1] [(signed char)10] [i_23] [i_23 + 1] [i_23 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (arr_89 [i_23 + 1] [i_23] [i_23 + 2] [i_23] [i_23])))));
                        arr_96 [i_15] [4ULL] [4U] [i_17] [0U] [i_17 + 2] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_68 [i_15] [i_15 - 4] [i_16 - 1] [i_17 + 2])) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) arr_68 [i_15] [i_15 - 4] [i_16 - 1] [i_17 + 2])))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_68 [i_14] [i_15 - 4] [i_16 - 1] [i_17 + 2])) && (((/* implicit */_Bool) arr_68 [i_15] [i_15 - 4] [i_16 - 1] [i_17 + 2]))))) : (((/* implicit */int) arr_68 [i_14] [i_15 - 4] [i_16 - 1] [i_17 + 2]))));
                        arr_97 [i_23] [i_23] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) max((((/* implicit */int) arr_83 [i_14] [i_15 + 1] [i_16] [i_14])), ((~(((/* implicit */int) (unsigned char)127))))))), (max((((/* implicit */unsigned int) (unsigned short)13048)), (1410705458U)))));
                    }
                    /* vectorizable */
                    for (int i_24 = 2; i_24 < 18; i_24 += 3) /* same iter space */
                    {
                        var_39 = ((/* implicit */long long int) min((var_39), (((/* implicit */long long int) arr_83 [i_24] [i_16] [i_15] [i_14]))));
                        var_40 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) arr_89 [i_24 + 1] [i_16] [i_17] [i_16] [i_16 - 2])) * (5132143404045090938ULL)));
                        var_41 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_73 [i_16 - 1]))));
                    }
                    for (int i_25 = 2; i_25 < 18; i_25 += 3) /* same iter space */
                    {
                        var_42 &= ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((signed char) arr_74 [i_15] [i_16 - 1] [i_17 + 1]))), (((((/* implicit */unsigned int) (+(((/* implicit */int) var_14))))) / (var_10)))));
                        var_43 = ((/* implicit */unsigned short) (!(var_11)));
                    }
                }
                var_44 = ((/* implicit */unsigned short) var_13);
            }
            for (long long int i_26 = 0; i_26 < 19; i_26 += 3) 
            {
                arr_104 [i_14] [i_14] [i_14] [i_26] = (-(min((((/* implicit */unsigned int) (+(((/* implicit */int) arr_73 [i_15 - 2]))))), (max((((/* implicit */unsigned int) var_7)), (arr_94 [i_26] [i_26] [i_15 - 1] [i_14]))))));
                var_45 = ((/* implicit */unsigned long long int) (signed char)-33);
            }
        }
        arr_105 [i_14] |= ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) arr_63 [i_14] [i_14])) || (((/* implicit */_Bool) (+(((/* implicit */int) arr_99 [i_14] [(signed char)5] [9ULL] [i_14])))))))));
        var_46 = ((/* implicit */unsigned int) min((var_46), (2925061244U)));
    }
    for (long long int i_27 = 0; i_27 < 13; i_27 += 1) 
    {
        var_47 -= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_101 [i_27] [i_27] [8ULL] [i_27] [8LL])) ? (((/* implicit */int) arr_101 [i_27] [2U] [i_27] [0ULL] [i_27])) : (((/* implicit */int) arr_101 [i_27] [i_27] [i_27] [i_27] [i_27]))))));
        /* LoopSeq 2 */
        for (short i_28 = 0; i_28 < 13; i_28 += 3) 
        {
            arr_111 [i_27] [i_27] [i_28] = ((/* implicit */signed char) max((1367666927), (((/* implicit */int) min((arr_4 [i_27] [i_28] [(unsigned short)1]), (((/* implicit */short) ((((/* implicit */_Bool) arr_69 [14ULL] [14ULL] [i_27] [i_27])) || (((/* implicit */_Bool) arr_54 [i_27] [i_28] [i_28] [0ULL]))))))))));
            arr_112 [i_27] [i_27] = ((/* implicit */unsigned long long int) 2407731072747368762LL);
            arr_113 [i_27] = ((/* implicit */unsigned long long int) (~(arr_102 [i_27] [i_27] [i_28] [i_28])));
        }
        for (unsigned short i_29 = 0; i_29 < 13; i_29 += 2) 
        {
            arr_118 [i_27] [i_27] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_103 [i_29] [8LL] [9ULL])) : (803147376))) > (((/* implicit */int) arr_62 [i_29])))))) * (-1365500517187890854LL)));
            var_48 = ((/* implicit */int) arr_15 [(signed char)5] [i_29] [(signed char)5] [i_27] [(_Bool)1] [11ULL]);
            arr_119 [i_29] [i_29] &= ((/* implicit */short) max((min((((((/* implicit */_Bool) arr_64 [(unsigned short)9])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)139)))), (1904277267))), (((((((/* implicit */long long int) ((/* implicit */int) arr_85 [i_27] [(unsigned short)10] [i_29] [i_29] [12LL] [i_29]))) > (1322590287107200833LL))) ? (((/* implicit */int) (unsigned char)40)) : (1904277275)))));
        }
    }
    for (unsigned short i_30 = 0; i_30 < 20; i_30 += 2) 
    {
        arr_122 [i_30] = ((/* implicit */unsigned long long int) arr_120 [i_30]);
        arr_123 [i_30] = ((/* implicit */unsigned long long int) (!(max((var_11), (((((/* implicit */_Bool) 0ULL)) && (arr_121 [i_30])))))));
        var_49 = ((/* implicit */unsigned int) ((signed char) min((arr_120 [i_30]), (arr_120 [i_30]))));
        var_50 -= ((/* implicit */unsigned char) (((-(((/* implicit */int) (unsigned char)62)))) & (((((/* implicit */_Bool) arr_120 [i_30])) ? (arr_120 [i_30]) : (((/* implicit */int) arr_121 [i_30]))))));
        var_51 = ((/* implicit */int) max((var_51), (((/* implicit */int) (!((!(((/* implicit */_Bool) ((int) var_15))))))))));
    }
    var_52 = ((/* implicit */_Bool) var_3);
    var_53 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((unsigned int) var_10)) ^ (min((var_10), (((/* implicit */unsigned int) var_3))))))) ? (min((((var_11) ? (var_17) : (5378107229605718568LL))), (((/* implicit */long long int) min((((/* implicit */unsigned int) var_14)), (var_10)))))) : (var_9)));
    var_54 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (2407731072747368767LL) : (((/* implicit */long long int) var_0))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (((/* implicit */int) var_8))))) != (((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) - (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_0)) : (var_4)))))));
}
