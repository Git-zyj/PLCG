/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41006
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
    var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) ((unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) - (0U))) + (max((var_13), (((/* implicit */unsigned int) var_11))))))))));
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)56087)) / (((/* implicit */int) (unsigned short)56087))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) min((min((((/* implicit */unsigned short) arr_1 [i_0] [i_0])), (arr_3 [i_0]))), (((/* implicit */unsigned short) arr_1 [i_0] [i_0]))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (short i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        arr_14 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((unsigned short)20866), ((unsigned short)56087)))) ? (((/* implicit */int) arr_11 [i_2] [i_2] [i_0])) : (((/* implicit */int) (unsigned short)20869))))) * (min((((/* implicit */unsigned long long int) ((signed char) arr_2 [i_0]))), (arr_2 [i_1])))));
                        arr_15 [i_1] [i_1] [i_3] = (i_1 % 2 == 0) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)44657)), (arr_2 [i_0])))) ? (((arr_7 [i_1] [i_1] [i_2]) << (((((/* implicit */int) arr_13 [i_1] [i_2])) - (171))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_5 [i_2] [(unsigned char)3] [i_2])), (arr_6 [i_1]))))))))) : (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)44657)), (arr_2 [i_0])))) ? (((arr_7 [i_1] [i_1] [i_2]) << (((((((/* implicit */int) arr_13 [i_1] [i_2])) - (171))) + (124))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_5 [i_2] [(unsigned char)3] [i_2])), (arr_6 [i_1])))))))));
                        var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((int) arr_3 [i_1])))));
                        arr_16 [i_3] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)20866)) == (((/* implicit */int) (unsigned short)20869))));
                        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) max((min((((/* implicit */unsigned long long int) 788610751U)), (min((arr_7 [i_3] [i_1] [i_3]), (arr_7 [i_3] [i_3] [i_3]))))), (((/* implicit */unsigned long long int) ((int) ((((/* implicit */int) arr_8 [(short)1] [i_1] [(short)1])) & (((/* implicit */int) arr_3 [i_1])))))))))));
                    }
                    for (unsigned short i_4 = 1; i_4 < 21; i_4 += 4) 
                    {
                        var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((long long int) (signed char)(-127 - 1))))));
                        var_19 *= ((/* implicit */_Bool) ((int) ((((/* implicit */int) arr_18 [i_4 - 1] [i_4 - 1] [i_4 + 2] [i_4 + 3])) > (((/* implicit */int) (unsigned short)44669)))));
                    }
                    for (int i_5 = 2; i_5 < 22; i_5 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_6 = 1; i_6 < 22; i_6 += 4) 
                        {
                            var_20 = ((/* implicit */unsigned long long int) arr_6 [i_1]);
                            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) min((min((((((/* implicit */int) arr_22 [i_5] [i_0] [i_5 - 1] [i_5] [i_5 + 2])) * (((/* implicit */int) (unsigned short)20869)))), (((/* implicit */int) arr_3 [i_6 - 1])))), (((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [i_0])))))));
                            arr_24 [i_5] [i_1] [(unsigned char)0] = ((/* implicit */int) max((min((((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_5 + 2] [i_1] [i_2] [i_2] [i_6] [i_0]))) : (arr_2 [i_0]))), (((/* implicit */unsigned long long int) arr_18 [i_0] [i_1] [i_2] [i_5])))), (((((/* implicit */_Bool) arr_1 [i_6 + 1] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)44670))) : (35756740680670115ULL)))));
                            arr_25 [i_6] [i_5 - 1] [i_1] [i_1] [i_1] [(unsigned char)17] = ((/* implicit */unsigned char) max(((~(min((-1658289478), (((/* implicit */int) (signed char)-100)))))), (min((((int) 18U)), (((/* implicit */int) arr_10 [i_2] [i_2] [i_2] [i_5 + 1] [i_6 - 1] [i_6]))))));
                        }
                        arr_26 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) arr_13 [i_1] [i_1]))) | (((((/* implicit */int) (short)4728)) & (((/* implicit */int) arr_3 [i_2]))))));
                    }
                    var_22 = ((/* implicit */unsigned short) min((((int) (unsigned short)20869)), (((/* implicit */int) ((short) arr_19 [i_0])))));
                    arr_27 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) (unsigned short)44517)), (arr_23 [i_0] [i_0] [i_1] [i_2] [i_2]))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_7 [i_1] [i_1] [i_1]))))));
                    var_23 *= ((/* implicit */_Bool) max((((/* implicit */unsigned int) min(((signed char)56), ((signed char)119)))), (min((((/* implicit */unsigned int) min((268435456), (((/* implicit */int) (unsigned char)219))))), (4294967258U)))));
                }
            } 
        } 
        arr_28 [(signed char)12] = ((/* implicit */unsigned char) ((signed char) arr_9 [i_0] [i_0]));
        /* LoopSeq 2 */
        for (unsigned char i_7 = 0; i_7 < 24; i_7 += 3) 
        {
            arr_32 [i_7] [i_0] [i_7] = ((short) ((unsigned long long int) 15592255033569407501ULL));
            /* LoopSeq 3 */
            for (unsigned short i_8 = 1; i_8 < 23; i_8 += 2) /* same iter space */
            {
                arr_37 [i_0] [(signed char)8] [i_7] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) arr_29 [i_8 - 1]))) ? (((((/* implicit */_Bool) arr_23 [i_8 - 1] [i_8] [i_8] [i_0] [i_8])) ? (arr_23 [i_8 - 1] [i_7] [i_0] [i_8] [i_0]) : (arr_23 [i_8 - 1] [i_8] [i_8] [i_0] [i_0]))) : (min((((/* implicit */unsigned long long int) arr_13 [i_7] [i_8 - 1])), (35756740680670115ULL)))));
                var_24 = ((/* implicit */signed char) arr_11 [i_0] [i_0] [i_8]);
                var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) arr_31 [i_0] [i_7]))));
            }
            for (unsigned short i_9 = 1; i_9 < 23; i_9 += 2) /* same iter space */
            {
                arr_40 [i_0] [i_0] [i_0] [i_7] = ((/* implicit */unsigned int) ((unsigned char) ((int) arr_13 [i_7] [i_7])));
                /* LoopSeq 1 */
                for (signed char i_10 = 1; i_10 < 23; i_10 += 3) 
                {
                    var_26 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((unsigned short)9445), (((/* implicit */unsigned short) (signed char)93))))) ? (((/* implicit */int) ((unsigned short) ((int) arr_34 [i_10] [i_9] [i_7] [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) min(((short)-20082), (((/* implicit */short) arr_11 [i_9] [i_7] [i_0]))))))))));
                    arr_43 [i_0] [i_7] [(_Bool)1] [i_10] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */int) ((signed char) arr_2 [i_0]))) & (((/* implicit */int) arr_11 [i_9] [i_9 - 1] [i_9])))));
                }
            }
            for (unsigned short i_11 = 1; i_11 < 23; i_11 += 2) /* same iter space */
            {
                arr_46 [i_0] [i_0] [i_7] = ((/* implicit */signed char) ((_Bool) 1072693248U));
                var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) ((unsigned char) max((arr_7 [i_0] [i_11] [i_11 - 1]), (arr_7 [i_0] [i_7] [i_11 - 1])))))));
            }
        }
        for (signed char i_12 = 0; i_12 < 24; i_12 += 4) 
        {
            var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) ((unsigned short) ((unsigned int) (-(((/* implicit */int) arr_35 [i_12])))))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_13 = 0; i_13 < 24; i_13 += 3) /* same iter space */
            {
                arr_54 [i_0] [i_0] [i_0] [i_13] = ((/* implicit */unsigned char) ((max((arr_2 [i_0]), (arr_23 [i_13] [i_13] [i_13] [i_13] [i_13]))) % (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_20 [i_13] [i_12] [9U] [i_0] [i_0] [i_0]), (arr_20 [i_13] [i_13] [i_12] [i_0] [i_0] [i_0])))))));
                /* LoopSeq 1 */
                for (unsigned short i_14 = 0; i_14 < 24; i_14 += 1) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_15 = 0; i_15 < 24; i_15 += 2) 
                    {
                        var_29 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_13] [i_14] [i_13]))) < (arr_58 [i_15] [i_14] [i_13] [i_12] [i_0])));
                        var_30 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_0])) ? (1658289478) : (((/* implicit */int) arr_3 [i_12]))));
                        arr_59 [i_14] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_35 [i_0]))));
                        var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) ((unsigned int) ((long long int) (short)0))))));
                        arr_60 [i_0] [i_13] [i_14] [i_14] [i_13] = arr_41 [i_0];
                    }
                    /* LoopSeq 1 */
                    for (long long int i_16 = 0; i_16 < 24; i_16 += 2) 
                    {
                        var_32 *= ((/* implicit */unsigned int) min((((/* implicit */int) ((signed char) ((unsigned int) 10870216534225905250ULL)))), (((((/* implicit */int) arr_19 [i_16])) - (((/* implicit */int) ((unsigned short) arr_49 [i_0] [i_0] [i_0])))))));
                        var_33 = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((unsigned int) arr_45 [i_0] [i_13] [i_14] [i_16]))) & (((arr_9 [i_13] [i_16]) | (((/* implicit */unsigned long long int) arr_56 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_14])))));
                    }
                    arr_64 [i_14] [i_13] [i_12] [i_14] = ((/* implicit */_Bool) ((unsigned int) arr_55 [i_14] [i_13] [i_12] [i_0]));
                }
                arr_65 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 312396386U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))) : (4262878387U)))) | (((((/* implicit */_Bool) arr_3 [i_0])) ? (27ULL) : (((/* implicit */unsigned long long int) 251658240U))))))) ? (((/* implicit */int) ((unsigned short) (unsigned char)0))) : (((/* implicit */int) ((unsigned short) (~(arr_53 [i_0])))))));
            }
            for (unsigned long long int i_17 = 0; i_17 < 24; i_17 += 3) /* same iter space */
            {
                /* LoopSeq 1 */
                for (short i_18 = 0; i_18 < 24; i_18 += 1) 
                {
                    var_34 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) ((arr_31 [i_12] [i_12]) <= (((/* implicit */int) arr_57 [i_0] [i_0] [i_17] [i_17] [i_18] [i_18])))))) ? (arr_53 [i_17]) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((short) (signed char)7)))))));
                    arr_72 [i_0] [i_18] [i_18] [i_17] [i_18] [i_18] = ((/* implicit */long long int) ((((_Bool) (~(((/* implicit */int) (unsigned short)44667))))) ? (((/* implicit */int) arr_57 [i_0] [i_18] [i_0] [i_12] [i_0] [i_18])) : (((/* implicit */int) ((unsigned char) (unsigned short)0)))));
                }
                /* LoopSeq 2 */
                for (unsigned short i_19 = 2; i_19 < 22; i_19 += 2) 
                {
                    /* LoopSeq 4 */
                    for (unsigned int i_20 = 0; i_20 < 24; i_20 += 1) 
                    {
                        arr_77 [i_0] [i_12] [i_17] [i_0] [i_20] = ((/* implicit */unsigned short) arr_69 [i_0] [i_12] [i_19]);
                        arr_78 [i_17] = ((/* implicit */unsigned short) min(((+(arr_29 [i_19 - 1]))), (((/* implicit */unsigned long long int) max((arr_50 [i_17] [i_19 - 1] [i_19] [i_19 - 2]), (((/* implicit */short) arr_73 [i_19 - 2] [i_19 - 1] [i_19 - 1] [i_17] [i_17] [i_17])))))));
                        var_35 = ((/* implicit */signed char) ((short) arr_9 [i_20] [i_12]));
                    }
                    for (unsigned long long int i_21 = 0; i_21 < 24; i_21 += 4) /* same iter space */
                    {
                        var_36 = ((/* implicit */unsigned long long int) max((var_36), (arr_63 [i_0] [i_0] [i_17] [i_17] [i_17])));
                        arr_83 [i_21] [i_0] [i_17] [i_0] [i_12] [i_0] = ((/* implicit */signed char) ((short) min((((/* implicit */unsigned int) (short)-1)), (2568472323U))));
                        arr_84 [i_0] [i_0] [i_17] [i_0] [i_19] [i_21] [i_21] = ((/* implicit */_Bool) (signed char)-10);
                        arr_85 [i_21] [i_12] [i_17] [i_21] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((arr_31 [i_12] [(signed char)16]) % (arr_31 [i_0] [i_0])))), (min((2047ULL), (0ULL)))));
                    }
                    for (unsigned long long int i_22 = 0; i_22 < 24; i_22 += 4) /* same iter space */
                    {
                        var_37 = ((/* implicit */unsigned int) min((var_37), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((11196993026596323202ULL) < (arr_68 [i_19 - 1] [i_19 + 2] [i_19 + 2])))), (((arr_68 [i_19 - 2] [i_19 - 2] [i_19 + 2]) * (arr_68 [i_19 - 1] [i_19 + 2] [i_19 + 2]))))))));
                        arr_88 [i_19] [i_12] = ((/* implicit */unsigned int) arr_3 [i_0]);
                    }
                    for (unsigned long long int i_23 = 0; i_23 < 24; i_23 += 4) /* same iter space */
                    {
                        var_38 *= ((/* implicit */unsigned int) arr_57 [i_0] [i_12] [i_17] [i_19] [i_19] [i_19]);
                        arr_91 [i_19] [i_0] |= (!(((/* implicit */_Bool) max((arr_9 [i_19 + 2] [i_19 + 2]), (((/* implicit */unsigned long long int) arr_22 [i_17] [i_0] [i_19 + 1] [i_19 - 1] [i_23]))))));
                        arr_92 [i_23] [i_19 - 1] [(signed char)5] [i_12] [i_12] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) ((_Bool) (signed char)(-127 - 1))))) ? (((/* implicit */int) ((signed char) 3870389049734405420LL))) : (((/* implicit */int) ((((-3870389049734405420LL) % (((/* implicit */long long int) ((/* implicit */int) arr_49 [i_0] [i_17] [i_19]))))) > (((((/* implicit */_Bool) arr_68 [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_0] [i_19] [i_17] [i_19] [i_23]))) : (-3004431411734011444LL))))))));
                        arr_93 [i_0] [(unsigned char)16] [(unsigned char)16] [(unsigned char)16] [i_19] [i_19] [22U] &= ((/* implicit */unsigned char) 18446744073709551596ULL);
                    }
                    var_39 *= ((/* implicit */short) min((((((/* implicit */_Bool) arr_53 [i_19 - 2])) ? (arr_53 [i_19 + 1]) : (arr_53 [i_19 + 2]))), (((/* implicit */unsigned int) ((unsigned short) arr_56 [i_0] [i_19 + 1] [i_19 + 2] [i_0] [i_12] [(unsigned short)14])))));
                    arr_94 [i_0] [i_12] [(_Bool)1] [i_19] = ((/* implicit */_Bool) min(((~(((/* implicit */int) (signed char)7)))), (((/* implicit */int) min((((((/* implicit */int) arr_41 [i_0])) != (((/* implicit */int) arr_41 [i_17])))), (((_Bool) -3870389049734405420LL)))))));
                }
                for (short i_24 = 0; i_24 < 24; i_24 += 1) 
                {
                    arr_97 [i_24] = ((/* implicit */short) ((unsigned long long int) 3870389049734405420LL));
                    arr_98 [i_24] [i_24] [i_24] = ((/* implicit */unsigned char) ((unsigned short) max((((/* implicit */unsigned long long int) arr_49 [i_24] [i_12] [i_12])), (arr_80 [i_0] [i_17] [i_24]))));
                    var_40 = ((/* implicit */short) arr_89 [i_0] [i_12] [i_17] [i_24]);
                    /* LoopSeq 1 */
                    for (signed char i_25 = 2; i_25 < 20; i_25 += 3) 
                    {
                        var_41 = ((/* implicit */short) min((var_41), (((/* implicit */short) ((((/* implicit */_Bool) min((arr_80 [i_0] [i_12] [i_25 - 2]), (((/* implicit */unsigned long long int) ((signed char) arr_58 [i_0] [i_12] [i_17] [i_0] [i_0])))))) ? (((((/* implicit */_Bool) ((long long int) (short)22))) ? (((/* implicit */int) max((((/* implicit */short) (signed char)7)), ((short)15114)))) : (((int) arr_68 [i_24] [i_17] [i_12])))) : (((/* implicit */int) ((max((((/* implicit */unsigned long long int) arr_31 [i_0] [i_0])), (arr_79 [i_25] [i_24] [i_17] [i_0] [i_0]))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -3870389049734405434LL)) ? (((/* implicit */int) arr_82 [i_17])) : (((/* implicit */int) (short)-32257)))))))))))));
                        arr_101 [i_25] [22] [i_12] [i_17] [i_12] [(_Bool)1] [i_0] &= ((/* implicit */_Bool) ((unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) 33292288ULL))))))));
                        arr_102 [i_0] [i_0] [i_0] [(unsigned char)10] [i_25] &= ((/* implicit */long long int) 18446744073709549546ULL);
                        var_42 = ((/* implicit */unsigned int) min((var_42), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) arr_74 [i_25 + 3] [i_25 + 3] [i_25 + 1] [i_25] [i_25] [i_25 - 1])), ((~(((/* implicit */int) arr_50 [(signed char)17] [(signed char)17] [i_17] [i_24]))))))) ? (((((/* implicit */int) arr_20 [i_25 - 1] [i_25 - 2] [i_25] [i_25 + 4] [i_25 - 2] [i_25])) * (((/* implicit */int) arr_20 [i_25 - 1] [i_25 - 2] [i_25] [i_25 + 4] [i_25] [i_25])))) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_0])))))));
                        var_43 = ((/* implicit */int) arr_21 [i_0] [i_12] [i_24] [i_24]);
                    }
                }
                var_44 = ((/* implicit */unsigned long long int) min((var_44), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (signed char)7)), ((unsigned short)1))))));
            }
        }
    }
}
