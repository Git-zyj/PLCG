/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224620
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 9; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 2; i_2 < 9; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        {
                            var_15 &= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_10) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) max((((/* implicit */unsigned char) var_9)), ((unsigned char)64)))))))));
                            var_16 = ((/* implicit */unsigned long long int) arr_10 [i_3]);
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (unsigned short i_4 = 0; i_4 < 10; i_4 += 1) 
                            {
                                arr_14 [i_0] [(unsigned short)6] [i_3] = ((/* implicit */int) arr_5 [i_0]);
                                var_17 = ((/* implicit */signed char) var_11);
                                arr_15 [i_4] [i_3] [7ULL] [(short)9] [i_0] [i_0] = ((/* implicit */unsigned long long int) (_Bool)1);
                            }
                            /* vectorizable */
                            for (short i_5 = 0; i_5 < 10; i_5 += 2) 
                            {
                                var_18 |= ((/* implicit */unsigned int) (~(((/* implicit */int) arr_13 [i_1 + 1] [i_0] [i_5] [i_2 - 2]))));
                                arr_19 [i_0] [i_0] [i_1] [i_2] [i_3] [i_5] = ((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)1))));
                                var_19 = ((/* implicit */unsigned long long int) ((unsigned char) 12018505521668019078ULL));
                            }
                            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) var_9))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_6 = 0; i_6 < 10; i_6 += 3) 
                {
                    for (unsigned short i_7 = 2; i_7 < 8; i_7 += 3) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (long long int i_8 = 1; i_8 < 9; i_8 += 3) 
                            {
                                var_21 = ((/* implicit */short) (((~(12018505521668019078ULL))) + (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_18 [i_7] [i_7] [i_6] [4] [i_0])))))));
                                var_22 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (signed char)-72)), (min((max((var_6), (((/* implicit */unsigned long long int) var_10)))), (((/* implicit */unsigned long long int) max((var_5), (var_10))))))));
                                var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) (((_Bool)1) ? (0ULL) : (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_7]))) : (4039080530U)))))))))));
                                var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4))))), (12018505521668019078ULL)))) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 1830968530U)), (((((/* implicit */_Bool) var_9)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))));
                            }
                            for (int i_9 = 3; i_9 < 8; i_9 += 1) 
                            {
                                var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) 2305843009209499648LL))));
                                arr_31 [i_0] [i_7] = ((/* implicit */unsigned int) arr_7 [i_7]);
                                arr_32 [i_0] [(unsigned char)0] [i_0] [0ULL] [i_0] [i_0] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_13)) : ((+(((/* implicit */int) (unsigned char)254))))));
                                var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((((/* implicit */_Bool) arr_26 [i_0] [(short)8] [i_6] [(unsigned char)8] [(unsigned char)8])) ? (((((/* implicit */_Bool) min(((unsigned short)37010), ((unsigned short)16819)))) ? (var_6) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) >> (((((/* implicit */int) arr_16 [i_9] [(signed char)5] [i_6] [i_0])) - (56550)))))))) : (((/* implicit */unsigned long long int) min(((+(((/* implicit */int) var_11)))), (min((((/* implicit */int) (unsigned short)28526)), (-156023422)))))))))));
                            }
                            arr_33 [(short)0] [(short)3] [i_1] [i_1] [i_7] [i_7] = ((/* implicit */unsigned char) var_10);
                            var_27 = ((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)220)));
                            arr_34 [i_0] [i_0] [i_7] [i_1] = ((/* implicit */unsigned long long int) min((min((((/* implicit */unsigned int) arr_17 [i_7 - 1] [i_7 - 1] [i_7 + 2] [i_7 + 1] [i_7])), (var_12))), (((/* implicit */unsigned int) ((unsigned short) (signed char)67)))));
                        }
                    } 
                } 
                arr_35 [i_1] &= ((/* implicit */unsigned int) ((signed char) var_11));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (int i_10 = 0; i_10 < 12; i_10 += 3) 
    {
        var_28 &= ((/* implicit */int) var_12);
        /* LoopNest 2 */
        for (unsigned char i_11 = 3; i_11 < 10; i_11 += 1) 
        {
            for (unsigned char i_12 = 0; i_12 < 12; i_12 += 4) 
            {
                {
                    var_29 ^= ((/* implicit */short) ((((/* implicit */_Bool) max((((unsigned short) arr_39 [(unsigned short)0] [i_12] [i_12])), (((/* implicit */unsigned short) arr_41 [(unsigned short)0] [i_12]))))) ? (((/* implicit */int) ((unsigned char) arr_39 [i_11 + 2] [i_12] [i_11]))) : (max((((((/* implicit */_Bool) arr_39 [i_10] [i_12] [i_12])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)30668)))), (((((/* implicit */int) (short)-18889)) & (-13)))))));
                    arr_45 [i_11] [i_11] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_38 [i_11]))) ? (((unsigned int) (_Bool)1)) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_5)))))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) ((arr_44 [i_10] [i_11]) < (((/* implicit */unsigned int) ((/* implicit */int) var_14))))))));
                    var_30 &= ((((/* implicit */int) ((_Bool) arr_40 [i_11 - 3]))) <= (((/* implicit */int) ((unsigned short) ((unsigned int) arr_43 [i_10] [i_12] [i_10] [i_10])))));
                }
            } 
        } 
        var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) 19ULL))));
        arr_46 [i_10] [(unsigned short)3] = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */unsigned int) 176252234)) : (3873084091U)));
    }
    for (unsigned short i_13 = 0; i_13 < 23; i_13 += 2) 
    {
        arr_49 [(_Bool)1] [i_13] &= ((/* implicit */unsigned int) ((signed char) ((((/* implicit */long long int) (-(var_2)))) & (arr_48 [(_Bool)1] [(_Bool)1]))));
        arr_50 [i_13] = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) & (arr_48 [7] [i_13]))));
        arr_51 [4U] = ((/* implicit */_Bool) min((((/* implicit */long long int) (((~(arr_48 [i_13] [21ULL]))) <= (((/* implicit */long long int) arr_47 [i_13] [i_13]))))), ((~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (short)26842))) : (arr_48 [i_13] [i_13])))))));
    }
    /* vectorizable */
    for (unsigned short i_14 = 0; i_14 < 21; i_14 += 1) 
    {
        arr_54 [i_14] = ((/* implicit */_Bool) ((signed char) 6561751638807460227LL));
        /* LoopSeq 3 */
        for (unsigned short i_15 = 2; i_15 < 19; i_15 += 1) 
        {
            var_32 = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (short)-26338))))));
            arr_57 [i_15] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)8192)) ? (arr_48 [i_15 - 2] [i_15 - 2]) : (((/* implicit */long long int) (-(((/* implicit */int) var_11)))))));
            /* LoopSeq 3 */
            for (unsigned short i_16 = 2; i_16 < 17; i_16 += 3) 
            {
                arr_60 [i_15] [i_14] [i_16] = ((/* implicit */signed char) var_1);
                var_33 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)54250)) ? (((/* implicit */unsigned int) 3)) : (4294967274U)))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)31)) >= (((/* implicit */int) var_11))))) : (((/* implicit */int) (signed char)-113))));
            }
            for (unsigned int i_17 = 2; i_17 < 20; i_17 += 2) 
            {
                var_34 ^= ((/* implicit */int) var_5);
                var_35 &= (+((+(((/* implicit */int) (signed char)96)))));
            }
            for (unsigned char i_18 = 0; i_18 < 21; i_18 += 1) 
            {
                var_36 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)165))));
                arr_65 [i_15] [i_15] [i_15] [11U] = ((/* implicit */signed char) (((_Bool)1) ? (var_0) : (((/* implicit */unsigned long long int) arr_64 [i_14] [i_14] [i_18] [i_15 + 2]))));
                /* LoopNest 2 */
                for (short i_19 = 0; i_19 < 21; i_19 += 1) 
                {
                    for (int i_20 = 2; i_20 < 20; i_20 += 2) 
                    {
                        {
                            var_37 = ((/* implicit */unsigned char) ((int) (+(((/* implicit */int) var_14)))));
                            arr_71 [i_15] [i_15] [(short)10] [i_15] = ((/* implicit */unsigned long long int) (unsigned short)65535);
                        }
                    } 
                } 
                arr_72 [i_15] [2LL] = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) (+(arr_64 [(unsigned short)1] [i_15] [i_18] [i_18]))))));
                /* LoopNest 2 */
                for (int i_21 = 1; i_21 < 20; i_21 += 2) 
                {
                    for (long long int i_22 = 0; i_22 < 21; i_22 += 3) 
                    {
                        {
                            var_38 &= ((/* implicit */signed char) arr_66 [i_14] [i_14] [i_14]);
                            arr_77 [i_14] [2ULL] [i_18] [i_21] [i_18] [18ULL] |= ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_66 [i_21 - 1] [(signed char)1] [i_21])));
                            var_39 = ((/* implicit */unsigned char) max((var_39), (((/* implicit */unsigned char) (~((+(((/* implicit */int) (short)-26835)))))))));
                            arr_78 [(short)12] [i_15] [3U] [3U] [(short)14] [i_22] = ((short) (unsigned short)17349);
                            var_40 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)70))));
                        }
                    } 
                } 
            }
        }
        for (long long int i_23 = 0; i_23 < 21; i_23 += 1) 
        {
            arr_82 [(unsigned char)18] [(_Bool)1] &= ((/* implicit */unsigned int) (unsigned char)92);
            arr_83 [i_23] [i_14] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_10))));
            arr_84 [i_23] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_56 [i_14])) - (((/* implicit */int) (short)-14669)))) | (((/* implicit */int) var_14))));
        }
        for (unsigned int i_24 = 0; i_24 < 21; i_24 += 2) 
        {
            arr_87 [13U] = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) (unsigned char)200)) ? (arr_66 [i_14] [i_24] [(short)2]) : (((/* implicit */unsigned int) -1)))));
            /* LoopNest 3 */
            for (unsigned char i_25 = 0; i_25 < 21; i_25 += 4) 
            {
                for (unsigned char i_26 = 0; i_26 < 21; i_26 += 2) 
                {
                    for (long long int i_27 = 3; i_27 < 18; i_27 += 1) 
                    {
                        {
                            var_41 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)98)) ? (((/* implicit */int) ((((/* implicit */int) var_5)) <= (((/* implicit */int) (signed char)77))))) : (((/* implicit */int) ((signed char) var_4)))));
                            arr_95 [i_14] [(unsigned short)6] [i_25] [i_26] [i_25] [i_26] = ((/* implicit */unsigned long long int) ((unsigned char) var_8));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (long long int i_28 = 3; i_28 < 18; i_28 += 1) 
            {
                for (unsigned char i_29 = 1; i_29 < 17; i_29 += 2) 
                {
                    {
                        var_42 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_98 [i_29 - 1] [i_29] [(_Bool)1] [i_28 - 3])) ? (arr_88 [i_14] [i_29 + 1] [i_28]) : (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1)))))));
                        arr_101 [(_Bool)1] [i_28] [i_28] [i_28] [(signed char)12] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_52 [i_29 + 3]))) | (((((/* implicit */_Bool) (signed char)64)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4U)))));
                    }
                } 
            } 
            var_43 = ((/* implicit */unsigned char) min((var_43), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1)))))));
        }
        /* LoopSeq 4 */
        for (unsigned short i_30 = 2; i_30 < 20; i_30 += 3) 
        {
            arr_104 [i_14] [i_30] [i_30] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_14))));
            var_44 = ((/* implicit */_Bool) min((var_44), (((((/* implicit */int) (!(((/* implicit */_Bool) arr_56 [i_30]))))) <= (((/* implicit */int) (_Bool)1))))));
            arr_105 [i_30] = ((/* implicit */unsigned long long int) ((unsigned short) var_5));
        }
        for (_Bool i_31 = 0; i_31 < 0; i_31 += 1) 
        {
            var_45 = ((/* implicit */signed char) 866138300U);
            var_46 = ((/* implicit */unsigned char) var_11);
            arr_110 [(_Bool)1] [i_31] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_99 [(short)1] [(short)1] [i_14] [i_14])) ? ((-2147483647 - 1)) : (((/* implicit */int) var_13))))));
        }
        for (short i_32 = 2; i_32 < 19; i_32 += 1) 
        {
            arr_114 [i_14] [i_14] [i_14] = ((/* implicit */unsigned long long int) (_Bool)1);
            var_47 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (arr_86 [(_Bool)1] [(signed char)15]) : (((/* implicit */int) (signed char)-72))));
            var_48 = ((/* implicit */unsigned int) max((var_48), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_47 [i_32 - 1] [i_32 - 2])) ? (((/* implicit */long long int) (+(arr_103 [i_14] [i_14])))) : (((((/* implicit */_Bool) arr_96 [i_14])) ? (((/* implicit */long long int) var_2)) : (3LL))))))));
            arr_115 [i_14] [i_14] [i_14] = ((/* implicit */short) ((arr_69 [i_32 - 2] [i_32] [i_14] [i_32] [(unsigned short)13]) + (((/* implicit */int) arr_100 [i_14] [i_14] [10LL] [i_32]))));
        }
        for (int i_33 = 0; i_33 < 21; i_33 += 2) 
        {
            var_49 = ((/* implicit */unsigned long long int) min((var_49), (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */long long int) var_2)) > (arr_109 [i_14] [i_33])))))))));
            var_50 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 6ULL)) ? (var_3) : (((/* implicit */unsigned int) -66179711))));
        }
    }
}
