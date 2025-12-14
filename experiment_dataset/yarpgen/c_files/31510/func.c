/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31510
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
    var_19 = ((/* implicit */unsigned char) min((((/* implicit */int) ((unsigned short) var_10))), (((((/* implicit */int) (signed char)86)) >> (((2130317609U) - (2130317598U)))))));
    var_20 -= ((/* implicit */long long int) var_3);
    var_21 = ((/* implicit */int) var_4);
    var_22 |= ((/* implicit */unsigned char) var_4);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) (unsigned short)16060)) ? (((/* implicit */int) (unsigned short)16058)) : (((/* implicit */int) (unsigned short)16058)))) : (((/* implicit */int) min((((/* implicit */unsigned char) var_13)), (min((var_9), (((/* implicit */unsigned char) var_18)))))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] = ((/* implicit */unsigned int) 17690092195803795375ULL);
                    var_23 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) << (((/* implicit */int) min((arr_1 [i_0] [i_2]), (arr_1 [i_2] [i_2]))))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)60640))) & (arr_6 [i_2] [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 4294967295U)) > (arr_6 [i_0] [i_0] [i_0] [i_2])))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) /* same iter space */
        {
            var_24 = ((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) arr_10 [i_3] [i_3 + 1] [i_3 + 1])))));
            var_25 = ((unsigned long long int) (!(((/* implicit */_Bool) var_1))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 2) 
            {
                var_26 = (unsigned short)16058;
                /* LoopSeq 2 */
                for (unsigned int i_5 = 0; i_5 < 16; i_5 += 3) 
                {
                    var_27 |= ((/* implicit */unsigned char) (-((~(var_7)))));
                    var_28 |= ((/* implicit */unsigned short) ((unsigned long long int) arr_14 [i_4] [i_3 + 1] [i_3 + 1]));
                    arr_17 [i_0] [i_0] [i_4] [i_5] = ((/* implicit */unsigned long long int) arr_5 [i_5]);
                }
                for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 4) 
                {
                    var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)60640))) : (var_16)))) / (var_8))))));
                    /* LoopSeq 1 */
                    for (signed char i_7 = 0; i_7 < 16; i_7 += 4) 
                    {
                        var_30 = ((/* implicit */unsigned char) ((((unsigned long long int) arr_9 [i_7])) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))));
                        arr_24 [(_Bool)1] [i_3 + 1] [i_4] [i_0] [i_6] [i_7] = ((/* implicit */unsigned short) ((_Bool) arr_18 [i_3 + 1] [i_3] [i_3]));
                        var_31 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0]))) | (arr_18 [i_0] [i_3] [i_4])));
                    }
                    var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) var_13))));
                }
                var_33 = var_2;
                /* LoopNest 2 */
                for (unsigned long long int i_8 = 1; i_8 < 14; i_8 += 3) 
                {
                    for (unsigned char i_9 = 0; i_9 < 16; i_9 += 1) 
                    {
                        {
                            var_34 = arr_18 [i_0] [i_0] [i_0];
                            var_35 = ((/* implicit */unsigned int) (unsigned short)16060);
                            var_36 = (((_Bool)1) && ((!(((/* implicit */_Bool) var_9)))));
                        }
                    } 
                } 
                var_37 ^= ((/* implicit */unsigned long long int) ((unsigned short) (~(arr_15 [i_4]))));
            }
            for (unsigned char i_10 = 4; i_10 < 15; i_10 += 1) 
            {
                var_38 = ((/* implicit */unsigned short) min((var_38), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_23 [12U] [i_0] [0U] [i_0] [i_0] [i_0] [12U])), (arr_6 [i_0] [i_3 + 1] [7LL] [i_10])))))))));
                var_39 = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned long long int) arr_32 [i_10] [i_0] [i_0] [i_3 + 1])), (arr_20 [i_0] [i_3] [i_10] [i_10] [i_3]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (+(((/* implicit */int) (signed char)11)))))))));
                /* LoopSeq 2 */
                for (signed char i_11 = 0; i_11 < 16; i_11 += 1) 
                {
                    var_40 = ((/* implicit */long long int) (signed char)97);
                    arr_35 [i_0] [i_3] [5ULL] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_25 [i_0] [i_3] [(unsigned char)2] [i_11])) - (((/* implicit */int) (unsigned char)66))))) ? (((/* implicit */int) arr_33 [i_0] [i_0])) : (((((/* implicit */_Bool) 3842588064U)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_33 [i_0] [i_0]))))))) || (((/* implicit */_Bool) ((((((/* implicit */int) var_10)) <= (((/* implicit */int) var_10)))) ? (((/* implicit */int) ((unsigned char) arr_15 [i_0]))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)60)) && (((/* implicit */_Bool) var_2))))))))));
                    arr_36 [i_0] [i_0] [i_3 + 1] [i_10] [(unsigned char)2] [i_11] = ((/* implicit */unsigned short) 2147483647);
                }
                /* vectorizable */
                for (unsigned char i_12 = 0; i_12 < 16; i_12 += 3) 
                {
                    var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) 9223372036854775807LL))) ? (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_3 + 1] [i_10 - 3] [i_0] [i_12]))) : (arr_4 [i_0] [i_3 + 1])));
                    arr_39 [i_12] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (_Bool)1);
                    arr_40 [i_0] = ((/* implicit */_Bool) var_9);
                    var_42 = ((/* implicit */unsigned char) max((var_42), (((/* implicit */unsigned char) arr_20 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_10 - 3] [i_10 - 3]))));
                }
            }
        }
        /* vectorizable */
        for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned int i_14 = 1; i_14 < 15; i_14 += 4) 
            {
                arr_46 [i_0] [i_0] [8ULL] [i_0] |= arr_2 [(_Bool)1];
                arr_47 [i_0] [i_13] [i_0] = ((/* implicit */unsigned int) (~(var_0)));
            }
            var_43 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_13 + 1])))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) var_9))))) : ((-(((/* implicit */int) arr_33 [i_0] [i_0]))))));
        }
    }
}
