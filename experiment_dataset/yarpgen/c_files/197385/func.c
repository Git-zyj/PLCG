/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197385
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
    var_14 -= var_12;
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) ((unsigned char) arr_0 [i_0 + 4] [i_0]))) : (((/* implicit */int) arr_2 [i_0 + 4] [i_0 - 1])))), (((/* implicit */int) ((unsigned char) (~(((/* implicit */int) var_10))))))));
        arr_4 [10ULL] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) arr_1 [i_0]))))) && (((/* implicit */_Bool) ((arr_0 [i_0] [i_0]) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) (short)-1))))))) ? ((+(((/* implicit */int) arr_0 [i_0] [i_0 + 4])))) : (((((/* implicit */_Bool) ((int) 2128959673U))) ? ((-(((/* implicit */int) var_5)))) : (((((/* implicit */int) arr_0 [i_0] [i_0 - 1])) * (((/* implicit */int) var_1))))))));
        arr_5 [i_0] = ((/* implicit */unsigned short) arr_2 [i_0] [i_0]);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (signed char i_2 = 3; i_2 < 11; i_2 += 3) 
            {
                for (unsigned short i_3 = 0; i_3 < 12; i_3 += 3) 
                {
                    {
                        arr_17 [i_2] [i_2] [(short)1] = ((/* implicit */short) (~(((/* implicit */int) min((((/* implicit */signed char) var_1)), (var_7))))));
                        arr_18 [i_3] [i_2] [i_2] [i_2 - 1] [i_2] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_5)))))));
                        var_15 = ((/* implicit */_Bool) (-(((2128959673U) >> (((((/* implicit */int) var_2)) - (55731)))))));
                    }
                } 
            } 
        } 
    }
    for (long long int i_4 = 2; i_4 < 20; i_4 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_5 = 1; i_5 < 22; i_5 += 3) 
        {
            var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_21 [i_4 - 2])) : (((/* implicit */int) arr_21 [i_4 + 1]))))) || (((/* implicit */_Bool) var_4)))))));
            /* LoopSeq 1 */
            for (signed char i_6 = 1; i_6 < 22; i_6 += 2) 
            {
                /* LoopSeq 1 */
                for (short i_7 = 1; i_7 < 21; i_7 += 3) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_8 = 2; i_8 < 22; i_8 += 2) 
                    {
                        var_17 = ((/* implicit */unsigned short) (+(arr_31 [(signed char)4] [i_5 - 1] [i_6 - 1] [15ULL])));
                        arr_32 [i_4] [2LL] [(short)17] [i_7 + 1] [i_7] = ((/* implicit */short) (unsigned short)63115);
                        var_18 = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) var_12)) * (((/* implicit */int) (short)15935))))));
                        var_19 = ((/* implicit */signed char) var_5);
                        var_20 += ((/* implicit */unsigned short) ((((/* implicit */int) var_9)) + (((/* implicit */int) (short)0))));
                    }
                    var_21 ^= ((/* implicit */short) (-(((/* implicit */int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_31 [0] [i_5] [i_6] [i_7]))))), (var_10))))));
                    var_22 = ((/* implicit */int) ((long long int) ((((((/* implicit */_Bool) -3191320281209910246LL)) ? (arr_22 [i_7] [i_4]) : (((/* implicit */int) var_2)))) | (((/* implicit */int) ((short) var_7))))));
                    var_23 |= ((/* implicit */long long int) min((((/* implicit */short) (signed char)126)), (var_8)));
                }
                /* LoopSeq 3 */
                for (unsigned char i_9 = 1; i_9 < 22; i_9 += 2) 
                {
                    arr_36 [i_5] [i_6 + 1] [i_4] = ((/* implicit */unsigned char) ((short) min((arr_20 [i_9 - 1] [i_9 + 1]), (((/* implicit */unsigned int) var_9)))));
                    var_24 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_19 [i_4])) ? ((+(18293903473070547150ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                    arr_37 [i_4] [(short)5] [i_6] [i_9] [i_4] = ((/* implicit */short) min((((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)-121)), (arr_25 [i_4 - 2] [i_5] [i_6 - 1] [i_9]))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) arr_22 [i_4] [i_5])) : (2128959680U)))) ? (((/* implicit */int) (signed char)-17)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_25 [i_4] [i_5] [(short)6] [(short)6])) || (((/* implicit */_Bool) var_8)))))))));
                    /* LoopSeq 1 */
                    for (signed char i_10 = 0; i_10 < 23; i_10 += 2) 
                    {
                        arr_40 [i_4 - 1] [i_4 - 1] [i_4] = ((/* implicit */short) (+((-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_13))) != (var_6))))))));
                        arr_41 [i_4] [i_4] = ((/* implicit */unsigned char) arr_35 [i_10] [i_5 - 1] [i_5 - 1]);
                        var_25 = ((/* implicit */unsigned short) var_11);
                        arr_42 [i_4] [i_5] [i_4] [i_6] [1ULL] [19LL] [i_4] = ((/* implicit */short) ((unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) var_2))) | (var_6))) & (((/* implicit */long long int) ((/* implicit */int) var_13))))));
                        var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) (~(((/* implicit */int) min((var_2), (((/* implicit */unsigned short) (short)-27059))))))))));
                    }
                }
                /* vectorizable */
                for (unsigned long long int i_11 = 2; i_11 < 22; i_11 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_12 = 2; i_12 < 20; i_12 += 2) 
                    {
                        arr_47 [i_4] [i_4] [(short)1] [i_4] [(short)14] [i_11] [9] = ((/* implicit */short) (+((+(((/* implicit */int) var_12))))));
                        arr_48 [i_4] [i_4] [i_4] = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */_Bool) -3191320281209910246LL)) && (((/* implicit */_Bool) (unsigned short)55049)))))));
                    }
                    var_27 = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) var_6)) ? (arr_35 [(unsigned short)7] [(unsigned short)7] [i_6 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))))));
                    arr_49 [i_4] = var_10;
                }
                for (long long int i_13 = 0; i_13 < 23; i_13 += 2) 
                {
                    var_28 &= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_6)))) ? (((arr_25 [9] [i_5 - 1] [4ULL] [i_13]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2421))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_45 [i_4] [i_4] [(unsigned short)10] [i_6] [i_6] [i_13])) << (((((/* implicit */int) var_5)) - (60338)))))))))));
                    var_29 = ((/* implicit */signed char) ((unsigned short) max((arr_44 [i_4 + 1] [i_5 + 1] [i_5 - 1] [i_4] [i_6 + 1] [i_6]), (0))));
                }
            }
            arr_53 [i_4] [i_4] [10] = ((/* implicit */short) var_2);
        }
        for (unsigned long long int i_14 = 2; i_14 < 20; i_14 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_15 = 2; i_15 < 20; i_15 += 3) 
            {
                /* LoopNest 2 */
                for (int i_16 = 1; i_16 < 22; i_16 += 3) 
                {
                    for (unsigned char i_17 = 1; i_17 < 21; i_17 += 3) 
                    {
                        {
                            arr_66 [i_4 - 2] [i_4] [i_17] = ((((/* implicit */_Bool) ((short) arr_21 [i_15 - 1]))) ? (((int) var_11)) : (((/* implicit */int) min((arr_21 [i_15 - 1]), (arr_21 [i_4 - 2])))));
                            var_30 = ((/* implicit */signed char) (-((-((-(((/* implicit */int) var_10))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_18 = 2; i_18 < 21; i_18 += 3) 
                {
                    for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
                    {
                        {
                            arr_71 [i_4] [i_14] [i_15 + 2] [i_4] [i_4] [i_19] = ((/* implicit */short) ((int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_57 [(_Bool)1] [i_18] [i_18 + 1] [i_18 - 2]))) | (2128959673U))));
                            var_31 += ((/* implicit */signed char) (+(min((min((((/* implicit */int) arr_59 [i_4 + 2] [i_4] [i_4])), (arr_33 [i_4 + 1] [i_4] [i_14] [i_15] [i_14] [i_19]))), (((/* implicit */int) arr_68 [i_14] [i_19]))))));
                            var_32 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)62652))));
                            var_33 = ((/* implicit */int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)24203)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)0))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)62656))) : (3709565664303678036LL))), (((/* implicit */long long int) max((((/* implicit */int) max((var_10), (((/* implicit */signed char) var_3))))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0)))))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned short i_20 = 3; i_20 < 22; i_20 += 2) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_21 = 2; i_21 < 22; i_21 += 3) 
                    {
                        var_34 = ((/* implicit */short) (+(min((((/* implicit */unsigned long long int) var_6)), (max((arr_35 [(short)4] [6ULL] [6ULL]), (((/* implicit */unsigned long long int) arr_73 [i_4] [i_4] [i_4]))))))));
                        arr_77 [i_4 - 1] [i_14] [20U] [i_4] [i_21] = ((/* implicit */signed char) (+(((/* implicit */int) var_11))));
                        var_35 = ((((((/* implicit */int) var_2)) << (((((/* implicit */int) arr_73 [i_15 + 1] [i_15] [i_15 + 2])) - (156))))) % (((((/* implicit */_Bool) arr_73 [i_15 + 1] [i_15 + 1] [i_15 + 2])) ? (((/* implicit */int) arr_30 [i_15 + 1] [i_15 + 1] [i_15 + 2] [i_15 + 1] [i_15 + 1] [i_15 - 2])) : (((/* implicit */int) (unsigned short)48111)))));
                    }
                    /* vectorizable */
                    for (short i_22 = 0; i_22 < 23; i_22 += 2) 
                    {
                        arr_80 [i_4] [i_4] [i_15] [i_4] [10U] = ((/* implicit */int) 1311142260U);
                        arr_81 [i_4] [i_14] [i_15] [i_20 - 3] [i_22] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_75 [i_4])) | (((/* implicit */int) arr_75 [i_4]))));
                        arr_82 [i_4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_25 [9] [9] [17U] [i_22]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))));
                    }
                    var_36 ^= ((signed char) ((((int) arr_38 [(short)16] [19U] [19U] [i_15 + 3] [i_20])) * (((((/* implicit */int) arr_74 [2LL] [2LL] [i_14] [i_14] [2LL] [2LL])) * (((/* implicit */int) var_1))))));
                    var_37 = ((/* implicit */short) min(((+(((/* implicit */int) var_9)))), (((/* implicit */int) ((unsigned short) arr_73 [i_4 - 2] [i_4 + 1] [14LL])))));
                    arr_83 [i_4] [i_14] [i_15] [i_4] = ((/* implicit */int) var_1);
                }
                /* LoopNest 2 */
                for (unsigned char i_23 = 0; i_23 < 23; i_23 += 2) 
                {
                    for (short i_24 = 0; i_24 < 23; i_24 += 2) 
                    {
                        {
                            arr_89 [i_23] [i_4] [i_4] [i_23] [i_24] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) && (arr_65 [2LL] [i_14] [2LL] [i_15] [i_23] [(short)1] [2LL])));
                            var_38 = ((/* implicit */signed char) (+(max((((/* implicit */long long int) var_12)), (var_6)))));
                            arr_90 [i_24] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */signed char) var_1);
                            arr_91 [i_4] [i_4] [i_4] = ((signed char) var_3);
                        }
                    } 
                } 
                arr_92 [i_15] [i_4] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) arr_79 [i_4 - 2] [i_4 - 2] [i_4 - 1] [i_4 + 3] [i_4 + 3])) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_27 [i_4] [i_15 + 3]))))) : (((((((/* implicit */long long int) ((/* implicit */int) arr_38 [i_4] [i_4] [i_4] [i_4 - 2] [i_4]))) & (-712722929503183407LL))) | (((/* implicit */long long int) ((((/* implicit */int) var_5)) | (((/* implicit */int) var_2)))))))));
            }
            arr_93 [i_4] [i_4] [i_4] = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) arr_45 [i_14 - 1] [i_14] [i_14] [i_14 - 2] [i_14 - 2] [i_14 + 1]))))));
            /* LoopNest 3 */
            for (long long int i_25 = 0; i_25 < 23; i_25 += 2) 
            {
                for (short i_26 = 1; i_26 < 22; i_26 += 1) 
                {
                    for (short i_27 = 1; i_27 < 22; i_27 += 2) 
                    {
                        {
                            arr_104 [i_4] [i_4] [i_25] [i_4] [i_4] = ((/* implicit */signed char) max((((/* implicit */int) var_12)), (arr_22 [i_14] [i_27])));
                            var_39 = ((/* implicit */long long int) min((var_39), (((/* implicit */long long int) (-(((((/* implicit */int) max((((/* implicit */unsigned short) var_13)), (var_12)))) % (((/* implicit */int) (unsigned short)2421)))))))));
                        }
                    } 
                } 
            } 
        }
        arr_105 [i_4] = (+(((/* implicit */int) (unsigned short)43645)));
        var_40 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7511655720758495310LL)) ? (18014398509481984LL) : (-712722929503183407LL)))) || (((/* implicit */_Bool) ((unsigned short) arr_62 [i_4] [i_4])))));
    }
    var_41 = ((/* implicit */long long int) max(((+(((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)0)), ((unsigned short)12967)))) : ((+(((/* implicit */int) var_3))))))));
}
