/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20077
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
    var_19 = ((((/* implicit */_Bool) 2634374517064338540ULL)) ? (2634374517064338540ULL) : (2634374517064338511ULL));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 17; i_2 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (int i_3 = 3; i_3 < 18; i_3 += 2) 
                    {
                        var_20 = ((/* implicit */unsigned char) arr_4 [(short)9] [i_0] [i_0]);
                        var_21 = ((/* implicit */unsigned long long int) min(((!(((/* implicit */_Bool) var_3)))), (arr_9 [i_3 - 1] [i_3 + 3] [i_0] [i_3] [i_3])));
                        var_22 = ((/* implicit */short) max((arr_7 [i_2 + 3] [i_2 - 1] [i_2]), (((arr_7 [i_2 + 2] [i_2 + 2] [i_2 - 1]) && (((/* implicit */_Bool) arr_4 [i_2 + 4] [i_0] [i_2 + 3]))))));
                        arr_10 [i_0] [i_1] [(unsigned short)20] [i_0] = ((/* implicit */long long int) (unsigned short)65535);
                    }
                    for (int i_4 = 0; i_4 < 21; i_4 += 4) 
                    {
                        var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_4] [i_4])) ? (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (arr_9 [i_4] [i_4] [i_4] [i_2] [i_2])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_4] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_4] [i_2] [i_4] [i_0] [i_0 + 1]))) : (15812369556645213105ULL)))) ? (((/* implicit */int) ((var_11) == (((/* implicit */int) (unsigned short)40143))))) : (((/* implicit */int) var_2)))))))));
                        var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((var_4) >= (((/* implicit */int) var_3)))))))) && (((/* implicit */_Bool) var_4))));
                    }
                    for (short i_5 = 1; i_5 < 20; i_5 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_6 = 0; i_6 < 21; i_6 += 3) 
                        {
                            var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_15 [i_5 + 1] [i_5 - 1] [(unsigned char)6] [i_5] [i_5 + 1])) - (((/* implicit */int) arr_13 [i_5 + 1] [i_5] [17LL] [i_0]))))), (var_16))))));
                            var_26 = ((/* implicit */unsigned short) arr_12 [11] [i_0] [i_2 + 3] [i_5 - 1] [i_6] [i_5 + 1]);
                            var_27 -= ((/* implicit */short) (!(((/* implicit */_Bool) arr_11 [i_0 + 1] [i_0 - 1] [i_0] [i_0 + 2] [i_0 + 1]))));
                            var_28 = ((((/* implicit */int) (unsigned short)18812)) - (-1150071486));
                            arr_17 [i_0 + 1] [i_0] [i_0 + 2] [i_5] [i_6] = ((/* implicit */unsigned short) 9146220838235109737ULL);
                        }
                        var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) arr_3 [i_0 + 2]))));
                        var_30 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_15 [(unsigned short)18] [i_5 - 1] [(unsigned short)12] [i_1 + 2] [i_1 + 1])) % (((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_0] [i_1] [(unsigned short)19] [6])) && (((/* implicit */_Bool) 15812369556645213076ULL)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (((arr_8 [i_5] [i_0 - 1] [(unsigned char)14]) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [12LL])) ? (((/* implicit */int) arr_0 [i_0])) : (-1150071485)))) : (((((/* implicit */_Bool) (unsigned char)192)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)155))) : (1933061511U)))))));
                        var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) ((((min((((/* implicit */int) arr_12 [i_0] [i_1] [(unsigned char)13] [i_5 + 1] [(_Bool)1] [(unsigned char)13])), (var_11))) >= (((/* implicit */int) arr_11 [i_1] [i_1 + 1] [19ULL] [i_1 + 2] [i_1 + 2])))) && (((/* implicit */_Bool) ((short) ((short) arr_16 [i_0] [(signed char)14] [i_1] [i_2 + 4] [i_5])))))))));
                    }
                    arr_18 [i_0] = ((/* implicit */signed char) arr_11 [i_0 + 1] [i_1 - 2] [i_1] [i_2 + 1] [(unsigned char)18]);
                    /* LoopSeq 2 */
                    for (unsigned char i_7 = 1; i_7 < 20; i_7 += 4) 
                    {
                        var_32 += (unsigned short)61440;
                        /* LoopSeq 2 */
                        for (unsigned short i_8 = 0; i_8 < 21; i_8 += 1) 
                        {
                            arr_24 [i_0] [i_1 - 2] [i_0] [i_7 + 1] [i_8] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_13 [i_0] [i_8] [i_0] [i_7 + 1]), (((/* implicit */unsigned char) arr_1 [i_0]))))) ? (((((/* implicit */int) arr_5 [i_7])) - (((/* implicit */int) arr_11 [i_1 + 1] [i_1] [i_1 + 1] [i_2] [i_2 - 1])))) : ((((-2147483647 - 1)) + (((/* implicit */int) (unsigned short)16384))))));
                            arr_25 [i_8] [i_0] [i_8] [i_7 - 1] [4ULL] [i_0] [i_0] = arr_12 [9] [i_1 + 1] [(unsigned char)0] [i_8] [i_8] [i_2];
                        }
                        /* vectorizable */
                        for (unsigned long long int i_9 = 0; i_9 < 21; i_9 += 3) 
                        {
                            var_33 ^= ((/* implicit */long long int) 2634374517064338525ULL);
                            arr_29 [(unsigned short)10] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_14 [i_0 + 1] [i_2 + 2] [i_2 + 2] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)64))) : (var_8)));
                        }
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_10 = 0; i_10 < 21; i_10 += 4) 
                        {
                            arr_32 [i_0 - 1] [i_0 - 1] [(unsigned char)13] [i_0] [i_0] = ((/* implicit */unsigned char) arr_20 [i_7 + 1] [i_7] [i_2 + 2] [i_2 + 2] [i_0]);
                            var_34 ^= ((/* implicit */int) arr_27 [i_0] [i_1 + 1] [i_1 + 2] [i_7]);
                            arr_33 [i_0] [i_1] = ((((/* implicit */int) arr_8 [i_2] [i_2 + 1] [i_2 + 1])) / (((/* implicit */int) arr_8 [i_2 + 2] [i_2 + 2] [i_2 + 4])));
                            var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) arr_4 [i_0] [i_10] [i_10]))));
                            var_36 |= ((/* implicit */unsigned short) ((((/* implicit */int) arr_22 [i_2 + 3] [i_2] [i_2] [i_2 - 1] [(_Bool)0])) - (((/* implicit */int) arr_22 [i_2 - 1] [i_2] [i_2 - 1] [i_2 + 2] [i_2]))));
                        }
                        arr_34 [i_0 - 1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) 576419600U)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-116))) : (4831737756945954384LL))), (((/* implicit */long long int) (+(var_15))))));
                        var_37 = ((/* implicit */int) ((long long int) arr_6 [i_2 + 1] [i_1] [i_7] [i_7]));
                    }
                    for (signed char i_11 = 0; i_11 < 21; i_11 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (short i_12 = 3; i_12 < 20; i_12 += 3) 
                        {
                            arr_39 [i_0] [(signed char)8] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) (-((((-(var_6))) / (arr_2 [i_12])))));
                            var_38 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1 - 2]))) : (var_8))))));
                            arr_40 [i_0] [i_1 + 1] [(unsigned char)13] [i_0] [i_12] [i_2] = ((/* implicit */long long int) arr_6 [i_2] [i_2 + 2] [i_2] [i_2 + 2]);
                        }
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            var_39 ^= ((/* implicit */long long int) arr_6 [(unsigned char)20] [i_1] [i_2] [13]);
                            arr_43 [i_0] [i_0] [(signed char)7] [(unsigned char)8] [i_11] [i_0] = ((/* implicit */unsigned long long int) ((((((15812369556645213077ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [16ULL] [(unsigned short)17] [i_0] [i_11] [i_13]))))) ? (arr_2 [i_0]) : (var_17))) >= (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (-6372171774486766523LL)))))))));
                            var_40 = ((/* implicit */signed char) arr_27 [i_0 - 1] [i_0] [i_0] [i_0]);
                        }
                        for (int i_14 = 0; i_14 < 21; i_14 += 1) 
                        {
                            var_41 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)37616)) | (-682726075)))) ? (max((15812369556645213105ULL), (((/* implicit */unsigned long long int) arr_1 [i_0])))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1] [i_1] [i_1]))) : (2634374517064338511ULL))))), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 6582707133646403795LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)31358))) : (6946770493787646793LL))), (max((arr_47 [i_0] [i_1] [i_2 + 3] [i_11] [i_0]), (((/* implicit */long long int) (signed char)-11)))))))));
                            arr_48 [i_0] [i_0] [i_2 + 3] [i_11] [(unsigned short)2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_7 [i_0 + 1] [i_1 + 1] [i_0 + 1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_0] [i_1] [i_2] [i_11]))) : (18446744073709551615ULL)))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [6ULL] [i_11] [(unsigned short)12] [i_11]))) : (arr_4 [i_0] [i_0] [i_2]))) : (arr_42 [i_0] [(unsigned short)19] [10] [(short)4] [i_14])));
                            var_42 = ((/* implicit */_Bool) max((var_42), ((_Bool)0)));
                            arr_49 [i_0] [i_0] [i_0] [(unsigned char)3] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) arr_21 [i_0] [i_11] [i_2] [i_14] [i_0] [i_11] [i_2 + 2]))) <= (((((arr_2 [i_0 + 1]) + (2147483647))) << (((((arr_2 [i_2 + 3]) + (1998502076))) - (29)))))));
                            var_43 = ((/* implicit */unsigned short) (short)28878);
                        }
                        arr_50 [i_0 - 1] [i_0] [i_0 - 1] [4ULL] = ((/* implicit */_Bool) max((arr_46 [i_2 + 4] [i_0] [i_0]), (arr_37 [i_0 + 1] [3] [i_0] [i_0 - 1] [i_0 + 2])));
                        /* LoopSeq 1 */
                        for (unsigned short i_15 = 2; i_15 < 17; i_15 += 2) 
                        {
                            arr_53 [i_0] [i_0] [i_0] [i_0 + 1] [i_0] [i_0 + 2] [i_0 + 1] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (0) : (((/* implicit */int) (signed char)76))))), (((((/* implicit */_Bool) arr_47 [i_15 + 4] [(unsigned short)14] [i_15] [i_15 + 1] [i_0])) ? (((/* implicit */unsigned long long int) arr_47 [i_15] [i_15] [i_15] [i_15 + 1] [i_0])) : (var_16)))));
                            var_44 = ((/* implicit */unsigned char) 0ULL);
                        }
                    }
                }
            } 
        } 
    } 
    var_45 = ((/* implicit */short) ((((/* implicit */int) var_13)) % (((/* implicit */int) var_3))));
}
