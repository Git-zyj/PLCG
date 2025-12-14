/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242000
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
    var_19 ^= ((/* implicit */signed char) ((unsigned int) var_10));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_1 [i_0]), (arr_1 [i_0])))) ? ((+(((/* implicit */int) var_13)))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) ^ (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) arr_1 [i_0])) : (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_16)) : (var_4))))))))));
        var_21 -= ((/* implicit */unsigned long long int) max((var_4), (((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [(short)14]))))) ? ((+(((/* implicit */int) (unsigned short)42886)))) : (((/* implicit */int) arr_1 [i_0]))))));
        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) 7057494235726247146ULL))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 14; i_1 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_2 = 0; i_2 < 14; i_2 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned int i_3 = 0; i_3 < 14; i_3 += 2) 
            {
                for (signed char i_4 = 0; i_4 < 14; i_4 += 1) 
                {
                    {
                        var_23 = var_11;
                        var_24 = ((/* implicit */unsigned short) var_17);
                        var_25 = ((/* implicit */long long int) ((unsigned char) arr_10 [i_1] [i_2] [i_4] [i_4]));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned int i_5 = 2; i_5 < 11; i_5 += 4) 
            {
                /* LoopSeq 3 */
                for (int i_6 = 0; i_6 < 14; i_6 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_7 = 0; i_7 < 14; i_7 += 4) 
                    {
                        var_26 ^= ((/* implicit */signed char) var_10);
                        arr_19 [(unsigned short)2] [i_2] [(unsigned char)10] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) (((+(arr_8 [i_1] [i_1]))) & (((/* implicit */unsigned int) (-(((/* implicit */int) var_3)))))));
                        arr_20 [i_7] = ((/* implicit */int) ((((/* implicit */int) var_17)) < (((/* implicit */int) var_15))));
                    }
                    /* LoopSeq 2 */
                    for (signed char i_8 = 0; i_8 < 14; i_8 += 1) 
                    {
                        var_27 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_18 [i_1] [(signed char)3] [(signed char)3] [(unsigned short)9] [i_8] [i_5 - 2] [i_5 + 3]))));
                        var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) var_4))));
                    }
                    for (int i_9 = 3; i_9 < 11; i_9 += 1) 
                    {
                        arr_25 [i_1] [i_2] [i_5] [i_9] [i_9] = ((/* implicit */unsigned short) var_10);
                        var_29 ^= ((/* implicit */unsigned int) ((arr_14 [i_1] [i_1] [i_5] [i_9 + 2] [(signed char)0] [i_9 + 2]) < (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
                        var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_23 [i_1] [i_2])) ? (((/* implicit */int) (short)-10177)) : (((int) var_1))));
                    }
                    arr_26 [i_1] [i_2] [i_1] [i_6] [i_5] = ((/* implicit */unsigned int) ((7057494235726247148ULL) < (var_14)));
                }
                for (unsigned short i_10 = 2; i_10 < 12; i_10 += 1) 
                {
                    var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [i_10] [i_10 + 2] [i_10 - 2] [i_10 + 1] [i_10 + 1] [i_10 + 1])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_3))));
                    /* LoopSeq 2 */
                    for (unsigned char i_11 = 1; i_11 < 12; i_11 += 1) 
                    {
                        var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_11 - 1])) ? (((((/* implicit */_Bool) (unsigned short)42886)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)22649)))) : (var_4))))));
                        var_33 = ((12U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)230))));
                        var_34 -= ((/* implicit */unsigned short) ((((((/* implicit */long long int) arr_2 [i_1])) >= (2199023255551LL))) ? (((((/* implicit */_Bool) arr_23 [i_5] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_28 [i_2] [i_2]))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1))))));
                    }
                    for (long long int i_12 = 0; i_12 < 14; i_12 += 2) 
                    {
                        var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) ((((((/* implicit */_Bool) arr_5 [i_2] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_10))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((2147483647) <= (((/* implicit */int) var_13)))))))))));
                        arr_35 [8U] [i_2] [i_5] [i_5] [i_10] = ((/* implicit */short) (~(((/* implicit */int) var_17))));
                        var_36 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) ((signed char) var_15)))));
                        var_37 = ((/* implicit */int) (-(arr_14 [i_1] [(signed char)11] [(unsigned short)8] [0] [i_10 - 2] [i_5])));
                        arr_36 [i_10] [i_12] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_10 - 2] [i_10 - 2])) ? (4294967270U) : (((/* implicit */unsigned int) var_4))));
                    }
                    /* LoopSeq 2 */
                    for (long long int i_13 = 0; i_13 < 14; i_13 += 4) 
                    {
                        var_38 = ((/* implicit */int) 5887944001786473511LL);
                        var_39 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_37 [i_1] [i_1] [i_10] [i_1] [i_1]))));
                    }
                    for (unsigned short i_14 = 0; i_14 < 14; i_14 += 4) 
                    {
                        arr_42 [i_1] [i_10] = ((/* implicit */short) var_0);
                        var_40 &= ((unsigned char) 2199023255551LL);
                    }
                    var_41 = (((_Bool)1) ? (arr_15 [i_5 - 2] [i_2] [i_10 + 2] [i_10]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_2] [i_2]))));
                }
                for (unsigned char i_15 = 0; i_15 < 14; i_15 += 4) 
                {
                    var_42 = ((/* implicit */unsigned short) max((var_42), (((/* implicit */unsigned short) var_14))));
                    var_43 = ((/* implicit */unsigned char) arr_39 [i_1] [i_2] [i_2]);
                }
                var_44 = ((/* implicit */unsigned int) min((var_44), ((~(var_9)))));
                var_45 = ((/* implicit */long long int) ((arr_32 [i_1] [i_1] [i_2] [i_1] [i_1] [i_1] [i_1]) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) || (((/* implicit */_Bool) var_14))))))));
            }
            var_46 ^= ((/* implicit */unsigned int) ((((/* implicit */int) arr_37 [i_1] [i_2] [i_2] [i_2] [(signed char)8])) * (((/* implicit */int) (short)11255))));
        }
        for (unsigned short i_16 = 0; i_16 < 14; i_16 += 4) 
        {
            var_47 ^= ((25U) - (((/* implicit */unsigned int) ((/* implicit */int) var_17))));
            var_48 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_32 [i_1] [i_1] [i_1] [i_1] [i_1] [i_16] [(unsigned char)6])))))) > (((((/* implicit */_Bool) var_9)) ? (arr_39 [i_1] [i_16] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))));
            /* LoopSeq 2 */
            for (long long int i_17 = 0; i_17 < 14; i_17 += 3) 
            {
                var_49 = ((/* implicit */short) (!(((((/* implicit */_Bool) (short)-7255)) || (((/* implicit */_Bool) -1126608549))))));
                arr_50 [i_1] [(short)2] [i_17] [i_17] = var_0;
                /* LoopSeq 1 */
                for (unsigned short i_18 = 2; i_18 < 13; i_18 += 3) 
                {
                    var_50 = ((/* implicit */short) ((((/* implicit */int) arr_49 [i_18 + 1])) + (((/* implicit */int) arr_49 [i_18 + 1]))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_19 = 4; i_19 < 12; i_19 += 3) /* same iter space */
                    {
                        var_51 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (1522889933U) : (((/* implicit */unsigned int) arr_40 [i_1] [i_18] [i_18] [i_18]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_17)) : (var_4)))) : (((unsigned long long int) var_1))));
                        var_52 = ((/* implicit */unsigned char) ((unsigned short) 1522889933U));
                    }
                    for (unsigned long long int i_20 = 4; i_20 < 12; i_20 += 3) /* same iter space */
                    {
                        var_53 = ((/* implicit */unsigned int) ((_Bool) var_9));
                        var_54 = ((/* implicit */short) ((((/* implicit */unsigned int) ((arr_57 [i_1] [9ULL] [i_17] [i_18] [i_20 - 2]) | (((/* implicit */int) var_3))))) / (var_9)));
                        var_55 = ((/* implicit */unsigned int) var_7);
                        var_56 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_51 [i_18 - 2] [i_18] [(short)2] [i_1])) && (((/* implicit */_Bool) arr_34 [i_18 - 2] [i_16] [13] [i_20 - 1] [4U] [i_16] [i_1]))));
                        var_57 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((var_10) + (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_1] [i_1] [i_1] [i_1]))))))));
                    }
                    var_58 = ((/* implicit */unsigned char) max((var_58), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_32 [i_16] [i_16] [i_16] [i_18 - 2] [i_16] [(signed char)8] [i_1])) ? (arr_32 [i_18] [i_16] [i_1] [i_18] [i_18 - 2] [(unsigned short)6] [i_16]) : (arr_32 [(unsigned short)6] [2] [i_16] [i_16] [(unsigned char)12] [(unsigned char)12] [i_16]))))));
                    arr_60 [i_17] [i_17] [i_18] [(short)0] [i_17] [i_18] = ((/* implicit */long long int) (-(((/* implicit */int) ((signed char) var_17)))));
                }
                /* LoopSeq 2 */
                for (long long int i_21 = 0; i_21 < 14; i_21 += 1) 
                {
                    var_59 = ((/* implicit */signed char) var_3);
                    var_60 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_28 [i_1] [i_16])))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (7661687179608934431LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_1])))));
                }
                for (unsigned short i_22 = 2; i_22 < 12; i_22 += 1) 
                {
                    var_61 = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) var_12))))) > (((/* implicit */int) arr_3 [i_22 - 1]))));
                    arr_65 [i_1] [i_1] [i_17] [i_22 + 1] [i_22] [i_22 + 2] |= ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) arr_45 [i_1])) && (((/* implicit */_Bool) var_13)))));
                    var_62 = ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)10204))) + (var_9))) / (((var_9) / (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))));
                    var_63 = ((/* implicit */unsigned int) max((var_63), ((+(arr_58 [i_22] [i_22] [i_22 + 1] [i_1] [(signed char)4] [i_22] [i_22 + 1])))));
                    var_64 = ((/* implicit */long long int) ((((/* implicit */int) var_15)) & (((/* implicit */int) var_3))));
                }
            }
            for (signed char i_23 = 4; i_23 < 13; i_23 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned short i_24 = 0; i_24 < 14; i_24 += 4) 
                {
                    for (_Bool i_25 = 0; i_25 < 0; i_25 += 1) 
                    {
                        {
                            arr_75 [i_1] [i_23] [i_1] [i_24] [i_25] [i_25] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_3))));
                            var_65 = ((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_8))));
                        }
                    } 
                } 
                var_66 = ((/* implicit */short) min((var_66), (((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (arr_51 [i_23 - 4] [i_23 - 3] [i_23 - 3] [i_16]) : (((/* implicit */int) var_11)))))));
                /* LoopSeq 1 */
                for (unsigned int i_26 = 0; i_26 < 14; i_26 += 1) 
                {
                    var_67 = ((/* implicit */long long int) min((var_67), (((/* implicit */long long int) (~(((/* implicit */int) var_8)))))));
                    var_68 = ((/* implicit */unsigned int) min((var_68), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) <= (arr_11 [i_23 + 1] [i_23 - 3]))))));
                    var_69 ^= ((/* implicit */_Bool) var_15);
                    /* LoopSeq 1 */
                    for (unsigned short i_27 = 0; i_27 < 14; i_27 += 1) 
                    {
                        var_70 -= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) & ((-(var_18)))));
                        arr_80 [i_23] = (+(((/* implicit */int) (unsigned short)31)));
                    }
                }
            }
        }
        arr_81 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(var_18)))) ? (arr_33 [6] [(short)0] [i_1] [i_1] [2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_62 [i_1] [i_1])))));
    }
}
