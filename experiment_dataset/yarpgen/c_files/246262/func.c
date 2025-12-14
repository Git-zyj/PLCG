/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246262
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_1 [i_0])) + (2147483647))) << (((((((/* implicit */int) arr_1 [i_0])) + (14983))) - (10)))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)87))))) : ((+(4294967289U))))))));
        var_13 = ((/* implicit */_Bool) (-(((/* implicit */int) max(((unsigned short)8532), (((/* implicit */unsigned short) (short)-237)))))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 21; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 22; i_3 += 3) 
                {
                    {
                        var_14 += ((/* implicit */signed char) ((((((/* implicit */_Bool) 4081015245U)) ? (((/* implicit */int) arr_4 [i_1] [i_1] [i_1] [i_1 - 1])) : (((/* implicit */int) arr_1 [i_1 + 1])))) - (((((((/* implicit */int) arr_1 [i_1 - 1])) + (2147483647))) << (((((((/* implicit */int) arr_1 [i_1 + 1])) + (14991))) - (18)))))));
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (short i_4 = 1; i_4 < 21; i_4 += 2) 
                        {
                            arr_10 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */unsigned char) (+(4081015267U)));
                            arr_11 [i_2] [i_2] [i_3] [i_2] = ((/* implicit */unsigned short) (+(4081015245U)));
                        }
                        for (long long int i_5 = 2; i_5 < 21; i_5 += 4) 
                        {
                            arr_14 [(_Bool)1] [(_Bool)1] [(_Bool)1] [6U] [i_3] = ((/* implicit */unsigned short) max((((((/* implicit */int) arr_4 [i_1] [(short)20] [i_1 - 1] [i_2 - 1])) - (((/* implicit */int) arr_4 [i_0] [(short)14] [i_1 - 1] [i_2 - 1])))), (((/* implicit */int) (_Bool)1))));
                            var_15 = ((/* implicit */signed char) (((~(((/* implicit */int) (unsigned char)76)))) >= (((((/* implicit */_Bool) (signed char)-92)) ? (((/* implicit */int) arr_8 [i_3] [i_3] [i_3] [i_2 + 1])) : (((/* implicit */int) arr_13 [i_3] [i_5] [i_3]))))));
                            var_16 -= (signed char)-94;
                        }
                        for (int i_6 = 0; i_6 < 22; i_6 += 1) /* same iter space */
                        {
                            arr_17 [i_3] = ((/* implicit */unsigned char) (!(arr_6 [i_3])));
                            arr_18 [i_3] [i_1] [i_6] [i_1] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((arr_3 [i_1 - 1] [i_1 + 1]) - (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1 + 1] [i_1 - 1])) && (((/* implicit */_Bool) 4081015249U)))))));
                            var_17 = ((/* implicit */_Bool) var_9);
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 22; i_7 += 1) /* same iter space */
                        {
                            arr_22 [i_3] = 835681359U;
                            arr_23 [i_7] [i_3] [i_3] [i_3] [i_0] [i_0] = ((/* implicit */short) ((arr_9 [i_1 - 1] [i_1] [i_1] [i_1] [i_1 - 1] [i_1] [i_1 + 1]) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)3)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1] [i_1] [1ULL] [i_7]))))))));
                            arr_24 [i_3] = ((/* implicit */unsigned char) 4081015251U);
                            var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (~(arr_3 [i_1 + 1] [(_Bool)1]))))));
                        }
                        var_19 = ((/* implicit */signed char) min((((/* implicit */unsigned int) (short)-10952)), (((((/* implicit */_Bool) arr_20 [i_3] [i_1])) ? (arr_20 [i_3] [i_2 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_8 = 1; i_8 < 13; i_8 += 3) 
    {
        var_20 = ((/* implicit */unsigned int) (unsigned short)42767);
        var_21 = 213952019U;
        /* LoopSeq 2 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            var_22 -= ((/* implicit */_Bool) (((-(((/* implicit */int) (short)26140)))) - ((+(((/* implicit */int) arr_27 [i_9] [12] [i_8 + 1]))))));
            var_23 = ((/* implicit */unsigned char) arr_12 [i_8]);
            var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_8] [i_8 + 1])) ? (((arr_20 [i_8] [i_8 + 1]) >> (((var_1) + (1736200213))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_8] [i_8 + 1])) && (((/* implicit */_Bool) arr_20 [i_8] [i_8 - 1]))))))));
            arr_29 [i_8] = (i_8 % 2 == 0) ? (((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) (~(var_9)))) && (((/* implicit */_Bool) ((var_10) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_1 [i_9])))))))) >> (((((/* implicit */int) arr_13 [i_8 - 1] [i_9] [i_8])) + (27135)))))) : (((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) (~(var_9)))) && (((/* implicit */_Bool) ((var_10) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_1 [i_9])))))))) >> (((((((/* implicit */int) arr_13 [i_8 - 1] [i_9] [i_8])) + (27135))) - (32101))))));
        }
        for (unsigned int i_10 = 0; i_10 < 14; i_10 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned short i_11 = 0; i_11 < 14; i_11 += 4) 
            {
                for (unsigned long long int i_12 = 0; i_12 < 14; i_12 += 4) 
                {
                    for (unsigned char i_13 = 0; i_13 < 14; i_13 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 0U))));
                            arr_40 [i_8] [(short)6] [i_12] [i_11] [i_10] [(short)5] [i_8] = ((unsigned short) (-(((/* implicit */int) var_0))));
                            var_26 = ((/* implicit */_Bool) arr_36 [i_11] [i_11]);
                        }
                    } 
                } 
            } 
            var_27 ^= ((/* implicit */int) var_0);
            var_28 = ((/* implicit */unsigned long long int) ((((arr_31 [i_8 + 1] [i_8 + 1]) ? (((/* implicit */int) arr_31 [i_8 - 1] [i_8 + 1])) : (((/* implicit */int) arr_31 [i_8 + 1] [i_8 - 1])))) | (((((/* implicit */_Bool) 835681359U)) ? (((/* implicit */int) arr_31 [i_8 - 1] [i_8 + 1])) : (((/* implicit */int) arr_31 [i_8 + 1] [i_8 + 1]))))));
        }
    }
    /* LoopSeq 1 */
    for (unsigned char i_14 = 1; i_14 < 12; i_14 += 2) 
    {
        arr_43 [i_14] = ((/* implicit */unsigned int) max((((((/* implicit */int) arr_1 [i_14 + 1])) ^ (var_1))), (max((((/* implicit */int) var_7)), (((((/* implicit */int) arr_8 [i_14] [i_14] [i_14] [i_14])) >> (((/* implicit */int) var_5))))))));
        var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) (signed char)110)) ? (13U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32360))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_14]))))) != ((+(arr_2 [i_14 + 2]))))))));
    }
}
