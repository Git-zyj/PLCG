/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50087
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
    var_17 *= ((/* implicit */unsigned char) max((((/* implicit */short) var_15)), (max(((short)-22599), ((short)-22603)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (int i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            var_18 ^= ((/* implicit */short) ((long long int) var_2));
            /* LoopSeq 1 */
            for (short i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (short)22598)) : (((/* implicit */int) (short)-22613))));
                /* LoopSeq 1 */
                for (int i_3 = 0; i_3 < 21; i_3 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_4 = 0; i_4 < 21; i_4 += 3) 
                    {
                        arr_14 [i_0] [i_2] [i_0] = ((/* implicit */long long int) ((int) arr_5 [i_0] [i_1 + 2] [4]));
                        arr_15 [i_0] [i_1] [i_1] [i_3] [i_0] = ((/* implicit */unsigned char) var_15);
                    }
                    var_20 ^= ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)1)) | (((/* implicit */int) (short)22598))));
                }
            }
            arr_16 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_0] [8ULL])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]))) : (var_11))))));
            var_21 += ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) 3355178042U))) && (((/* implicit */_Bool) ((arr_4 [12]) ? (((/* implicit */unsigned int) var_12)) : (var_3))))));
            arr_17 [i_0] = ((/* implicit */unsigned long long int) ((signed char) arr_6 [i_1] [i_1 + 1]));
        }
        for (unsigned int i_5 = 1; i_5 < 17; i_5 += 3) 
        {
            arr_22 [i_0] [i_0] [i_0] = ((/* implicit */short) ((arr_4 [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) ((var_4) <= (var_7))))) : (((((/* implicit */_Bool) 8690532704946195897LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)213))) : (1819349133197866841LL)))));
            var_22 = ((/* implicit */unsigned int) min((var_22), ((+(arr_18 [i_5 + 4] [i_5 + 3])))));
        }
        for (int i_6 = 0; i_6 < 21; i_6 += 3) 
        {
            var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_2)))) ? (((/* implicit */int) ((short) var_8))) : (((/* implicit */int) ((_Bool) arr_10 [i_6] [i_6] [i_0] [i_0]))))))));
            arr_25 [i_0] [i_6] [i_6] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_9)) ? (arr_10 [i_0] [i_0] [i_0] [i_0]) : (var_0))) < (((/* implicit */unsigned long long int) var_3))));
            arr_26 [20U] [20U] [20U] |= ((/* implicit */_Bool) ((unsigned char) (-(arr_23 [i_0] [i_0] [i_0]))));
        }
        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) (unsigned char)132)) ? (501712154U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)18277))))) : (((/* implicit */unsigned int) arr_20 [i_0] [i_0] [i_0]))));
        /* LoopSeq 2 */
        for (signed char i_7 = 4; i_7 < 19; i_7 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_8 = 0; i_8 < 21; i_8 += 1) 
            {
                var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((arr_3 [i_0]) ^ (var_13))) : (((var_11) % (((/* implicit */unsigned long long int) var_8))))));
                /* LoopNest 2 */
                for (unsigned char i_9 = 0; i_9 < 21; i_9 += 3) 
                {
                    for (unsigned char i_10 = 1; i_10 < 20; i_10 += 3) 
                    {
                        {
                            arr_36 [i_10] [16] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */long long int) arr_5 [i_7 + 2] [i_10 + 1] [i_10 - 1])) <= (var_2)));
                            arr_37 [i_9] [i_0] [i_9] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */long long int) ((int) (!(((/* implicit */_Bool) var_0)))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (signed char i_11 = 0; i_11 < 21; i_11 += 3) 
                {
                    var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) ((arr_5 [i_0] [18LL] [i_0]) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))))));
                    arr_42 [i_0] [i_0] [i_7] [i_7] [i_0] [i_11] = ((/* implicit */int) ((((/* implicit */_Bool) var_12)) ? (arr_10 [i_0] [i_7 + 2] [i_8] [i_11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_7] [i_0])))));
                }
                for (unsigned int i_12 = 1; i_12 < 20; i_12 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_13 = 2; i_13 < 20; i_13 += 3) 
                    {
                        var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_27 [2ULL])) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [(short)18]))))))));
                        arr_49 [i_0] = ((/* implicit */int) ((var_7) - (((/* implicit */long long int) ((/* implicit */int) arr_45 [i_7 - 4] [i_12 + 1])))));
                    }
                    for (long long int i_14 = 0; i_14 < 21; i_14 += 3) 
                    {
                        arr_54 [i_0] [i_0] [i_0] [i_8] [i_12 + 1] [i_14] [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (arr_38 [i_0] [i_0] [i_0] [i_14]) : (arr_38 [i_14] [i_0] [i_0] [i_0])));
                        var_28 = ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) arr_52 [i_0] [i_8] [i_0])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) : (((/* implicit */long long int) ((/* implicit */int) var_5))));
                    }
                    arr_55 [i_0] [i_7 - 1] [i_7 - 1] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_45 [i_8] [2ULL])) ? (var_1) : (((/* implicit */unsigned int) var_16)))) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_8] [i_8] [i_8] [i_8] [i_8] [i_0])))));
                    /* LoopSeq 1 */
                    for (long long int i_15 = 0; i_15 < 21; i_15 += 3) 
                    {
                        arr_59 [i_7 - 3] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) -1414816186)) - (2U)))) ^ (((0ULL) & (((/* implicit */unsigned long long int) 2548823862U))))));
                        var_29 = ((/* implicit */long long int) ((unsigned long long int) (short)22600));
                        arr_60 [i_0] [i_0] [i_7 - 2] [i_0] [i_8] [i_12] [i_15] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_7 [i_7 - 3] [i_12] [i_15])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-22582))))) > (((/* implicit */unsigned long long int) var_12))));
                    }
                }
            }
            arr_61 [i_0] = ((/* implicit */unsigned long long int) arr_51 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_7]);
        }
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            arr_64 [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(var_4))))));
            var_30 = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (arr_7 [i_16] [i_0] [i_0]) : (((/* implicit */long long int) arr_56 [(unsigned char)14] [i_0]))));
        }
    }
}
