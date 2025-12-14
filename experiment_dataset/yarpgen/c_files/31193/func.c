/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31193
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
    var_20 |= 387698604;
    var_21 |= ((/* implicit */long long int) (((!(((/* implicit */_Bool) 387698587)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) : (var_15)));
    var_22 = ((/* implicit */short) ((((int) ((unsigned long long int) var_5))) & (((((/* implicit */int) (short)32767)) + (((((/* implicit */int) var_1)) | (((/* implicit */int) var_19))))))));
    var_23 -= ((/* implicit */unsigned short) (+(((/* implicit */int) (short)32758))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_24 = ((/* implicit */long long int) arr_0 [i_0]);
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                for (signed char i_3 = 1; i_3 < 8; i_3 += 2) 
                {
                    {
                        arr_10 [i_0] [i_0] [1] [i_3 + 3] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-32127))) : (((long long int) var_18))))) | ((-(((((/* implicit */_Bool) (unsigned char)24)) ? (9758402356492018362ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32127)))))))));
                        arr_11 [(unsigned char)0] [(_Bool)1] [i_2] [(_Bool)1] = ((/* implicit */_Bool) ((unsigned short) (-(arr_6 [i_0] [i_0] [i_0] [i_0] [3LL] [i_0]))));
                        var_25 = ((/* implicit */unsigned int) ((long long int) (-(arr_3 [i_0] [i_0] [4]))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_4 = 0; i_4 < 10; i_4 += 2) 
    {
        arr_15 [(_Bool)1] [(short)6] &= ((/* implicit */long long int) ((_Bool) ((var_13) != (var_5))));
        /* LoopNest 2 */
        for (long long int i_5 = 0; i_5 < 10; i_5 += 2) 
        {
            for (short i_6 = 0; i_6 < 10; i_6 += 2) 
            {
                {
                    var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) var_11))));
                    var_27 = ((/* implicit */unsigned char) (short)32731);
                    /* LoopSeq 2 */
                    for (unsigned char i_7 = 0; i_7 < 10; i_7 += 3) 
                    {
                        var_28 = ((/* implicit */long long int) ((((/* implicit */int) (short)32121)) & (((/* implicit */int) (unsigned short)8176))));
                        arr_23 [i_4] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32747)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_4] [i_5] [i_6] [i_7]))) : (((arr_18 [(short)8] [i_6]) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32766)))))));
                        arr_24 [i_7] [i_7] [i_7] [i_7] [i_7] [(unsigned short)3] = ((/* implicit */unsigned char) var_9);
                        arr_25 [i_4] [i_4] [(unsigned short)5] [i_7] [i_7] [i_7] = ((/* implicit */short) var_7);
                    }
                    for (unsigned int i_8 = 0; i_8 < 10; i_8 += 2) 
                    {
                        var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) ((var_7) || (((/* implicit */_Bool) arr_21 [i_4] [i_5] [i_6] [i_8])))))));
                        var_30 = ((/* implicit */unsigned int) arr_0 [i_4]);
                        arr_29 [i_4] [i_5] [i_5] [i_6] [i_8] = ((/* implicit */long long int) arr_18 [i_6] [i_8]);
                        /* LoopSeq 4 */
                        for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                        {
                            arr_32 [i_4] [i_4] [i_6] [i_8] [i_9 + 1] = ((/* implicit */_Bool) var_16);
                            arr_33 [i_9] [i_5] [i_4] [4LL] [i_5] [i_4] = ((/* implicit */unsigned long long int) ((_Bool) ((unsigned short) var_10)));
                            arr_34 [4] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */short) (-(((unsigned long long int) 3743848437U))));
                            arr_35 [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */_Bool) ((unsigned long long int) ((unsigned long long int) arr_2 [i_4] [i_4] [i_4])));
                            arr_36 [i_4] [i_4] [i_8] [i_9] = ((/* implicit */unsigned int) ((arr_13 [i_4] [i_4]) == (((/* implicit */int) ((unsigned short) (_Bool)1)))));
                        }
                        for (unsigned short i_10 = 0; i_10 < 10; i_10 += 2) 
                        {
                            arr_39 [i_4] [i_5] [i_8] = var_5;
                            var_31 = ((/* implicit */long long int) ((((var_11) >> (((((/* implicit */int) (short)-22847)) + (22867))))) != (((((/* implicit */_Bool) arr_12 [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_4] [i_10]))) : (var_3)))));
                        }
                        for (short i_11 = 0; i_11 < 10; i_11 += 2) 
                        {
                            var_32 = ((/* implicit */unsigned int) (+(1785207264)));
                            arr_42 [i_11] [i_8] [5] [5] [i_4] [1ULL] [i_4] = ((/* implicit */int) (((-(var_10))) * (var_0)));
                            var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [1] [i_8])) ? ((+(var_9))) : (((((/* implicit */_Bool) arr_27 [i_4] [i_4] [i_4] [i_4])) ? (arr_4 [(unsigned short)10] [(unsigned short)10] [(unsigned short)10]) : (((/* implicit */int) var_12)))))))));
                            arr_43 [i_5] [6ULL] = ((/* implicit */unsigned long long int) arr_16 [i_11] [(signed char)5]);
                            arr_44 [i_4] [i_8] [2ULL] = ((((/* implicit */_Bool) ((arr_18 [7LL] [i_8]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_3)))) ? (((/* implicit */long long int) arr_4 [i_4] [i_6] [i_8])) : (arr_3 [i_4] [i_5] [i_6]));
                        }
                        for (unsigned short i_12 = 0; i_12 < 10; i_12 += 2) 
                        {
                            var_34 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_20 [i_12] [9ULL] [i_4])) != (((/* implicit */int) var_8)))) ? (((/* implicit */int) ((unsigned char) arr_13 [i_4] [i_8]))) : (((/* implicit */int) arr_2 [i_5] [i_6] [(short)3]))));
                            arr_48 [i_4] [i_5] [i_6] [i_8] [i_8] = ((/* implicit */short) (-(((/* implicit */int) ((_Bool) var_15)))));
                            arr_49 [7ULL] [i_12] = ((/* implicit */unsigned long long int) 164951453354514034LL);
                            arr_50 [7ULL] [7ULL] [7ULL] [7ULL] [7ULL] [(unsigned short)6] = ((((/* implicit */int) var_7)) & (((/* implicit */int) var_8)));
                        }
                    }
                    arr_51 [i_4] = ((/* implicit */short) arr_30 [(unsigned char)5] [i_5] [(unsigned char)8] [i_6] [i_6]);
                    arr_52 [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_16 [3ULL] [i_6])) / (arr_8 [i_4] [i_5] [(_Bool)1])))) ? (((/* implicit */long long int) arr_4 [i_5] [i_5] [i_5])) : (((((/* implicit */long long int) ((/* implicit */int) var_1))) | (arr_27 [i_4] [i_4] [5LL] [i_4])))));
                }
            } 
        } 
    }
    for (int i_13 = 2; i_13 < 23; i_13 += 2) 
    {
        /* LoopSeq 1 */
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            arr_57 [i_13] [i_13] = ((/* implicit */unsigned char) arr_54 [i_13 + 1]);
            /* LoopNest 2 */
            for (unsigned char i_15 = 0; i_15 < 24; i_15 += 3) 
            {
                for (short i_16 = 4; i_16 < 23; i_16 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_17 = 0; i_17 < 24; i_17 += 3) 
                        {
                            var_35 = ((/* implicit */unsigned char) var_8);
                            var_36 = ((/* implicit */unsigned long long int) ((_Bool) ((unsigned short) arr_63 [i_13] [i_14] [(signed char)19] [i_16 - 4] [i_14])));
                        }
                        var_37 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) arr_58 [i_16 - 1])) : (min((var_3), (((/* implicit */unsigned long long int) arr_63 [i_13] [i_14] [i_14] [i_13] [i_16 - 3])))))));
                    }
                } 
            } 
            arr_64 [i_14] = ((/* implicit */short) ((var_7) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_63 [i_13 - 2] [i_13 - 2] [20] [i_13 + 1] [i_14]))))) : (max((((/* implicit */unsigned long long int) arr_63 [i_13] [i_14] [i_14] [i_13 + 1] [i_14])), (var_0)))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_18 = 2; i_18 < 21; i_18 += 2) 
            {
                var_38 = ((/* implicit */unsigned short) ((_Bool) var_15));
                /* LoopSeq 3 */
                for (unsigned short i_19 = 0; i_19 < 24; i_19 += 3) 
                {
                    var_39 = ((/* implicit */signed char) arr_62 [i_19] [i_18] [i_14] [i_13] [i_13]);
                    arr_72 [i_13] [i_14] [i_18] [15LL] = ((/* implicit */int) ((unsigned long long int) var_6));
                    /* LoopSeq 2 */
                    for (unsigned char i_20 = 1; i_20 < 22; i_20 += 3) 
                    {
                        var_40 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_67 [i_20] [7LL] [i_20]))));
                        arr_75 [16] [i_14] [1ULL] [i_19] [(unsigned char)11] [i_14] = ((/* implicit */short) ((long long int) (((_Bool)1) ? (((/* implicit */int) arr_56 [i_13] [i_13])) : (((/* implicit */int) arr_73 [i_18] [i_18])))));
                        var_41 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_56 [i_13 + 1] [i_18 + 3]))) : ((((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_71 [i_20] [(short)12] [i_18]))) : (var_10)))));
                        arr_76 [i_13 + 1] [2ULL] [20] [20] [i_20 - 1] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-92)) ? (((((/* implicit */_Bool) -1)) ? (((/* implicit */int) (short)-32127)) : (((/* implicit */int) (short)32127)))) : (((/* implicit */int) (short)32141))));
                        var_42 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_65 [6ULL] [i_18 - 2] [(short)8] [i_20 + 1])) ? (arr_65 [(unsigned short)2] [i_18 + 1] [i_20] [i_20 + 1]) : (arr_65 [i_18] [i_18 + 3] [i_18 + 3] [i_20 - 1])));
                    }
                    for (unsigned short i_21 = 0; i_21 < 24; i_21 += 2) 
                    {
                        var_43 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_58 [i_13])) >= (((((/* implicit */_Bool) var_11)) ? (8954698740076719729LL) : (((/* implicit */long long int) 853144746))))));
                        arr_81 [17LL] [17LL] [17] [i_19] [17LL] [i_21] = ((/* implicit */unsigned long long int) var_16);
                        var_44 = ((/* implicit */unsigned short) var_11);
                    }
                    var_45 = ((/* implicit */unsigned short) arr_67 [i_14] [i_18] [15]);
                }
                for (unsigned long long int i_22 = 3; i_22 < 22; i_22 += 2) 
                {
                    arr_84 [(unsigned short)20] [9] [i_18 + 3] [11ULL] = arr_59 [i_13] [12] [i_13] [12];
                    var_46 = ((/* implicit */long long int) ((arr_59 [i_13 + 1] [i_22 - 2] [i_22 - 3] [2LL]) ? (((/* implicit */int) var_18)) : (((/* implicit */int) arr_69 [i_13 - 2]))));
                }
                for (int i_23 = 0; i_23 < 24; i_23 += 3) 
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_24 = 2; i_24 < 22; i_24 += 2) 
                    {
                        var_47 *= ((/* implicit */long long int) ((((unsigned long long int) var_1)) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_77 [i_24 + 2] [3LL] [i_24 + 1] [i_18 - 2] [i_18] [i_18])))));
                        var_48 = ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_70 [3ULL] [i_18 + 1] [i_23] [i_24 + 2])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_56 [i_13] [i_14]))))));
                        var_49 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_59 [i_18] [i_18] [i_14] [2])))))));
                        arr_90 [i_13] [(_Bool)1] [i_18] [i_23] [i_24 - 2] [(_Bool)0] = ((/* implicit */unsigned long long int) 2147483647);
                    }
                    for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                    {
                        arr_94 [i_25] [i_18] = ((/* implicit */unsigned long long int) ((unsigned short) ((unsigned short) var_12)));
                        arr_95 [i_14] [i_25] [i_25] = ((/* implicit */long long int) var_13);
                        var_50 = ((/* implicit */short) ((arr_66 [(short)22] [i_23] [i_18] [i_14]) >> (((arr_92 [(short)19] [i_14]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_67 [i_13] [i_13] [(unsigned short)0])))))));
                        arr_96 [i_13] [i_14] [i_25] [(_Bool)1] [(_Bool)1] = ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)32770))) / (3492098028741157202LL)))) * (((((/* implicit */_Bool) -2147483647)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))));
                    }
                    for (int i_26 = 1; i_26 < 23; i_26 += 2) 
                    {
                        var_51 ^= ((/* implicit */long long int) (~(arr_78 [i_13 - 1] [(short)17] [i_18 + 1] [i_23] [i_18 + 1])));
                        var_52 = ((/* implicit */unsigned int) (!(var_12)));
                        arr_99 [i_13] [(unsigned short)12] [22ULL] [22ULL] [i_23] [i_26 + 1] = ((/* implicit */unsigned char) 524160U);
                    }
                    var_53 |= ((/* implicit */short) ((long long int) arr_88 [i_13] [i_14] [i_18] [i_18] [(unsigned char)14]));
                    arr_100 [i_13] [i_13] [i_13] [i_13] = ((((/* implicit */long long int) ((/* implicit */int) (short)-32127))) % (-7766729917594731182LL));
                    arr_101 [i_13] [(unsigned short)5] [(unsigned short)20] [14U] = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) arr_55 [i_13] [i_18 - 1] [i_18 - 1])) : (((/* implicit */int) arr_82 [(unsigned short)6] [i_23]))));
                    arr_102 [i_13] [i_14] [i_18] [i_23] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_62 [i_13 - 1] [i_14] [i_18] [i_18] [i_18])))) + (((((/* implicit */_Bool) arr_83 [i_13] [i_14] [(_Bool)1])) ? (arr_92 [15] [(short)6]) : (var_13)))));
                }
            }
        }
        arr_103 [(unsigned char)2] = ((/* implicit */short) ((unsigned long long int) (+(((((/* implicit */_Bool) arr_65 [i_13] [i_13 + 1] [i_13] [(_Bool)1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_74 [(unsigned short)0] [(_Bool)1] [i_13] [i_13] [19ULL])))))));
        var_54 += ((/* implicit */unsigned int) ((unsigned long long int) var_14));
        var_55 |= ((/* implicit */_Bool) arr_66 [i_13] [i_13] [i_13] [i_13]);
    }
}
