/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45271
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
    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) (~((+(((((/* implicit */_Bool) 20494310)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))))))))))));
    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */int) (signed char)-47)) ^ (((/* implicit */int) var_13)))))));
    var_22 = ((/* implicit */int) max((((7919781947611528714ULL) ^ (max((((/* implicit */unsigned long long int) var_18)), (10026609825674126696ULL))))), (((/* implicit */unsigned long long int) var_8))));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 9; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 6; i_1 += 2) 
        {
            {
                arr_6 [(_Bool)1] [(unsigned char)8] = ((/* implicit */short) (~(20494310)));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned long long int i_2 = 4; i_2 < 7; i_2 += 4) /* same iter space */
                {
                    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) arr_4 [i_1] [(short)7]))));
                    var_24 ^= (signed char)127;
                    var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_1 + 4])) ? (((/* implicit */int) arr_2 [i_1 - 1])) : (((/* implicit */int) arr_2 [i_1 + 1])))))));
                }
                for (unsigned long long int i_3 = 4; i_3 < 7; i_3 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (short i_4 = 1; i_4 < 6; i_4 += 3) 
                    {
                        for (unsigned char i_5 = 2; i_5 < 7; i_5 += 4) 
                        {
                            {
                                var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) (!(((/* implicit */_Bool) 1303077189)))))));
                                arr_17 [(unsigned short)4] [i_1 + 1] [i_0] [i_0] [(signed char)7] = arr_12 [i_5] [i_1] [i_3] [i_1] [i_0] [(_Bool)1];
                                arr_18 [i_5] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [3LL] [i_4 + 1] [i_5])))))) + ((~((+(4171375787U)))))));
                                arr_19 [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) 8420134248035424940ULL)) ? (((10026609825674126696ULL) & (8420134248035424920ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1)))));
                                arr_20 [i_0] [i_0 - 1] [i_0] [i_0 + 1] [(unsigned char)4] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) min((arr_7 [i_0] [i_5] [i_4 + 4] [i_5]), (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_0] [(unsigned char)2])))))))) : (((arr_12 [i_0 - 3] [i_1 + 3] [i_1] [i_3 + 1] [i_3] [i_0 - 3]) + (arr_12 [i_0 - 1] [i_1 + 1] [i_1] [i_3 - 3] [(_Bool)0] [(signed char)1])))));
                            }
                        } 
                    } 
                    arr_21 [i_1] [i_0] [i_3] [i_1] = ((/* implicit */unsigned int) 9223372036854775807LL);
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 4) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                var_27 = ((/* implicit */signed char) 8420134248035424920ULL);
                                arr_31 [i_6] [(_Bool)1] [i_6] [i_6] [i_8] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_0] [i_1 + 1] [(_Bool)1] [i_0 - 1])) ^ (((/* implicit */int) arr_14 [i_7] [i_1 + 3] [i_0] [i_0 - 2])))))));
                            }
                        } 
                    } 
                    arr_32 [i_6] [i_6] = ((/* implicit */_Bool) ((signed char) max((((/* implicit */unsigned int) (_Bool)0)), (668355347U))));
                    arr_33 [i_6] [i_6] [5U] = ((/* implicit */unsigned short) max((max((arr_26 [i_0 + 1] [i_1 + 2] [i_1 + 2]), (((/* implicit */int) (signed char)14)))), (((int) (+(arr_9 [i_0] [2ULL] [i_6]))))));
                }
                /* LoopSeq 1 */
                for (signed char i_9 = 0; i_9 < 10; i_9 += 4) 
                {
                    var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_0 [(signed char)4])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (63U))) ^ ((~(arr_27 [i_0] [i_0 - 3] [i_0] [i_0 + 1] [i_0])))))) ? (((/* implicit */unsigned long long int) (+(-20494311)))) : (max((((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0])) ? (2199023255551ULL) : (((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [i_9] [i_9])))), (((/* implicit */unsigned long long int) arr_25 [i_1 - 1] [1ULL])))))))));
                    /* LoopSeq 4 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) (+((+(8420134248035424919ULL))))))));
                        arr_38 [i_10] = ((/* implicit */unsigned int) 8420134248035424919ULL);
                    }
                    for (long long int i_11 = 0; i_11 < 10; i_11 += 3) /* same iter space */
                    {
                        var_30 ^= ((/* implicit */int) arr_15 [i_0] [i_0] [i_1] [i_0] [2ULL] [i_9] [i_0]);
                        /* LoopSeq 4 */
                        for (long long int i_12 = 0; i_12 < 10; i_12 += 3) 
                        {
                            var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) arr_14 [i_11] [(_Bool)1] [i_9] [i_9]))));
                            arr_44 [i_0] [i_0] [i_1] [i_9] [i_11] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_36 [i_0 - 1] [i_9]), (((((/* implicit */_Bool) arr_22 [i_0 - 3] [i_0 - 3] [i_0] [i_0 - 1])) ? (arr_12 [i_0] [i_0] [i_0 + 1] [i_0] [8U] [i_0]) : (5256665334236688520ULL)))))) ? (((/* implicit */int) ((signed char) ((unsigned int) arr_26 [i_0] [i_0] [i_12])))) : (((/* implicit */int) max((arr_30 [i_9] [i_0 - 2] [i_0 - 3] [i_0] [i_1 + 3] [i_11]), (((/* implicit */unsigned char) arr_0 [i_1 + 2])))))));
                            arr_45 [i_0] [i_1] [i_9] [i_11] [i_12] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_22 [i_0 - 3] [i_1] [i_9] [i_12]))));
                            arr_46 [3U] [i_1] [i_9] [3U] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2932039660U)) ? (1958123850521545792ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)63)))))) ? (((/* implicit */int) arr_41 [i_0 + 1] [9U] [9U] [2LL] [i_1 + 4])) : (((((/* implicit */int) arr_43 [i_11] [i_1 + 4] [(_Bool)1])) / (arr_22 [i_0] [i_0] [i_0] [i_0])))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_29 [(unsigned short)1] [i_1 + 1] [i_1 + 1] [i_11] [i_12]))) : (((((/* implicit */_Bool) 10026609825674126696ULL)) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_30 [i_9] [i_1] [i_9] [i_11] [i_12] [i_11]))))) : (((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_11] [i_11])) ? (-6368059407726230247LL) : (((/* implicit */long long int) arr_9 [i_9] [i_11] [(short)7]))))))));
                        }
                        for (long long int i_13 = 0; i_13 < 10; i_13 += 3) /* same iter space */
                        {
                            arr_49 [(unsigned char)2] [i_1] [(unsigned char)2] &= ((/* implicit */unsigned short) ((int) (~(7ULL))));
                            arr_50 [i_0] [i_1 + 2] [i_1 + 2] [i_9] [i_9] [i_11] [i_0] = ((/* implicit */unsigned int) (-((+(0ULL)))));
                            arr_51 [i_0] [i_0] [i_9] [i_0] [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_42 [i_0 + 1] [i_0 - 3] [i_0] [i_0] [i_0 - 3] [i_0 - 2] [i_0 + 1])) ? (((/* implicit */int) arr_42 [i_0 - 2] [i_0 - 3] [i_0] [i_0] [i_0] [i_0] [i_0 - 2])) : (((/* implicit */int) arr_34 [i_0 + 1] [i_1 + 1] [i_1 + 1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_0 + 1] [i_13] [i_0 + 1] [9U]))))) : ((+(arr_11 [i_0])))));
                        }
                        for (long long int i_14 = 0; i_14 < 10; i_14 += 3) /* same iter space */
                        {
                            var_32 ^= ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) arr_40 [i_0 + 1] [i_0 + 1] [i_1] [i_9] [i_11] [(unsigned char)6])) ? (((/* implicit */int) arr_40 [i_0] [i_1] [i_1] [i_0] [i_14] [i_0])) : (((/* implicit */int) arr_40 [i_1] [i_1 - 1] [5ULL] [i_9] [i_14] [i_1 + 4])))));
                            arr_54 [i_0] [i_1] [i_14] [i_11] [i_14] = ((/* implicit */unsigned long long int) arr_42 [i_0] [i_0] [i_0 - 3] [i_0] [i_0 - 2] [i_0] [i_0 - 2]);
                            var_33 = ((/* implicit */short) ((16588161816424272085ULL) + (((/* implicit */unsigned long long int) (~(((((/* implicit */int) (signed char)7)) ^ (arr_22 [3ULL] [i_1] [(unsigned short)3] [(unsigned short)3]))))))));
                            var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) var_4))));
                            arr_55 [i_14] [i_1] = ((/* implicit */int) arr_30 [i_14] [i_1 + 4] [i_1 - 1] [i_0 - 1] [i_14] [(short)7]);
                        }
                        for (long long int i_15 = 0; i_15 < 10; i_15 += 3) /* same iter space */
                        {
                            arr_58 [i_0] [i_1] [i_9] [i_9] [i_15] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_47 [i_0] [i_1 + 2] [i_9] [i_11] [i_15])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0])))))) ? (((unsigned int) 5031886775623083238LL)) : (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_0] [3U] [i_0] [i_0] [i_0 - 3])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((10026609825674126697ULL), (((/* implicit */unsigned long long int) var_9)))))))) : (((/* implicit */int) (signed char)106)));
                            var_35 = ((/* implicit */signed char) max((var_35), (((/* implicit */signed char) ((((((/* implicit */_Bool) arr_9 [i_1 + 1] [i_1 + 2] [i_1 + 2])) ? (arr_9 [i_1 + 1] [i_1 + 2] [i_1 - 1]) : (arr_9 [i_1 + 1] [i_1 - 1] [i_1 + 2]))) >= (((/* implicit */int) arr_43 [(signed char)0] [i_1 + 1] [(signed char)0])))))));
                        }
                        arr_59 [(short)2] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (1958123850521545792ULL) : (((/* implicit */unsigned long long int) 2107606470U))))) ? ((~(((/* implicit */int) arr_41 [i_0] [i_1] [4] [i_9] [5LL])))) : ((+(arr_7 [(unsigned char)4] [i_0] [i_0] [i_0 + 1])))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_16 = 1; i_16 < 8; i_16 += 4) 
                        {
                            arr_62 [i_0] [4LL] [i_9] [i_11] [i_16] = ((/* implicit */int) ((short) ((arr_53 [i_16 + 1] [i_1]) == (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_0] [i_0]))))));
                            arr_63 [i_0] [i_1] [i_9] [i_11] [i_16] [i_16 - 1] = ((/* implicit */int) (!(((/* implicit */_Bool) 0ULL))));
                            var_36 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_52 [i_0] [i_0] [i_0] [i_0] [4])) ? (10026609825674126696ULL) : (arr_15 [i_0] [6LL] [i_1] [i_9] [i_11] [i_16 + 2] [i_16 + 1])));
                            var_37 ^= ((/* implicit */unsigned char) arr_13 [i_0]);
                        }
                        /* LoopSeq 1 */
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                        {
                            var_38 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_66 [i_17] [i_1 + 1] [i_9])) ? (((/* implicit */int) arr_25 [i_0] [i_17])) : (((/* implicit */int) arr_0 [i_9]))))) : (arr_12 [i_0] [i_0] [(short)2] [i_11] [i_1] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_9] [i_0 + 1] [i_0] [i_0 + 1] [i_9] [i_11]))) : (((2187360825U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_17])))))));
                            var_39 = ((/* implicit */int) max((var_39), (((/* implicit */int) 8853074343937190207ULL))));
                        }
                    }
                    for (long long int i_18 = 0; i_18 < 10; i_18 += 3) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (short i_19 = 4; i_19 < 7; i_19 += 4) 
                        {
                            arr_73 [i_18] [i_1] = ((/* implicit */unsigned int) arr_1 [i_18] [i_18]);
                            arr_74 [i_0] [i_1] [i_0 + 1] [i_1] [i_9] [i_18] = ((/* implicit */unsigned int) ((((arr_52 [i_1 - 1] [i_1] [i_1] [i_1 - 1] [i_1 - 1]) / (arr_52 [i_1 + 2] [i_1] [i_1 + 3] [i_1] [i_1]))) * (((((/* implicit */_Bool) arr_39 [i_0 - 3] [i_1] [i_1] [i_1 + 3] [i_9])) ? (-5031886775623083236LL) : (((/* implicit */long long int) arr_13 [i_1 + 4]))))));
                            var_40 = ((/* implicit */unsigned char) arr_9 [i_1] [i_1] [i_1]);
                            var_41 = ((((/* implicit */_Bool) ((max(((_Bool)1), ((_Bool)0))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)16))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_67 [i_9] [i_18])) + (((/* implicit */int) arr_64 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_18] [i_19 - 4]))))) : (max((((((/* implicit */_Bool) arr_10 [i_0] [(_Bool)1] [(_Bool)1])) ? (10026609825674126717ULL) : (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) arr_61 [i_0 + 1] [i_1] [i_9] [i_18])))));
                        }
                        arr_75 [i_0] [i_1 - 1] [i_9] [i_18] [i_18] [i_9] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_43 [i_0 + 1] [i_0 - 1] [i_1 + 3])) ? (arr_8 [i_0 - 1] [i_1] [i_9] [i_1 + 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1 - 1])))))), ((+(18446744073709551613ULL)))));
                        arr_76 [i_18] [(_Bool)1] [i_0 - 3] [i_18] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) min((arr_11 [i_0 - 3]), (arr_11 [i_0 + 1])))) >= (((((/* implicit */_Bool) arr_72 [0U] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (arr_36 [6U] [i_9]) : (((/* implicit */unsigned long long int) arr_72 [i_0 - 3] [i_0 - 3] [i_1 - 1] [i_9] [(signed char)5] [(signed char)2] [i_18]))))));
                        var_42 = ((/* implicit */unsigned int) max((var_42), (((/* implicit */unsigned int) (+((+(((/* implicit */int) (_Bool)1)))))))));
                        arr_77 [i_0] [i_18] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))) ? ((+(((/* implicit */int) arr_64 [i_0] [(unsigned char)6] [(_Bool)1] [(unsigned char)9] [i_0 + 1])))) : (((/* implicit */int) max((arr_64 [i_0] [i_0] [(short)5] [i_0 - 3] [i_0 - 1]), (arr_64 [i_0] [i_0] [1] [(signed char)7] [i_0 - 2]))))));
                    }
                    for (long long int i_20 = 0; i_20 < 10; i_20 += 3) /* same iter space */
                    {
                        var_43 = ((/* implicit */unsigned short) max((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)0)));
                        var_44 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) (~(arr_79 [(signed char)6] [(signed char)6] [i_1] [i_1] [i_1])))) : (0ULL)))));
                    }
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_21 = 1; i_21 < 11; i_21 += 2) 
    {
        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
        {
            for (long long int i_23 = 0; i_23 < 12; i_23 += 1) 
            {
                {
                    var_45 = ((/* implicit */short) min((var_45), (((/* implicit */short) ((unsigned short) arr_80 [i_22] [i_22])))));
                    var_46 = ((/* implicit */_Bool) max((var_46), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_82 [i_21 - 1] [i_23])) ? (2107606485U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_82 [i_21 - 1] [8])))))) ? (((((/* implicit */_Bool) arr_81 [i_21 + 1])) ? (((/* implicit */int) arr_81 [i_21 - 1])) : (((/* implicit */int) arr_81 [i_21 - 1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_81 [i_21 + 1]))))))))));
                    var_47 = ((/* implicit */unsigned char) min((var_47), (((/* implicit */unsigned char) max((10026609825674126696ULL), (arr_83 [(signed char)4] [(unsigned char)6]))))));
                }
            } 
        } 
    } 
}
