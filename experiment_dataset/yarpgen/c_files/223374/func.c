/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223374
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            /* LoopSeq 3 */
            for (int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                var_16 = ((/* implicit */long long int) min((((/* implicit */int) ((arr_5 [i_0] [i_1] [(short)1]) != (942554444)))), (max((((/* implicit */int) ((((/* implicit */_Bool) -942554445)) || (((/* implicit */_Bool) (signed char)8))))), (arr_5 [i_0] [i_1] [i_1])))));
                arr_8 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)79))) ^ (12215222336550069832ULL)));
            }
            for (unsigned long long int i_3 = 2; i_3 < 18; i_3 += 4) 
            {
                var_17 = ((/* implicit */unsigned short) arr_1 [i_0] [i_3]);
                var_18 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_1])))), (((arr_0 [i_0] [i_1]) != (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]))))))), (max((min((arr_1 [i_1] [i_3]), (arr_1 [i_0] [i_0]))), (arr_1 [5ULL] [i_1])))));
                /* LoopSeq 1 */
                for (long long int i_4 = 0; i_4 < 20; i_4 += 4) 
                {
                    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) arr_4 [i_1] [i_3] [i_4]))));
                    arr_13 [i_0] = ((/* implicit */signed char) min((((((arr_10 [i_0] [(short)2] [i_3] [11ULL]) ^ (((/* implicit */unsigned long long int) arr_1 [0U] [0U])))) & (min((((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [2U] [i_0])), (arr_0 [i_0] [i_4]))))), (((/* implicit */unsigned long long int) arr_6 [i_1] [i_1] [i_1]))));
                }
                arr_14 [i_0] [i_0] [i_3 - 2] = ((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_1] [i_3]);
            }
            /* vectorizable */
            for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 1) 
            {
                arr_17 [i_0] [(_Bool)1] [i_0] [i_5] = ((/* implicit */signed char) arr_9 [i_0] [(unsigned short)0] [i_5] [i_5]);
                arr_18 [i_0] [i_1] [6] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [19ULL] [i_0] [(short)2] [19ULL]))) != (((((/* implicit */unsigned int) arr_4 [i_5] [i_1] [i_0])) & (arr_1 [i_0] [i_1])))));
                arr_19 [i_0] = ((/* implicit */unsigned long long int) ((((arr_4 [i_0] [4] [i_5]) ^ (((/* implicit */int) arr_7 [i_0] [i_0] [i_1] [i_5])))) == (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_1] [i_5])) || (((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_0] [1U])))))));
                var_20 = ((/* implicit */int) max((var_20), (((((((arr_3 [i_0] [i_0] [i_5]) + (2147483647))) >> (((arr_1 [i_0] [i_5]) - (2046116U))))) / (((/* implicit */int) ((((/* implicit */int) arr_16 [i_0])) != (((/* implicit */int) arr_15 [4ULL])))))))));
            }
            /* LoopNest 2 */
            for (short i_6 = 3; i_6 < 19; i_6 += 3) 
            {
                for (signed char i_7 = 2; i_7 < 16; i_7 += 1) 
                {
                    {
                        var_21 = arr_2 [i_6 - 1];
                        var_22 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_15 [i_0])), (((min((((/* implicit */unsigned long long int) arr_22 [(signed char)8] [i_1] [i_1] [i_6 + 1] [i_6] [i_1])), (arr_10 [i_0] [i_1] [i_6 - 1] [i_7 + 4]))) | (((/* implicit */unsigned long long int) max((arr_5 [(_Bool)1] [i_1] [i_6 - 3]), (((/* implicit */int) arr_9 [i_0] [i_1] [i_6] [i_7])))))))));
                        arr_24 [i_0] [i_1] [i_0] [i_0] = (i_0 % 2 == zero) ? (((/* implicit */signed char) min((((min((arr_6 [i_1] [i_6] [i_1]), (((/* implicit */int) arr_23 [i_0] [i_0] [i_1] [i_6 - 2] [i_1] [i_6 - 2])))) >> (((min((arr_0 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_21 [i_0] [i_1] [19LL])))) - (1150270740ULL))))), (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_7 - 2]))))) : (((/* implicit */signed char) min((((min((arr_6 [i_1] [i_6] [i_1]), (((/* implicit */int) arr_23 [i_0] [i_0] [i_1] [i_6 - 2] [i_1] [i_6 - 2])))) >> (((((min((arr_0 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_21 [i_0] [i_1] [19LL])))) - (1150270740ULL))) - (259199916507892375ULL))))), (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_7 - 2])))));
                    }
                } 
            } 
        }
        arr_25 [i_0] = ((/* implicit */long long int) min((((/* implicit */int) (short)-27885)), (942554444)));
        var_23 = ((((942554444) % (((/* implicit */int) (unsigned short)4032)))) + (((/* implicit */int) max((((((/* implicit */int) arr_16 [i_0])) > (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0])))), (((((/* implicit */int) arr_11 [(_Bool)1] [i_0] [i_0] [i_0])) > (((/* implicit */int) arr_2 [i_0]))))))));
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        arr_28 [i_8] = ((/* implicit */long long int) min((max((((/* implicit */unsigned long long int) ((9223372036854775807LL) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)79)))))), (min((arr_26 [i_8]), (arr_26 [i_8]))))), (min((arr_26 [i_8]), (arr_26 [2])))));
        var_24 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_27 [i_8])), (min((arr_26 [i_8]), (((/* implicit */unsigned long long int) min((arr_27 [i_8]), (arr_27 [i_8]))))))));
        var_25 ^= ((/* implicit */int) min((min((arr_26 [i_8]), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [(unsigned short)18]))) > (arr_26 [i_8])))))), (min((arr_26 [i_8]), (max((arr_26 [i_8]), (arr_26 [i_8])))))));
        var_26 = ((/* implicit */long long int) min((((((arr_26 [i_8]) << (((arr_26 [i_8]) - (7390055115654289688ULL))))) << (((min((arr_26 [i_8]), (arr_26 [(unsigned short)22]))) - (7390055115654289664ULL))))), (((((arr_26 [i_8]) << (((arr_26 [i_8]) - (7390055115654289658ULL))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [12U])))))));
    }
    var_27 ^= max((((min((((/* implicit */int) var_15)), (var_11))) > (((/* implicit */int) ((var_10) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))), (((((((/* implicit */unsigned int) ((/* implicit */int) var_6))) == (var_1))) && (((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned long long int) var_7))))))));
    /* LoopNest 2 */
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        for (long long int i_10 = 2; i_10 < 16; i_10 += 4) 
        {
            {
                var_28 = ((/* implicit */unsigned char) arr_3 [i_9] [i_9] [i_10]);
                var_29 = ((/* implicit */int) arr_23 [i_9] [i_9] [i_9] [(signed char)7] [i_10 + 1] [i_10 + 1]);
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_11 = 2; i_11 < 17; i_11 += 1) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_12 = 1; i_12 < 16; i_12 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_13 = 0; i_13 < 18; i_13 += 3) 
                        {
                            var_30 = ((/* implicit */short) arr_39 [i_11] [i_10 + 1] [i_10 - 2] [i_12 - 1] [i_10 + 1]);
                            var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) ((((/* implicit */int) ((arr_22 [i_9] [i_10 - 1] [i_11] [i_12] [i_13] [i_10 - 1]) > (((/* implicit */long long int) arr_3 [i_9] [i_10 + 2] [i_11 + 1]))))) | (((/* implicit */int) ((arr_32 [i_9] [i_11 - 2] [i_12]) != (arr_21 [i_10] [i_11] [i_12 - 1])))))))));
                        }
                        arr_42 [i_9] [i_10 + 1] [i_11 - 1] [i_10 - 2] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) arr_38 [i_12 + 1] [i_11 - 2] [i_10] [i_9])) == (((/* implicit */int) arr_40 [i_9] [i_11] [i_10 + 1] [i_9] [i_9]))))) * (((/* implicit */int) ((((/* implicit */int) arr_23 [i_9] [i_9] [i_11 + 1] [i_12] [i_10] [i_11])) <= (((/* implicit */int) arr_9 [i_9] [i_10] [i_10] [i_10])))))));
                        var_32 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)256)) & (((/* implicit */int) (unsigned short)13000))));
                        arr_43 [(signed char)3] [(signed char)3] [1] [i_12 - 1] = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) arr_5 [i_12 + 1] [i_11 + 1] [(signed char)10])) + (arr_10 [i_9] [i_10] [i_11 - 2] [i_10]))) / (arr_10 [i_9] [i_10] [i_11] [i_12])));
                        var_33 = ((/* implicit */int) ((((/* implicit */int) arr_31 [i_9] [i_9])) != (((/* implicit */int) ((((/* implicit */int) arr_41 [i_12 - 1] [(_Bool)1] [i_11 - 2] [i_10 - 2] [i_9])) == (((/* implicit */int) arr_37 [i_12 + 2] [i_11 - 2] [i_10] [i_9])))))));
                    }
                    for (int i_14 = 0; i_14 < 18; i_14 += 3) 
                    {
                        var_34 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-79)) | (2147483647))) / (((/* implicit */int) arr_11 [i_9] [i_10] [i_11 - 2] [i_11 - 2]))));
                        arr_46 [i_14] [i_14] [i_11 - 1] [i_14] [i_14] [i_14] = ((/* implicit */_Bool) ((((((/* implicit */int) arr_38 [i_9] [i_9] [i_9] [i_9])) & (((/* implicit */int) arr_38 [i_14] [i_11] [i_10 - 2] [i_9])))) >> (((((/* implicit */int) arr_36 [i_9])) + (2413)))));
                    }
                    /* LoopSeq 1 */
                    for (int i_15 = 4; i_15 < 16; i_15 += 4) 
                    {
                        arr_49 [i_9] [i_10 + 1] [i_11 - 2] [i_15 - 4] = ((/* implicit */int) arr_15 [i_15]);
                        var_35 = ((/* implicit */unsigned long long int) max((var_35), (((/* implicit */unsigned long long int) arr_7 [i_10] [i_10 + 2] [(signed char)14] [i_10]))));
                    }
                    var_36 = ((((/* implicit */int) arr_48 [i_9] [i_9] [1LL] [i_9] [i_9])) << (((/* implicit */int) ((((/* implicit */int) arr_38 [i_9] [i_9] [i_9] [i_9])) != (((/* implicit */int) arr_47 [9] [i_9] [i_10] [i_11 - 1] [i_11 - 1]))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_16 = 0; i_16 < 18; i_16 += 4) 
                    {
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                        {
                            {
                                arr_54 [i_9] [i_9] [i_16] [i_10] &= ((/* implicit */short) ((arr_6 [i_11] [i_11 - 2] [i_11 - 2]) == (((/* implicit */int) arr_39 [i_9] [i_10 + 1] [i_11] [i_9] [i_9]))));
                                arr_55 [i_9] [i_9] [i_9] [i_9] [i_9] [i_17] [i_9] = ((/* implicit */signed char) ((((arr_6 [i_16] [i_10] [i_9]) % (((/* implicit */int) arr_44 [i_17] [i_17] [i_11 + 1] [i_16] [i_17] [i_16])))) >= (((/* implicit */int) ((((/* implicit */int) arr_23 [i_9] [i_11] [i_11] [i_16] [i_9] [i_16])) == (arr_35 [i_17] [i_11] [i_11] [i_9]))))));
                                arr_56 [i_9] [i_10 + 2] [i_17] [i_16] [i_16] [i_17] = ((/* implicit */unsigned long long int) arr_41 [i_9] [i_10] [i_10] [(_Bool)1] [i_17]);
                                arr_57 [i_17] [i_16] [i_16] [i_16] [i_16] [i_16] = ((/* implicit */int) ((((7649623726117749804LL) % (((/* implicit */long long int) ((/* implicit */int) (signed char)-79))))) >> (((((/* implicit */int) (unsigned char)229)) - (186)))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        arr_61 [i_18] = ((/* implicit */long long int) arr_60 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]);
                        /* LoopSeq 2 */
                        for (long long int i_19 = 0; i_19 < 18; i_19 += 1) /* same iter space */
                        {
                            arr_64 [i_9] [i_10] [i_9] [i_18] [i_19] = ((/* implicit */int) ((arr_26 [(unsigned short)8]) <= (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_47 [i_18] [i_10] [i_11 - 1] [i_18] [i_19]))) % (arr_51 [i_19] [i_18] [i_11 + 1] [i_9] [i_9]))))));
                            var_37 = ((/* implicit */int) arr_63 [i_10] [i_11 - 1] [i_19]);
                            var_38 = ((/* implicit */unsigned long long int) arr_3 [i_11 - 1] [i_11] [i_11]);
                        }
                        for (long long int i_20 = 0; i_20 < 18; i_20 += 1) /* same iter space */
                        {
                            var_39 += ((/* implicit */int) arr_11 [i_9] [i_10] [i_9] [(signed char)14]);
                            var_40 = ((/* implicit */long long int) ((((/* implicit */int) arr_15 [i_10])) | (((/* implicit */int) ((((/* implicit */_Bool) arr_36 [(_Bool)1])) || (((/* implicit */_Bool) arr_31 [i_9] [i_10])))))));
                        }
                    }
                    for (unsigned int i_21 = 1; i_21 < 14; i_21 += 3) /* same iter space */
                    {
                        arr_71 [i_21] [i_10 - 2] [i_21] [i_21] = ((((((/* implicit */long long int) ((/* implicit */int) arr_36 [i_10 + 1]))) & (arr_33 [i_9] [i_10] [i_9]))) | (((/* implicit */long long int) ((/* implicit */int) ((arr_1 [i_9] [i_10 + 2]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_11 - 2]))))))));
                        var_41 = ((/* implicit */signed char) ((((/* implicit */int) arr_2 [i_11])) == (((/* implicit */int) ((9223372036854775807LL) != (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                        /* LoopSeq 3 */
                        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                        {
                            arr_74 [i_9] [i_9] [(_Bool)1] [i_21 + 2] [i_22] = ((((/* implicit */int) ((arr_73 [i_9] [i_11] [i_21] [(_Bool)1]) != (((/* implicit */int) arr_37 [i_21 + 2] [i_21 + 2] [i_11 - 2] [i_21]))))) <= (((/* implicit */int) arr_69 [i_9] [i_21 + 1] [i_11 + 1] [i_9] [i_9])));
                            var_42 = ((/* implicit */signed char) arr_51 [i_9] [i_10] [i_11 - 1] [i_9] [13]);
                            var_43 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_47 [i_22] [i_9] [i_11] [i_9] [i_9])) || (((/* implicit */_Bool) ((((/* implicit */int) arr_30 [17LL] [i_22])) ^ (((/* implicit */int) arr_52 [i_9] [i_9] [5LL] [i_21] [i_9])))))));
                            var_44 = ((/* implicit */unsigned long long int) ((((((((/* implicit */int) arr_65 [i_9] [i_10] [i_11] [i_21] [i_9])) - (((/* implicit */int) arr_37 [i_21 + 2] [i_11] [9] [i_9])))) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */int) arr_53 [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_22])) >= (((/* implicit */int) arr_23 [i_9] [(unsigned char)8] [i_9] [i_9] [i_9] [(_Bool)1])))))));
                        }
                        for (unsigned char i_23 = 3; i_23 < 16; i_23 += 4) 
                        {
                            var_45 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_40 [i_9] [i_9] [i_11 - 2] [i_21 + 2] [i_23 + 1])) | (((((/* implicit */int) arr_23 [i_23] [i_23 - 1] [i_21 + 1] [i_9] [i_9] [i_9])) | (arr_5 [i_10] [(unsigned short)19] [i_23])))));
                            var_46 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_33 [i_9] [i_11] [(signed char)9]) / (((/* implicit */long long int) ((/* implicit */int) arr_52 [i_9] [i_9] [(unsigned short)1] [i_21 + 4] [i_23])))))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_37 [i_9] [i_9] [i_9] [i_9])) << (((((/* implicit */int) arr_30 [i_10] [i_10])) + (66))))))));
                            arr_77 [i_9] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((9ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-30730))))))) & (18446744073709551615ULL)));
                        }
                        for (int i_24 = 1; i_24 < 15; i_24 += 1) 
                        {
                            arr_81 [i_9] [i_9] [i_10] [i_9] [i_9] [i_24] = ((/* implicit */short) arr_5 [i_10] [i_11 + 1] [i_24]);
                            var_47 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)262))) | (-1413399425556891044LL)));
                        }
                        var_48 = ((/* implicit */int) min((var_48), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_80 [i_10] [i_10 + 2] [i_10])) || (((/* implicit */_Bool) arr_16 [i_9])))))) != (((arr_63 [i_9] [i_10] [i_11 + 1]) << (((((/* implicit */int) arr_65 [i_9] [i_10] [i_11] [i_21] [i_21 + 1])) + (23276))))))))));
                    }
                    for (unsigned int i_25 = 1; i_25 < 14; i_25 += 3) /* same iter space */
                    {
                        arr_84 [i_25] [i_11 + 1] [i_10 + 1] [i_25] = ((/* implicit */unsigned int) ((arr_34 [i_9] [(unsigned short)13] [i_9]) << (((arr_79 [i_9] [i_10]) + (157951268)))));
                        var_49 ^= ((((((/* implicit */int) arr_40 [i_25 + 3] [i_11 + 1] [i_9] [i_10 + 1] [i_9])) * (((/* implicit */int) arr_23 [i_9] [i_10 - 1] [i_11 + 1] [i_11 - 1] [i_10 - 1] [i_25])))) + (((/* implicit */int) ((arr_63 [i_9] [i_11 + 1] [i_25]) >= (((/* implicit */unsigned long long int) arr_79 [(unsigned short)8] [i_11 + 1]))))));
                    }
                }
                var_50 = ((/* implicit */short) min((var_50), (((/* implicit */short) arr_0 [i_10] [i_10]))));
                arr_85 [1] = ((/* implicit */short) arr_3 [3U] [i_10 - 2] [i_10]);
            }
        } 
    } 
    var_51 = ((/* implicit */long long int) max((var_51), (((/* implicit */long long int) var_5))));
}
