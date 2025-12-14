/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19110
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                arr_5 [i_0] &= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_1])) : (((((/* implicit */int) (signed char)-57)) ^ (((/* implicit */int) arr_1 [i_1]))))))));
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned char) var_11);
            }
        } 
    } 
    /* LoopSeq 4 */
    for (short i_2 = 0; i_2 < 25; i_2 += 1) 
    {
        var_13 = ((/* implicit */_Bool) ((signed char) arr_7 [i_2] [i_2]));
        arr_9 [i_2] = ((/* implicit */int) arr_7 [i_2] [i_2]);
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 25; i_3 += 4) 
        {
            for (unsigned char i_4 = 0; i_4 < 25; i_4 += 2) 
            {
                {
                    var_14 = ((/* implicit */unsigned long long int) (unsigned char)60);
                    arr_14 [(unsigned char)24] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_11))));
                    /* LoopSeq 3 */
                    for (unsigned int i_5 = 0; i_5 < 25; i_5 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_6 = 0; i_6 < 25; i_6 += 1) 
                        {
                            var_15 = ((((/* implicit */_Bool) (unsigned short)65518)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)9813))) : (12288U));
                            arr_21 [i_2] [i_2] [i_6] [i_2] [i_2] [i_3] = ((/* implicit */int) arr_15 [i_4] [i_4] [i_4]);
                            var_16 = ((/* implicit */short) arr_13 [i_4]);
                            arr_22 [(short)20] [i_4] [(short)16] = ((/* implicit */unsigned long long int) max((((/* implicit */int) arr_17 [i_4] [i_5])), (min((max((((/* implicit */int) var_3)), (arr_8 [i_2] [i_2]))), (((((/* implicit */int) var_12)) ^ (((/* implicit */int) arr_12 [i_5] [i_4] [i_3] [(_Bool)1]))))))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned char i_7 = 0; i_7 < 25; i_7 += 2) 
                        {
                            var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 3910135803U)) - (arr_7 [i_7] [i_2])))) ? (((/* implicit */int) arr_11 [i_7] [i_7])) : (((arr_8 [i_2] [i_3]) | (((/* implicit */int) arr_18 [i_3] [i_7]))))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)126))))) : (min((((((/* implicit */_Bool) arr_16 [i_3] [i_4] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)65))) : (var_1))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1586376467)) ? (((/* implicit */int) arr_17 [i_3] [i_3])) : (arr_8 [1U] [i_3]))))))));
                            arr_25 [i_2] [i_2] [i_5] [i_5] [i_7] = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_2] [i_2])))))));
                            arr_26 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) min((max((((/* implicit */int) arr_17 [i_4] [i_5])), (arr_8 [i_2] [i_5]))), (arr_8 [i_7] [i_4])));
                        }
                    }
                    /* vectorizable */
                    for (short i_8 = 0; i_8 < 25; i_8 += 4) 
                    {
                        arr_30 [i_8] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_3] [i_8])) ? (((/* implicit */int) arr_11 [i_4] [i_3])) : (((/* implicit */int) var_10))));
                        arr_31 [i_2] [i_3] [i_4] [i_4] [i_4] [i_8] = ((/* implicit */unsigned long long int) (short)-12515);
                    }
                    /* vectorizable */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned int) (-(((((/* implicit */long long int) arr_8 [i_3] [i_4])) | (arr_28 [i_3])))));
                        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)46058)))))));
                        arr_34 [i_2] [i_3] [i_3] [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_24 [14U] [i_3] [i_3] [i_2] [i_2])) ? (((/* implicit */int) arr_13 [i_2])) : (((/* implicit */int) arr_29 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))));
                    }
                    var_20 = ((/* implicit */int) arr_23 [i_4] [4] [i_4] [18] [i_2] [i_2] [i_2]);
                }
            } 
        } 
        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) min(((-(((/* implicit */int) max((((/* implicit */unsigned short) arr_33 [i_2])), ((unsigned short)24576)))))), (((/* implicit */int) ((((/* implicit */int) arr_18 [i_2] [i_2])) >= (((/* implicit */int) arr_23 [i_2] [i_2] [(short)4] [i_2] [i_2] [0ULL] [i_2]))))))))));
    }
    /* vectorizable */
    for (int i_10 = 3; i_10 < 19; i_10 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_11 = 1; i_11 < 19; i_11 += 4) 
        {
            arr_39 [i_11] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_17 [i_11] [i_11 + 1])) + (2147483647))) >> (((((/* implicit */int) arr_27 [i_10 + 1] [i_11] [i_11] [i_11] [i_11 + 1] [i_11])) - (217)))));
            /* LoopNest 2 */
            for (unsigned char i_12 = 1; i_12 < 19; i_12 += 3) 
            {
                for (unsigned char i_13 = 3; i_13 < 17; i_13 += 4) 
                {
                    {
                        var_22 = ((/* implicit */int) (~(arr_35 [i_10] [i_10])));
                        /* LoopSeq 3 */
                        for (int i_14 = 0; i_14 < 20; i_14 += 2) 
                        {
                            var_23 = ((/* implicit */unsigned long long int) arr_24 [i_10] [i_11] [i_10] [i_13] [i_14]);
                            arr_51 [i_14] [i_13] [i_13] [i_12] [i_11] [i_10] = ((/* implicit */unsigned int) arr_46 [i_10] [i_11] [i_13] [i_14]);
                        }
                        for (signed char i_15 = 0; i_15 < 20; i_15 += 2) 
                        {
                            arr_54 [(short)15] [(short)15] [i_12] [i_13] [(short)15] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) > (arr_19 [i_11] [i_13] [i_11] [(unsigned char)19] [i_11] [i_10]))))));
                            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) arr_29 [i_11 - 1] [i_13] [i_13 + 3] [i_11 - 1] [(_Bool)0] [(_Bool)0])) ? (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_45 [i_13] [i_12] [i_11] [(_Bool)1]))) : (var_8))) : (arr_35 [i_10 + 1] [i_11 - 1])));
                        }
                        for (unsigned long long int i_16 = 0; i_16 < 20; i_16 += 1) 
                        {
                            arr_57 [i_11] &= ((/* implicit */int) (((+(arr_42 [i_11]))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_49 [i_10] [i_10] [i_12] [i_10] [i_16])) ? (((/* implicit */int) (signed char)-75)) : (var_5))))));
                            var_25 = ((/* implicit */unsigned char) arr_48 [i_11]);
                            var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) var_12))));
                        }
                        var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_28 [(unsigned short)8])) || (((/* implicit */_Bool) arr_36 [i_13]))))))))));
                        arr_58 [i_10] [i_10] [i_10] [i_12] [i_13] [i_13] = ((/* implicit */signed char) ((-1586376467) - (-1612164496)));
                    }
                } 
            } 
            arr_59 [i_10] [i_11] [i_10] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(arr_56 [i_11] [i_11] [i_11] [i_11] [i_10]))))));
        }
        var_28 = ((/* implicit */unsigned int) var_10);
    }
    for (int i_17 = 3; i_17 < 19; i_17 += 4) /* same iter space */
    {
        arr_63 [(unsigned char)2] = ((/* implicit */_Bool) ((((/* implicit */int) var_7)) | (((/* implicit */int) var_9))));
        arr_64 [i_17] = ((/* implicit */int) max((max((((/* implicit */unsigned long long int) arr_60 [i_17])), (((((/* implicit */_Bool) arr_37 [(signed char)6] [i_17])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (18446744073709551615ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)3)) ? (((/* implicit */int) (unsigned short)65522)) : (((/* implicit */int) (unsigned char)237)))))));
    }
    /* vectorizable */
    for (unsigned int i_18 = 0; i_18 < 16; i_18 += 3) 
    {
        var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) ((arr_8 [2ULL] [i_18]) + (((/* implicit */int) arr_46 [i_18] [i_18] [i_18] [7])))))));
        arr_67 [i_18] = ((/* implicit */unsigned int) arr_45 [i_18] [i_18] [i_18] [i_18]);
    }
    var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((var_8) | (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) min((((/* implicit */int) var_10)), (var_5))))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) max(((short)-12835), (((/* implicit */short) (unsigned char)247)))))))) : (var_4)));
}
