/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218118
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
    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((((int) 2438623425912660055LL)) + (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) var_3)))))) : ((+(((/* implicit */int) var_0))))));
    var_13 = ((/* implicit */int) (~(max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_4)) : (var_5))), (((/* implicit */unsigned long long int) (unsigned char)57))))));
    /* LoopSeq 2 */
    for (short i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [9U])) + ((+(((/* implicit */int) arr_0 [i_0 + 2]))))));
        arr_4 [i_0 - 2] = ((/* implicit */short) ((((((/* implicit */_Bool) ((unsigned short) arr_1 [(_Bool)1] [i_0]))) ? (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0 - 1])) == (((/* implicit */int) arr_2 [i_0]))))) : ((-(((/* implicit */int) arr_1 [i_0] [i_0])))))) < (((((/* implicit */int) max((((/* implicit */unsigned char) arr_1 [i_0 + 1] [i_0])), (arr_0 [i_0 - 1])))) - (((((/* implicit */int) arr_2 [(signed char)6])) | (((/* implicit */int) arr_1 [9] [i_0]))))))));
    }
    for (signed char i_1 = 1; i_1 < 18; i_1 += 4) 
    {
        arr_9 [i_1] [i_1] = ((/* implicit */_Bool) (((((((_Bool)0) ? (14520960303693086009ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) & (arr_8 [i_1]))) & (((/* implicit */unsigned long long int) ((arr_5 [i_1]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1]))))))));
        arr_10 [i_1] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_8 [(unsigned short)9]))));
    }
    /* LoopSeq 1 */
    for (unsigned short i_2 = 0; i_2 < 14; i_2 += 4) 
    {
        arr_13 [(unsigned short)0] = ((unsigned int) min((((/* implicit */int) var_8)), ((~(((/* implicit */int) var_0))))));
        var_14 = ((/* implicit */int) arr_8 [i_2]);
        arr_14 [i_2] = var_7;
        /* LoopSeq 1 */
        for (int i_3 = 0; i_3 < 14; i_3 += 4) 
        {
            var_15 = ((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_2] [i_3]))))) : (((/* implicit */int) arr_11 [i_2] [i_3])));
            arr_17 [i_2] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) + (arr_5 [i_3])))) && (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)51799))) >= (arr_5 [i_3])))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_4 = 0; i_4 < 14; i_4 += 3) 
            {
                var_16 = ((/* implicit */long long int) ((var_5) > (((/* implicit */unsigned long long int) arr_5 [i_4]))));
                /* LoopNest 2 */
                for (short i_5 = 3; i_5 < 12; i_5 += 3) 
                {
                    for (unsigned int i_6 = 0; i_6 < 14; i_6 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((/* implicit */int) arr_25 [i_6])) / (((/* implicit */int) arr_25 [i_2])))))));
                            arr_26 [(unsigned char)8] = ((/* implicit */signed char) arr_15 [i_2] [i_5 - 3]);
                        }
                    } 
                } 
                var_18 -= ((/* implicit */short) ((((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (unsigned char)254)) - (252))))) <= (((/* implicit */int) arr_6 [i_2]))));
                /* LoopSeq 3 */
                for (signed char i_7 = 0; i_7 < 14; i_7 += 4) 
                {
                    /* LoopSeq 3 */
                    for (long long int i_8 = 2; i_8 < 13; i_8 += 2) 
                    {
                        var_19 = ((/* implicit */signed char) (~(arr_18 [i_2])));
                        var_20 -= ((/* implicit */_Bool) arr_27 [i_2] [i_3] [i_4] [(unsigned char)12] [i_8 + 1] [i_8]);
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_21 -= ((/* implicit */short) (~(2007259752)));
                        var_22 ^= ((/* implicit */_Bool) var_4);
                        var_23 = ((/* implicit */unsigned short) arr_24 [i_9] [i_7] [i_4] [i_2]);
                    }
                    for (unsigned int i_10 = 0; i_10 < 14; i_10 += 2) 
                    {
                        var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [i_2] [i_4] [i_7] [i_4])) ? (((/* implicit */int) arr_24 [i_2] [i_3] [i_4] [i_7])) : (((/* implicit */int) arr_24 [i_4] [i_4] [i_4] [i_4])))))));
                        arr_39 [i_2] [(unsigned short)4] [(unsigned short)4] [i_4] [(unsigned char)8] [(unsigned char)4] [i_10] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_9))));
                    }
                    arr_40 [i_3] [i_7] [(unsigned char)8] [i_3] [(unsigned char)8] = ((/* implicit */int) ((((/* implicit */_Bool) (~(var_5)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (((unsigned int) arr_5 [i_2]))));
                    var_25 += ((/* implicit */unsigned short) ((((/* implicit */int) arr_22 [i_2] [i_3] [i_4] [i_7])) != (((/* implicit */int) arr_22 [i_4] [i_4] [i_4] [i_4]))));
                    var_26 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)31))));
                }
                for (unsigned short i_11 = 0; i_11 < 14; i_11 += 4) 
                {
                    var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) (+(((/* implicit */int) arr_22 [i_2] [i_2] [i_2] [i_2])))))));
                    var_28 = ((/* implicit */signed char) arr_19 [i_2]);
                    var_29 = ((/* implicit */short) (-(((/* implicit */int) (_Bool)1))));
                    /* LoopSeq 1 */
                    for (unsigned char i_12 = 0; i_12 < 14; i_12 += 2) 
                    {
                        arr_49 [i_2] [i_2] [(signed char)13] [(unsigned short)13] [i_2] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */long long int) ((((((/* implicit */int) (short)-22306)) + (2147483647))) >> (((((/* implicit */int) arr_1 [i_3] [(signed char)0])) + (64)))))) ^ ((-(var_2)))));
                        arr_50 [i_11] |= ((/* implicit */unsigned short) (short)-13251);
                    }
                }
                for (unsigned int i_13 = 0; i_13 < 14; i_13 += 1) 
                {
                    var_30 = ((/* implicit */signed char) (~(((/* implicit */int) arr_6 [i_4]))));
                    var_31 = ((/* implicit */unsigned int) (unsigned char)52);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
    {
        for (long long int i_15 = 0; i_15 < 23; i_15 += 3) 
        {
            {
                var_32 = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_54 [i_15])) ? (((/* implicit */int) arr_54 [i_15])) : (((/* implicit */int) (_Bool)1))))));
                var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) (_Bool)1))));
            }
        } 
    } 
}
