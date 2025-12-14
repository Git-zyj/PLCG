/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237393
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
    var_16 -= ((/* implicit */long long int) max((7537888374810526714ULL), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (signed char)29)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10)))))))));
    var_17 &= ((((/* implicit */int) var_0)) >= (((/* implicit */int) var_2)));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 16; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    for (int i_3 = 4; i_3 < 17; i_3 += 1) 
                    {
                        {
                            var_18 ^= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_8 [i_0] [i_3] [i_3 - 4] [i_0 + 1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_4 [i_0] [i_1]))))));
                            /* LoopSeq 4 */
                            for (unsigned char i_4 = 1; i_4 < 16; i_4 += 2) 
                            {
                                arr_14 [i_0 - 1] [i_1] [i_2] [i_3 + 1] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_4 + 1] [i_4] [5] [i_4] [i_4 + 2] [i_4] [i_4])) && (((/* implicit */_Bool) arr_9 [i_4 + 2] [i_4] [i_4] [i_4] [i_4 + 2] [i_4]))));
                                arr_15 [i_4] [i_3] [i_2] [(unsigned char)1] [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_13 [i_0 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_4]))) : (arr_13 [i_0 - 1]))) != (arr_13 [i_1])));
                                arr_16 [i_2] [i_1] = ((/* implicit */unsigned int) min((arr_3 [i_0]), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_0 + 2] [i_0 + 2] [i_3 + 1])) || (((/* implicit */_Bool) arr_12 [i_0 - 1] [i_0 - 2] [i_3 - 1] [i_3 - 4] [i_4 + 2] [i_4 - 1] [i_4 + 2])))))));
                                var_19 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_4])) ? (((/* implicit */unsigned int) -1985841223)) : (2508322469U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0 - 3] [i_1] [i_2]))) : (arr_13 [i_0]))) % (((/* implicit */unsigned long long int) ((long long int) arr_12 [i_0] [i_1] [i_2] [i_1] [i_1] [i_3 - 1] [i_2])))));
                            }
                            /* vectorizable */
                            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                            {
                                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_2])) ? (arr_9 [i_5] [i_5] [i_3] [i_2] [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [(_Bool)1])))))) ? (var_7) : (((((/* implicit */unsigned long long int) var_3)) | (13900091887580179566ULL)))));
                                arr_19 [i_5] [i_1] [i_3] [16ULL] = ((/* implicit */long long int) arr_10 [i_0] [i_1] [16ULL] [i_0]);
                                var_21 = ((/* implicit */int) arr_1 [i_2] [i_0 + 1]);
                            }
                            for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 1) 
                            {
                                var_22 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_4 [i_0 - 2] [i_6])) ? (((/* implicit */int) arr_4 [i_6] [(unsigned char)3])) : (((/* implicit */int) arr_4 [i_6] [i_0 - 1])))), (((((/* implicit */_Bool) ((var_10) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_0])) : (((/* implicit */int) var_13))))) ? (((((/* implicit */_Bool) arr_10 [17] [i_2] [i_1] [i_0])) ? (((/* implicit */int) (_Bool)0)) : (arr_5 [i_0] [i_1]))) : ((-(((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))))))));
                                var_23 = ((/* implicit */long long int) max((var_23), (min((((/* implicit */long long int) ((int) 14479812798222621585ULL))), (((((/* implicit */_Bool) arr_10 [i_3] [i_3 - 1] [i_3 + 1] [i_3])) ? (max((288195191779622912LL), (((/* implicit */long long int) var_14)))) : (arr_11 [i_0] [i_0] [i_1] [i_3] [i_0 - 1] [i_6])))))));
                            }
                            for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 1) 
                            {
                                arr_26 [i_0] [i_1] [i_2] [i_3] [(signed char)2] = ((/* implicit */unsigned short) ((arr_23 [i_0 - 3] [i_0 - 3] [6] [i_3] [i_7] [i_7]) >= (arr_20 [i_0] [i_1] [i_1] [i_2] [i_3 - 2] [i_7])));
                                var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_18 [i_2] [i_1] [i_2] [i_3] [i_7])) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_2 [i_0] [i_0] [(unsigned short)7]))))) : (min((((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_2])) ? (((/* implicit */unsigned long long int) arr_25 [i_2] [i_7] [i_3 + 1] [i_3] [i_2] [i_0] [i_0])) : (arr_17 [i_0] [i_1] [i_2] [i_3] [i_7]))), (((/* implicit */unsigned long long int) arr_0 [i_3 + 1] [i_7]))))));
                                var_25 -= ((/* implicit */_Bool) arr_21 [i_3] [i_3 - 1] [i_3] [i_0] [i_0 - 1]);
                            }
                            var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_12 [16] [i_1] [16] [(short)16] [i_2] [i_3] [i_0])) ? (arr_11 [i_0] [i_0 - 2] [(unsigned char)15] [i_0 - 2] [13LL] [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_0])))))))) == (((((/* implicit */_Bool) arr_13 [i_0 - 2])) ? (((arr_1 [i_3] [i_0]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_3]))))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_24 [i_0 + 2] [(short)2] [i_1] [i_2])), (-2124306946))))))));
                            var_27 = ((/* implicit */long long int) min((var_27), (min((((/* implicit */long long int) ((((/* implicit */int) arr_22 [i_0] [i_3 - 4] [i_0 + 1])) == (((int) arr_6 [i_1] [i_2] [i_3]))))), ((-((~(arr_11 [i_0] [i_1] [i_3] [i_0 - 3] [i_0] [i_0])))))))));
                            arr_27 [i_0] [(_Bool)0] [i_0 - 3] [i_0] = ((/* implicit */unsigned long long int) arr_18 [i_2] [i_0 + 1] [i_3 - 1] [i_3 - 1] [i_3 - 2]);
                        }
                    } 
                } 
                var_28 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0 - 1] [i_0] [(_Bool)1] [i_0] [(unsigned char)2] [i_0 - 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_0 + 2] [i_0 - 1] [i_0 - 2] [i_0 - 3]))) : ((+(arr_23 [i_0] [i_0] [i_0] [(unsigned char)17] [i_0] [i_0])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (arr_5 [i_0 + 2] [i_0 - 1]) : (arr_5 [i_0 + 2] [i_0 - 1])))) : (arr_12 [i_0] [i_0 + 2] [(short)0] [i_0] [(short)0] [i_0] [i_0])));
                arr_28 [9] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_0 - 2] [i_0 - 1] [i_1])) << (((((/* implicit */int) arr_7 [i_1] [i_0 - 1] [i_0 - 1])) - (22589)))))) == (min((((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0 + 2] [i_1] [i_1]))) : (arr_11 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0]))), (((/* implicit */long long int) 262143))))));
                /* LoopSeq 2 */
                for (unsigned char i_8 = 0; i_8 < 18; i_8 += 1) 
                {
                    var_29 = min((((/* implicit */int) var_13)), (((((/* implicit */_Bool) arr_21 [10ULL] [i_0 - 2] [i_8] [10ULL] [i_8])) ? (((/* implicit */int) arr_7 [i_0 + 2] [i_0 + 2] [i_0 - 2])) : (((/* implicit */int) (unsigned char)30)))));
                    var_30 += ((/* implicit */short) ((((/* implicit */int) ((arr_5 [i_0 + 2] [i_0 - 2]) >= (arr_5 [i_0 + 1] [i_0 - 1])))) - (arr_5 [i_0 + 2] [i_0 - 1])));
                }
                for (unsigned long long int i_9 = 2; i_9 < 16; i_9 += 2) 
                {
                    arr_36 [i_1] [i_1] [(unsigned char)6] = ((/* implicit */unsigned short) min((arr_20 [i_0] [i_0] [i_0] [i_0] [i_0 - 2] [i_0]), (((/* implicit */unsigned long long int) (-(arr_5 [i_0 + 1] [i_0 + 1]))))));
                    /* LoopNest 2 */
                    for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                    {
                        for (int i_11 = 0; i_11 < 18; i_11 += 2) 
                        {
                            {
                                arr_42 [i_10] [i_10] = ((((/* implicit */_Bool) arr_32 [i_10 + 1] [i_1] [i_9] [i_9 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (((((/* implicit */_Bool) -32768)) ? (((((/* implicit */_Bool) arr_17 [i_0 + 1] [i_0] [i_0] [i_0] [i_0 - 2])) ? (4772147344252166993ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) : (min((((/* implicit */unsigned long long int) arr_6 [i_0] [i_0 - 1] [i_0 - 2])), (arr_29 [i_10] [i_9] [i_10]))))));
                                arr_43 [i_0 - 2] [i_10] = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_11] [i_10] [i_10] [i_9 + 2] [i_1] [i_1] [i_0])) && (((/* implicit */_Bool) arr_12 [i_0] [i_0 - 2] [i_0 - 2] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 2])))));
                                arr_44 [i_10] [i_1] [i_1] [i_9] [i_1] [i_10] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_11] [i_9 + 2] [i_9 + 2] [i_11] [i_10] [i_0])) ? (arr_12 [i_0] [i_1] [i_9 + 2] [i_1] [i_0] [i_0] [i_9 + 1]) : (arr_12 [i_0 - 1] [i_9] [i_9 + 1] [i_10 + 1] [i_11] [i_1] [i_1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)246)) & (((((/* implicit */_Bool) arr_13 [i_0])) ? (((/* implicit */int) arr_10 [(short)16] [(short)16] [i_10] [(short)16])) : (((/* implicit */int) (unsigned char)126))))))) : (min((arr_30 [i_9 + 1] [i_10 + 1] [i_0 - 1] [i_10 + 1]), (arr_30 [i_9 - 2] [i_10 + 1] [i_0 + 1] [i_10])))));
                            }
                        } 
                    } 
                    var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) arr_1 [i_0] [i_1]))));
                    arr_45 [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_24 [i_0] [i_1] [i_9 - 1] [(unsigned short)3]))));
                }
                var_32 = ((/* implicit */int) (((+(10547233160289982703ULL))) == (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned char) arr_5 [i_0 + 1] [i_0 + 1]))))))));
            }
        } 
    } 
    var_33 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) || (((_Bool) ((((/* implicit */int) var_12)) << (((/* implicit */int) var_11)))))));
}
