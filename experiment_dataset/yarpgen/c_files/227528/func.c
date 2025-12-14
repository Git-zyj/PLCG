/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227528
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
    for (unsigned long long int i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                /* LoopSeq 4 */
                for (long long int i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    arr_7 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) var_13);
                    var_14 = ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0 + 1]))) - (max((631516490U), (((/* implicit */unsigned int) (unsigned char)38)))));
                    var_15 = var_1;
                }
                for (unsigned char i_3 = 0; i_3 < 23; i_3 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 21; i_4 += 2) 
                    {
                        for (short i_5 = 0; i_5 < 23; i_5 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)-105)))))));
                                arr_16 [i_0] [i_1] = ((/* implicit */_Bool) ((-8369587922816793596LL) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                                var_17 = ((/* implicit */int) var_4);
                                var_18 = ((/* implicit */int) (+(((((/* implicit */_Bool) var_13)) ? (min((arr_8 [i_0] [i_1] [i_4]), (arr_4 [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_1] [i_0 + 1] [i_4 + 2])))))));
                            }
                        } 
                    } 
                    arr_17 [i_1] = (~(((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)231))) / (var_1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)-6112)) > (((/* implicit */int) arr_12 [i_1] [i_1] [i_1])))))) : (14198683961194104546ULL))));
                    arr_18 [i_0] [i_0 - 1] [i_1] = (short)-3789;
                    /* LoopNest 2 */
                    for (long long int i_6 = 0; i_6 < 23; i_6 += 1) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 23; i_7 += 1) 
                        {
                            {
                                arr_26 [i_0] [i_1] [i_3] [i_3] [i_6] [i_1] [i_7] = min((((/* implicit */unsigned long long int) max((arr_5 [i_1]), (arr_5 [i_1])))), (max((((/* implicit */unsigned long long int) arr_6 [i_0] [i_0 - 2] [i_0 - 1] [i_1])), (arr_8 [i_0 - 2] [i_1] [i_1]))));
                                var_19 = ((/* implicit */unsigned short) max((18446744073709551613ULL), (9403889902642557580ULL)));
                                arr_27 [14] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(3663450805U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (max((arr_8 [i_1] [i_1] [i_0 - 2]), (((/* implicit */unsigned long long int) arr_13 [i_0 - 1] [i_0 - 2]))))));
                            }
                        } 
                    } 
                }
                for (unsigned char i_8 = 0; i_8 < 23; i_8 += 1) /* same iter space */
                {
                    var_20 = ((/* implicit */signed char) (((_Bool)0) ? (4294967293U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)7)))));
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 0; i_9 < 23; i_9 += 2) 
                    {
                        for (short i_10 = 0; i_10 < 23; i_10 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */short) (+(max((((/* implicit */unsigned long long int) min((((/* implicit */short) (unsigned char)229)), ((short)768)))), (arr_8 [i_9] [i_1] [i_0])))));
                                var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)212)) ? (((/* implicit */int) arr_31 [i_1] [i_0 - 1] [i_8])) : (((/* implicit */int) arr_31 [i_1] [i_0 + 1] [i_8]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [i_1] [i_0 - 2] [i_9]))))) : (((((/* implicit */_Bool) arr_31 [i_1] [i_0 - 1] [i_1])) ? (((/* implicit */int) arr_31 [i_1] [i_0 + 1] [4])) : (((/* implicit */int) (short)8191))))));
                                arr_35 [i_0] [i_1] [i_1] [i_9] [i_10] [i_10] = ((/* implicit */short) ((((((/* implicit */_Bool) ((var_3) & (((/* implicit */long long int) -918549455))))) && (((/* implicit */_Bool) max(((unsigned char)186), (var_0)))))) ? (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [(unsigned char)11] [i_1])) ? (((/* implicit */int) (signed char)120)) : (((/* implicit */int) arr_6 [18U] [i_1] [(short)18] [i_1])))) : (max((((((/* implicit */int) (short)32767)) >> (((var_7) - (220686565U))))), (((/* implicit */int) (unsigned short)48958))))));
                            }
                        } 
                    } 
                }
                for (unsigned int i_11 = 0; i_11 < 23; i_11 += 2) 
                {
                    arr_39 [i_11] [i_11] [i_11] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) var_6))) | (arr_34 [i_1] [i_1] [i_1] [i_11] [i_0] [i_0] [i_11]))) > (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */int) (signed char)96)) > (((/* implicit */int) arr_20 [i_0] [i_1] [(unsigned short)1]))))), (arr_6 [i_1] [i_0 - 1] [i_0] [i_1])))))));
                    arr_40 [i_1] = max((((/* implicit */unsigned int) var_6)), ((-(((unsigned int) 631516468U)))));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 23; i_12 += 1) 
                    {
                        for (unsigned char i_13 = 0; i_13 < 23; i_13 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */_Bool) (~(((3663450813U) - (((/* implicit */unsigned int) ((/* implicit */int) ((arr_21 [i_1] [i_1] [17ULL] [i_12]) < (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))))))));
                                var_24 = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_31 [i_1] [i_12] [(unsigned short)3])))), (((/* implicit */int) ((((/* implicit */_Bool) 1523955687)) || (((/* implicit */_Bool) arr_0 [12ULL])))))))) ? (min((((/* implicit */long long int) var_11)), (arr_30 [i_0] [(unsigned short)16] [i_0 - 1] [i_12]))) : (((/* implicit */long long int) (~(-1414873241))))));
                                arr_47 [i_0 + 1] [i_13] [i_13] [i_1] [(unsigned short)7] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_8 [i_13] [i_1] [i_0 + 1])))) && (((/* implicit */_Bool) -612317706))))) & (((/* implicit */int) var_13))));
                            }
                        } 
                    } 
                }
                arr_48 [18] |= ((_Bool) ((((/* implicit */_Bool) arr_45 [i_0] [i_1] [i_0] [i_0 - 2] [i_0 - 2])) && (((/* implicit */_Bool) arr_45 [i_0 - 1] [i_1] [i_0] [i_0 + 1] [i_0 + 1]))));
                /* LoopSeq 1 */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    var_25 = ((/* implicit */_Bool) arr_28 [i_1]);
                    arr_51 [i_0] [i_1] [i_14] = ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) * (((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) + (var_7))) >> (((((((/* implicit */_Bool) var_1)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)186))))) - (4608370385865832327LL))))));
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_15 = 1; i_15 < 10; i_15 += 1) 
    {
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            for (unsigned short i_17 = 3; i_17 < 10; i_17 += 4) 
            {
                {
                    arr_60 [i_15 + 1] [i_15] [i_17] = ((/* implicit */int) ((((((/* implicit */int) (unsigned char)235)) * ((~(((/* implicit */int) var_10)))))) != ((~(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)204)) : (((/* implicit */int) arr_3 [i_17]))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_18 = 4; i_18 < 8; i_18 += 1) 
                    {
                        for (int i_19 = 0; i_19 < 11; i_19 += 2) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) != (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_31 [i_15] [i_18 - 2] [i_15 - 1])) : (((/* implicit */int) arr_31 [i_15] [i_18 + 2] [i_15 + 1]))))));
                                arr_66 [i_15] [i_15] [1ULL] [i_18 + 3] [i_15] [i_18 - 4] [10LL] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_8 [i_15 - 1] [i_15] [i_18 - 2])))) || (max((arr_44 [i_15 - 1] [i_17 - 2] [i_17] [i_18 - 1] [i_18]), (arr_44 [i_15 - 1] [i_17 - 1] [i_18 + 2] [i_18 - 3] [i_18 - 3])))));
                                var_27 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_13)), (18446744073709551615ULL)))) ? (min((max((arr_54 [7ULL]), (((/* implicit */long long int) var_7)))), (((/* implicit */long long int) ((466990671U) << (((((/* implicit */int) arr_22 [i_15] [i_17] [i_18 - 1] [i_19])) - (151)))))))) : (((/* implicit */long long int) ((/* implicit */int) (short)-9608)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_20 = 1; i_20 < 9; i_20 += 3) 
                    {
                        for (unsigned int i_21 = 0; i_21 < 11; i_21 += 3) 
                        {
                            {
                                arr_72 [i_15] [i_16] [i_15] [i_21] [i_21] = ((/* implicit */_Bool) min((((((/* implicit */int) arr_12 [i_15] [i_16] [i_20 - 1])) / (((/* implicit */int) (unsigned short)6869)))), (((/* implicit */int) (!(arr_44 [i_15] [i_20 - 1] [i_17] [i_17 + 1] [i_15 + 1]))))));
                                var_28 = ((/* implicit */unsigned int) var_3);
                                arr_73 [i_15] [i_20] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_49 [i_15 - 1])) && (((/* implicit */_Bool) arr_49 [i_15 + 1]))))), (((((/* implicit */_Bool) arr_49 [i_15 - 1])) ? (arr_49 [i_15 + 1]) : (arr_49 [i_15 - 1])))));
                                var_29 += ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_58 [(unsigned short)8] [i_17])))))) > (min((min((var_7), (((/* implicit */unsigned int) (unsigned char)69)))), (((/* implicit */unsigned int) var_10))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_22 = 0; i_22 < 24; i_22 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_23 = 1; i_23 < 21; i_23 += 1) 
        {
            var_30 = ((((/* implicit */int) arr_76 [i_23] [i_23 - 1])) & (((/* implicit */int) arr_76 [i_23] [i_23 + 2])));
            arr_78 [i_22] [i_23] [i_23] = ((/* implicit */unsigned char) var_9);
            var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) (-(((/* implicit */int) arr_74 [i_23 + 3])))))));
            /* LoopNest 2 */
            for (unsigned long long int i_24 = 0; i_24 < 24; i_24 += 1) 
            {
                for (short i_25 = 2; i_25 < 22; i_25 += 3) 
                {
                    {
                        var_32 = ((/* implicit */_Bool) (-(16777152U)));
                        var_33 = ((/* implicit */unsigned int) ((((/* implicit */int) (!((_Bool)1)))) >> (((((/* implicit */int) var_0)) - (205)))));
                        var_34 = arr_81 [21U] [i_23] [i_24];
                        var_35 *= ((/* implicit */_Bool) ((unsigned long long int) -780064887859439421LL));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_26 = 3; i_26 < 22; i_26 += 2) 
                        {
                            var_36 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */int) var_9)) | (((/* implicit */int) arr_74 [i_22]))))) == ((-(arr_75 [i_22])))));
                            var_37 = ((/* implicit */unsigned char) arr_79 [i_22] [i_22] [i_22] [i_22]);
                            var_38 = ((((/* implicit */_Bool) arr_77 [i_22])) && (((/* implicit */_Bool) var_8)));
                            var_39 = ((/* implicit */unsigned int) ((short) arr_82 [i_23] [i_23] [11U] [i_23]));
                        }
                    }
                } 
            } 
            /* LoopNest 3 */
            for (long long int i_27 = 0; i_27 < 24; i_27 += 1) 
            {
                for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
                {
                    for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
                    {
                        {
                            arr_93 [9LL] [i_22] [i_27] [i_23 + 2] [i_29] [6U] = ((/* implicit */int) ((short) arr_88 [i_23 + 3] [i_23 + 2]));
                            var_40 = ((/* implicit */unsigned short) max((var_40), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_89 [i_23 + 2] [3LL] [i_23 + 2] [i_23 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_89 [i_23 + 2] [i_23] [i_23 + 2] [i_23]))))));
                        }
                    } 
                } 
            } 
        }
        var_41 = ((/* implicit */short) (-(((/* implicit */int) arr_76 [i_22] [21U]))));
    }
    for (unsigned long long int i_30 = 0; i_30 < 11; i_30 += 1) 
    {
        arr_98 [6LL] &= ((int) var_10);
        arr_99 [i_30] = ((/* implicit */_Bool) max((var_1), (((/* implicit */long long int) ((_Bool) var_7)))));
    }
}
