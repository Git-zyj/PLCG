/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235547
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
    var_17 = ((/* implicit */unsigned short) var_9);
    var_18 = ((/* implicit */signed char) ((short) min(((signed char)-113), ((signed char)75))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 10; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 10; i_1 += 4) /* same iter space */
        {
            arr_5 [i_0] [5U] [(short)1] = ((/* implicit */signed char) arr_1 [i_0]);
            /* LoopNest 3 */
            for (unsigned short i_2 = 3; i_2 < 8; i_2 += 2) 
            {
                for (unsigned char i_3 = 0; i_3 < 10; i_3 += 2) 
                {
                    for (unsigned char i_4 = 0; i_4 < 10; i_4 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */long long int) ((signed char) (((((-(((/* implicit */int) arr_9 [i_0] [i_1] [i_3] [i_4])))) + (2147483647))) << (((((/* implicit */int) arr_16 [(unsigned char)9] [i_1] [i_2 + 2] [i_3] [i_3])) - (89))))));
                            arr_17 [i_0] [i_1] [i_4] [(_Bool)0] [2LL] [i_4] = ((/* implicit */signed char) (unsigned short)0);
                        }
                    } 
                } 
            } 
        }
        for (short i_5 = 0; i_5 < 10; i_5 += 4) /* same iter space */
        {
            var_20 = ((/* implicit */unsigned char) ((signed char) min((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)115)) < (((/* implicit */int) (signed char)-100))))), (((var_9) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (arr_0 [i_0]))))));
            arr_20 [i_0] [(_Bool)1] [i_0] = ((/* implicit */int) min((((/* implicit */long long int) ((short) ((signed char) -2034745935)))), (((((/* implicit */long long int) ((/* implicit */int) arr_8 [(unsigned short)8] [2LL] [i_5] [i_5]))) % ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65531))) : (var_12)))))));
        }
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))) ? (((arr_4 [i_0]) % (arr_4 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (signed char)-113)) : (((/* implicit */int) var_6)))) <= (((/* implicit */int) ((signed char) var_13)))))))));
        /* LoopSeq 3 */
        for (long long int i_6 = 0; i_6 < 10; i_6 += 4) 
        {
            var_22 = ((/* implicit */long long int) ((((((/* implicit */int) (signed char)30)) % (((((/* implicit */_Bool) (signed char)113)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)10)))))) < (((/* implicit */int) (signed char)0))));
            var_23 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_18 [i_0] [i_6])))) ? (((((/* implicit */_Bool) arr_18 [i_0] [i_6])) ? (arr_18 [i_6] [8LL]) : (arr_18 [i_6] [i_0]))) : (((long long int) arr_18 [i_0] [i_6]))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_7 = 0; i_7 < 10; i_7 += 4) 
            {
                arr_25 [i_6] [i_7] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_16 [(signed char)0] [i_6] [(unsigned short)9] [i_6] [(unsigned short)7]))));
                var_24 = ((/* implicit */unsigned char) (_Bool)1);
            }
            arr_26 [i_0] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) arr_18 [i_0] [i_0]))) ? (((((arr_18 [i_0] [(_Bool)1]) + (9223372036854775807LL))) << (((((((/* implicit */int) arr_6 [i_0] [i_6] [i_6] [i_6])) + (59))) - (41))))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_8 [i_6] [i_6] [i_0] [i_0])))))));
        }
        for (long long int i_8 = 0; i_8 < 10; i_8 += 2) 
        {
            var_25 = ((/* implicit */signed char) ((((/* implicit */int) max(((short)(-32767 - 1)), (((/* implicit */short) ((((/* implicit */int) (signed char)-125)) < (((/* implicit */int) (_Bool)1)))))))) <= (((/* implicit */int) (short)-32762))));
            var_26 = ((/* implicit */short) (~((-(((/* implicit */int) arr_27 [i_0] [i_0]))))));
        }
        for (unsigned int i_9 = 2; i_9 < 9; i_9 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned char i_10 = 1; i_10 < 7; i_10 += 4) 
            {
                for (signed char i_11 = 1; i_11 < 9; i_11 += 2) 
                {
                    for (long long int i_12 = 0; i_12 < 10; i_12 += 2) 
                    {
                        {
                            var_27 = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 1023706191)) ? (((/* implicit */int) (signed char)116)) : (((/* implicit */int) (short)(-32767 - 1))))) % (((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1386906039U)) ? (((/* implicit */int) (unsigned short)10908)) : (((/* implicit */int) (_Bool)0))))) ? (((var_9) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_4 [i_12]))) : (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)139), (((/* implicit */unsigned char) var_4)))))) <= (arr_13 [i_0] [i_12] [i_0] [i_10 + 3] [i_10] [6U])))))));
                            var_28 |= ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_0] [i_12] [i_10 + 3] [i_11 - 1])) << (((/* implicit */int) arr_8 [i_0] [i_10 - 1] [9LL] [i_12]))))) ? (((unsigned int) arr_8 [i_0] [(unsigned char)5] [i_0] [i_0])) : (((/* implicit */unsigned int) ((arr_8 [(unsigned char)2] [i_9 + 1] [i_11 + 1] [(unsigned char)0]) ? (((/* implicit */int) arr_8 [i_0] [i_12] [i_10 + 2] [i_12])) : (((/* implicit */int) arr_8 [i_9 - 1] [5U] [i_11 + 1] [i_12]))))));
                        }
                    } 
                } 
            } 
            arr_39 [i_0] = ((/* implicit */_Bool) ((((_Bool) max((var_15), (((/* implicit */short) var_7))))) ? (((((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (arr_4 [i_0])))) ? (max((((/* implicit */long long int) var_9)), (var_12))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) arr_7 [(unsigned char)6])), (var_3))))))) : (((/* implicit */long long int) ((arr_24 [(_Bool)1] [i_9 - 1] [i_9]) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (signed char)-126)) : (((/* implicit */int) var_8)))) : (((/* implicit */int) max(((short)(-32767 - 1)), (((/* implicit */short) var_13))))))))));
            var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) arr_24 [i_0] [i_0] [0U]))) << (((((/* implicit */int) arr_24 [i_0] [i_9] [i_0])) * (((/* implicit */int) arr_24 [i_0] [i_9 - 2] [i_9 - 2])))))))));
            var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) arr_38 [i_0] [i_0] [i_0] [i_0] [i_0]))));
            arr_40 [0U] = ((/* implicit */signed char) ((((((var_12) % (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_0] [i_9]))))) <= (min((((/* implicit */long long int) (_Bool)1)), (arr_28 [i_9] [6ULL]))))) ? (max((arr_31 [i_0] [(unsigned short)8] [i_0]), (((/* implicit */unsigned int) ((unsigned char) (unsigned short)40519))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((unsigned int) (unsigned char)157)) < ((-(1722294399U)))))))));
        }
        /* LoopNest 3 */
        for (short i_13 = 0; i_13 < 10; i_13 += 3) 
        {
            for (long long int i_14 = 0; i_14 < 10; i_14 += 4) 
            {
                for (unsigned short i_15 = 0; i_15 < 10; i_15 += 1) 
                {
                    {
                        arr_48 [i_0] [(_Bool)1] [i_14] [i_15] [6U] [i_15] = ((/* implicit */unsigned short) var_7);
                        var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */int) (short)0)) < (((/* implicit */int) (signed char)117)))) ? (((/* implicit */unsigned long long int) var_0)) : (((((/* implicit */_Bool) arr_38 [i_0] [i_13] [i_13] [i_15] [i_15])) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))) ? (((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)158))) - (18446744073709551615ULL))) + (((/* implicit */unsigned long long int) ((long long int) (signed char)-107))))) : (((/* implicit */unsigned long long int) ((((var_11) << (((/* implicit */int) (_Bool)1)))) % (((/* implicit */unsigned int) 123467845)))))));
                        arr_49 [i_15] [i_15] [i_0] [(signed char)5] = ((/* implicit */long long int) min((((arr_12 [i_0] [i_13] [(unsigned char)3] [i_15]) % (arr_12 [i_0] [i_13] [i_14] [i_15]))), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)157)) : (((/* implicit */int) (_Bool)1))))) < (((((/* implicit */_Bool) arr_12 [8] [i_13] [i_14] [(signed char)3])) ? (arr_12 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))))));
                        var_32 ^= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)1)), (arr_36 [i_15] [i_13] [i_14] [i_15] [i_0] [i_14])))) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (584105175355722242LL) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) : (((/* implicit */long long int) min((1697524084), (((/* implicit */int) var_8))))))) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (signed char)125))))) < (((/* implicit */int) ((((/* implicit */int) arr_11 [i_13] [i_14] [i_14])) < (((/* implicit */int) arr_46 [(unsigned short)0] [(unsigned short)0] [(unsigned short)0] [(unsigned char)2] [i_14])))))))))));
                    }
                } 
            } 
        } 
        var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0])) % (((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */int) ((18446744073709551615ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) : (((/* implicit */int) ((short) arr_2 [i_0])))));
    }
    for (short i_16 = 0; i_16 < 10; i_16 += 3) /* same iter space */
    {
        var_34 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) arr_47 [i_16] [i_16]))))));
        arr_53 [6U] [i_16] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)35224)) <= (((/* implicit */int) (unsigned short)65534))));
        arr_54 [(short)4] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((((-(((/* implicit */int) (_Bool)1)))) + (2147483647))) << ((((-(((/* implicit */int) var_10)))) + (149)))))) ? (((((/* implicit */_Bool) ((unsigned short) var_13))) ? (((/* implicit */int) ((signed char) (signed char)-17))) : (((/* implicit */int) var_2)))) : (((/* implicit */int) arr_42 [(unsigned short)2] [i_16] [i_16]))));
        var_35 = ((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */int) arr_24 [(short)5] [2LL] [i_16])) < (((((/* implicit */int) var_5)) << (((7440747195225508292LL) - (7440747195225508283LL)))))))), ((+(((/* implicit */int) arr_15 [i_16] [5U] [i_16] [5U] [i_16] [i_16]))))));
    }
    for (short i_17 = 0; i_17 < 10; i_17 += 3) /* same iter space */
    {
        /* LoopSeq 4 */
        for (long long int i_18 = 0; i_18 < 10; i_18 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned char i_19 = 0; i_19 < 10; i_19 += 4) 
            {
                for (_Bool i_20 = 0; i_20 < 0; i_20 += 1) 
                {
                    {
                        arr_65 [i_17] [7U] [i_19] [i_20 + 1] = ((/* implicit */long long int) arr_34 [i_19] [i_17] [i_17]);
                        var_36 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((unsigned char) arr_31 [i_20 + 1] [i_20 + 1] [i_20 + 1]))), (((arr_31 [i_20 + 1] [i_20 + 1] [i_20 + 1]) % (arr_31 [i_20 + 1] [i_20 + 1] [i_20 + 1])))));
                    }
                } 
            } 
            var_37 = ((/* implicit */short) min((var_37), (((/* implicit */short) ((((/* implicit */int) arr_19 [i_17] [i_17] [i_18])) % ((~(((/* implicit */int) max((var_8), (((/* implicit */signed char) arr_27 [i_17] [i_17]))))))))))));
            arr_66 [i_17] [i_17] [0U] = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)98))));
            var_38 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned short) arr_24 [i_17] [i_18] [i_18])))));
            var_39 += ((/* implicit */int) (((-(((((/* implicit */_Bool) arr_2 [(_Bool)1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_18] [i_17] [i_17] [i_17]))) : (var_16))))) * (((/* implicit */unsigned long long int) ((((long long int) (signed char)-107)) % (((((/* implicit */_Bool) (unsigned short)44828)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_4 [(unsigned short)3]))))))));
        }
        for (long long int i_21 = 3; i_21 < 6; i_21 += 4) /* same iter space */
        {
            var_40 = ((/* implicit */int) min((var_40), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_17] [i_21])) ? (((/* implicit */int) arr_30 [i_17] [i_21 + 2])) : (((/* implicit */int) arr_30 [i_17] [i_17]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((long long int) var_12)) <= (((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_21 + 2] [i_17] [i_17] [i_17])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_41 [i_17] [i_17] [i_17]))))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [(unsigned short)9] [(unsigned short)9] [(unsigned short)9])) ? (arr_4 [i_17]) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))) ? (((((/* implicit */_Bool) var_3)) ? (var_11) : (arr_61 [i_17] [i_17] [i_21] [i_17]))) : (((/* implicit */unsigned int) ((int) (signed char)-104))))))))));
            arr_69 [(signed char)6] [i_21] [i_21] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_21 + 2] [i_21 - 2] [i_21])) ? (((/* implicit */int) arr_34 [i_21 + 2] [i_21 - 2] [6U])) : (((/* implicit */int) arr_34 [i_21 + 2] [i_21 - 2] [(unsigned char)7]))))) ? (((/* implicit */int) ((signed char) arr_34 [i_21 + 2] [i_21 - 2] [i_21]))) : (((/* implicit */int) min((arr_34 [i_21 + 2] [i_21 - 2] [i_21 + 2]), (arr_34 [i_21 + 2] [i_21 - 2] [i_21]))))));
        }
        /* vectorizable */
        for (long long int i_22 = 3; i_22 < 6; i_22 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (_Bool i_23 = 0; i_23 < 0; i_23 += 1) 
            {
                for (unsigned char i_24 = 0; i_24 < 10; i_24 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (long long int i_25 = 0; i_25 < 10; i_25 += 4) /* same iter space */
                        {
                            var_41 = ((/* implicit */signed char) ((arr_28 [i_23 + 1] [i_24]) < (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_4))))));
                            arr_83 [i_23 + 1] [i_22] [i_22] [(unsigned short)2] [i_25] = ((/* implicit */unsigned short) ((((arr_73 [i_17] [9] [i_22] [i_25]) < (((/* implicit */long long int) ((/* implicit */int) arr_58 [i_22] [i_25]))))) ? (((long long int) var_16)) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_23 [7LL] [i_24] [i_22] [i_22]))) < (arr_73 [i_22] [i_23 + 1] [i_22] [(unsigned char)6])))))));
                        }
                        for (long long int i_26 = 0; i_26 < 10; i_26 += 4) /* same iter space */
                        {
                            arr_87 [i_22] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_11)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_42 [i_26] [i_22 + 2] [(signed char)2]))) : (((((/* implicit */_Bool) var_16)) ? (3645530656U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))));
                            arr_88 [i_26] [i_24] [i_22] [5U] [i_17] = ((/* implicit */long long int) (((-(((/* implicit */int) var_9)))) % (((/* implicit */int) arr_15 [i_26] [i_26] [i_23] [i_23 + 1] [i_23 + 1] [i_23]))));
                        }
                        var_42 = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)-113))));
                        var_43 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (signed char)-107)) ? (((/* implicit */int) (unsigned short)2905)) : (((/* implicit */int) (short)-739)))) < (((/* implicit */int) ((signed char) arr_14 [i_17] [i_17] [i_22 - 3] [i_23 + 1] [(unsigned short)7] [i_24])))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned short i_27 = 0; i_27 < 10; i_27 += 4) 
            {
                /* LoopNest 2 */
                for (signed char i_28 = 0; i_28 < 10; i_28 += 1) 
                {
                    for (short i_29 = 1; i_29 < 9; i_29 += 3) 
                    {
                        {
                            arr_96 [1LL] [1LL] [1LL] [i_28] [i_22] [i_28] = ((/* implicit */_Bool) ((arr_0 [i_17]) << (((arr_0 [i_22]) - (3228058617U)))));
                            var_44 = ((/* implicit */long long int) ((arr_46 [0U] [i_22] [i_27] [i_22 + 3] [i_22]) ? (((/* implicit */int) arr_46 [i_17] [i_22] [i_27] [i_22 + 3] [i_22])) : (((/* implicit */int) arr_46 [(unsigned char)9] [i_29] [i_29] [i_22 + 3] [i_22]))));
                            arr_97 [i_17] [i_17] [i_17] [i_22] [i_17] [(short)6] [i_17] = ((/* implicit */long long int) ((unsigned int) arr_19 [i_27] [i_28] [i_29 - 1]));
                            var_45 = ((/* implicit */signed char) min((var_45), (((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-110))) * (0U))) << (((/* implicit */int) arr_63 [0ULL])))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (signed char i_30 = 3; i_30 < 8; i_30 += 4) 
                {
                    arr_100 [3U] [i_22] [i_27] [(signed char)4] [i_27] [i_27] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_30 - 3] [i_22 + 2] [i_22 - 2])) <= (((/* implicit */int) arr_64 [i_30 + 2] [i_22 - 2] [i_22 - 2]))));
                    arr_101 [i_22] [i_22] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_38 [i_30 + 2] [i_30 + 2] [i_30 + 2] [i_22 + 4] [i_30 + 2]))));
                }
                arr_102 [i_22] [i_27] [(unsigned short)2] [i_22] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_3 [i_22 + 2] [i_22 + 2] [i_22 + 3])) + (2147483647))) << (((((/* implicit */int) arr_79 [(signed char)5] [i_22 - 1] [7U] [(signed char)5] [i_27] [i_27])) - (121)))));
                arr_103 [i_22] [i_22] [5ULL] = ((/* implicit */signed char) ((((((/* implicit */int) arr_68 [(_Bool)1] [i_22] [i_27])) << (((/* implicit */int) var_13)))) << (((/* implicit */int) arr_63 [i_27]))));
                arr_104 [i_22] [i_22 - 3] [i_22] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_10))) % (arr_47 [i_22] [i_27]))));
            }
            /* LoopNest 2 */
            for (long long int i_31 = 3; i_31 < 9; i_31 += 4) 
            {
                for (unsigned int i_32 = 2; i_32 < 9; i_32 += 2) 
                {
                    {
                        var_46 = ((/* implicit */_Bool) ((arr_11 [i_17] [(_Bool)0] [i_22 + 1]) ? (((/* implicit */int) arr_11 [i_22] [i_22 - 2] [i_22 + 2])) : (((/* implicit */int) arr_11 [(unsigned short)2] [(unsigned short)2] [i_22 + 4]))));
                        /* LoopSeq 1 */
                        for (unsigned int i_33 = 0; i_33 < 10; i_33 += 3) 
                        {
                            arr_113 [i_17] [i_22 + 2] [(unsigned char)4] [i_17] [i_22] [i_17] [i_22 + 2] = ((/* implicit */long long int) ((unsigned short) arr_47 [i_22] [i_22]));
                            var_47 |= ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                        }
                    }
                } 
            } 
            arr_114 [i_22] [i_22] = ((unsigned int) arr_61 [i_22 + 4] [i_22] [i_22 + 2] [i_22]);
        }
        for (long long int i_34 = 3; i_34 < 6; i_34 += 4) /* same iter space */
        {
            arr_117 [(_Bool)1] |= ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) <= (18446744073709551594ULL)));
            arr_118 [i_34] [i_34] [(signed char)3] = ((/* implicit */long long int) ((((/* implicit */_Bool) -5770560920466259357LL)) ? (12U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2905)))));
            arr_119 [i_17] [i_34] = ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_47 [i_34] [i_34])))) * (((((/* implicit */_Bool) 3757274719475053258LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : ((-9223372036854775807LL - 1LL)))));
        }
        /* LoopSeq 1 */
        for (unsigned short i_35 = 0; i_35 < 10; i_35 += 4) 
        {
            arr_123 [i_17] [i_17] [i_17] = ((/* implicit */_Bool) ((unsigned int) max((arr_85 [i_17] [(_Bool)1] [(_Bool)1] [i_17] [(unsigned short)8] [i_35] [i_35]), (arr_85 [i_17] [i_35] [(short)3] [i_17] [i_35] [(unsigned short)9] [i_17]))));
            arr_124 [i_17] [i_17] [i_35] |= ((/* implicit */long long int) ((((/* implicit */_Bool) -2147483628)) ? (((/* implicit */int) ((((((/* implicit */_Bool) (signed char)89)) ? (-9223372036854775805LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) < (((((/* implicit */_Bool) (unsigned char)143)) ? ((-9223372036854775807LL - 1LL)) : (2251799813685247LL)))))) : (max((((/* implicit */int) arr_64 [9U] [i_35] [i_17])), ((~(((/* implicit */int) var_8))))))));
        }
    }
    var_48 = ((/* implicit */signed char) min((var_48), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) % (((/* implicit */int) var_4))))) % (min((((/* implicit */unsigned long long int) -2147483628)), (1255492092568094222ULL))))))));
}
