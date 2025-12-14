/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21809
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
    var_15 = ((/* implicit */_Bool) min((((unsigned long long int) var_4)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (var_7) : (var_5))))));
    var_16 = ((/* implicit */unsigned long long int) ((var_4) | (((/* implicit */long long int) ((/* implicit */int) (((+(((/* implicit */int) (unsigned char)16)))) == (((/* implicit */int) (unsigned char)18))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 24; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned long long int) arr_3 [i_0] [i_1] [i_0]);
                /* LoopSeq 3 */
                /* vectorizable */
                for (signed char i_2 = 0; i_2 < 25; i_2 += 1) /* same iter space */
                {
                    arr_7 [i_1 - 1] = ((/* implicit */unsigned int) ((unsigned long long int) arr_1 [i_2]));
                    arr_8 [i_2] [(unsigned char)3] [(unsigned char)3] [(unsigned char)17] = ((((/* implicit */_Bool) (unsigned char)227)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_0] [(_Bool)1]))))) : (134217696U));
                }
                for (signed char i_3 = 0; i_3 < 25; i_3 += 1) /* same iter space */
                {
                    var_18 = ((/* implicit */short) ((((/* implicit */unsigned long long int) arr_9 [i_3] [i_1 + 1] [i_0])) | ((~(((((/* implicit */_Bool) (unsigned char)210)) ? (8626306320818277579ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))))))));
                    arr_11 [i_1] [(unsigned short)7] = ((/* implicit */short) ((((/* implicit */_Bool) max(((+(((/* implicit */int) var_9)))), (((/* implicit */int) var_11))))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [(unsigned short)12])) ? (((/* implicit */unsigned int) arr_4 [i_0] [(unsigned char)7] [(unsigned char)7])) : (var_7))))) : (((/* implicit */int) (!(arr_2 [i_1 - 1] [i_1 + 1]))))));
                }
                for (signed char i_4 = 0; i_4 < 25; i_4 += 1) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (short i_5 = 0; i_5 < 25; i_5 += 3) 
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (short i_6 = 0; i_6 < 25; i_6 += 1) 
                        {
                            var_19 = ((/* implicit */signed char) arr_10 [i_5] [i_5]);
                            var_20 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_9))));
                            var_21 = ((/* implicit */_Bool) ((long long int) (!(((/* implicit */_Bool) arr_6 [i_0])))));
                        }
                        /* vectorizable */
                        for (unsigned short i_7 = 1; i_7 < 23; i_7 += 1) 
                        {
                            var_22 = ((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_7] [i_7 + 1] [(_Bool)1] [i_7] [i_4] [i_0])) | (((/* implicit */int) arr_18 [i_7] [i_7 + 1] [i_5] [9ULL] [i_1] [i_1]))));
                            arr_23 [i_1] [i_1] [i_1] [i_1] [(unsigned short)16] = ((/* implicit */unsigned int) var_14);
                            arr_24 [i_0] [i_1 + 1] [i_4] [i_4] [i_5] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_19 [i_1 + 1] [i_1] [i_1 + 1] [(short)8] [(short)8] [i_4] [i_1])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
                            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)30))))) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [i_1 - 1] [i_1 - 1] [i_0] [i_7 + 2] [i_7 + 2])))));
                            var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) var_12))));
                        }
                        for (unsigned long long int i_8 = 3; i_8 < 24; i_8 += 2) 
                        {
                            var_25 += min((((/* implicit */int) max((arr_18 [i_0] [i_1] [i_4] [i_0] [i_5] [i_1]), (((/* implicit */signed char) ((((/* implicit */int) (unsigned short)8271)) <= (((/* implicit */int) var_6)))))))), (max((((/* implicit */int) min((((/* implicit */short) var_6)), (var_3)))), (((((/* implicit */int) arr_20 [i_8] [i_1] [i_4] [i_4])) * (((/* implicit */int) (unsigned char)30)))))));
                            arr_28 [i_0] [i_0] [i_8] [i_0] = ((/* implicit */unsigned char) arr_5 [i_0] [i_0]);
                            var_26 += ((/* implicit */int) max(((signed char)73), (((/* implicit */signed char) (!(((/* implicit */_Bool) 4160749600U)))))));
                            var_27 = ((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_8 - 2] [i_8 - 2] [i_8] [i_8])) || (((/* implicit */_Bool) arr_13 [i_8 - 1] [i_8] [i_8 - 1] [i_8 - 2]))))), ((~(((/* implicit */int) arr_13 [i_8 - 2] [i_8] [i_8] [i_8 - 2]))))));
                        }
                        var_28 ^= ((/* implicit */unsigned long long int) (-((-(max((((/* implicit */unsigned int) (short)-15)), (3751267249U)))))));
                        arr_29 [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) arr_12 [i_0]))) << (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) > (var_7))))))), (min((((/* implicit */unsigned long long int) (+(arr_9 [i_0] [i_0] [(_Bool)1])))), (((((/* implicit */_Bool) var_2)) ? (arr_1 [i_1 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))));
                        var_29 = (~(var_4));
                    }
                    /* vectorizable */
                    for (unsigned short i_9 = 3; i_9 < 22; i_9 += 1) 
                    {
                        var_30 = ((/* implicit */long long int) (-(var_12)));
                        var_31 = ((/* implicit */signed char) var_1);
                    }
                    for (unsigned char i_10 = 0; i_10 < 25; i_10 += 1) 
                    {
                        var_32 *= ((/* implicit */short) (~(arr_19 [i_0] [i_1] [(_Bool)1] [i_0] [i_4] [i_0] [i_10])));
                        var_33 += ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)227)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)22))) : (2995517409U)))) ? (((/* implicit */int) arr_5 [i_1] [i_10])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_10] [(unsigned char)13] [(short)18])) || (((/* implicit */_Bool) 8224108882381086015LL)))))))) % (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_5)), (arr_19 [i_10] [(_Bool)1] [(_Bool)1] [i_0] [i_0] [(_Bool)1] [i_0])))) ? (arr_14 [i_1 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)0)) && (((/* implicit */_Bool) (unsigned char)0))))))))));
                        var_34 = ((/* implicit */_Bool) (~(var_7)));
                    }
                    arr_37 [i_0] [i_1] = max((((/* implicit */unsigned long long int) ((4160749594U) << (((((/* implicit */int) var_0)) - (101)))))), (((((/* implicit */_Bool) ((unsigned int) (unsigned char)226))) ? (((/* implicit */unsigned long long int) 288230376151187456LL)) : (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)214))))))));
                }
                /* LoopNest 3 */
                for (unsigned char i_11 = 0; i_11 < 25; i_11 += 4) 
                {
                    for (signed char i_12 = 0; i_12 < 25; i_12 += 4) 
                    {
                        for (long long int i_13 = 2; i_13 < 24; i_13 += 1) 
                        {
                            {
                                var_35 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 134217696U)))))) - (((((/* implicit */_Bool) arr_1 [i_1 - 1])) ? (((/* implicit */unsigned long long int) arr_26 [i_13])) : (arr_1 [i_1 - 1])))));
                                var_36 = ((/* implicit */unsigned char) (unsigned short)0);
                                var_37 = ((/* implicit */long long int) (-(min((((((/* implicit */int) arr_3 [i_11] [i_12] [i_13])) + (((/* implicit */int) var_13)))), (((/* implicit */int) arr_3 [i_0] [i_1] [i_11]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_14 = 3; i_14 < 9; i_14 += 2) 
    {
        for (unsigned char i_15 = 1; i_15 < 10; i_15 += 3) 
        {
            {
                arr_53 [i_14] [i_14] = (+(min((((/* implicit */unsigned int) ((int) var_0))), (var_12))));
                /* LoopSeq 2 */
                for (unsigned int i_16 = 2; i_16 < 8; i_16 += 4) 
                {
                    arr_56 [i_14] [i_15] [i_15 + 2] [i_15] = ((/* implicit */long long int) max((((/* implicit */short) arr_20 [i_14] [i_15] [i_14] [i_14])), (((short) ((((/* implicit */_Bool) 3925632736U)) && (((/* implicit */_Bool) arr_16 [(short)20] [i_14] [i_14])))))));
                    var_38 |= ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) (short)1151)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)78))) : (3751267249U))));
                }
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_57 [i_15 + 2])) ? ((~((~(((/* implicit */int) (unsigned char)43)))))) : (((/* implicit */int) ((signed char) 4294967292U)))));
                    var_40 = ((/* implicit */long long int) var_0);
                    var_41 = arr_5 [i_15] [i_15];
                    /* LoopNest 2 */
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        for (unsigned int i_19 = 0; i_19 < 12; i_19 += 2) 
                        {
                            {
                                var_42 = ((/* implicit */unsigned int) (+(max((((var_6) ? (var_14) : (((/* implicit */long long int) 134217686U)))), (((/* implicit */long long int) (signed char)-106))))));
                                arr_67 [0U] [i_15 - 1] [i_19] [0U] [i_19] |= ((/* implicit */unsigned long long int) (~(var_1)));
                                var_43 = ((/* implicit */int) ((signed char) (unsigned char)239));
                            }
                        } 
                    } 
                    var_44 ^= ((((((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)4197)), (arr_14 [i_17])))) ? ((+(((/* implicit */int) (unsigned char)10)))) : (((/* implicit */int) ((var_5) > (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))) << (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_61 [i_14] [(signed char)5] [i_17])))))))));
                }
                /* LoopNest 2 */
                for (unsigned short i_20 = 0; i_20 < 12; i_20 += 1) 
                {
                    for (unsigned char i_21 = 0; i_21 < 12; i_21 += 4) 
                    {
                        {
                            arr_75 [i_14] [i_20] [i_14] = ((/* implicit */unsigned short) ((max((((134217686U) > (1365386408U))), ((!(((/* implicit */_Bool) var_7)))))) ? (((long long int) (~(var_5)))) : (((/* implicit */long long int) ((/* implicit */int) arr_74 [i_14] [i_15] [i_14] [i_14])))));
                            arr_76 [1] [i_14] [(unsigned short)4] [i_14] [i_14] = var_5;
                            var_45 = ((/* implicit */int) ((signed char) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_48 [i_20])))) & (((((/* implicit */_Bool) arr_22 [i_14] [i_14 - 3] [8] [i_14] [(unsigned char)9] [i_21] [i_14])) ? (((/* implicit */int) arr_32 [i_15] [23ULL])) : (((/* implicit */int) arr_31 [i_14] [i_14 - 2] [i_15] [i_20] [i_21] [(signed char)5])))))));
                            arr_77 [i_21] [i_15 + 2] [i_15 + 2] [i_21] |= ((/* implicit */unsigned short) ((((max((arr_57 [i_20]), (arr_57 [i_14 - 2]))) + (9223372036854775807LL))) >> (((((unsigned long long int) (unsigned short)19760)) - (19723ULL)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_46 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)15)) | (((/* implicit */int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) var_7)))))))) && (((/* implicit */_Bool) 4160749599U))));
}
