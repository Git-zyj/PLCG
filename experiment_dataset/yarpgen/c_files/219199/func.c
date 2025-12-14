/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219199
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned long long int i_2 = 2; i_2 < 8; i_2 += 4) 
                {
                    var_12 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(max((((/* implicit */long long int) -1524721968)), (var_8))))))));
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (((~((~(((/* implicit */int) var_5)))))) & (((((/* implicit */int) arr_7 [i_1 - 3] [i_0])) ^ (((/* implicit */int) arr_7 [i_1 - 1] [i_0]))))));
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 1) /* same iter space */
                    {
                        var_13 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (unsigned char)46)) ? (min((arr_3 [i_0] [i_1]), (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_6)), (var_10)))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_0] [i_0])) & (((/* implicit */int) arr_7 [i_0] [i_0])))))));
                        var_14 = ((/* implicit */long long int) (+((-(0U)))));
                    }
                    for (unsigned int i_4 = 0; i_4 < 12; i_4 += 1) /* same iter space */
                    {
                        var_15 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) 4344841379516626436ULL)) ? (((/* implicit */unsigned int) 643609134)) : (var_1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_10 [i_1] [i_2]), (((/* implicit */short) (_Bool)0)))))) : (var_3)))));
                        arr_15 [i_0] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0]))));
                    }
                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 10; i_5 += 1) 
                    {
                        arr_18 [i_0] [i_2 - 2] [i_1] [i_0] = ((/* implicit */int) (_Bool)1);
                        arr_19 [i_0] [i_5] [i_2] [i_2 + 4] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_4))) ^ (var_8)));
                        var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_5]))) / (((unsigned long long int) arr_8 [i_2])))))));
                    }
                    var_17 = ((/* implicit */long long int) ((unsigned int) arr_3 [i_0] [i_0]));
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    arr_24 [i_0] [i_6] = ((/* implicit */unsigned int) 8280719745931938159LL);
                    var_18 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_8 [i_1])) ? (((/* implicit */int) arr_14 [i_0])) : (((/* implicit */int) arr_14 [i_0])))), (((((/* implicit */_Bool) arr_21 [i_0] [i_1] [i_6])) ? (-1131992546) : (((/* implicit */int) arr_22 [i_6]))))));
                    var_19 = ((/* implicit */unsigned char) min((((/* implicit */long long int) max((arr_6 [i_1 + 1] [i_6]), (arr_6 [i_0] [i_0])))), (((var_10) + (((/* implicit */long long int) arr_6 [i_0] [i_6]))))));
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 10; i_7 += 1) 
                    {
                        for (long long int i_8 = 0; i_8 < 12; i_8 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) max((((/* implicit */long long int) arr_7 [i_8] [(_Bool)1])), ((+(max((((/* implicit */long long int) var_0)), (-27305117299140757LL))))))))));
                                var_21 = ((/* implicit */unsigned int) ((int) ((unsigned short) ((((/* implicit */_Bool) arr_14 [i_0])) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0]))))));
                                arr_30 [i_0] [i_1] [i_0] [i_7] [i_8] = ((/* implicit */int) arr_4 [i_0] [i_6]);
                                var_22 ^= ((/* implicit */int) max((((/* implicit */long long int) min((((/* implicit */unsigned int) (+(((/* implicit */int) var_2))))), (max((((/* implicit */unsigned int) (unsigned short)24812)), (3145728U)))))), (min((arr_11 [i_8] [i_7] [0] [i_1] [i_0]), (arr_11 [i_0] [i_1 - 3] [(signed char)10] [(signed char)10] [i_8])))));
                            }
                        } 
                    } 
                }
                for (int i_9 = 0; i_9 < 12; i_9 += 1) /* same iter space */
                {
                    var_23 = ((/* implicit */unsigned short) (((_Bool)1) ? ((+(14101902694192925180ULL))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((_Bool) var_5))), (((var_10) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)-108))))))))));
                    var_24 = (unsigned short)65535;
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (short i_10 = 0; i_10 < 12; i_10 += 1) 
                    {
                        var_25 = ((/* implicit */short) (+(arr_13 [i_1 - 2] [i_1 - 1] [i_1 - 1] [i_0])));
                        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) -883706554)) ? (((/* implicit */int) ((unsigned char) arr_26 [i_0] [i_1 + 1] [i_9] [i_10] [i_0] [i_10]))) : (((/* implicit */int) arr_29 [i_1 - 2] [i_0] [i_1 - 2] [i_0] [i_0]))));
                        arr_36 [(unsigned char)0] [i_1] [i_1] [i_1] &= ((/* implicit */unsigned long long int) arr_31 [i_0] [i_1] [i_9] [i_1 + 1]);
                    }
                    for (unsigned short i_11 = 0; i_11 < 12; i_11 += 1) 
                    {
                        var_27 = ((short) min((max((4268395340U), (((/* implicit */unsigned int) arr_31 [i_0] [i_1] [i_9] [i_11])))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_31 [i_0] [i_11] [i_9] [i_11])) ? (((/* implicit */int) (signed char)-67)) : (((/* implicit */int) var_5)))))));
                        var_28 = ((/* implicit */int) min((-1401244434129805578LL), (((((/* implicit */_Bool) (-(arr_21 [(signed char)10] [i_1] [(signed char)10])))) ? (max((((/* implicit */long long int) (short)(-32767 - 1))), (arr_27 [i_0] [i_1] [i_9] [i_11]))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) -405653598)), (0U))))))));
                    }
                    for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                    {
                        arr_41 [i_0] [i_0] [i_12] = ((/* implicit */unsigned long long int) (-(max((((/* implicit */long long int) var_7)), (arr_39 [i_12 - 1] [i_12] [i_9] [i_1] [i_0])))));
                        var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) arr_33 [i_12] [i_1] [i_9] [i_12 - 1] [i_1 + 1]))) ? (((((/* implicit */_Bool) arr_33 [i_0] [i_1 - 1] [i_9] [i_12 - 1] [i_1 + 1])) ? (arr_33 [i_12] [i_12] [i_9] [i_12 - 1] [i_1 + 1]) : (arr_33 [i_0] [i_1] [i_1] [i_12 - 1] [i_1 + 1]))) : (((((/* implicit */_Bool) 1835159177)) ? (arr_33 [i_0] [i_1] [i_9] [i_12 - 1] [i_1 + 1]) : (arr_33 [i_1] [i_1] [i_9] [i_12 - 1] [i_1 + 1])))));
                        arr_42 [i_0] [i_1] [i_9] [i_0] = ((/* implicit */_Bool) arr_40 [i_1] [i_1] [i_1] [i_0]);
                    }
                    arr_43 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) arr_38 [i_0] [i_1] [i_1 - 3] [i_1 - 2] [i_1 - 3] [i_9])) ? (((/* implicit */int) (short)-12002)) : (arr_38 [i_0] [i_0] [i_1 - 1] [i_1] [i_1 + 1] [i_1]))) : (((int) var_7))));
                }
                for (int i_13 = 0; i_13 < 12; i_13 += 1) /* same iter space */
                {
                    arr_48 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) arr_6 [i_0] [i_1]);
                    arr_49 [i_0] = ((((/* implicit */int) (short)1322)) | (-649713386));
                }
                var_30 = ((/* implicit */int) arr_23 [i_0] [i_1] [i_0] [i_0]);
                var_31 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_0])) ? (((((((/* implicit */_Bool) (short)6743)) ? (7577389418060021196ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8101957529055827500LL)) ? (arr_17 [i_0]) : (arr_26 [i_0] [i_0] [i_1 - 1] [i_1] [i_1] [8ULL])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_29 [i_0] [i_0] [i_0] [2ULL] [i_0])))))))))));
                var_32 = ((/* implicit */_Bool) 4829849725038473532LL);
            }
        } 
    } 
    var_33 = ((/* implicit */short) (-(((var_3) >> (((((/* implicit */long long int) ((/* implicit */int) var_6))) / (-8101957529055827504LL)))))));
    var_34 = ((/* implicit */unsigned short) ((long long int) (!(((/* implicit */_Bool) min((305908494), (((/* implicit */int) var_4))))))));
    var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (min((var_9), (((/* implicit */unsigned long long int) (+(var_8)))))) : (((/* implicit */unsigned long long int) var_10))));
}
