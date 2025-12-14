/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33988
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
    var_17 = var_16;
    var_18 -= ((/* implicit */int) var_5);
    var_19 = ((/* implicit */_Bool) var_16);
    var_20 |= ((/* implicit */signed char) max((var_4), (((/* implicit */unsigned char) var_1))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        arr_3 [i_0] [0] = ((/* implicit */unsigned int) var_14);
        arr_4 [i_0] [i_0] = ((/* implicit */int) 7170924846159109712LL);
        var_21 = ((((/* implicit */_Bool) min((arr_1 [(unsigned short)4]), (arr_1 [i_0])))) ? ((+(((/* implicit */int) arr_2 [i_0])))) : ((+(((/* implicit */int) arr_2 [i_0])))));
        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) max((((/* implicit */int) (unsigned short)38551)), (-2147483645))))));
        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((long long int) min((((((/* implicit */_Bool) 2147483644)) ? (1372350506U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-27))))), (((/* implicit */unsigned int) arr_2 [i_0]))))))));
    }
    for (unsigned char i_1 = 2; i_1 < 9; i_1 += 4) 
    {
        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1 - 1]))) : (((((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_0 [4U]) : (arr_0 [i_1]))) + (((/* implicit */unsigned long long int) (~(3931690733U))))))));
        /* LoopSeq 4 */
        for (unsigned int i_2 = 2; i_2 < 8; i_2 += 3) 
        {
            arr_9 [i_2] [i_2] = ((/* implicit */signed char) (~(((/* implicit */int) min((arr_2 [i_1]), (arr_8 [i_1 - 1] [i_2 + 1]))))));
            var_25 ^= ((/* implicit */unsigned int) var_5);
            arr_10 [(short)4] [i_2] [i_1] |= ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) arr_0 [i_1 - 1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_8 [i_1 - 1] [i_1 - 1])))));
        }
        for (unsigned long long int i_3 = 1; i_3 < 7; i_3 += 4) 
        {
            var_26 ^= ((/* implicit */unsigned long long int) (signed char)-7);
            arr_13 [i_1] [(unsigned short)0] = ((/* implicit */unsigned short) arr_5 [i_1 - 2]);
            arr_14 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (1372350506U)))), (arr_0 [6ULL])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_3]))) : (((((/* implicit */_Bool) ((int) var_13))) ? (((((/* implicit */_Bool) (unsigned char)173)) ? (arr_0 [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7)))))))));
        }
        for (long long int i_4 = 3; i_4 < 9; i_4 += 1) /* same iter space */
        {
            arr_17 [i_1 - 1] [i_4] = ((/* implicit */_Bool) (~(((((((/* implicit */int) var_14)) - (((/* implicit */int) (unsigned char)173)))) % (((/* implicit */int) ((unsigned short) (unsigned short)58835)))))));
            arr_18 [i_1 - 1] [i_4] [(_Bool)1] = ((/* implicit */int) min(((+((-(0ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-23411))) : (0U))))));
        }
        for (long long int i_5 = 3; i_5 < 9; i_5 += 1) /* same iter space */
        {
            /* LoopSeq 3 */
            for (signed char i_6 = 1; i_6 < 10; i_6 += 2) 
            {
                arr_24 [i_6] [4] [i_6 - 1] [i_1 - 1] = ((/* implicit */unsigned long long int) min((((/* implicit */int) arr_2 [i_5 - 1])), (((((/* implicit */_Bool) arr_2 [i_1 + 2])) ? (arr_23 [i_1 - 2] [i_1 + 2] [i_6]) : (((/* implicit */int) (unsigned short)14775))))));
                var_27 = ((/* implicit */unsigned short) (-((-(arr_19 [i_5 - 3])))));
                var_28 = ((/* implicit */int) arr_11 [i_1 - 2] [i_6 - 1] [2U]);
            }
            for (unsigned char i_7 = 0; i_7 < 11; i_7 += 4) /* same iter space */
            {
                var_29 -= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (arr_22 [i_1 + 1] [i_1] [i_1 - 1] [i_1 - 1]))), ((~(arr_22 [10LL] [i_7] [8U] [i_1 - 1])))));
                arr_27 [(unsigned short)9] [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) var_5))));
            }
            for (unsigned char i_8 = 0; i_8 < 11; i_8 += 4) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_9 = 2; i_9 < 10; i_9 += 3) 
                {
                    var_30 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((unsigned int) 36668078U))), (arr_0 [i_1 + 2])))) ? (max((((2147483644) - (((/* implicit */int) arr_5 [i_1])))), (((((/* implicit */int) var_10)) - (((/* implicit */int) (unsigned char)23)))))) : (((/* implicit */int) arr_2 [(short)12]))));
                    arr_36 [1U] [i_5 + 2] [1U] [4LL] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((19ULL) << (((/* implicit */int) (signed char)41))))) ? (-2147483640) : (((((/* implicit */_Bool) 2922616777U)) ? (((/* implicit */int) arr_2 [i_1 - 2])) : (((/* implicit */int) arr_2 [i_1 + 2]))))));
                    arr_37 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) var_0);
                }
                for (signed char i_10 = 0; i_10 < 11; i_10 += 2) 
                {
                    arr_40 [i_8] [i_5 - 1] [i_8] [i_10] = ((/* implicit */long long int) max(((~(arr_26 [i_1 - 2] [i_1 + 1] [i_1 - 2]))), (arr_19 [i_1])));
                    var_31 = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                }
                arr_41 [i_1] [i_1 - 2] [i_1 - 2] [5ULL] = (~(arr_22 [i_1 + 2] [i_1] [i_1 - 1] [i_1]));
                var_32 = 36668097U;
                /* LoopSeq 2 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    arr_44 [i_1] [i_5] [i_11] [i_11] [i_5] = ((/* implicit */unsigned short) var_5);
                    var_33 = ((/* implicit */long long int) max((var_33), (((/* implicit */long long int) max((min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 2922616789U))))), (arr_31 [i_1 + 2]))), (((/* implicit */unsigned long long int) ((unsigned int) (!(((/* implicit */_Bool) arr_2 [i_1])))))))))));
                    /* LoopSeq 2 */
                    for (signed char i_12 = 0; i_12 < 11; i_12 += 1) /* same iter space */
                    {
                        var_34 ^= ((signed char) ((int) ((((/* implicit */_Bool) var_1)) ? (2922616772U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)68))))));
                        arr_47 [i_1] [i_1] [(short)4] [i_11] [(short)4] [(short)4] [5U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_1 [i_1 + 2]), (arr_1 [i_1 + 2])))) && (((((/* implicit */_Bool) min((arr_46 [i_12] [i_1] [4U] [i_5 - 2] [i_1]), (((/* implicit */unsigned long long int) var_16))))) && (((/* implicit */_Bool) arr_11 [i_8] [i_5 + 2] [i_1 - 1]))))));
                    }
                    for (signed char i_13 = 0; i_13 < 11; i_13 += 1) /* same iter space */
                    {
                        var_35 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((min((((/* implicit */unsigned int) arr_12 [i_11])), (arr_26 [i_1 + 1] [i_1 + 1] [(_Bool)1]))), (arr_35 [i_1] [9U] [i_8] [(unsigned short)9] [i_13]))))));
                        arr_52 [i_8] [i_5] [(_Bool)1] = ((/* implicit */signed char) ((min((arr_0 [i_1 - 1]), (((/* implicit */unsigned long long int) arr_34 [(_Bool)1] [i_5 - 3] [(signed char)5] [6ULL] [i_1 - 1])))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_11 [i_5 + 2] [i_5] [(short)5])) : (((/* implicit */int) arr_28 [i_5 + 2] [i_5 - 3])))))));
                        var_36 = ((/* implicit */unsigned int) max((-2062926500), (((((/* implicit */_Bool) arr_28 [i_5 - 3] [i_1 - 1])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_28 [i_5 - 3] [i_1 - 1]))))));
                        arr_53 [i_1] [i_5] [i_8] [0ULL] [i_13] = ((/* implicit */unsigned short) min((min((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-93))) == (36668078U)))), (arr_22 [i_5 + 2] [i_8] [2LL] [(signed char)4]))), (((/* implicit */int) min((((/* implicit */signed char) ((_Bool) arr_35 [i_1] [i_1 + 1] [i_1] [i_1] [i_1 + 2]))), (var_9))))));
                        arr_54 [7ULL] [7ULL] [i_1 + 2] = ((/* implicit */unsigned int) ((int) (!(((/* implicit */_Bool) arr_46 [i_1] [(unsigned short)8] [i_5 - 3] [i_11] [i_1 + 2])))));
                    }
                    arr_55 [i_1] [i_5] [i_1] [i_11] = ((/* implicit */unsigned int) var_9);
                }
                /* vectorizable */
                for (signed char i_14 = 0; i_14 < 11; i_14 += 4) 
                {
                    var_37 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_11)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) ^ (arr_46 [i_1] [(signed char)5] [i_8] [i_14] [(signed char)8])))));
                    var_38 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_45 [i_1 + 2] [(unsigned char)6] [i_14] [(short)9] [i_5 - 2] [8U]))));
                }
            }
            var_39 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (+(((/* implicit */int) var_16))))), ((-(arr_58 [i_5 - 2] [i_5] [i_5 - 2])))));
            /* LoopSeq 3 */
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                arr_61 [i_15] [i_1] [1U] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_31 [i_1])) ? (arr_51 [i_1] [i_5 + 2] [i_15]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1] [i_15]))))) + (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_5]))))))))) && (((/* implicit */_Bool) var_4))));
                var_40 = ((/* implicit */int) 23U);
                var_41 = ((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (unsigned char)224)), (var_6)))), (arr_0 [i_15]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((-1622455722) / (1902073870)))))))));
            }
            for (signed char i_16 = 0; i_16 < 11; i_16 += 1) 
            {
                var_42 = ((/* implicit */long long int) ((unsigned int) max((arr_16 [i_16] [i_5]), (((/* implicit */unsigned long long int) arr_60 [i_1] [i_1 - 2] [i_1] [i_1 - 2])))));
                var_43 = ((/* implicit */unsigned int) (+((~(((/* implicit */int) arr_32 [i_1 + 2] [i_5 + 1] [i_16] [0U] [(unsigned char)6]))))));
                var_44 ^= ((/* implicit */unsigned int) min((1814042230), (((/* implicit */int) (unsigned short)22776))));
                arr_65 [i_16] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_34 [i_1] [i_1] [i_1] [i_1] [5])) || (((/* implicit */_Bool) arr_56 [i_1] [0ULL] [i_1 - 1] [i_5 - 1]))));
            }
            /* vectorizable */
            for (int i_17 = 0; i_17 < 11; i_17 += 1) 
            {
                arr_69 [i_1] = ((/* implicit */unsigned short) var_1);
                /* LoopSeq 3 */
                for (unsigned short i_18 = 0; i_18 < 11; i_18 += 1) /* same iter space */
                {
                    arr_72 [i_5] [i_5] [(unsigned short)10] [i_18] [i_5] [i_18] = ((/* implicit */int) ((2094337739U) <= (((/* implicit */unsigned int) arr_68 [i_1 + 2]))));
                    arr_73 [(unsigned short)2] [(unsigned short)2] [i_5 - 3] [i_17] [(signed char)9] [i_18] = ((unsigned int) arr_29 [i_5 - 2] [i_1] [i_1] [i_1 - 1]);
                    arr_74 [(signed char)6] [(signed char)6] [i_17] [i_18] = ((/* implicit */unsigned int) ((short) arr_63 [i_1 + 2] [i_1 + 2]));
                    arr_75 [i_1 + 2] [i_1] [i_1] [i_1 - 2] [i_1 + 2] [2U] = ((((((/* implicit */_Bool) arr_66 [i_1 - 2] [(_Bool)0])) ? (var_0) : (((/* implicit */unsigned int) 1810266727)))) - (((/* implicit */unsigned int) ((/* implicit */int) var_7))));
                }
                for (unsigned short i_19 = 0; i_19 < 11; i_19 += 1) /* same iter space */
                {
                    var_45 = ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) var_16))))));
                    /* LoopSeq 3 */
                    for (unsigned int i_20 = 0; i_20 < 11; i_20 += 4) 
                    {
                        arr_80 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 2] = ((/* implicit */unsigned int) arr_20 [10U] [i_5 - 3]);
                        arr_81 [8ULL] [i_5] [i_5] [i_5 + 1] [i_5] = ((/* implicit */signed char) ((unsigned int) arr_59 [i_1 - 2] [i_1 - 2] [i_1 - 2]));
                    }
                    for (unsigned short i_21 = 0; i_21 < 11; i_21 += 1) /* same iter space */
                    {
                        arr_84 [i_17] [0U] [8LL] [0U] [0U] [8LL] &= ((/* implicit */unsigned int) arr_70 [i_5 + 1]);
                        var_46 = ((/* implicit */int) arr_45 [2U] [i_5 - 1] [(unsigned short)4] [i_5 - 1] [i_1] [i_1 + 1]);
                        arr_85 [i_1 - 1] = ((/* implicit */signed char) ((((/* implicit */unsigned int) (~(var_15)))) + (arr_21 [i_1 - 1] [i_1])));
                    }
                    for (unsigned short i_22 = 0; i_22 < 11; i_22 += 1) /* same iter space */
                    {
                        arr_89 [i_5] [i_5 - 3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_31 [i_1 + 2])) ? (1401169043U) : (((/* implicit */unsigned int) 0))));
                        var_47 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_82 [i_5 - 1] [7LL] [i_19] [i_1 - 1]))));
                        arr_90 [i_17] [i_5] [i_17] [i_19] [i_22] = ((/* implicit */unsigned short) (~(17557275651464388838ULL)));
                        arr_91 [i_22] [(unsigned short)4] [7] [(signed char)8] = ((/* implicit */unsigned int) arr_64 [i_5 - 1] [i_1 + 2]);
                    }
                    arr_92 [5U] [(unsigned char)3] [i_17] [i_17] [i_17] = ((/* implicit */_Bool) ((arr_21 [i_1 - 2] [i_1]) + (((/* implicit */unsigned int) arr_56 [2ULL] [1LL] [i_5 - 1] [i_1 - 1]))));
                    var_48 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) == (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_1] [i_5])))))));
                }
                for (unsigned short i_23 = 0; i_23 < 11; i_23 += 1) /* same iter space */
                {
                    var_49 = ((/* implicit */unsigned short) 29155135);
                    var_50 = ((/* implicit */unsigned int) (~(29155142)));
                    var_51 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_5 - 2] [i_1 - 1] [i_1 + 2])) ? (((/* implicit */unsigned int) arr_20 [i_1 + 1] [i_5 + 1])) : ((+(1372350508U)))));
                    /* LoopSeq 2 */
                    for (signed char i_24 = 0; i_24 < 11; i_24 += 1) 
                    {
                        var_52 ^= var_0;
                        arr_98 [i_1] [i_23] [i_17] [i_1] [i_23] = arr_95 [i_1] [i_23] [3U] [i_23] [4U];
                        var_53 = ((/* implicit */unsigned short) var_5);
                    }
                    for (unsigned short i_25 = 4; i_25 < 8; i_25 += 3) 
                    {
                        arr_102 [i_23] = ((/* implicit */unsigned int) arr_82 [i_5] [i_5 + 2] [i_5] [i_25 + 1]);
                        arr_103 [i_1] [i_5] [i_23] [i_23] [i_25] = ((/* implicit */unsigned int) (+(((((/* implicit */int) var_7)) << (((2062926501) - (2062926495)))))));
                        var_54 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_86 [i_1] [i_5 + 2] [4LL] [i_23] [i_25] [i_25 - 1] [i_1 + 2])) ? (arr_86 [i_1] [i_5] [i_17] [(unsigned short)9] [i_25] [i_25 + 1] [i_1 + 2]) : (arr_86 [i_1] [i_5 - 1] [i_1] [i_5 - 1] [i_25 - 2] [i_25 + 3] [i_1 + 2])));
                        var_55 ^= ((/* implicit */short) (+(((/* implicit */int) var_8))));
                        arr_104 [i_1] [i_23] [8U] [8U] [(short)7] [i_1] = ((/* implicit */_Bool) ((((-2062926500) <= (((/* implicit */int) var_6)))) ? (((/* implicit */int) arr_79 [i_1] [i_5] [i_17] [i_23] [i_25])) : (((/* implicit */int) var_8))));
                    }
                }
                var_56 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_70 [i_1 - 1]))) : (arr_34 [i_1] [i_5] [(unsigned short)1] [i_1] [i_17])));
            }
        }
    }
}
