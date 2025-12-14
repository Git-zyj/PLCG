/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54711
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
    var_12 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) var_0)), (((((/* implicit */_Bool) ((435716631) ^ (((/* implicit */int) var_11))))) ? (var_4) : (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) >> (((((/* implicit */int) var_1)) - (195))))))))));
    var_13 = ((/* implicit */unsigned char) var_0);
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (unsigned char)249))))))) ^ (3530615569U)));
        arr_2 [i_0] = var_1;
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0] [i_0]))))) && (((arr_0 [i_0]) && (((/* implicit */_Bool) arr_1 [i_0] [i_0]))))));
        var_15 = ((/* implicit */long long int) ((((arr_0 [i_0]) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) && ((_Bool)1)))) : (((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) arr_1 [i_0] [i_0])))))) & (((((/* implicit */int) var_1)) - (((/* implicit */int) arr_0 [i_0]))))));
    }
    for (unsigned short i_1 = 1; i_1 < 12; i_1 += 4) 
    {
        arr_6 [i_1 + 3] = ((/* implicit */_Bool) ((long long int) ((long long int) var_6)));
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) 
        {
            var_16 += ((/* implicit */signed char) (!(((((/* implicit */_Bool) (short)-32343)) || (((/* implicit */_Bool) (unsigned char)70))))));
            var_17 |= ((/* implicit */unsigned short) ((((((/* implicit */int) var_1)) + (1601533845))) * (((/* implicit */int) ((_Bool) arr_7 [(unsigned char)4] [i_2] [i_2])))));
            /* LoopNest 2 */
            for (signed char i_3 = 0; i_3 < 16; i_3 += 3) 
            {
                for (long long int i_4 = 4; i_4 < 12; i_4 += 2) 
                {
                    {
                        var_18 = ((/* implicit */signed char) ((((/* implicit */int) arr_13 [i_1] [i_4 - 1] [i_3] [i_1 + 4])) ^ (arr_10 [i_4 - 3] [i_4 - 1] [i_4 + 1] [i_4 + 2])));
                        arr_15 [i_3] [i_2] [i_3] [i_4] = ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (signed char)76)) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) arr_8 [i_4] [i_4 + 3] [i_4 + 3])) : (arr_10 [i_4 + 2] [(unsigned short)12] [i_3] [i_1 + 4]));
                        var_19 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_3]))) / (arr_9 [i_2] [i_4])));
                        var_20 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)6))) : (arr_12 [i_3] [i_3] [i_3] [i_3] [i_4 - 1])))));
                    }
                } 
            } 
            arr_16 [i_2] [i_2] |= ((/* implicit */signed char) ((_Bool) arr_12 [i_2] [i_1] [i_1 + 1] [i_1] [i_2]));
            var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) var_2))));
        }
        for (unsigned char i_5 = 0; i_5 < 16; i_5 += 4) 
        {
            /* LoopNest 3 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (long long int i_7 = 0; i_7 < 16; i_7 += 2) 
                {
                    for (int i_8 = 0; i_8 < 16; i_8 += 2) 
                    {
                        {
                            var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) min((((/* implicit */unsigned int) min(((+(((/* implicit */int) (unsigned char)6)))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_17 [i_6] [i_5] [i_6]))))))), ((~(var_4))))))));
                            var_23 = (unsigned short)20558;
                            var_24 = ((/* implicit */unsigned short) (((+(arr_14 [i_8] [i_6]))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_5] [i_7])))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            for (signed char i_9 = 0; i_9 < 16; i_9 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_10 = 0; i_10 < 16; i_10 += 3) 
                {
                    var_25 = ((/* implicit */unsigned short) max(((-(((((/* implicit */int) var_7)) >> (((arr_7 [i_1] [i_1] [i_10]) - (15869277410772779649ULL))))))), (((((/* implicit */int) (signed char)0)) - (((/* implicit */int) arr_8 [i_1 + 4] [i_1 + 2] [i_1 + 4]))))));
                    var_26 = ((/* implicit */_Bool) (+(((/* implicit */int) var_7))));
                }
                var_27 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_29 [(_Bool)1] [i_5] [i_1 + 4]))) - (3189383632724906555LL)));
            }
            for (signed char i_11 = 0; i_11 < 16; i_11 += 2) 
            {
                var_28 = ((((/* implicit */_Bool) max((((/* implicit */long long int) var_10)), (((var_5) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_12 [i_11] [i_1] [i_11] [i_1] [i_11])))))) ? (((/* implicit */unsigned int) max((arr_25 [i_1 + 1] [i_1 + 3] [i_1 + 3] [i_1 + 1] [i_1] [i_1 + 3] [i_1 + 2]), (((/* implicit */int) ((unsigned short) 1152831648)))))) : (var_4));
                arr_37 [i_1] [i_1 + 2] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((-(((/* implicit */int) var_5)))), (((((/* implicit */int) var_5)) >> (((var_4) - (214160241U)))))))) ? (((/* implicit */int) arr_17 [7LL] [i_5] [i_5])) : (((((/* implicit */int) ((unsigned short) arr_5 [i_11] [i_5]))) / (((((/* implicit */int) var_2)) ^ (((/* implicit */int) var_5))))))));
            }
        }
        for (unsigned int i_12 = 0; i_12 < 16; i_12 += 4) 
        {
            var_29 += (+((((!(((/* implicit */_Bool) arr_13 [14] [i_12] [i_12] [(_Bool)1])))) ? (((/* implicit */int) var_6)) : (((var_0) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)249)))))));
            var_30 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_1 + 2] [i_1] [i_1 + 1] [i_1 + 2])) ? (arr_10 [i_1 + 3] [i_1] [i_1 + 1] [i_1 + 1]) : (arr_10 [i_1 + 3] [i_1 + 1] [i_1 - 1] [i_1 + 3]))))));
        }
        for (unsigned int i_13 = 0; i_13 < 16; i_13 += 3) 
        {
            /* LoopSeq 1 */
            for (signed char i_14 = 0; i_14 < 16; i_14 += 4) 
            {
                arr_48 [i_1] [i_1] [i_1] [i_13] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_33 [i_1 + 2] [i_1] [i_1 + 2])) != ((+(arr_19 [i_1] [i_13] [i_14])))))), (764351727U)));
                var_31 = ((/* implicit */unsigned int) (+(max(((-(4398046511103LL))), (((/* implicit */long long int) 764351726U))))));
                arr_49 [i_13] [i_13] [i_13] [i_14] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((arr_24 [i_13] [i_13] [7LL]), (((/* implicit */unsigned short) arr_36 [i_13]))))) && (((/* implicit */_Bool) ((((-4398046511103LL) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_23 [i_1 - 1] [i_1] [i_1] [i_1] [i_14])) + (171)))))))))) / (((((/* implicit */_Bool) (-(arr_26 [i_1] [5U] [i_1] [i_13] [i_1])))) ? (min((((/* implicit */long long int) (signed char)28)), (var_3))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) (-2147483647 - 1))) - (2021692119U))))))));
                arr_50 [i_13] = ((/* implicit */unsigned char) ((arr_10 [i_1] [i_13] [i_13] [i_14]) / (1830119697)));
                arr_51 [i_14] [i_13] [i_1] [i_1 + 3] &= ((/* implicit */signed char) arr_25 [i_1] [i_13] [i_14] [i_1 + 4] [i_14] [i_14] [i_1 + 4]);
            }
            var_32 = arr_40 [i_13];
            arr_52 [i_1] [i_13] [i_1 + 4] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */long long int) min((((/* implicit */unsigned int) var_5)), (764351716U)))) != (arr_9 [i_13] [i_1])))) >> ((((~(((/* implicit */int) (short)14817)))) + (14828)))));
        }
        var_33 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_1] [14LL] [14LL] [i_1])) ? (((/* implicit */int) arr_13 [i_1 + 4] [(unsigned short)2] [(unsigned short)2] [i_1])) : (((/* implicit */int) var_8)))))));
    }
    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_16 = 4; i_16 < 20; i_16 += 2) 
        {
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 23; i_18 += 2) 
                    {
                        for (long long int i_19 = 0; i_19 < 23; i_19 += 2) 
                        {
                            {
                                var_34 = ((/* implicit */unsigned short) var_10);
                                var_35 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */int) var_7)) ^ (((/* implicit */int) var_2))))))) ? ((-(((/* implicit */int) arr_56 [i_16 - 1] [i_16 + 2] [i_16 + 3])))) : ((~(((/* implicit */int) max((arr_56 [i_15] [i_15] [i_15]), (((/* implicit */unsigned short) var_5)))))))));
                            }
                        } 
                    } 
                    arr_67 [i_15] [i_15] [i_15] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_66 [i_15] [i_15] [i_15] [i_15] [(unsigned char)4] [i_16 - 2] [i_15])) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)35151)) ? (((/* implicit */int) arr_56 [i_15] [i_15] [i_15])) : (arr_54 [i_15])))) ? ((-(((/* implicit */int) (signed char)-4)))) : (((/* implicit */int) var_9))))));
                    var_36 = ((/* implicit */int) (+(((((/* implicit */_Bool) (~(arr_59 [i_15] [i_16 - 4] [i_17] [i_15])))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) arr_57 [i_15] [(unsigned short)3] [i_17])), (arr_61 [i_15] [i_17] [i_17] [i_15] [i_17] [i_17]))))) : (var_3)))));
                    /* LoopSeq 1 */
                    for (unsigned short i_20 = 1; i_20 < 21; i_20 += 3) 
                    {
                        var_37 = ((/* implicit */signed char) max((var_37), (((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */_Bool) (+(var_4)))) && (((/* implicit */_Bool) ((arr_65 [i_15] [i_15] [i_15] [i_15] [i_15] [i_16] [i_15]) ^ (((/* implicit */int) var_7)))))))))))));
                        arr_70 [5U] [i_16] [i_17] [(signed char)13] [i_15] [i_20] = ((/* implicit */signed char) ((short) (!(((/* implicit */_Bool) ((arr_60 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15]) * (((/* implicit */int) arr_55 [i_15]))))))));
                    }
                }
            } 
        } 
        /* LoopSeq 4 */
        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
        {
            var_38 += ((/* implicit */_Bool) (-(((/* implicit */int) min(((unsigned short)44197), (((/* implicit */unsigned short) var_1)))))));
            /* LoopSeq 3 */
            for (unsigned int i_22 = 2; i_22 < 21; i_22 += 2) 
            {
                /* LoopSeq 1 */
                for (short i_23 = 1; i_23 < 22; i_23 += 4) 
                {
                    arr_79 [i_15] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) 6893491333051971934LL))) ? (((((/* implicit */_Bool) arr_73 [i_15])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_57 [i_23] [i_21] [i_15]))))) : ((~(arr_74 [i_15] [i_15] [i_15] [i_15]))))) : (((/* implicit */unsigned long long int) arr_71 [i_15] [i_21]))));
                    arr_80 [i_15] [i_15] [i_15] [i_23 + 1] [(short)7] = ((unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_65 [i_23] [i_15] [i_23 + 1] [i_22] [i_21] [i_15] [i_15]))))) & (1024)));
                    arr_81 [i_15] [17LL] [(signed char)11] [i_15] [i_15] = ((/* implicit */short) ((unsigned char) (-(3778979094764254454LL))));
                    var_39 = ((/* implicit */unsigned long long int) arr_57 [i_15] [i_21] [17LL]);
                }
                var_40 = ((/* implicit */short) ((((/* implicit */int) (signed char)-15)) ^ (1024)));
            }
            /* vectorizable */
            for (unsigned char i_24 = 4; i_24 < 21; i_24 += 2) 
            {
                arr_86 [i_15] [i_21] [i_15] = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_85 [i_15] [i_15] [i_15] [i_15])) : (((/* implicit */int) var_7)))));
                var_41 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) var_6))) ? (arr_71 [i_24 + 2] [(signed char)15]) : (((/* implicit */long long int) arr_59 [i_24 - 1] [i_24 - 1] [i_24 - 1] [i_24 - 1]))));
                arr_87 [i_15] [i_15] = ((/* implicit */_Bool) ((short) arr_82 [i_15] [i_15] [i_15] [i_15]));
            }
            for (signed char i_25 = 2; i_25 < 22; i_25 += 3) 
            {
                var_42 = ((/* implicit */long long int) min((((/* implicit */int) arr_53 [i_15])), (arr_60 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15])));
                arr_90 [i_15] [(short)2] [i_21] = ((/* implicit */unsigned char) ((((unsigned int) arr_76 [i_21])) != ((+(((((/* implicit */unsigned int) ((/* implicit */int) var_2))) ^ (arr_76 [i_25])))))));
            }
        }
        /* vectorizable */
        for (unsigned short i_26 = 0; i_26 < 23; i_26 += 3) /* same iter space */
        {
            var_43 = ((/* implicit */signed char) arr_63 [i_15]);
            /* LoopSeq 1 */
            for (long long int i_27 = 2; i_27 < 21; i_27 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned short i_28 = 0; i_28 < 23; i_28 += 3) 
                {
                    for (long long int i_29 = 0; i_29 < 23; i_29 += 4) 
                    {
                        {
                            arr_103 [i_15] [i_15] [i_26] [i_27] [i_29] [i_15] [1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((9088826497966184312LL) ^ (((/* implicit */long long int) ((/* implicit */int) (short)13458)))))) ? (((/* implicit */int) arr_83 [i_27 + 1] [i_26] [i_27] [i_27 - 1])) : (((/* implicit */int) var_1))));
                            var_44 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)50812)) * (((/* implicit */int) (unsigned char)154))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
                {
                    for (short i_31 = 4; i_31 < 22; i_31 += 2) 
                    {
                        {
                            var_45 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) arr_63 [i_15])) : (14366582689867970993ULL)))) && (((/* implicit */_Bool) (signed char)-99))));
                            var_46 = ((((var_7) ? (((/* implicit */int) arr_85 [i_15] [i_15] [i_31] [i_15])) : (((/* implicit */int) var_8)))) ^ (((/* implicit */int) ((arr_106 [i_15] [(unsigned char)1] [i_27] [i_30] [i_31]) && (((/* implicit */_Bool) (signed char)-10))))));
                            arr_110 [i_15] [i_26] [i_27 - 2] [i_15] [i_27 - 2] = (!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)99))))));
                            arr_111 [i_15] [i_26] [i_27] [i_15] [i_27] [i_31] = ((/* implicit */_Bool) var_9);
                        }
                    } 
                } 
                var_47 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (((arr_68 [i_15] [i_15] [i_15] [i_26] [i_27]) & (9223372036854775807LL))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) 1626623441))))));
                arr_112 [i_15] [i_26] [i_27] = (((+(((/* implicit */int) var_10)))) ^ (((((/* implicit */int) (unsigned short)49232)) * (((/* implicit */int) var_5)))));
            }
            var_48 = ((/* implicit */unsigned int) (+(((arr_102 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15] [i_15]) ? (((/* implicit */int) arr_61 [i_15] [i_26] [i_26] [i_15] [i_26] [i_26])) : (((/* implicit */int) arr_104 [i_15] [i_26]))))));
        }
        for (unsigned short i_32 = 0; i_32 < 23; i_32 += 3) /* same iter space */
        {
            var_49 = ((/* implicit */_Bool) max((var_49), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((var_0) ? (((/* implicit */int) (short)-30417)) : (((/* implicit */int) arr_105 [i_15] [(unsigned short)14]))))), (4609808489314874394ULL)))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) (-(arr_114 [i_15] [(signed char)12] [i_15])))) ^ ((~(2471630880U)))))) : ((-(min((var_3), (((/* implicit */long long int) arr_62 [14LL])))))))))));
            arr_115 [i_15] [i_15] [i_15] = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) var_9)), (arr_92 [i_15] [i_15] [i_32])))) ? ((+(((/* implicit */int) arr_53 [i_15])))) : (((/* implicit */int) arr_58 [i_15] [i_15])))));
            /* LoopSeq 3 */
            for (_Bool i_33 = 0; i_33 < 1; i_33 += 1) 
            {
                arr_118 [i_15] [i_32] [i_15] = arr_96 [i_15];
                arr_119 [i_15] [i_32] [i_33] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */int) arr_55 [i_15])) >> (((((/* implicit */int) arr_56 [(_Bool)1] [(_Bool)1] [i_33])) - (45056)))))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_77 [i_15] [i_15] [i_15] [i_15] [i_15])) ^ (((/* implicit */int) (short)-24467))))) : (max((((unsigned int) (_Bool)1)), (((/* implicit */unsigned int) arr_116 [i_15] [i_15] [i_15]))))));
            }
            for (unsigned char i_34 = 0; i_34 < 23; i_34 += 2) 
            {
                var_50 = ((/* implicit */_Bool) max((var_50), (arr_122 [i_15] [i_32] [i_34] [i_34])));
                arr_123 [i_15] [i_32] [i_34] [i_15] = ((/* implicit */short) ((int) ((short) ((var_3) / (((/* implicit */long long int) ((/* implicit */int) arr_61 [i_15] [i_15] [i_32] [i_15] [i_34] [(_Bool)1])))))));
            }
            /* vectorizable */
            for (unsigned short i_35 = 0; i_35 < 23; i_35 += 1) 
            {
                var_51 = ((/* implicit */signed char) ((((/* implicit */int) arr_84 [i_15] [i_32] [i_15])) / (((/* implicit */int) arr_62 [i_35]))));
                var_52 = ((/* implicit */unsigned char) var_3);
            }
        }
        for (unsigned long long int i_36 = 2; i_36 < 21; i_36 += 4) 
        {
            arr_128 [i_15] [i_15] [i_36 - 2] = ((/* implicit */unsigned short) (_Bool)1);
            var_53 = ((/* implicit */_Bool) min((var_53), (((/* implicit */_Bool) ((var_3) / (((/* implicit */long long int) (~(((/* implicit */int) var_7))))))))));
        }
        var_54 = ((/* implicit */unsigned char) ((((((/* implicit */int) (signed char)-37)) ^ (31))) & (((((/* implicit */int) arr_102 [i_15] [i_15] [i_15] [(short)3] [i_15] [i_15] [i_15])) ^ (((/* implicit */int) arr_102 [i_15] [i_15] [i_15] [(unsigned short)8] [i_15] [i_15] [i_15]))))));
        var_55 = ((/* implicit */signed char) max((var_55), (((/* implicit */signed char) max((((((/* implicit */_Bool) arr_71 [(_Bool)1] [i_15])) ? (((((/* implicit */int) var_7)) ^ (((/* implicit */int) var_8)))) : (((((/* implicit */int) var_8)) ^ (((/* implicit */int) var_1)))))), (((((/* implicit */int) min((((/* implicit */unsigned char) var_10)), (var_9)))) ^ (((((/* implicit */_Bool) (signed char)99)) ? (-1899320922) : (((/* implicit */int) (unsigned short)57125)))))))))));
    }
    var_56 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) && (((/* implicit */_Bool) ((unsigned short) var_5))))))));
}
