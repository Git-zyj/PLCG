/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210547
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
    for (short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 24; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) (unsigned char)92))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 3) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            var_18 += ((/* implicit */unsigned short) 2343981186U);
                            arr_13 [i_0] [(_Bool)1] [i_0] [i_3] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) (short)-20436))));
                            arr_14 [(unsigned short)10] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_5 [i_1 + 1] [i_1 + 1] [i_1 - 1]))));
                            var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_2 [i_1] [i_1 - 1])))))));
                            arr_15 [i_1 - 1] [i_1 - 1] = ((((/* implicit */_Bool) (+(arr_1 [i_3])))) ? (((((/* implicit */_Bool) arr_5 [i_2] [i_2] [i_2])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_3] [i_3]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-21743))));
                        }
                        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) 9813249590565533359ULL))));
                        var_21 = ((/* implicit */unsigned long long int) arr_6 [i_0]);
                        /* LoopSeq 3 */
                        for (signed char i_5 = 0; i_5 < 25; i_5 += 3) 
                        {
                            var_22 -= ((/* implicit */_Bool) var_0);
                            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_1 + 1])) ? (((/* implicit */int) arr_5 [i_0] [i_1 + 1] [i_1 - 1])) : (((/* implicit */int) arr_5 [i_0] [i_1 - 1] [i_1 + 1]))));
                            arr_18 [i_3] [i_3] [i_2] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (short)-20447)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_1 - 1] [i_1 + 1] [i_1 + 1]))) : (var_9)));
                        }
                        for (unsigned short i_6 = 1; i_6 < 24; i_6 += 3) 
                        {
                            arr_22 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) var_1);
                            var_24 += ((/* implicit */unsigned short) arr_12 [18ULL] [i_6 - 1] [i_6] [i_6] [i_6]);
                            arr_23 [i_0] [i_0] [i_0] [i_3] [i_3] [i_6 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_7 [i_6 + 1]))));
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 3) 
                        {
                            arr_27 [i_0] [i_1 - 1] [i_0] [i_0] [i_7] = ((arr_2 [i_1 - 1] [i_1 + 1]) ? (arr_16 [i_1 - 1] [i_3] [8U] [i_3] [i_3] [i_1]) : (((/* implicit */unsigned long long int) 1950986110U)));
                            arr_28 [i_3] [(unsigned short)24] [i_3] = ((/* implicit */short) (+(arr_17 [i_0] [i_1 + 1] [i_1 + 1] [i_7])));
                        }
                        arr_29 [(short)9] [(unsigned char)22] [i_0] [i_0] [i_0] [i_3] = ((/* implicit */short) (+(((/* implicit */int) (short)21742))));
                    }
                    for (unsigned int i_8 = 0; i_8 < 25; i_8 += 3) /* same iter space */
                    {
                        arr_32 [i_8] [i_8] [i_2] [(short)12] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_30 [i_8] [i_2] [i_8]))));
                        arr_33 [i_8] [i_2] [i_8] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_24 [i_2] [i_2] [(short)2] [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_12)));
                        arr_34 [i_0] [i_0] [i_8] [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 12347714216534963277ULL)) ? ((+(((/* implicit */int) (unsigned char)245)))) : (((/* implicit */int) (short)-21752))));
                    }
                    for (unsigned int i_9 = 0; i_9 < 25; i_9 += 3) /* same iter space */
                    {
                        arr_38 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-20423)))))) ^ (var_15)));
                        var_25 = ((/* implicit */short) (-((+(((/* implicit */int) (short)20447))))));
                    }
                    arr_39 [i_2] [i_0] = ((/* implicit */unsigned long long int) (unsigned char)198);
                    arr_40 [i_1 - 1] [i_1 - 1] [i_0] = (+(((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) (unsigned char)119)) : (((/* implicit */int) var_6)))));
                }
                for (unsigned int i_10 = 1; i_10 < 22; i_10 += 3) 
                {
                    arr_44 [i_1 - 1] = ((/* implicit */signed char) (-(var_11)));
                    arr_45 [i_0] [i_1 + 1] [i_0] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_4)))))))), (((((/* implicit */int) (unsigned char)240)) * (((/* implicit */int) arr_12 [6] [i_10 + 2] [i_1 + 1] [i_10 + 2] [i_10]))))));
                    arr_46 [(_Bool)1] [i_1] [i_1] [(_Bool)1] = (~(max((min((((/* implicit */unsigned long long int) (short)-20447)), (var_12))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_7 [i_1]))))))));
                }
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    arr_51 [i_11] [13ULL] [i_11] = ((/* implicit */int) max((((((/* implicit */_Bool) (short)-21743)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)222))) : (4294967288U))), (((/* implicit */unsigned int) min((((/* implicit */short) arr_7 [i_0])), ((short)20447))))));
                    arr_52 [i_0] [i_11] [i_11] [i_1] = (+(((/* implicit */int) arr_2 [i_0] [i_11])));
                    /* LoopNest 2 */
                    for (signed char i_12 = 1; i_12 < 23; i_12 += 3) 
                    {
                        for (signed char i_13 = 3; i_13 < 22; i_13 += 3) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(arr_2 [i_1 + 1] [i_12 + 1]))))));
                                arr_59 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_31 [i_13 + 1] [i_13 + 1] [(unsigned char)10] [i_12] [i_1 + 1])) >= (((/* implicit */int) (signed char)10)))) ? (min(((~(var_15))), (((/* implicit */unsigned int) arr_47 [i_0] [i_0] [(unsigned short)14])))) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_57 [i_1 - 1] [i_1 - 1] [i_1 - 1] [(signed char)7] [i_12 + 1] [i_13 + 3]), (((/* implicit */unsigned short) (short)20447))))))));
                                arr_60 [i_12] [16U] [i_12] [17ULL] [i_1 - 1] [i_0] = ((/* implicit */long long int) max((4095U), (((/* implicit */unsigned int) (_Bool)1))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (signed char i_14 = 0; i_14 < 25; i_14 += 3) 
                {
                    arr_65 [(_Bool)0] [i_1] [i_1 + 1] [(_Bool)0] |= ((/* implicit */unsigned short) (_Bool)1);
                    arr_66 [i_0] [0ULL] [i_0] [12U] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_35 [i_1 - 1] [i_1] [24ULL])) == (((/* implicit */int) arr_24 [i_0] [i_0] [i_1] [i_0] [i_14]))));
                    var_27 = ((/* implicit */signed char) (-(var_9)));
                    var_28 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_50 [i_1] [i_1] [i_1 - 1])) ? (arr_61 [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_14] [(unsigned short)2] [i_1 - 1] [i_1 - 1] [(unsigned short)2] [i_1 - 1])))));
                    arr_67 [21ULL] [21ULL] = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)65535))));
                }
            }
        } 
    } 
    var_29 |= ((/* implicit */_Bool) var_7);
}
