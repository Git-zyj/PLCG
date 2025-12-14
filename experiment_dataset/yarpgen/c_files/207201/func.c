/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207201
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
    var_11 = ((/* implicit */long long int) min((((/* implicit */unsigned short) var_6)), (var_3)));
    var_12 = ((/* implicit */short) (-(((/* implicit */int) max((min(((short)21571), ((short)-1850))), (((/* implicit */short) (unsigned char)85)))))));
    var_13 = ((/* implicit */signed char) var_2);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            var_14 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (short)-7542)))))))) >> (((((/* implicit */int) arr_3 [i_0])) - (16)))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (short i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                var_15 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_8))));
                var_16 = ((/* implicit */unsigned short) ((int) var_6));
                arr_7 [23U] [i_1] [i_0 - 1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) arr_1 [i_2])) : (4294967282U))) - (((/* implicit */unsigned int) var_1))));
                var_17 *= ((/* implicit */short) arr_5 [i_0 + 1] [i_1 - 1] [i_2]);
            }
            for (unsigned short i_3 = 0; i_3 < 25; i_3 += 2) 
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_4 = 0; i_4 < 25; i_4 += 2) 
                {
                    arr_13 [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_3))));
                    arr_14 [i_0] [i_1] [i_1] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967267U)) ? (12U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)19459))) : (4294967273U)));
                    arr_15 [i_1] [(_Bool)1] [8] [i_1] = ((/* implicit */unsigned short) ((long long int) arr_6 [i_0 - 2] [i_0 - 1] [i_0]));
                }
                for (unsigned int i_5 = 2; i_5 < 24; i_5 += 2) 
                {
                    var_18 |= max((((/* implicit */unsigned int) (unsigned char)242)), (18U));
                    arr_20 [i_0] [i_0] [(unsigned short)15] [i_0 + 1] [i_1] [i_0 - 2] = ((/* implicit */long long int) var_5);
                    /* LoopSeq 2 */
                    for (long long int i_6 = 0; i_6 < 25; i_6 += 2) 
                    {
                        var_19 = ((/* implicit */unsigned short) var_6);
                        arr_23 [i_0 - 1] [i_1] [i_1] [i_3] [i_5] [i_6] [i_6] = ((/* implicit */unsigned long long int) ((int) min((((/* implicit */unsigned long long int) 4294967261U)), (16164951623061397156ULL))));
                        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) arr_6 [i_0] [i_1 + 2] [i_1 + 2]))));
                        var_21 ^= ((/* implicit */signed char) (+(arr_1 [i_0])));
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)24594)) ? (((/* implicit */unsigned long long int) 4294967295U)) : (var_5)));
                    }
                    for (unsigned int i_7 = 0; i_7 < 25; i_7 += 2) 
                    {
                        arr_27 [i_0 + 2] [i_0] [i_0] [i_0 + 2] [i_1] [i_1] [i_0 + 2] = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                        var_23 = ((/* implicit */signed char) min((var_23), (((signed char) (short)-24601))));
                        arr_28 [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */_Bool) var_7);
                        var_24 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 13U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)5128))));
                    }
                }
                var_25 |= ((/* implicit */short) (-(((/* implicit */int) var_3))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned char i_8 = 0; i_8 < 25; i_8 += 2) 
                {
                    var_26 += ((/* implicit */_Bool) (~(17623649U)));
                    var_27 ^= ((/* implicit */short) (-(((/* implicit */int) ((unsigned short) 3868036584054884227ULL)))));
                    /* LoopSeq 4 */
                    for (unsigned long long int i_9 = 2; i_9 < 23; i_9 += 2) 
                    {
                        arr_35 [i_9 - 2] [i_1] [i_1] [i_1] [i_0 - 2] = ((/* implicit */unsigned char) arr_19 [i_9] [i_8] [i_3]);
                        arr_36 [i_0 - 1] [i_3] [i_1] = ((/* implicit */unsigned int) var_10);
                        var_28 = ((/* implicit */int) max((var_28), (((((/* implicit */int) arr_6 [i_0 + 2] [i_0 - 1] [i_0])) >> (((((/* implicit */int) arr_10 [i_9] [i_0])) - (46)))))));
                    }
                    for (short i_10 = 4; i_10 < 24; i_10 += 2) 
                    {
                        arr_39 [i_0] [i_1] [i_1] [i_8] [i_10] [i_3] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_18 [(unsigned short)20] [(signed char)6] [i_10 - 1] [i_3] [i_1 + 3] [i_0])) ? (((/* implicit */int) arr_18 [i_10] [i_10 - 3] [i_10 - 4] [i_1 + 1] [i_1 + 1] [i_0])) : (((/* implicit */int) var_3))));
                        arr_40 [i_0] [i_0] [i_3] [i_8] |= ((/* implicit */long long int) arr_18 [i_10] [i_10 - 3] [i_10] [i_10] [i_10] [i_10 + 1]);
                    }
                    for (unsigned int i_11 = 0; i_11 < 25; i_11 += 2) 
                    {
                        arr_44 [i_0] [i_0] [i_1] [i_1] [i_0] = ((/* implicit */int) (signed char)-1);
                        arr_45 [i_1] = ((/* implicit */int) ((((/* implicit */unsigned int) -161474684)) % (3397596806U)));
                        var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) (((!(((/* implicit */_Bool) 2550613231595062061ULL)))) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))));
                        var_30 -= arr_8 [i_8] [i_8] [i_8];
                    }
                    for (long long int i_12 = 0; i_12 < 25; i_12 += 2) 
                    {
                        var_31 = ((/* implicit */int) var_2);
                        var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) ((unsigned char) ((signed char) arr_24 [i_12] [i_12] [1] [i_3] [i_1] [i_0]))))));
                        arr_49 [i_3] [i_3] [i_1] [i_3] = ((/* implicit */unsigned int) ((_Bool) var_3));
                        var_33 = ((/* implicit */long long int) ((unsigned short) ((26U) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))));
                        arr_50 [i_0] [i_0 - 2] [i_1] [i_1] [i_3] [(unsigned short)7] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) var_0)) - (((/* implicit */int) (unsigned short)41269))));
                    }
                }
                for (unsigned short i_13 = 0; i_13 < 25; i_13 += 2) 
                {
                    var_34 |= ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((((/* implicit */int) var_8)) % (((/* implicit */int) var_6))))))) ? (arr_0 [i_1]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) & (1611448424))))));
                    var_35 = ((/* implicit */short) min((var_35), (((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_1] [i_0])) ? (5U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) arr_21 [i_0] [i_0] [i_0] [i_0 + 1] [i_0 - 1] [i_0]))))))))))));
                    arr_54 [i_0 - 1] [i_0 - 1] [i_0 + 2] [i_1] = ((/* implicit */unsigned long long int) (_Bool)1);
                    arr_55 [i_0] [i_0] [i_1] [i_3] [i_0] [i_13] = ((/* implicit */unsigned char) (~((~(((long long int) arr_30 [i_1] [i_3] [i_3] [i_1] [i_1]))))));
                    var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1972000581)) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) < (arr_2 [i_1 + 3] [i_3])))) : ((-(((/* implicit */int) var_4))))))) ? ((-(((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) & (var_2))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)24607)))))))))));
                }
                for (unsigned int i_14 = 1; i_14 < 21; i_14 += 2) 
                {
                    var_37 -= ((/* implicit */unsigned int) (+(((/* implicit */int) ((short) 4277343651U)))));
                    var_38 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(-532805909030776212LL))))));
                }
            }
        }
        /* vectorizable */
        for (unsigned short i_15 = 2; i_15 < 24; i_15 += 2) 
        {
            var_39 = ((/* implicit */unsigned long long int) ((_Bool) (unsigned char)0));
            arr_62 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_5 [i_0 - 1] [i_15 - 1] [i_0]))));
            var_40 = ((/* implicit */int) (+(arr_5 [i_0] [i_0 + 2] [i_0])));
            var_41 *= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) -161474684)) == (245811797U)));
        }
        for (short i_16 = 0; i_16 < 25; i_16 += 2) 
        {
            var_42 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_10 [i_0 + 1] [i_16])) ? (22U) : (1392075646U))) + (((/* implicit */unsigned int) arr_57 [i_0 - 1] [i_16] [i_0 + 1]))))) ? ((+(arr_0 [i_0 + 1]))) : (((/* implicit */unsigned long long int) arr_22 [i_0 - 2] [i_0] [8U] [(unsigned short)9]))));
            /* LoopSeq 2 */
            for (unsigned char i_17 = 1; i_17 < 24; i_17 += 2) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_18 = 3; i_18 < 23; i_18 += 2) 
                {
                    var_43 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_64 [i_0 - 2] [i_17 - 1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_64 [i_0 - 2] [i_17 - 1]))));
                    var_44 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_38 [i_18 + 2] [i_17] [i_0]))) % (-10LL)))) ? (((/* implicit */unsigned int) -993902050)) : (((unsigned int) 20U))));
                }
                arr_71 [i_0] [i_0] [i_17] [20U] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) arr_32 [i_16] [i_17] [i_17 + 1])), (((((/* implicit */_Bool) (short)24600)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) : (18446744073709551615ULL)))));
                /* LoopSeq 2 */
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_20 = 0; i_20 < 25; i_20 += 2) 
                    {
                        arr_77 [i_19] [i_19] = ((/* implicit */long long int) arr_32 [i_19] [i_19] [i_0]);
                        var_45 = ((/* implicit */int) arr_67 [i_16] [i_17] [i_19] [i_20]);
                        arr_78 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_19] [i_0 - 1] [i_19] = ((/* implicit */int) arr_37 [i_0 - 1] [i_19]);
                    }
                    for (int i_21 = 1; i_21 < 23; i_21 += 2) 
                    {
                        arr_82 [(_Bool)1] [i_19] [i_16] [(_Bool)1] [i_16] [i_16] [i_16] = ((/* implicit */unsigned int) max(((-(((/* implicit */int) arr_74 [i_19])))), ((+(834268127)))));
                        arr_83 [i_16] [i_16] [i_19] [i_16] [i_16] [i_16] = ((/* implicit */unsigned char) var_3);
                        var_46 = ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) arr_38 [i_17] [i_19] [i_21]))));
                    }
                    arr_84 [i_19] [15ULL] = ((/* implicit */short) ((((/* implicit */int) var_7)) << (((min((2902891653U), (1392075620U))) - (1392075619U)))));
                }
                /* vectorizable */
                for (unsigned int i_22 = 0; i_22 < 25; i_22 += 2) 
                {
                    arr_88 [i_0] [i_16] [i_0] [i_22] = ((/* implicit */long long int) arr_48 [i_22] [i_22] [i_17 + 1] [18LL] [i_16] [(short)20]);
                    /* LoopSeq 3 */
                    for (unsigned short i_23 = 0; i_23 < 25; i_23 += 2) 
                    {
                        arr_92 [i_16] = var_5;
                        arr_93 [i_0] [i_23] [i_17] [i_22] [(signed char)15] [i_22] = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */int) var_3)) - (((/* implicit */int) var_0)))));
                        arr_94 [i_17] [i_16] [i_17] [i_16] [i_0] = ((/* implicit */short) (~(arr_57 [i_17 - 1] [i_16] [i_17])));
                    }
                    for (unsigned short i_24 = 0; i_24 < 25; i_24 += 2) /* same iter space */
                    {
                        arr_97 [i_0 + 2] [i_0] [(_Bool)1] [i_0] [i_0] [i_0] [i_0] = (unsigned short)3228;
                        arr_98 [i_0] [i_16] [i_16] [i_22] [i_17 - 1] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_3))));
                    }
                    for (unsigned short i_25 = 0; i_25 < 25; i_25 += 2) /* same iter space */
                    {
                        var_47 = ((/* implicit */unsigned char) ((long long int) arr_85 [i_25] [i_25] [i_17 - 1] [i_17 + 1] [i_0 + 1] [i_0]));
                        var_48 |= ((/* implicit */int) ((((/* implicit */_Bool) arr_90 [i_0 + 2] [(unsigned char)6] [i_17 - 1] [(_Bool)1] [(unsigned char)6])) ? (arr_90 [i_0 - 2] [i_0] [i_17 - 1] [i_25] [i_25]) : (arr_90 [i_0 + 1] [i_0] [i_17 + 1] [i_22] [i_25])));
                    }
                }
                arr_101 [i_16] [i_16] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65508)) ? (((unsigned long long int) var_10)) : (((/* implicit */unsigned long long int) (-(1685761207))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)62307)) < (503316480))))) : (min((((/* implicit */unsigned int) var_8)), (((unsigned int) 2902891671U))))));
            }
            for (_Bool i_26 = 1; i_26 < 1; i_26 += 1) 
            {
                arr_104 [i_26] [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) -1))));
                arr_105 [i_0] [3ULL] [i_0 + 2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((unsigned char)74), (((/* implicit */unsigned char) min((((/* implicit */signed char) (_Bool)1)), (arr_9 [i_0]))))))) ? (arr_65 [i_0]) : (((/* implicit */int) var_10))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_27 = 0; i_27 < 25; i_27 += 2) 
                {
                    var_49 ^= ((/* implicit */unsigned char) ((((/* implicit */int) arr_99 [i_27] [i_16] [i_26 - 1] [i_26 - 1] [i_26] [i_27] [i_26 - 1])) << (((((/* implicit */int) var_9)) + (28467)))));
                    arr_109 [i_26] [i_0] [i_0] = ((/* implicit */unsigned char) (~(((((/* implicit */unsigned int) ((/* implicit */int) var_8))) & (arr_70 [i_27] [i_27] [(short)20])))));
                }
            }
            var_50 = max(((short)1800), (((/* implicit */short) (_Bool)1)));
            var_51 += ((/* implicit */short) min((((((((/* implicit */_Bool) arr_9 [i_0])) ? (((/* implicit */int) arr_18 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16])) : (((/* implicit */int) var_10)))) / (((/* implicit */int) var_3)))), (((/* implicit */int) arr_58 [i_0] [i_0] [i_0 + 1] [i_16] [i_16]))));
        }
        arr_110 [i_0] [i_0 - 2] |= ((/* implicit */unsigned int) (+(((/* implicit */int) arr_69 [i_0 + 2] [i_0 + 2] [i_0] [i_0]))));
        arr_111 [i_0 - 1] = min((((((/* implicit */int) min(((unsigned char)14), (((/* implicit */unsigned char) (signed char)-5))))) << (((((int) -9208518982162270599LL)) - (1220982371))))), (((/* implicit */int) var_7)));
    }
}
