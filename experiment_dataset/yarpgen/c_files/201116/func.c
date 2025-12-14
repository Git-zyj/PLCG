/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201116
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        arr_4 [i_0] [13U] = ((/* implicit */unsigned short) max(((~(((/* implicit */int) arr_3 [i_0] [i_0])))), (((((/* implicit */int) arr_3 [i_0] [i_0])) * (((/* implicit */int) arr_3 [i_0] [i_0]))))));
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_2 [i_0]), (arr_0 [i_0])))) ? ((+(((/* implicit */int) arr_2 [i_0])))) : (((/* implicit */int) max((arr_2 [i_0]), (arr_0 [i_0]))))));
    }
    for (unsigned short i_1 = 1; i_1 < 17; i_1 += 3) 
    {
        var_18 |= ((/* implicit */unsigned int) (+((+(((/* implicit */int) arr_0 [i_1]))))));
        var_19 = ((/* implicit */unsigned long long int) (~((~((+(((/* implicit */int) arr_0 [(unsigned char)8]))))))));
        var_20 -= ((/* implicit */long long int) (+((+(((/* implicit */int) max((arr_0 [(_Bool)1]), (((/* implicit */short) arr_3 [i_1] [i_1])))))))));
    }
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 21; i_2 += 2) 
    {
        arr_10 [i_2] [(unsigned short)7] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) arr_3 [i_2] [i_2])) : (((/* implicit */int) arr_0 [i_2]))));
        var_21 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_16))))) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) arr_9 [i_2] [i_2]))));
    }
    for (int i_3 = 1; i_3 < 23; i_3 += 2) 
    {
        var_22 = ((/* implicit */unsigned long long int) arr_13 [(unsigned char)12] [i_3]);
        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_3 - 1] [i_3 + 1])) ? (((/* implicit */int) arr_0 [i_3])) : (((((/* implicit */_Bool) arr_2 [i_3])) ? (((/* implicit */int) arr_0 [(unsigned char)4])) : (((/* implicit */int) arr_14 [i_3 - 1] [i_3 - 1]))))))) ? (((/* implicit */int) arr_1 [i_3])) : (min((((/* implicit */int) arr_14 [i_3 - 1] [i_3 + 1])), (((((/* implicit */_Bool) (signed char)48)) ? (((/* implicit */int) arr_14 [i_3] [i_3])) : (((/* implicit */int) arr_1 [i_3]))))))));
        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_3 [(signed char)23] [i_3 + 1]), (arr_1 [i_3 + 1])))) ? ((+(((/* implicit */int) arr_3 [i_3 - 1] [i_3 + 1])))) : (((/* implicit */int) min((arr_1 [i_3]), (arr_3 [i_3] [i_3 + 1]))))));
        arr_15 [i_3 - 1] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_14 [i_3 + 1] [i_3 + 1])) ? (((/* implicit */int) arr_14 [i_3 + 1] [i_3 + 1])) : (((/* implicit */int) arr_14 [i_3 + 1] [i_3 + 1])))) / ((+(((/* implicit */int) arr_14 [i_3 + 1] [i_3 + 1]))))));
    }
    /* LoopNest 2 */
    for (unsigned short i_4 = 0; i_4 < 24; i_4 += 1) 
    {
        for (int i_5 = 0; i_5 < 24; i_5 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (int i_6 = 0; i_6 < 24; i_6 += 4) 
                {
                    var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) max(((+(((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_16 [i_4] [i_6])) : (((/* implicit */int) (unsigned char)165)))))), ((~(((/* implicit */int) arr_17 [i_6])))))))));
                    var_26 &= ((/* implicit */long long int) (unsigned char)165);
                }
                for (long long int i_7 = 0; i_7 < 24; i_7 += 3) 
                {
                    var_27 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [i_4])) & (((/* implicit */int) arr_12 [i_7]))))) & (max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(unsigned short)23] [i_5]))) ^ (var_10))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_4])) ? (((/* implicit */int) arr_2 [i_4])) : (((/* implicit */int) arr_11 [i_7])))))))));
                    arr_24 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */signed char) arr_21 [i_4] [i_4] [i_4]);
                }
                arr_25 [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_16 [i_4] [i_5]))))) ? (((/* implicit */int) min((arr_0 [i_4]), (((/* implicit */short) arr_18 [i_4]))))) : ((+(((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_5] [i_4])) || (((/* implicit */_Bool) arr_22 [i_4] [i_5] [18LL])))))))));
                /* LoopSeq 1 */
                for (unsigned short i_8 = 0; i_8 < 24; i_8 += 2) 
                {
                    arr_28 [i_4] [(_Bool)1] [(_Bool)1] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */int) max((arr_13 [i_5] [i_4]), (min((arr_27 [i_4] [i_4] [i_5] [(unsigned short)19]), (((/* implicit */unsigned short) arr_1 [i_8]))))))) & (((((/* implicit */_Bool) min((arr_13 [i_4] [i_5]), (((/* implicit */unsigned short) arr_16 [i_4] [(_Bool)1]))))) ? (((/* implicit */int) arr_2 [i_8])) : (((/* implicit */int) arr_17 [i_4]))))));
                    var_28 |= ((/* implicit */long long int) arr_17 [i_8]);
                    var_29 |= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_20 [i_8] [i_5])), (arr_3 [i_5] [18U])))) || (((/* implicit */_Bool) (unsigned char)105))))) & ((~(((/* implicit */int) arr_16 [i_4] [i_4]))))));
                }
                arr_29 [i_4] = ((/* implicit */long long int) arr_16 [5LL] [i_5]);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (int i_9 = 3; i_9 < 23; i_9 += 2) 
    {
        var_30 = ((/* implicit */short) arr_18 [21LL]);
        /* LoopSeq 1 */
        for (signed char i_10 = 0; i_10 < 24; i_10 += 1) 
        {
            var_31 -= ((/* implicit */long long int) (((~(((((/* implicit */int) arr_20 [2U] [2U])) ^ (((/* implicit */int) arr_18 [i_9 + 1])))))) ^ (min(((~(((/* implicit */int) (signed char)37)))), (((((/* implicit */int) arr_13 [i_9] [11])) ^ (((/* implicit */int) arr_31 [14]))))))));
            var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) arr_14 [i_9 + 1] [i_10]))));
            /* LoopSeq 4 */
            for (short i_11 = 2; i_11 < 22; i_11 += 1) 
            {
                arr_38 [i_9] = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_22 [(unsigned char)3] [i_10] [i_11 - 2])) ? (((/* implicit */int) arr_21 [i_9 - 1] [i_10] [i_11 - 2])) : (((/* implicit */int) arr_19 [i_9 - 3] [i_10] [13LL])))) ^ (((((/* implicit */int) arr_0 [(signed char)10])) & (arr_26 [i_9])))))) ? (((((/* implicit */_Bool) arr_1 [i_9 - 1])) ? (((/* implicit */int) arr_1 [i_9 - 1])) : (((/* implicit */int) arr_21 [i_9 + 1] [i_11 + 1] [i_11 - 2])))) : ((-(((/* implicit */int) max((arr_13 [i_9] [i_9 - 3]), (((/* implicit */unsigned short) arr_12 [i_10]))))))));
                var_33 = ((/* implicit */short) min((((arr_30 [i_11 - 2] [i_9 - 3]) ? (((/* implicit */int) arr_16 [i_9 + 1] [i_11 - 1])) : (((/* implicit */int) arr_16 [i_9 - 1] [i_11 + 2])))), (((/* implicit */int) arr_14 [i_9 + 1] [i_11 - 2]))));
                arr_39 [i_9] [i_9] [i_9] = ((/* implicit */unsigned char) min((((((/* implicit */long long int) (-(((/* implicit */int) arr_3 [i_9 - 3] [i_9 - 3]))))) / (((((/* implicit */_Bool) arr_21 [i_11] [i_9] [i_9])) ? (arr_37 [2LL] [i_9] [i_10] [i_11 + 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_10]))))))), (arr_32 [i_9])));
                var_34 |= ((/* implicit */unsigned char) max((((unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_9 - 1] [i_10] [i_11 - 2])) || (((/* implicit */_Bool) arr_16 [i_11] [i_10]))))), (((/* implicit */unsigned long long int) (signed char)-26))));
            }
            for (unsigned long long int i_12 = 1; i_12 < 20; i_12 += 1) 
            {
                var_35 = ((/* implicit */long long int) min((var_35), (5817670614945461900LL)));
                var_36 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+((+(((/* implicit */int) (signed char)23))))))) ? (((((/* implicit */_Bool) arr_36 [i_9] [i_9] [i_12 + 4])) ? (((/* implicit */int) arr_13 [i_9 - 2] [0LL])) : ((~(((/* implicit */int) arr_36 [i_9 - 3] [i_9] [i_9 - 3])))))) : ((+(((/* implicit */int) arr_17 [i_9]))))));
                var_37 = ((/* implicit */long long int) (~(((arr_20 [i_9] [i_9]) ? (max((12662440544798141793ULL), (((/* implicit */unsigned long long int) -5304719261812573684LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) (signed char)98))))))))));
            }
            for (unsigned char i_13 = 0; i_13 < 24; i_13 += 4) 
            {
                /* LoopSeq 3 */
                for (unsigned int i_14 = 0; i_14 < 24; i_14 += 4) 
                {
                    var_38 = ((/* implicit */long long int) (unsigned short)51653);
                    var_39 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_17 [i_9]) ? (((/* implicit */int) arr_17 [i_9])) : (((/* implicit */int) arr_3 [i_9 - 1] [i_9 - 1]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_9 - 3] [i_9 - 2])) ? (((/* implicit */int) arr_17 [i_9])) : (((/* implicit */int) arr_3 [i_9] [i_9 - 3])))))));
                    var_40 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_2 [i_10])) ? (8467979622703195458LL) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_10] [i_9 - 3]))))) >> (((/* implicit */int) (signed char)12))))) ? ((-(((/* implicit */int) arr_36 [i_14] [i_9] [i_9 + 1])))) : ((~(((/* implicit */int) arr_36 [i_9 + 1] [i_9] [i_9]))))));
                    var_41 = ((/* implicit */long long int) max((var_41), (((((((/* implicit */_Bool) arr_37 [i_9 - 1] [i_13] [i_13] [i_9 + 1])) ? (arr_32 [i_13]) : (arr_37 [i_9 - 2] [i_14] [i_14] [i_9 + 1]))) & (max((arr_37 [i_9 - 3] [i_14] [i_14] [i_9 - 3]), (arr_37 [i_9 + 1] [i_14] [i_14] [i_9 - 1])))))));
                }
                for (long long int i_15 = 0; i_15 < 24; i_15 += 2) 
                {
                    var_42 = ((/* implicit */long long int) arr_44 [i_9 + 1] [i_10] [i_13]);
                    var_43 = ((/* implicit */unsigned long long int) max((var_43), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_51 [i_9 + 1] [i_10] [i_10] [i_15])) ? (((long long int) arr_43 [i_13] [i_13])) : (((/* implicit */long long int) (-(arr_51 [i_9 - 2] [i_9 + 1] [i_9 + 1] [i_9 - 1])))))))));
                    /* LoopSeq 2 */
                    for (signed char i_16 = 0; i_16 < 24; i_16 += 1) /* same iter space */
                    {
                        arr_54 [i_16] [i_9] [i_10] [i_9] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((max((arr_46 [22LL] [i_15] [i_10] [i_10] [i_9 - 3]), (((/* implicit */unsigned int) arr_2 [(signed char)20])))) & (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_9] [i_9] [i_13])))))) ? (min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_21 [4ULL] [i_10] [i_13])), (arr_53 [i_9] [i_15] [i_13] [i_10] [i_9])))), (((arr_17 [i_9]) ? (((/* implicit */unsigned long long int) arr_48 [i_9] [(signed char)17] [i_13] [i_9] [(unsigned short)15])) : (arr_40 [i_9] [i_10] [i_15] [i_16]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_9 + 1])) ? (arr_46 [i_9 - 2] [i_9 - 3] [i_9] [i_9 - 3] [i_9 - 1]) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_16 [i_9] [i_13]))))))))));
                        var_44 = ((/* implicit */_Bool) min((min((max((arr_48 [i_9] [i_16] [i_16] [i_16] [i_16]), (arr_53 [i_9] [i_10] [i_13] [i_10] [i_16]))), (((/* implicit */long long int) arr_11 [i_9 + 1])))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_9 - 2] [i_9 - 1])) ? (((/* implicit */int) arr_47 [5] [(unsigned short)22] [i_9] [i_9] [i_16])) : (((/* implicit */int) arr_0 [i_9 - 3])))))));
                        var_45 = ((/* implicit */int) arr_20 [i_9] [i_13]);
                    }
                    /* vectorizable */
                    for (signed char i_17 = 0; i_17 < 24; i_17 += 1) /* same iter space */
                    {
                        var_46 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_18 [i_9])))) * (((unsigned long long int) var_7)));
                        var_47 *= ((/* implicit */unsigned char) (((!(arr_20 [i_13] [i_10]))) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_9 - 3])))));
                    }
                    var_48 = max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_15])) ? (arr_23 [i_9 - 3] [i_9] [i_15]) : (((/* implicit */int) arr_20 [i_9] [i_13]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_9] [13ULL])) ? (arr_43 [i_9] [i_9]) : (arr_48 [i_9] [i_10] [i_9] [i_10] [i_9]))))))), (arr_53 [i_9] [i_15] [i_13] [i_10] [i_9]));
                }
                /* vectorizable */
                for (unsigned long long int i_18 = 1; i_18 < 22; i_18 += 4) 
                {
                    var_49 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) var_2)) & (((((/* implicit */_Bool) (unsigned char)151)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)150))) : (var_15)))));
                    var_50 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_13] [i_18 + 2])) ? (((((/* implicit */long long int) ((/* implicit */int) arr_27 [(unsigned short)2] [i_10] [i_13] [i_18]))) + (arr_57 [i_9] [i_18 + 2] [i_9]))) : (((long long int) -5304719261812573684LL))));
                    var_51 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_55 [i_9 + 1] [i_9] [i_9 + 1] [i_9] [(unsigned char)1])) || (((/* implicit */_Bool) arr_12 [i_9 + 1]))));
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_19 = 3; i_19 < 23; i_19 += 4) 
                {
                    var_52 = ((/* implicit */_Bool) ((((var_0) / (arr_53 [i_9] [i_10] [i_10] [i_13] [i_19]))) / (((/* implicit */long long int) ((/* implicit */int) arr_55 [(_Bool)1] [i_13] [i_10] [12ULL] [i_9])))));
                    arr_62 [i_9] [(_Bool)1] [(signed char)16] [i_10] [i_9] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_58 [i_9 - 1]))));
                }
                /* LoopSeq 1 */
                for (int i_20 = 0; i_20 < 24; i_20 += 1) 
                {
                    var_53 = ((/* implicit */signed char) ((var_7) || (((/* implicit */_Bool) min((((var_15) - (((/* implicit */unsigned long long int) arr_32 [i_9])))), (((/* implicit */unsigned long long int) ((unsigned char) var_12))))))));
                    var_54 ^= ((/* implicit */signed char) max((min((arr_37 [i_9 - 3] [i_13] [(unsigned short)4] [i_13]), (((/* implicit */long long int) arr_42 [i_10] [i_20])))), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_17 [i_13])), (arr_40 [i_13] [i_10] [i_20] [4LL])))) ? (min((arr_53 [i_13] [i_13] [i_10] [i_13] [i_20]), (((/* implicit */long long int) arr_47 [i_20] [2] [i_13] [i_10] [0ULL])))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_48 [i_13] [i_10] [i_10] [i_10] [4LL]))))))))));
                    var_55 -= ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_23 [i_9] [i_13] [i_13])), (arr_58 [i_10])))) || (((/* implicit */_Bool) min((arr_46 [i_9] [i_10] [0LL] [i_20] [20LL]), (arr_46 [(unsigned char)9] [18] [8ULL] [i_10] [(unsigned char)9]))))))), (arr_46 [i_20] [i_20] [i_13] [(unsigned char)23] [i_9])));
                    var_56 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_36 [i_9 - 2] [i_9] [i_9 - 1]))));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_21 = 0; i_21 < 24; i_21 += 4) 
                {
                    for (long long int i_22 = 1; i_22 < 20; i_22 += 2) 
                    {
                        {
                            var_57 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */signed char) arr_56 [i_22] [i_21] [(unsigned char)0] [i_13] [(unsigned char)0] [i_9 - 2] [i_9])), (arr_16 [i_10] [i_9])))) | ((~(var_11)))))) || (min((arr_49 [i_9] [11] [i_9] [i_9 - 1]), (arr_30 [i_9 - 1] [i_22 + 4])))));
                            var_58 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_50 [i_9] [i_13] [i_21] [(unsigned char)1])) ? (max((min((arr_32 [i_9]), (((/* implicit */long long int) arr_45 [2] [2] [i_9] [(signed char)2])))), (((((/* implicit */_Bool) var_3)) ? (arr_48 [i_9] [i_10] [i_10] [i_21] [i_10]) : (((/* implicit */long long int) ((/* implicit */int) arr_42 [i_9] [i_9]))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_13] [i_13] [(unsigned short)14])))));
                        }
                    } 
                } 
            }
            for (unsigned short i_23 = 0; i_23 < 24; i_23 += 4) 
            {
                var_59 = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_46 [i_9 + 1] [i_9 - 1] [i_23] [(signed char)7] [i_9 - 1]), (arr_46 [i_23] [i_23] [i_10] [i_9 - 3] [i_9])))) ? (((((/* implicit */_Bool) arr_53 [i_9] [i_10] [i_10] [i_10] [i_23])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_31 [i_23])) ? (((/* implicit */int) arr_69 [i_9] [i_9])) : (((/* implicit */int) var_13))))) : ((~(arr_44 [22] [22] [i_9]))))) : (((/* implicit */unsigned long long int) min((arr_43 [i_9] [i_9]), (((/* implicit */long long int) arr_14 [i_9 - 2] [i_9 - 2])))))));
                var_60 = ((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_23] [i_9])) * (((/* implicit */int) min((arr_47 [i_9 + 1] [i_9 - 2] [i_9] [i_9 - 1] [i_10]), (arr_47 [i_9] [i_9 - 1] [i_9] [i_10] [(unsigned char)19]))))));
                var_61 = ((/* implicit */long long int) (!((!(((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) arr_1 [i_10]))))))));
            }
        }
        arr_71 [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((((/* implicit */int) arr_17 [i_9])) & (((/* implicit */int) (unsigned char)151)))), ((~(((/* implicit */int) (unsigned char)151))))))) ? (max((arr_40 [i_9] [21LL] [i_9 - 3] [(unsigned char)18]), (min((arr_34 [i_9 - 1] [i_9] [11]), (((/* implicit */unsigned long long int) arr_52 [i_9] [i_9 - 3] [i_9 + 1] [i_9] [(unsigned short)16] [i_9 - 2] [i_9])))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_67 [i_9 - 1] [i_9 + 1])) ? (((/* implicit */int) arr_61 [i_9] [(_Bool)1] [i_9] [i_9] [i_9] [i_9])) : (((/* implicit */int) arr_61 [i_9] [i_9] [i_9] [i_9] [i_9 - 3] [i_9 - 3])))))));
        var_62 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_9 + 1])) / (((/* implicit */int) arr_2 [i_9 - 2]))))) ? (((/* implicit */int) max((arr_2 [i_9 + 1]), (arr_2 [i_9 - 2])))) : ((-(((/* implicit */int) arr_2 [i_9 + 1]))))));
        arr_72 [(_Bool)1] |= (((!(((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [9]))))))) ? (((((/* implicit */_Bool) arr_37 [i_9 - 2] [(unsigned short)14] [i_9 - 2] [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_9 - 2]))) : (arr_37 [i_9 - 2] [(unsigned char)4] [2LL] [20LL]))) : (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_9] [18LL] [i_9 + 1]))));
    }
}
