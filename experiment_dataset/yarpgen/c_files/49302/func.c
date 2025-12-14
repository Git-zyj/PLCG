/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49302
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */short) ((_Bool) ((unsigned int) 0ULL)));
                    arr_9 [i_1] [i_1] = ((/* implicit */unsigned int) arr_5 [i_1]);
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 1; i_3 < 7; i_3 += 4) 
                    {
                        var_20 *= ((/* implicit */long long int) ((_Bool) arr_10 [i_0] [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1] [i_0]));
                        var_21 ^= ((/* implicit */unsigned short) ((signed char) ((((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [6U])) > (((/* implicit */int) arr_6 [i_0 + 1] [i_1] [i_2] [4U])))));
                        arr_12 [i_0] [i_1] [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)65535)) * (((/* implicit */int) (short)-24384))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 3) 
                    {
                        arr_15 [0] |= ((/* implicit */unsigned long long int) arr_1 [i_0]);
                        var_22 = ((/* implicit */unsigned long long int) ((unsigned char) arr_3 [i_0] [i_0]));
                    }
                    for (unsigned char i_5 = 0; i_5 < 10; i_5 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned int) ((max((((/* implicit */int) arr_5 [i_0])), (arr_0 [i_0] [i_0]))) != (((int) arr_0 [i_0] [i_0]))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 1) 
                        {
                            var_24 &= ((/* implicit */unsigned char) ((unsigned long long int) arr_17 [i_0] [i_0 + 1] [i_0 + 1] [i_6]));
                            var_25 = ((/* implicit */int) ((((/* implicit */int) arr_6 [i_2] [i_0 + 1] [i_0 + 1] [i_1])) > (((/* implicit */int) arr_6 [i_6] [i_0 + 1] [i_6] [i_1]))));
                        }
                    }
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 10; i_7 += 4) 
                    {
                        for (unsigned long long int i_8 = 1; i_8 < 9; i_8 += 1) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned int) min((var_26), (((((/* implicit */unsigned int) arr_17 [i_8 + 1] [i_7] [i_1] [i_0])) + (((unsigned int) ((((/* implicit */int) arr_6 [i_1] [i_1] [i_1] [i_7])) < (((/* implicit */int) arr_1 [i_0 + 1])))))))));
                                arr_24 [i_0] [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1] [i_7] [i_1] = ((/* implicit */int) ((unsigned char) arr_3 [i_7] [i_1]));
                                var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) ((_Bool) (-9223372036854775807LL - 1LL))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_25 [i_0] = ((/* implicit */long long int) ((signed char) ((((arr_13 [(_Bool)1]) | (arr_13 [(short)4]))) ^ (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])), (arr_7 [i_0 + 1] [i_0 + 1] [i_0] [i_0]))))))));
        var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((max((((/* implicit */long long int) (unsigned short)65534)), (9223372036854775807LL))) / (((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0]))) ^ (arr_13 [6LL]))))))));
        arr_26 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) || (((/* implicit */_Bool) ((int) min((((/* implicit */short) arr_22 [i_0] [i_0] [0LL] [i_0 + 1] [i_0 + 1])), (arr_23 [i_0] [i_0] [i_0] [6])))))));
    }
    /* LoopNest 2 */
    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
    {
        for (unsigned int i_10 = 3; i_10 < 22; i_10 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                {
                    var_29 *= ((((((/* implicit */int) arr_34 [i_9 - 1] [i_10 + 1] [i_11 - 1])) & (((/* implicit */int) arr_34 [i_9 - 1] [i_10 + 3] [i_9 - 1])))) < (((/* implicit */int) ((_Bool) ((((/* implicit */int) arr_30 [i_10] [i_10])) / (arr_32 [i_9] [i_9] [i_9]))))));
                    /* LoopNest 2 */
                    for (unsigned char i_12 = 3; i_12 < 23; i_12 += 3) 
                    {
                        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                        {
                            {
                                var_30 &= max((((/* implicit */long long int) (unsigned short)65530)), (1918086583582330961LL));
                                var_31 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) max((((/* implicit */unsigned int) arr_37 [i_9] [i_10] [i_9] [i_9] [i_9] [i_10])), (arr_31 [i_12] [i_13])))), (((long long int) arr_30 [i_11] [i_10]))))), (max((((/* implicit */unsigned long long int) ((unsigned short) arr_31 [i_12] [i_13]))), (max((arr_35 [i_9]), (((/* implicit */unsigned long long int) arr_31 [i_11] [i_13]))))))));
                                var_32 = ((/* implicit */short) arr_30 [i_11] [i_13]);
                            }
                        } 
                    } 
                }
                for (unsigned char i_14 = 0; i_14 < 25; i_14 += 4) 
                {
                    var_33 *= ((/* implicit */unsigned short) ((((arr_32 [i_9] [i_10] [i_14]) / (((/* implicit */int) (unsigned short)61214)))) == (((/* implicit */int) ((_Bool) arr_29 [i_14])))));
                    arr_42 [i_9] [i_9 - 1] [i_9] [i_14] = ((/* implicit */unsigned long long int) ((unsigned short) arr_39 [i_9] [i_10 - 1] [i_14] [i_14] [i_14] [i_14]));
                    /* LoopNest 2 */
                    for (signed char i_15 = 0; i_15 < 25; i_15 += 4) 
                    {
                        for (int i_16 = 0; i_16 < 25; i_16 += 2) 
                        {
                            {
                                var_34 = ((/* implicit */signed char) arr_35 [i_15]);
                                arr_51 [i_9] [i_9] [i_9] [i_9] [i_16] = ((/* implicit */int) ((long long int) ((unsigned long long int) ((unsigned char) arr_39 [i_9] [i_9] [i_14] [i_9] [i_16] [i_16]))));
                                var_35 = ((/* implicit */_Bool) min((var_35), (((/* implicit */_Bool) ((short) ((short) min((arr_49 [i_9] [i_15] [i_15] [i_15] [i_10 - 3]), (((/* implicit */long long int) arr_50 [i_9] [i_9] [i_9] [i_15] [i_16])))))))));
                            }
                        } 
                    } 
                }
                var_36 = ((/* implicit */unsigned short) ((((max((((/* implicit */unsigned long long int) arr_47 [i_9] [i_9] [i_9 - 1] [i_9] [i_9] [i_9])), (arr_29 [i_9]))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_27 [i_10] [i_10 + 3])) | (((/* implicit */int) arr_45 [i_9] [i_10]))))))) == (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_9] [i_9] [i_9] [i_10] [i_10]))) & (max((((/* implicit */unsigned long long int) arr_47 [i_9] [i_9] [i_10] [i_10] [i_10] [i_10])), (arr_29 [i_9])))))));
                var_37 -= ((/* implicit */signed char) ((min((max((((/* implicit */unsigned long long int) arr_40 [i_10] [i_10] [i_10] [i_10])), (arr_29 [8U]))), (((/* implicit */unsigned long long int) ((arr_43 [(unsigned short)22] [(unsigned short)22] [i_9 - 1] [(unsigned short)22] [(unsigned short)22] [i_10]) <= (((/* implicit */long long int) arr_33 [i_9] [i_9]))))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) == (-2783851818280678701LL))))))));
            }
        } 
    } 
}
