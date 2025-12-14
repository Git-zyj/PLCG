/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29877
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
    var_15 *= ((/* implicit */unsigned char) var_8);
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_16 |= ((/* implicit */unsigned int) arr_0 [i_0]);
        var_17 = ((/* implicit */_Bool) arr_1 [i_0]);
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) (-((+(241720577U)))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_2 = 1; i_2 < 15; i_2 += 3) /* same iter space */
        {
            var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) var_6)) | ((~(var_4))))))));
            var_19 = ((/* implicit */unsigned char) ((var_1) ? (((/* implicit */int) arr_3 [i_2 - 1])) : (((/* implicit */int) arr_3 [i_2 + 1]))));
            arr_7 [i_1] [i_2] = ((/* implicit */unsigned int) ((signed char) var_3));
        }
        for (unsigned int i_3 = 1; i_3 < 15; i_3 += 3) /* same iter space */
        {
            var_20 += ((/* implicit */int) var_0);
            arr_10 [i_1] = ((/* implicit */unsigned short) ((var_1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1]))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [1U] [i_1] [i_1])))))));
            arr_11 [(short)0] [i_1] [(short)0] |= ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */int) arr_6 [(signed char)4] [(unsigned char)13] [i_1])) <= (((/* implicit */int) var_2)))))));
            var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_4 [i_1] [i_3 - 1])) : (((/* implicit */int) (unsigned char)2))))) ? (((/* implicit */int) arr_3 [(signed char)7])) : ((~(((/* implicit */int) (unsigned char)240)))));
        }
        for (unsigned int i_4 = 1; i_4 < 15; i_4 += 3) /* same iter space */
        {
            /* LoopSeq 4 */
            for (unsigned int i_5 = 0; i_5 < 16; i_5 += 3) 
            {
                var_22 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_1] [i_4 - 1])) ? (((((/* implicit */_Bool) (short)-7892)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_13 [i_1] [i_1])))) : (arr_14 [i_1] [i_1] [i_1])));
                var_23 *= ((/* implicit */unsigned int) arr_14 [8U] [i_4 - 1] [11U]);
                /* LoopSeq 3 */
                for (long long int i_6 = 0; i_6 < 16; i_6 += 2) 
                {
                    arr_19 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_4 - 1] [1U])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_7)));
                    arr_20 [i_4 - 1] [i_1] = ((/* implicit */unsigned int) var_14);
                }
                for (unsigned char i_7 = 0; i_7 < 16; i_7 += 3) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        var_24 = ((/* implicit */short) ((signed char) (signed char)-52));
                        arr_27 [i_1] [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) arr_24 [i_8 - 1]))));
                    }
                    for (unsigned char i_9 = 0; i_9 < 16; i_9 += 2) 
                    {
                        var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)24876)) ? (((/* implicit */int) (unsigned char)115)) : (((/* implicit */int) (unsigned char)2))));
                        arr_30 [8LL] [i_4] [i_5] [i_1] [i_9] = var_5;
                    }
                    for (unsigned char i_10 = 1; i_10 < 14; i_10 += 1) 
                    {
                        var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) (~(7283657177991853803LL))))));
                        var_27 += ((/* implicit */unsigned short) var_6);
                        var_28 = ((/* implicit */unsigned int) (-(arr_14 [i_4 + 1] [i_4 + 1] [i_4 + 1])));
                    }
                    arr_33 [i_1] [i_1] [i_5] = ((/* implicit */unsigned char) var_1);
                }
                for (unsigned char i_11 = 0; i_11 < 16; i_11 += 3) /* same iter space */
                {
                    arr_36 [2ULL] [2U] [i_5] |= (unsigned char)1;
                    var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) ((((/* implicit */int) var_9)) <= (((/* implicit */int) ((unsigned char) (short)(-32767 - 1)))))))));
                    arr_37 [i_1] = ((/* implicit */short) ((var_8) | (((/* implicit */long long int) ((/* implicit */int) ((arr_17 [(short)13] [2U]) >= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
                }
            }
            for (unsigned long long int i_12 = 1; i_12 < 14; i_12 += 3) /* same iter space */
            {
                var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [(unsigned char)2] [i_12 - 1] [i_4]))) - (((arr_15 [i_1]) * (((/* implicit */unsigned long long int) var_3)))))))));
                arr_41 [8U] [i_4 - 1] [i_1] [(unsigned char)5] = ((/* implicit */unsigned short) ((((/* implicit */int) ((arr_39 [i_12] [(unsigned char)14] [(unsigned char)14]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_12] [(unsigned short)7] [i_12] [i_1])))))) <= (((/* implicit */int) (unsigned char)255))));
            }
            for (unsigned long long int i_13 = 1; i_13 < 14; i_13 += 3) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_14 = 0; i_14 < 16; i_14 += 2) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_15 = 0; i_15 < 16; i_15 += 3) 
                    {
                        arr_49 [i_15] [i_15] [i_1] [i_15] [i_15] = ((/* implicit */signed char) ((short) (unsigned short)24876));
                        arr_50 [i_15] [i_14] [i_1] [i_13] [i_1] [i_4 - 1] [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_47 [i_1] [i_4 + 1] [i_1] [i_4 - 1] [i_13 - 1] [(short)4] [i_15]))));
                    }
                    var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_23 [i_14] [(unsigned char)0] [(short)11] [i_4] [i_4] [i_1]))))) ? (arr_9 [i_1] [i_4 + 1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)17399)))));
                    var_32 *= ((/* implicit */unsigned int) var_4);
                }
                var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) var_6))));
            }
            for (unsigned short i_16 = 4; i_16 < 14; i_16 += 3) 
            {
                var_34 = ((/* implicit */long long int) (unsigned short)48136);
                var_35 = ((/* implicit */signed char) 15956990991346664490ULL);
                arr_54 [i_1] [i_1] [i_16] = ((/* implicit */short) (~(((((/* implicit */_Bool) (signed char)-82)) ? (((/* implicit */int) (unsigned short)53042)) : (((/* implicit */int) arr_51 [3LL] [i_1] [i_1]))))));
                /* LoopNest 2 */
                for (int i_17 = 3; i_17 < 14; i_17 += 3) 
                {
                    for (long long int i_18 = 2; i_18 < 13; i_18 += 3) 
                    {
                        {
                            var_36 |= ((/* implicit */unsigned int) (~(((/* implicit */int) arr_38 [i_18 - 1] [i_17 - 2] [i_16 - 2]))));
                            arr_61 [i_1] [i_1] [i_16] [i_17 + 2] [(short)2] = ((/* implicit */signed char) (+(((((/* implicit */int) (unsigned char)15)) / (((/* implicit */int) arr_51 [i_1] [i_1] [i_18 - 1]))))));
                        }
                    } 
                } 
                var_37 = ((/* implicit */unsigned int) ((((/* implicit */int) var_12)) % (((/* implicit */int) arr_52 [i_4 + 1] [i_4 - 1] [i_4 + 1]))));
            }
            var_38 = ((/* implicit */unsigned long long int) arr_40 [i_4 - 1] [i_4 - 1] [12U]);
            arr_62 [i_1] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_24 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32432))) : (arr_25 [i_1] [i_1])))));
            var_39 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) - (15956990991346664490ULL))) <= (((/* implicit */unsigned long long int) (~(var_8))))));
        }
        arr_63 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? ((~(arr_31 [0U] [i_1] [i_1] [i_1] [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_53 [i_1] [i_1] [i_1] [i_1])))));
    }
    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
    {
        var_40 |= ((/* implicit */signed char) (-(((int) arr_22 [i_19] [12U] [12U] [12U]))));
        var_41 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)113)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)24876))) : (max((((/* implicit */unsigned int) (short)0)), (1110842527U)))));
    }
}
