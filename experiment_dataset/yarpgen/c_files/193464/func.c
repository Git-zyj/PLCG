/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193464
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                arr_12 [i_1] [i_1] = ((((unsigned long long int) var_7)) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_4) != (arr_11 [i_0] [10U] [i_2] [i_3] [i_4]))))) : (((((/* implicit */_Bool) arr_9 [i_1] [i_1] [2ULL] [i_1])) ? (arr_10 [8LL] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1] [i_2] [i_1] [i_4])))))))));
                                arr_13 [i_1] = ((/* implicit */unsigned char) (short)-5220);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        arr_17 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1] [i_5 - 1] [i_2] [i_2])))))) ? (7490679533503027538LL) : (((/* implicit */long long int) ((/* implicit */int) min((arr_9 [i_1] [i_5 - 1] [i_2] [8]), (arr_9 [i_1] [i_5 - 1] [i_1] [i_1])))))));
                        /* LoopSeq 4 */
                        for (int i_6 = 1; i_6 < 11; i_6 += 1) 
                        {
                            var_15 &= (((+((-(var_9))))) ^ (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))));
                            var_16 = ((/* implicit */short) max(((((~(27))) ^ (((/* implicit */int) ((arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) < (((/* implicit */long long int) 1681562097U))))))), (((/* implicit */int) ((((/* implicit */_Bool) ((14LL) ^ (var_2)))) && (((/* implicit */_Bool) ((var_13) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))))))));
                            arr_21 [i_6] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_8 [i_1] [i_1 - 1] [i_2]), (((/* implicit */long long int) var_3))))) ? (((((/* implicit */_Bool) arr_18 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_6]))) : (arr_1 [i_2]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_5 - 1] [i_1 + 2]))) : (arr_8 [i_1] [i_2] [i_1]))))));
                            arr_22 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (~(max((((/* implicit */long long int) var_13)), (((((/* implicit */_Bool) var_8)) ? (7200188442469858324LL) : (var_2)))))));
                        }
                        for (unsigned long long int i_7 = 3; i_7 < 10; i_7 += 1) 
                        {
                            var_17 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_1 [i_5])) ? (((/* implicit */unsigned long long int) (-(var_11)))) : (((arr_15 [i_1] [i_2] [i_1]) - (var_9))))), (((/* implicit */unsigned long long int) 1097385310748304951LL))));
                            var_18 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_1 - 1] [i_5 - 1]))))) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))));
                            arr_25 [10LL] [10LL] [10LL] [i_2] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_14 [i_0] [6ULL])))))) ^ (min((((/* implicit */long long int) (_Bool)1)), (var_1)))))) ? ((+((-(var_1))))) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_1])))));
                        }
                        for (unsigned char i_8 = 2; i_8 < 11; i_8 += 1) 
                        {
                            var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) var_7))));
                            var_20 &= ((/* implicit */int) (((((!(((/* implicit */_Bool) var_2)))) ? (((((/* implicit */_Bool) arr_18 [i_0] [10])) ? (((/* implicit */unsigned long long int) arr_28 [i_1] [i_5])) : (var_7))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)8296))))))) ^ (((/* implicit */unsigned long long int) min((arr_23 [i_0] [i_1 - 1] [i_2] [i_5] [i_8] [5ULL]), (((/* implicit */long long int) var_14)))))));
                        }
                        for (long long int i_9 = 0; i_9 < 12; i_9 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((max((var_9), (((/* implicit */unsigned long long int) arr_16 [i_0] [i_1] [i_0] [i_5])))), (var_6))))));
                            arr_31 [i_1] [i_1] [i_1] [i_1] [i_1] = var_1;
                        }
                        var_22 = var_12;
                        arr_32 [i_5] [i_5] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */int) var_7);
                    }
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned int) var_11);
    var_24 -= ((/* implicit */long long int) ((((/* implicit */long long int) min((((/* implicit */unsigned int) max((1700627792), (((/* implicit */int) (unsigned char)84))))), ((~(var_0)))))) != ((-(((((/* implicit */_Bool) (unsigned char)77)) ? (((/* implicit */long long int) var_5)) : (var_1)))))));
    /* LoopNest 2 */
    for (long long int i_10 = 2; i_10 < 19; i_10 += 1) 
    {
        for (short i_11 = 0; i_11 < 20; i_11 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_12 = 0; i_12 < 20; i_12 += 1) 
                {
                    for (unsigned int i_13 = 0; i_13 < 20; i_13 += 1) 
                    {
                        {
                            arr_45 [i_10] [i_11] [i_10] = ((/* implicit */long long int) var_5);
                            arr_46 [18ULL] &= ((/* implicit */long long int) (~(((((/* implicit */_Bool) 22ULL)) ? (((((/* implicit */_Bool) arr_44 [(short)6] [i_11] [i_11] [i_10])) ? (var_0) : (arr_34 [i_12]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) < (var_9)))))))));
                            var_25 = ((/* implicit */unsigned char) arr_33 [i_10]);
                            arr_47 [i_11] [i_13] [i_10] [i_11] [i_11] = ((((/* implicit */_Bool) (+(arr_33 [i_13])))) ? (((((/* implicit */_Bool) arr_33 [i_11])) ? (arr_33 [i_12]) : (arr_33 [i_10 + 1]))) : ((-(arr_33 [i_11]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_14 = 3; i_14 < 18; i_14 += 1) 
                {
                    for (unsigned int i_15 = 0; i_15 < 20; i_15 += 1) 
                    {
                        {
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (int i_16 = 3; i_16 < 16; i_16 += 1) 
                            {
                                var_26 = arr_42 [i_16 - 2] [i_16] [i_16] [i_16];
                                var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) arr_54 [i_10 - 2]))));
                                var_28 = ((/* implicit */int) arr_37 [i_11]);
                                arr_57 [i_11] [i_11] [i_11] [i_11] [i_16] = ((/* implicit */unsigned int) arr_54 [i_11]);
                            }
                            for (unsigned char i_17 = 3; i_17 < 17; i_17 += 1) 
                            {
                                arr_60 [i_10] [i_11] [i_14] [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_41 [3LL] [i_11] [i_10 - 2])) ? (arr_33 [i_15]) : (arr_41 [i_10] [9U] [i_17 + 1])))) ? (((((/* implicit */_Bool) 11U)) ? (arr_33 [i_10 - 1]) : (arr_33 [i_10 + 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_41 [i_17 + 2] [i_11] [i_10]))))))));
                                var_29 -= ((/* implicit */short) (!(((/* implicit */_Bool) (~(arr_33 [i_10 - 1]))))));
                                var_30 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_55 [i_17] [i_11] [i_17] [i_11] [i_10])) ? (var_9) : (((/* implicit */unsigned long long int) arr_55 [4LL] [i_11] [i_17 + 3] [i_11] [i_17])))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (arr_55 [i_17] [i_11] [12] [i_11] [i_14]) : (arr_55 [i_17 + 2] [i_11] [i_17] [i_11] [i_11]))))));
                                var_31 = min((((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) (short)-26362)) && (((/* implicit */_Bool) -25LL)))))))), (0ULL));
                            }
                            arr_61 [i_10] [i_11] [i_11] [i_11] [i_11] = ((/* implicit */unsigned char) arr_53 [i_11] [6ULL] [i_11] [i_15] [i_15]);
                            var_32 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)45))) ^ (((arr_58 [i_14] [i_11] [i_10 - 1] [i_14 + 2] [i_14]) - (arr_58 [i_10] [i_11] [i_10 - 1] [i_14 + 2] [8LL])))));
                        }
                    } 
                } 
                arr_62 [i_11] = ((/* implicit */int) (~(((((/* implicit */_Bool) 4526990804632001277LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (var_1)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_18 = 0; i_18 < 13; i_18 += 1) 
    {
        for (long long int i_19 = 4; i_19 < 9; i_19 += 1) 
        {
            {
                arr_67 [i_19] [i_18] [i_18] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_38 [i_18] [i_18] [i_19 + 3])) ? (((/* implicit */long long int) ((arr_66 [6LL]) ^ (((/* implicit */int) var_10))))) : (((((/* implicit */_Bool) var_4)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)4)))))))) : (max((((/* implicit */unsigned long long int) max((var_12), (((/* implicit */long long int) (short)-32759))))), (var_4)))));
                /* LoopSeq 1 */
                for (int i_20 = 2; i_20 < 10; i_20 += 1) 
                {
                    /* LoopNest 2 */
                    for (short i_21 = 0; i_21 < 13; i_21 += 1) 
                    {
                        for (unsigned int i_22 = 2; i_22 < 9; i_22 += 1) 
                        {
                            {
                                var_33 = ((/* implicit */long long int) var_14);
                                arr_75 [i_21] [i_20] [i_22] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((unsigned int) var_13)), (((/* implicit */unsigned int) arr_72 [i_22 + 1] [i_21] [i_20 + 3] [i_21] [i_19 - 2]))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) (unsigned char)0)))) ? (((/* implicit */long long int) arr_70 [i_20] [i_19] [i_20])) : ((-(3420596864090800577LL)))))) : (max((((/* implicit */unsigned long long int) 2147483635)), (((var_8) - (((/* implicit */unsigned long long int) var_13))))))));
                                var_34 ^= ((/* implicit */int) min((((((/* implicit */_Bool) arr_71 [i_18] [i_18] [i_22 + 3])) ? (arr_44 [i_20] [i_20] [i_20] [i_20 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))), (((/* implicit */unsigned int) arr_71 [i_18] [i_19] [i_22 + 4]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_23 = 0; i_23 < 13; i_23 += 1) 
                    {
                        for (short i_24 = 0; i_24 < 13; i_24 += 1) 
                        {
                            {
                                arr_82 [i_24] [i_19] [i_23] [i_23] [i_19] [i_18] = ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_11) : (((/* implicit */long long int) arr_66 [i_19]))))) ? (((((/* implicit */_Bool) 4317340719756915412ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-16934))) : (4294967282U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((11791016036912524911ULL) != (((/* implicit */unsigned long long int) var_11))))))));
                                var_35 = ((/* implicit */unsigned char) min((((/* implicit */int) min((arr_35 [i_20 - 2]), (arr_35 [i_20 + 3])))), (((((/* implicit */int) arr_35 [i_20 + 1])) - (((/* implicit */int) arr_35 [i_20 - 1]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_25 = 0; i_25 < 13; i_25 += 1) 
                    {
                        for (unsigned char i_26 = 0; i_26 < 13; i_26 += 1) 
                        {
                            {
                                arr_89 [i_18] [i_18] [i_20] [i_20] [i_20] [i_20] [(unsigned char)4] &= ((/* implicit */unsigned long long int) (-2147483647 - 1));
                                var_36 = ((/* implicit */unsigned int) ((((/* implicit */long long int) (-(((/* implicit */int) var_14))))) < (((long long int) var_6))));
                                arr_90 [i_26] [3ULL] [i_25] [i_19 + 1] [i_18] = ((/* implicit */int) var_2);
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
