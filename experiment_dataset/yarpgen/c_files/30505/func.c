/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30505
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
    var_15 = ((/* implicit */long long int) (+((-(((/* implicit */int) var_2))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (int i_2 = 3; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_0] = ((/* implicit */unsigned short) (+(max((max((-1602267154496486832LL), (1602267154496486831LL))), (((/* implicit */long long int) var_10))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        var_16 = ((/* implicit */short) arr_7 [i_0] [i_1] [i_2] [i_3]);
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            arr_14 [i_0] [i_1] [i_2 - 2] [i_3] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)119))));
                            arr_15 [i_1] [i_0] [i_3] [i_4 - 1] = ((/* implicit */_Bool) (short)0);
                        }
                    }
                    /* vectorizable */
                    for (unsigned short i_5 = 0; i_5 < 20; i_5 += 3) 
                    {
                        arr_18 [i_0] [14U] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) -1602267154496486832LL)) - (arr_4 [i_2 - 2] [i_2 - 3] [i_2 - 2])));
                        arr_19 [i_0] [i_0] = ((/* implicit */long long int) ((unsigned short) arr_0 [15LL] [i_0 + 1]));
                        arr_20 [i_0] [i_0] [i_0 + 1] [i_0] [i_0] = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) arr_10 [i_2 - 1] [i_5])))) % (((/* implicit */int) ((short) (unsigned char)99)))));
                    }
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) max((var_3), (((/* implicit */long long int) var_2)))))));
    var_18 = ((/* implicit */unsigned short) var_3);
    /* LoopNest 3 */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        for (signed char i_7 = 1; i_7 < 13; i_7 += 3) 
        {
            for (unsigned long long int i_8 = 2; i_8 < 13; i_8 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_9 = 1; i_9 < 11; i_9 += 3) 
                    {
                        for (int i_10 = 0; i_10 < 15; i_10 += 3) 
                        {
                            {
                                arr_32 [i_6] [i_6] [i_7 + 1] [i_8] [i_9] [i_7] = ((/* implicit */short) -195287299987212518LL);
                                var_19 = max((((/* implicit */int) max((arr_17 [i_9 - 1] [i_7 - 1] [i_8 - 1] [i_9]), (((/* implicit */unsigned short) arr_9 [i_8 + 1] [i_7 - 1]))))), (((((/* implicit */_Bool) arr_0 [i_7 - 1] [i_8 + 2])) ? (((/* implicit */int) arr_0 [i_7 + 2] [i_8 + 1])) : (((/* implicit */int) arr_9 [i_8 + 2] [i_7 + 1])))));
                                var_20 = ((/* implicit */long long int) max((var_20), (max((var_8), (((/* implicit */long long int) var_5))))));
                                var_21 -= ((/* implicit */unsigned int) (+(arr_1 [i_9])));
                                var_22 -= ((/* implicit */unsigned int) var_11);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 15; i_11 += 3) 
                    {
                        arr_37 [i_6] [i_7] [6U] [i_11] = ((/* implicit */signed char) var_10);
                        arr_38 [i_7] = ((/* implicit */unsigned long long int) arr_28 [i_6] [i_8 - 2] [i_7 - 1] [i_6]);
                    }
                    /* LoopSeq 2 */
                    for (long long int i_12 = 0; i_12 < 15; i_12 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            arr_44 [i_6] [i_6] [i_7] [i_8] [i_7] [i_6] [i_6] = ((/* implicit */long long int) var_6);
                            arr_45 [i_7] [i_7] [i_8] [i_8] = ((/* implicit */unsigned short) arr_21 [i_7]);
                        }
                        for (long long int i_14 = 0; i_14 < 15; i_14 += 2) 
                        {
                            arr_48 [i_7] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) arr_2 [i_7] [i_8])), (((((/* implicit */_Bool) arr_24 [i_6] [i_8 - 2])) ? (var_1) : (((/* implicit */unsigned long long int) arr_24 [i_6] [i_6]))))));
                            var_23 = ((/* implicit */unsigned short) (+((+(arr_4 [i_7] [i_7 - 1] [i_7 - 1])))));
                            var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) arr_31 [i_8] [(unsigned short)0] [i_6]))));
                            arr_49 [i_7] [i_7] [i_8] [i_7] [i_7] [i_14] = ((/* implicit */unsigned short) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) 0U))))), ((unsigned char)101)));
                            var_25 -= ((/* implicit */short) arr_21 [i_6]);
                        }
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            arr_54 [i_7] [i_7] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [16LL])) ? (((/* implicit */int) arr_28 [i_8 + 2] [i_7 - 1] [i_8] [i_12])) : (max((((/* implicit */int) var_12)), (arr_27 [i_6] [i_6] [i_8 + 1] [(unsigned short)10])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((((/* implicit */int) arr_6 [i_6] [i_6] [i_8])) >> (((arr_42 [i_15] [i_15] [i_12] [i_8] [i_7] [i_6]) - (623924229U)))))))) : (3124003358U)));
                            arr_55 [i_7] [i_7] [i_7 + 2] [(short)1] [i_7] [i_7] [i_7] = ((/* implicit */_Bool) var_1);
                            var_26 ^= ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 9595079229179291843ULL)) ? (-1448473828) : (((/* implicit */int) arr_17 [i_8] [i_12] [i_8] [i_6]))))) : (arr_11 [i_6] [i_7] [i_8] [i_6] [i_7])))), (((((/* implicit */_Bool) 8851664844530259773ULL)) ? ((+(arr_3 [i_6]))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_40 [i_6] [i_6] [i_6] [i_6] [i_6])), ((unsigned short)64738)))))))));
                        }
                        var_27 = ((/* implicit */_Bool) min((((arr_12 [i_7 - 1] [i_7 - 1] [i_8 + 1] [i_8 + 2] [i_8 - 2] [i_8 + 2] [i_8 - 2]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_6] [i_8 + 1] [i_7 + 1]))))), (((/* implicit */unsigned long long int) ((signed char) arr_12 [i_7 - 1] [i_7 + 2] [i_8 + 1] [i_8 + 2] [i_8 + 2] [i_8 - 2] [i_8 - 1])))));
                        var_28 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_25 [i_8 - 2] [i_8 + 1] [i_8 - 2] [(signed char)6])))) ? (arr_42 [i_6] [i_7] [i_6] [i_8] [i_8] [i_12]) : (((/* implicit */unsigned int) max((((/* implicit */int) arr_39 [i_7 + 1] [i_7 + 1] [i_7 + 1])), (((((/* implicit */_Bool) arr_50 [i_6] [0U] [0U] [i_6] [i_6])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_14)))))))));
                        arr_56 [i_7] = ((/* implicit */short) arr_41 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]);
                    }
                    for (unsigned short i_16 = 0; i_16 < 15; i_16 += 3) 
                    {
                        arr_61 [i_7] [i_8] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (-(arr_24 [i_6] [i_6])))) ? (((((/* implicit */_Bool) var_8)) ? (arr_50 [i_16] [9] [i_7] [9] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_6] [i_7] [i_8] [i_16]))))) : ((+(var_4)))))));
                        arr_62 [i_7] [13] [i_7] = ((/* implicit */short) max((((((/* implicit */long long int) ((arr_39 [7ULL] [i_7] [7ULL]) ? (((/* implicit */int) (unsigned char)170)) : (((/* implicit */int) arr_46 [i_6] [i_6] [i_6]))))) % (3854622071005407374LL))), (((/* implicit */long long int) arr_23 [(unsigned short)13] [i_8] [i_7 + 2]))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (long long int i_17 = 0; i_17 < 15; i_17 += 3) /* same iter space */
                        {
                            arr_66 [i_6] [(_Bool)1] [i_8] [i_16] [(_Bool)1] &= ((/* implicit */long long int) var_10);
                            var_29 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_2 [i_7 + 2] [i_7 + 2]))));
                            var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 2147483630)) ? (arr_4 [i_6] [i_8 - 1] [i_8 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                        }
                        /* vectorizable */
                        for (long long int i_18 = 0; i_18 < 15; i_18 += 3) /* same iter space */
                        {
                            arr_71 [i_6] [i_7] [(short)14] = arr_22 [i_8 + 2] [(signed char)0];
                            var_31 = ((/* implicit */unsigned short) arr_12 [i_6] [i_6] [i_6] [17LL] [i_6] [i_18] [14]);
                        }
                        var_32 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((arr_68 [i_7 + 1] [i_7] [(_Bool)1] [9ULL] [i_8 - 1] [i_8 - 1]), (arr_35 [i_7 + 1] [i_7 + 2] [i_7 + 1]))))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_19 = 2; i_19 < 11; i_19 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_20 = 0; i_20 < 15; i_20 += 3) /* same iter space */
                        {
                            var_33 = ((/* implicit */short) ((arr_27 [i_6] [i_6] [(_Bool)1] [i_6]) - (2147483647)));
                            var_34 = var_1;
                            var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)120)), (((unsigned int) arr_53 [i_19] [i_6]))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) -1448473841)), (4294967295U)))) : (max((((/* implicit */unsigned long long int) arr_46 [i_8 + 1] [7ULL] [i_8])), (1ULL)))));
                            var_36 -= ((/* implicit */short) (+(min((arr_52 [(unsigned short)14] [i_7 - 1] [(short)5] [i_8 + 2] [i_8 + 2] [i_19 + 2]), (((/* implicit */long long int) (short)-30896))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_21 = 0; i_21 < 15; i_21 += 3) /* same iter space */
                        {
                            var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)20621)) ? (((9223372036854775804LL) >> (((/* implicit */int) (_Bool)0)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_75 [i_6] [i_8] [6LL] [i_8]))))))));
                            arr_78 [i_7] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_43 [i_21]))) | ((~(arr_75 [i_6] [9U] [i_6] [i_6])))));
                        }
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_22 = 0; i_22 < 15; i_22 += 2) 
                        {
                            var_38 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_50 [(short)6] [i_7 + 2] [i_8] [i_8 - 2] [i_7 + 2])) ? (arr_34 [i_6] [i_7 - 1] [(unsigned short)9] [i_22]) : (arr_34 [i_6] [i_7 + 1] [i_22] [i_22])));
                            var_39 = ((/* implicit */int) max((var_39), (((/* implicit */int) ((arr_41 [i_19 + 4] [(_Bool)1] [i_8] [i_19 + 2] [i_22] [i_8 - 2] [i_7 + 1]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                            arr_81 [i_6] [i_6] [i_7] [i_6] [i_6] = ((/* implicit */_Bool) arr_74 [i_6] [i_6] [i_6] [i_6] [i_6] [(short)1] [i_6]);
                            var_40 = ((/* implicit */unsigned long long int) ((1871476322U) - (((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-12417)))))));
                        }
                        var_41 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_6] [i_6] [i_6]))) ^ (var_13)));
                        var_42 = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_40 [i_19 + 2] [i_19] [i_19] [i_8 + 2] [i_7 + 1])) ? (((/* implicit */int) arr_40 [i_19] [i_19] [i_19] [i_19] [i_7 + 2])) : (((/* implicit */int) arr_40 [i_19] [i_7 + 1] [i_19] [i_7 + 1] [i_7 + 1]))))), (((((/* implicit */_Bool) max((arr_30 [i_6] [i_7] [i_8] [i_19] [i_7]), (((/* implicit */long long int) arr_17 [i_6] [7ULL] [i_7 + 2] [i_6]))))) ? (max((-9223372036854775804LL), (((/* implicit */long long int) arr_25 [i_6] [i_6] [i_6] [i_6])))) : (((/* implicit */long long int) ((/* implicit */int) arr_43 [i_8])))))));
                    }
                    var_43 = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)86))));
                }
            } 
        } 
    } 
}
