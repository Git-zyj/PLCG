/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238939
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_18 -= ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) (unsigned char)170)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))))));
        var_19 |= ((/* implicit */short) (!(((/* implicit */_Bool) var_17))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 1) /* same iter space */
        {
            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [23LL]))))) && (((/* implicit */_Bool) ((var_4) + (((/* implicit */int) arr_2 [i_0])))))));
            arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_1]))))) && (((/* implicit */_Bool) ((int) arr_0 [i_0])))));
            var_21 += ((/* implicit */signed char) max(((~(((/* implicit */int) arr_0 [i_1])))), (((/* implicit */int) min((arr_0 [i_1]), (arr_0 [i_0]))))));
        }
        for (unsigned char i_2 = 0; i_2 < 25; i_2 += 1) /* same iter space */
        {
            var_22 = ((/* implicit */short) ((int) ((signed char) var_17)));
            var_23 = ((/* implicit */unsigned char) (+(((int) (unsigned char)85))));
            arr_7 [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((_Bool) (signed char)70)))));
        }
    }
    for (unsigned long long int i_3 = 2; i_3 < 20; i_3 += 3) 
    {
        arr_10 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_3 + 1])) | ((~(((/* implicit */int) arr_2 [i_3 + 2]))))));
        arr_11 [i_3] = ((/* implicit */long long int) (~((-(((/* implicit */int) ((((/* implicit */int) arr_5 [23LL] [i_3 + 3] [i_3])) == (((/* implicit */int) arr_5 [8U] [i_3] [i_3 + 2])))))))));
        var_24 = max((((((/* implicit */int) arr_5 [i_3 + 3] [i_3 + 3] [i_3 + 2])) + ((-(((/* implicit */int) (short)3939)))))), (((/* implicit */int) (unsigned short)15714)));
        /* LoopNest 2 */
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            for (short i_5 = 4; i_5 < 20; i_5 += 1) 
            {
                {
                    arr_16 [i_3] [i_3] [(unsigned short)13] [i_3] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (~(-9223372036854775806LL)))) ? (max((((/* implicit */unsigned long long int) (unsigned char)86)), (arr_12 [i_3] [i_3]))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned char)85)), (0)))))) != (((/* implicit */unsigned long long int) -936053563))));
                    arr_17 [i_3] [i_3] = ((/* implicit */signed char) (-((+(((((/* implicit */int) arr_8 [i_3])) - (((/* implicit */int) var_15))))))));
                    var_25 = ((/* implicit */unsigned short) min((((unsigned char) arr_9 [i_3] [i_3])), (((/* implicit */unsigned char) ((((arr_3 [i_4]) << (((((/* implicit */int) var_11)) + (20378))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_15)))))))));
                }
            } 
        } 
    }
    for (unsigned short i_6 = 0; i_6 < 10; i_6 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 2) /* same iter space */
        {
            arr_23 [i_7] = ((/* implicit */unsigned long long int) arr_2 [i_7]);
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned char i_8 = 3; i_8 < 7; i_8 += 4) 
            {
                arr_26 [i_6] [i_6] &= ((/* implicit */_Bool) var_1);
                var_26 ^= ((/* implicit */unsigned char) arr_0 [i_8]);
            }
            for (unsigned char i_9 = 0; i_9 < 10; i_9 += 4) 
            {
                var_27 ^= ((/* implicit */unsigned long long int) max((((/* implicit */signed char) arr_9 [i_9] [i_7])), (((signed char) arr_25 [i_9] [i_7] [(unsigned short)8]))));
                /* LoopNest 2 */
                for (long long int i_10 = 1; i_10 < 8; i_10 += 4) 
                {
                    for (unsigned char i_11 = 0; i_11 < 10; i_11 += 3) 
                    {
                        {
                            arr_34 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] |= ((/* implicit */short) (-(((/* implicit */int) (unsigned short)37038))));
                            arr_35 [i_7] [i_10] [i_9] [i_7] [i_6] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) min((var_3), (((/* implicit */unsigned short) arr_14 [i_10 + 2] [i_10] [i_10] [i_9])))))));
                            var_28 |= (~(((/* implicit */int) arr_6 [i_7] [i_7])));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_12 = 0; i_12 < 10; i_12 += 2) 
            {
                /* LoopSeq 3 */
                for (short i_13 = 1; i_13 < 9; i_13 += 4) 
                {
                    var_29 -= ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)63611)) ? (((/* implicit */int) arr_38 [i_13 + 1] [(signed char)9])) : (((/* implicit */int) arr_38 [i_13 + 1] [i_7]))))) != (arr_1 [i_13 - 1]));
                    arr_43 [i_6] [i_7] [i_12] [i_13] = ((/* implicit */long long int) max((((unsigned long long int) (~(((/* implicit */int) (unsigned char)124))))), (((/* implicit */unsigned long long int) ((_Bool) ((long long int) var_7))))));
                }
                for (int i_14 = 0; i_14 < 10; i_14 += 1) 
                {
                    /* LoopSeq 4 */
                    for (unsigned char i_15 = 1; i_15 < 9; i_15 += 3) 
                    {
                        var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) ((unsigned long long int) ((10523806757975950952ULL) >= (((/* implicit */unsigned long long int) 936053562))))))));
                        arr_50 [i_6] [(unsigned char)7] [i_14] [(unsigned char)7] [(unsigned char)7] [i_7] [4] = ((/* implicit */unsigned short) max((((long long int) arr_18 [i_6])), (((/* implicit */long long int) var_8))));
                        var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_21 [i_12] [i_7] [i_12])))))));
                        var_32 = ((/* implicit */unsigned short) ((unsigned char) (-(((/* implicit */int) ((((/* implicit */int) var_6)) <= (arr_49 [i_6] [i_6] [(signed char)2] [i_14] [i_6] [i_6] [i_6])))))));
                        arr_51 [i_6] [i_14] [i_14] [i_14] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)85))));
                    }
                    for (long long int i_16 = 0; i_16 < 10; i_16 += 3) /* same iter space */
                    {
                        arr_54 [i_7] [i_7] [i_12] [i_14] [i_16] = (i_14 % 2 == 0) ? (((/* implicit */int) ((((((/* implicit */_Bool) min((((/* implicit */short) (signed char)24)), ((short)32754)))) ? (((/* implicit */unsigned int) ((((-936053562) + (2147483647))) >> (((arr_45 [i_14] [(short)0]) - (3275182040505678269ULL)))))) : (var_1))) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_44 [i_14])) ? ((-(((/* implicit */int) var_7)))) : (min((var_16), (((/* implicit */int) var_5)))))))))) : (((/* implicit */int) ((((((/* implicit */_Bool) min((((/* implicit */short) (signed char)24)), ((short)32754)))) ? (((/* implicit */unsigned int) ((((-936053562) + (2147483647))) >> (((((arr_45 [i_14] [(short)0]) - (3275182040505678269ULL))) - (6074302006153589000ULL)))))) : (var_1))) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_44 [i_14])) ? ((-(((/* implicit */int) var_7)))) : (min((var_16), (((/* implicit */int) var_5))))))))));
                        arr_55 [(unsigned short)9] [i_14] [(unsigned char)7] [(unsigned short)6] [4U] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_16])) && (((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_14] [i_14])) << (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [(signed char)9] [(signed char)9]))) > (arr_25 [(unsigned char)0] [i_7] [5LL])))))))));
                        arr_56 [i_6] [i_14] [i_12] [i_14] [i_16] = ((/* implicit */signed char) var_10);
                    }
                    for (long long int i_17 = 0; i_17 < 10; i_17 += 3) /* same iter space */
                    {
                        var_33 = ((/* implicit */int) arr_14 [i_6] [i_12] [(unsigned short)9] [i_14]);
                        arr_60 [(signed char)2] [i_7] [8LL] [i_12] [i_17] [i_14] [i_12] = min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_40 [i_6] [i_7] [i_6] [i_12] [i_6])) | (((/* implicit */int) arr_40 [i_6] [i_7] [7ULL] [8LL] [i_6]))))), ((+(var_17))));
                        var_34 = ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)111)) ? (((int) (unsigned short)49821)) : (1292360911))) == (((((/* implicit */int) arr_9 [i_14] [i_7])) & (((/* implicit */int) arr_9 [i_14] [i_7]))))));
                    }
                    for (long long int i_18 = 0; i_18 < 10; i_18 += 3) /* same iter space */
                    {
                        arr_63 [i_6] [i_6] [i_14] [i_12] [2ULL] [i_18] = ((/* implicit */_Bool) arr_57 [i_6] [6ULL] [1ULL] [i_6] [i_14]);
                        var_35 += ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)15714)))))));
                        arr_64 [1ULL] [1ULL] [i_12] [i_14] [i_12] [(unsigned char)9] = ((/* implicit */short) max(((unsigned short)65535), (((/* implicit */unsigned short) (unsigned char)85))));
                        arr_65 [i_7] [i_7] [i_14] [(unsigned char)9] [0] = ((/* implicit */signed char) ((max((((/* implicit */int) arr_38 [i_7] [i_12])), (var_4))) | (((/* implicit */int) max((((/* implicit */unsigned short) (!((_Bool)1)))), (arr_39 [i_18] [(unsigned short)1] [(unsigned short)1] [i_7]))))));
                        arr_66 [(signed char)4] [(signed char)4] [(signed char)4] [2ULL] [i_14] [i_18] [i_6] &= ((/* implicit */_Bool) (~(((((((/* implicit */_Bool) arr_58 [i_6] [i_6] [(short)4] [i_12] [i_6])) && (arr_9 [i_7] [i_7]))) ? (min((2286122270U), (((/* implicit */unsigned int) (signed char)-47)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_14] [i_6] [i_6] [i_6])))))));
                    }
                    arr_67 [i_14] = ((/* implicit */long long int) var_10);
                    var_36 += ((/* implicit */unsigned short) max((min((((/* implicit */long long int) max((((/* implicit */unsigned short) (unsigned char)255)), (arr_53 [i_6] [(_Bool)1] [(unsigned short)0] [i_6] [i_6] [i_14])))), (arr_46 [i_6] [i_7] [i_6] [i_12] [i_14]))), (((/* implicit */long long int) arr_41 [i_6] [(unsigned short)7] [i_7] [i_12] [i_14]))));
                    /* LoopSeq 1 */
                    for (long long int i_19 = 0; i_19 < 10; i_19 += 2) 
                    {
                        arr_70 [i_14] [i_14] [i_7] [i_12] [(signed char)4] [i_19] = var_13;
                        arr_71 [i_6] [i_6] [i_6] [(unsigned short)8] [i_19] [i_14] [i_14] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_41 [i_6] [i_7] [i_12] [i_7] [i_19])) ? (((/* implicit */int) arr_41 [i_6] [i_6] [i_12] [i_7] [9])) : (((/* implicit */int) (unsigned short)15714)))))));
                    }
                }
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    var_37 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_68 [i_6] [i_20] [0U] [i_20] [i_7]))) != (arr_59 [i_6] [i_7] [i_12] [(signed char)3] [i_12] [i_20] [i_20]))))));
                    var_38 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)20917))));
                    var_39 = ((/* implicit */short) ((((/* implicit */_Bool) (~(936053562)))) ? (((/* implicit */int) arr_53 [i_6] [i_6] [i_7] [i_20] [i_12] [i_7])) : (((/* implicit */int) (_Bool)1))));
                    var_40 = ((/* implicit */long long int) max((var_40), ((~(arr_22 [i_6] [i_6] [i_12])))));
                    arr_75 [i_7] [i_12] [i_12] [i_12] [i_12] |= ((/* implicit */int) min((min((((/* implicit */long long int) arr_37 [7ULL] [i_20])), (arr_36 [i_6] [(unsigned short)5] [i_12] [(short)3]))), (((/* implicit */long long int) (-(arr_49 [i_20] [i_12] [i_12] [i_12] [i_6] [i_6] [i_6]))))));
                }
                var_41 = ((/* implicit */long long int) max((var_41), (((/* implicit */long long int) ((((((/* implicit */_Bool) max((-5557636426040465844LL), (((/* implicit */long long int) (signed char)-103))))) ? (((((/* implicit */int) (unsigned short)1025)) & (((/* implicit */int) arr_53 [i_6] [(signed char)2] [i_6] [i_6] [i_7] [i_12])))) : (((/* implicit */int) var_3)))) / (((/* implicit */int) ((((unsigned long long int) arr_28 [i_6] [i_7])) != (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_42 [i_6] [i_6] [i_6] [i_6]), (var_11)))))))))))));
            }
            var_42 = ((/* implicit */long long int) (((+(((/* implicit */int) arr_62 [i_7])))) << (((((((/* implicit */_Bool) -848641683718203566LL)) ? (((/* implicit */int) (signed char)-11)) : (((/* implicit */int) (short)32767)))) + (22)))));
        }
        for (unsigned long long int i_21 = 0; i_21 < 10; i_21 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_22 = 2; i_22 < 9; i_22 += 4) 
            {
                var_43 += ((/* implicit */short) ((((/* implicit */_Bool) arr_74 [i_21] [6] [i_22 - 1] [i_22] [(_Bool)0])) || (((/* implicit */_Bool) ((long long int) arr_9 [i_21] [i_21])))));
                var_44 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_36 [i_22 - 1] [i_22 + 1] [i_22 + 1] [i_22 - 1]))));
            }
            arr_81 [(signed char)6] = ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_22 [i_21] [i_21] [i_21])))) : (((9539024728405398088ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))));
            var_45 ^= ((/* implicit */unsigned short) ((unsigned long long int) (-(((/* implicit */int) arr_80 [i_6] [i_6] [i_6] [i_21])))));
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_23 = 0; i_23 < 10; i_23 += 2) /* same iter space */
        {
            var_46 += ((/* implicit */long long int) (~(((/* implicit */int) arr_84 [i_6] [i_6] [i_23]))));
            arr_85 [i_6] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (signed char)117)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_82 [i_23])))) | (((/* implicit */int) var_14))));
            /* LoopSeq 1 */
            for (signed char i_24 = 1; i_24 < 8; i_24 += 4) 
            {
                arr_90 [i_6] [i_24] = ((/* implicit */short) ((long long int) arr_88 [i_24 - 1] [i_24 + 1] [i_24] [i_24 - 1]));
                var_47 += ((/* implicit */signed char) arr_46 [i_23] [(short)8] [(unsigned char)4] [i_24 + 1] [i_23]);
            }
        }
        for (unsigned char i_25 = 0; i_25 < 10; i_25 += 2) /* same iter space */
        {
            arr_93 [i_25] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_46 [i_6] [i_6] [i_6] [(unsigned char)8] [(unsigned char)8])) ? (arr_32 [i_6] [i_25]) : (((/* implicit */unsigned long long int) var_16))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-19180))))) : (((/* implicit */int) arr_73 [i_6] [i_6] [i_25]))));
            arr_94 [i_6] [i_6] [i_6] = ((/* implicit */long long int) (~(((/* implicit */int) ((short) ((((/* implicit */int) (unsigned char)168)) / (((/* implicit */int) (unsigned char)173))))))));
        }
        var_48 = ((/* implicit */unsigned long long int) arr_41 [0ULL] [0ULL] [i_6] [i_6] [i_6]);
        var_49 = ((/* implicit */unsigned int) max((var_49), (((((/* implicit */_Bool) (-(var_4)))) ? (((unsigned int) (-(((/* implicit */int) var_13))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_15 [i_6] [i_6] [i_6] [i_6])))))))));
        var_50 = ((/* implicit */unsigned long long int) max((var_50), (((/* implicit */unsigned long long int) ((((9535491810796241045ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_57 [i_6] [i_6] [i_6] [i_6] [i_6]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_80 [(unsigned short)0] [i_6] [i_6] [i_6]))))) : (((/* implicit */int) arr_57 [(unsigned short)0] [(unsigned short)0] [i_6] [(short)8] [i_6])))))));
    }
    var_51 = ((/* implicit */int) min((((/* implicit */short) ((4294443008U) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))))), (((short) min((((/* implicit */int) (unsigned short)15714)), (var_16))))));
}
