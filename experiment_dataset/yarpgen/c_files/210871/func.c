/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210871
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
    var_16 = ((/* implicit */unsigned char) var_14);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 3; i_0 < 8; i_0 += 2) 
    {
        var_17 = ((/* implicit */unsigned int) arr_0 [i_0]);
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) var_0)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))));
        var_19 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
    }
    /* vectorizable */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_20 = ((/* implicit */unsigned long long int) arr_6 [(_Bool)1]);
            var_21 ^= ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) / (arr_7 [i_1])));
            /* LoopSeq 1 */
            for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 4) 
            {
                var_22 &= ((/* implicit */unsigned int) arr_9 [10U] [(_Bool)1] [i_2] [i_1 - 1]);
                arr_12 [i_1 - 1] [i_1] [i_1] [i_1] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_2] [i_3]))))) ? (((((/* implicit */int) arr_4 [(signed char)13] [(short)3])) / (((/* implicit */int) (short)27074)))) : ((+(((/* implicit */int) arr_11 [i_3] [i_3]))))));
                /* LoopNest 2 */
                for (unsigned int i_4 = 1; i_4 < 11; i_4 += 1) 
                {
                    for (long long int i_5 = 0; i_5 < 14; i_5 += 4) 
                    {
                        {
                            arr_18 [i_1] [i_2] [i_3] [i_4] [i_5] = ((/* implicit */unsigned int) arr_14 [i_1 - 1] [i_4 + 2] [i_4 + 2] [i_4]);
                            var_23 = ((/* implicit */unsigned long long int) ((unsigned char) ((arr_16 [i_5] [(signed char)5] [i_3] [i_2] [i_1 - 1]) == (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_1] [i_1 - 1]))))));
                        }
                    } 
                } 
                arr_19 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)(-127 - 1)))));
            }
        }
        /* LoopNest 2 */
        for (unsigned int i_6 = 1; i_6 < 12; i_6 += 1) 
        {
            for (short i_7 = 0; i_7 < 14; i_7 += 4) 
            {
                {
                    var_24 |= ((/* implicit */_Bool) arr_22 [i_1] [i_6] [i_7] [i_7]);
                    var_25 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_22 [i_1] [i_6] [i_6] [i_7])) ? (((((/* implicit */int) (_Bool)1)) | (-278118598))) : (((/* implicit */int) ((((/* implicit */int) (short)16384)) == (395260265))))));
                    var_26 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_13 [i_6 - 1] [i_6] [i_1 - 1] [i_6 - 1] [i_1 - 1] [i_1]))));
                    /* LoopSeq 4 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_27 = ((/* implicit */unsigned int) arr_17 [i_8] [i_6]);
                        var_28 = ((/* implicit */unsigned char) ((arr_3 [i_1 - 1]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1 - 1]))) : (arr_22 [i_8] [i_8] [i_1 - 1] [(_Bool)0])));
                    }
                    for (unsigned long long int i_9 = 3; i_9 < 13; i_9 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (short i_10 = 0; i_10 < 14; i_10 += 1) 
                        {
                            var_29 = ((/* implicit */short) (+(arr_8 [i_1] [i_1])));
                            var_30 -= (+(arr_20 [i_9 - 3]));
                        }
                        for (short i_11 = 0; i_11 < 14; i_11 += 2) 
                        {
                            arr_32 [i_11] [i_11] [i_6] [i_7] [i_6] [i_1] = ((/* implicit */unsigned int) var_10);
                            var_31 = ((/* implicit */unsigned long long int) arr_6 [i_7]);
                            arr_33 [i_1] [i_1] [4LL] [i_1] [i_1] [i_1] = ((/* implicit */short) ((arr_26 [(signed char)0] [i_7] [(signed char)0] [(signed char)0]) * (arr_26 [i_1 - 1] [i_7] [i_1 - 1] [i_11])));
                            var_32 = ((_Bool) ((arr_10 [i_1] [(unsigned char)11] [i_11]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [(signed char)8] [(signed char)7] [i_7] [(short)7])))));
                            arr_34 [i_7] [3ULL] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_21 [i_1 - 1])) ? (((/* implicit */int) arr_24 [i_1 - 1] [(_Bool)1] [i_7] [i_9 - 1])) : (((/* implicit */int) ((((/* implicit */int) arr_11 [i_1 - 1] [i_1])) >= (((/* implicit */int) var_14)))))));
                        }
                        var_33 *= ((/* implicit */signed char) ((arr_10 [i_6] [i_6] [i_6 + 1]) != (arr_10 [i_1] [i_6] [i_6 + 1])));
                        var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [(_Bool)1] [i_6] [(_Bool)1] [i_7] [i_9])) ? (((/* implicit */int) arr_13 [i_1] [i_7] [(unsigned char)12] [i_9] [(_Bool)1] [i_7])) : (((/* implicit */int) arr_23 [i_1 - 1] [i_7] [i_9]))))) ? (arr_22 [i_6 - 1] [i_1 - 1] [i_1 - 1] [i_1]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_30 [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_9 [i_1] [(signed char)0] [i_7] [i_1])) : (((/* implicit */int) arr_5 [i_1 - 1] [1])))))));
                    }
                    for (short i_12 = 1; i_12 < 11; i_12 += 2) 
                    {
                        var_35 = ((((((/* implicit */_Bool) (signed char)33)) ? (((/* implicit */int) arr_21 [10LL])) : (((/* implicit */int) var_14)))) << (((/* implicit */int) arr_17 [i_1] [11U])));
                        var_36 = ((/* implicit */signed char) ((((arr_27 [i_1 - 1] [(signed char)1] [(signed char)1] [(signed char)9] [(signed char)1]) || (((/* implicit */_Bool) arr_14 [i_1 - 1] [i_6] [(unsigned char)7] [i_12])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_13 [i_7] [i_7] [i_7] [i_12] [i_7] [i_7])))) : (arr_16 [i_1] [i_1 - 1] [i_1] [i_6 + 1] [2U])));
                        var_37 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_16 [i_12] [i_7] [i_7] [i_6] [i_1])) || (((/* implicit */_Bool) arr_15 [i_1 - 1] [i_6 + 1] [i_6] [(unsigned char)1] [i_12])))) ? (((/* implicit */int) arr_31 [i_1 - 1] [i_6 + 2] [i_1 - 1] [i_12] [i_12 - 1])) : (((/* implicit */int) ((((/* implicit */int) arr_6 [i_1])) == (((/* implicit */int) arr_6 [i_1])))))));
                    }
                    for (unsigned int i_13 = 0; i_13 < 14; i_13 += 3) 
                    {
                        arr_40 [i_13] [i_13] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_16 [11ULL] [11ULL] [i_7] [11ULL] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_6] [i_7] [i_6] [i_6] [(signed char)8]))) : (arr_16 [(signed char)7] [(unsigned short)7] [(unsigned char)1] [i_13] [(unsigned char)1]))) ^ (arr_26 [i_1 - 1] [i_1 - 1] [i_6] [i_6 - 1])));
                        var_38 *= ((/* implicit */short) (~(((/* implicit */int) arr_9 [i_1] [i_1] [(signed char)5] [i_1]))));
                    }
                    arr_41 [i_1 - 1] [(unsigned short)4] [i_1] [(short)3] = ((/* implicit */unsigned int) ((arr_22 [i_1] [i_1] [i_6 + 1] [i_7]) > (arr_26 [(_Bool)1] [i_6 - 1] [i_6 + 2] [i_7])));
                }
            } 
        } 
    }
    for (short i_14 = 3; i_14 < 12; i_14 += 1) 
    {
        var_39 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)32750)) | (((/* implicit */int) (unsigned char)50))))) || (((/* implicit */_Bool) (+(((/* implicit */int) var_13)))))));
        arr_44 [i_14 - 1] [i_14] = ((/* implicit */unsigned char) ((max((min((var_1), (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_42 [i_14] [(signed char)1])) ? (var_5) : (((/* implicit */int) arr_42 [i_14 + 1] [(_Bool)1]))))))) / ((((+(arr_43 [i_14] [i_14]))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_42 [i_14 + 1] [i_14 + 1])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_42 [i_14] [i_14]))))))))));
    }
    var_40 = var_10;
}
