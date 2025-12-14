/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26565
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
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) ((unsigned char) arr_1 [i_0] [i_0])))) && (((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) arr_2 [i_0])))))))));
        arr_3 [(signed char)17] [i_0] = ((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) && (((/* implicit */_Bool) arr_0 [i_0]))))), (max((arr_2 [i_0]), (arr_2 [i_0])))));
        arr_4 [(_Bool)1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) arr_2 [i_0]))) | (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((((/* implicit */_Bool) (unsigned short)40033)) ? (((/* implicit */int) (unsigned char)141)) : (1125400516))) : (((/* implicit */int) ((short) arr_1 [i_0] [i_0])))))));
    }
    for (unsigned char i_1 = 0; i_1 < 11; i_1 += 3) /* same iter space */
    {
        arr_8 [i_1] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (arr_0 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [(signed char)4]))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1])))))) && (((/* implicit */_Bool) max((((/* implicit */short) ((((/* implicit */int) arr_5 [i_1])) < (arr_2 [(unsigned char)9])))), (min((((/* implicit */short) arr_7 [i_1])), (arr_5 [i_1]))))))));
        arr_9 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1]))) < (arr_0 [i_1])))), (arr_6 [i_1] [i_1])))) + (((/* implicit */int) arr_7 [i_1]))));
        /* LoopSeq 2 */
        for (unsigned int i_2 = 2; i_2 < 7; i_2 += 1) /* same iter space */
        {
            var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) arr_10 [i_1] [(unsigned short)10]))) >> (((/* implicit */int) max((arr_1 [i_1] [i_2]), (arr_1 [i_1] [i_1]))))))) ? (((/* implicit */int) min((arr_12 [i_1]), (((/* implicit */signed char) arr_7 [i_2 + 4]))))) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_11 [i_1] [i_1] [(unsigned short)0])) ? (((/* implicit */int) arr_1 [i_2 + 1] [i_1])) : (((/* implicit */int) arr_5 [i_1])))) != (((/* implicit */int) arr_6 [i_1] [i_1])))))));
            /* LoopSeq 1 */
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                arr_16 [i_1] [i_1] = ((/* implicit */signed char) arr_13 [i_2] [(unsigned short)0] [(unsigned short)0]);
                /* LoopSeq 1 */
                for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 2) 
                {
                    /* LoopSeq 3 */
                    for (signed char i_5 = 0; i_5 < 11; i_5 += 4) 
                    {
                        arr_23 [i_5] [i_3 - 1] [i_3 - 1] [i_1] [i_1] = ((/* implicit */_Bool) max((max((((/* implicit */int) min((((/* implicit */unsigned short) arr_6 [(unsigned char)3] [i_3])), (arr_13 [i_1] [i_2] [i_4])))), (((((/* implicit */int) arr_22 [i_5] [i_4] [(unsigned short)4] [i_3] [i_3] [i_2] [i_1])) << (((((/* implicit */int) arr_5 [i_1])) + (26184))))))), (((min((arr_17 [i_2] [i_3 - 1] [i_4]), (((/* implicit */int) arr_5 [i_1])))) / (min((arr_2 [i_1]), (((/* implicit */int) arr_13 [i_1] [i_1] [i_1]))))))));
                        arr_24 [i_5] [i_4] [i_3] [i_3] [(short)3] [i_1] = ((/* implicit */signed char) arr_10 [i_1] [(short)6]);
                        var_13 = ((/* implicit */unsigned char) max((((int) max(((unsigned char)103), (((/* implicit */unsigned char) arr_21 [6]))))), (arr_14 [i_2])));
                        var_14 *= ((/* implicit */_Bool) max((((/* implicit */unsigned char) ((((/* implicit */int) max((((/* implicit */short) arr_1 [(short)5] [i_2])), (arr_5 [i_2])))) < (((/* implicit */int) max(((unsigned char)123), ((unsigned char)83))))))), (max((arr_6 [i_1] [7]), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)129)) || (((/* implicit */_Bool) (signed char)101)))))))));
                    }
                    for (unsigned char i_6 = 0; i_6 < 11; i_6 += 4) 
                    {
                        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_21 [i_1])), (max((((/* implicit */int) arr_21 [i_2])), (arr_2 [i_6])))))) ? (((/* implicit */unsigned int) arr_14 [i_3])) : (((arr_15 [i_6] [(unsigned short)7] [i_3] [5ULL]) / (((/* implicit */unsigned int) max((((/* implicit */int) arr_13 [i_1] [i_1] [i_1])), (arr_14 [4U]))))))));
                        var_16 = ((/* implicit */short) ((unsigned int) (_Bool)0));
                    }
                    for (unsigned int i_7 = 0; i_7 < 11; i_7 += 4) 
                    {
                        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 11784917907569174306ULL)) ? (((/* implicit */int) (signed char)101)) : (((/* implicit */int) (unsigned char)114))));
                        var_18 = ((((/* implicit */_Bool) max((max((((/* implicit */unsigned int) arr_2 [i_1])), (arr_25 [(short)9] [i_4] [i_4] [i_4] [i_4] [i_4]))), (((/* implicit */unsigned int) arr_20 [i_1] [i_2] [i_3 - 1] [i_2] [i_7] [i_7] [i_2]))))) ? (((/* implicit */int) ((unsigned short) ((((((/* implicit */int) arr_18 [i_7] [i_4] [i_3] [i_1])) + (2147483647))) << (((arr_27 [i_1] [i_2] [i_3] [i_4] [i_7] [i_4] [i_1]) - (14717613221159873573ULL))))))) : (((((/* implicit */int) arr_19 [i_1] [i_2] [i_3 - 1] [i_4] [i_7])) << (((((/* implicit */int) arr_12 [i_3])) + (92))))));
                    }
                    var_19 *= ((/* implicit */short) max((max((max((((/* implicit */unsigned long long int) arr_7 [i_1])), (arr_0 [i_1]))), (((/* implicit */unsigned long long int) arr_28 [i_2 - 2] [i_2 + 3] [i_2 - 1] [i_2 + 3] [i_2 + 1] [i_2 + 1])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_1] [i_1] [i_3] [i_4])) ? (arr_0 [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_1] [6] [i_3] [i_4] [i_4])))))) ? (((((/* implicit */int) arr_19 [i_1] [(unsigned char)6] [i_1] [i_1] [i_1])) & (arr_2 [i_3]))) : (((((/* implicit */int) arr_28 [i_1] [i_1] [i_1] [(signed char)5] [i_1] [10U])) & (arr_2 [i_1]))))))));
                    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) ((arr_25 [i_1] [4U] [i_1] [i_2] [i_3] [i_1]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_4] [i_3] [i_2] [i_2] [i_2] [i_1] [(_Bool)1]))))))) && (((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_1 [(unsigned short)12] [i_3])), (((((/* implicit */_Bool) arr_2 [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1] [i_1]))) : (arr_25 [i_1] [(short)4] [i_1] [i_1] [i_1] [i_1]))))))));
                    var_21 = ((/* implicit */signed char) ((arr_15 [i_4] [i_3] [i_2] [i_1]) << (((((((/* implicit */_Bool) (unsigned char)83)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (unsigned char)114)))) + (22)))));
                }
            }
            arr_29 [i_1] [9] [i_2] = ((((/* implicit */_Bool) ((unsigned short) max((((/* implicit */unsigned short) arr_12 [i_2])), (arr_20 [i_1] [i_1] [i_1] [6] [i_1] [i_1] [i_1]))))) ? (arr_15 [i_2] [i_2] [(unsigned short)5] [i_1]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) arr_14 [(unsigned short)1]))) ? (((/* implicit */int) arr_22 [i_1] [i_1] [i_1] [i_1] [(signed char)10] [i_1] [i_1])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_2])) && (((/* implicit */_Bool) arr_14 [i_1])))))))));
        }
        for (unsigned int i_8 = 2; i_8 < 7; i_8 += 1) /* same iter space */
        {
            arr_32 [i_1] [i_1] [i_1] = ((/* implicit */int) arr_6 [(signed char)2] [i_1]);
            var_22 ^= ((/* implicit */unsigned char) max((((/* implicit */int) ((max((arr_27 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]), (((/* implicit */unsigned long long int) arr_26 [9U] [9U])))) < (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_6 [i_1] [i_1])), (arr_2 [i_1]))))))), (((int) ((signed char) arr_14 [i_1])))));
            arr_33 [i_1] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_20 [i_8] [i_8 - 1] [(unsigned short)8] [10] [(_Bool)1] [i_8 + 1] [i_8 + 1])), (arr_0 [i_8 - 1])))) && (((/* implicit */_Bool) arr_20 [i_1] [i_8 + 2] [i_1] [i_8] [i_8] [i_8 + 1] [i_8 + 4]))));
            var_23 = ((/* implicit */short) ((((/* implicit */unsigned int) max((((int) arr_5 [i_1])), (((((/* implicit */int) arr_12 [i_1])) + (((/* implicit */int) arr_12 [i_1]))))))) / (arr_15 [i_1] [i_1] [i_8] [(unsigned short)2])));
            var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((((/* implicit */_Bool) max((max((arr_14 [i_1]), (((/* implicit */int) arr_21 [i_1])))), (((((/* implicit */int) arr_28 [i_8] [i_8] [1] [i_1] [i_1] [i_1])) / (((/* implicit */int) arr_5 [i_8]))))))) ? (arr_27 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_14 [i_1]), (((/* implicit */int) arr_10 [i_8] [i_1]))))) ? (arr_11 [i_8] [i_1] [i_1]) : (((/* implicit */int) arr_6 [i_8 + 4] [i_1]))))))))));
        }
    }
    for (unsigned char i_9 = 0; i_9 < 11; i_9 += 3) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) ((arr_27 [2U] [2U] [i_9] [i_9] [i_9] [(unsigned char)2] [i_9]) & (((/* implicit */unsigned long long int) arr_17 [3U] [i_9] [i_9])))))) ? (max((((/* implicit */int) ((signed char) arr_1 [i_9] [i_9]))), (((((/* implicit */_Bool) arr_35 [i_9])) ? (arr_11 [i_9] [i_9] [i_9]) : (((/* implicit */int) arr_19 [i_9] [i_9] [i_9] [i_9] [(unsigned char)4])))))) : (((/* implicit */int) max((((short) arr_21 [i_9])), (((/* implicit */short) arr_19 [(_Bool)1] [i_9] [(short)1] [i_9] [i_9])))))));
        arr_36 [i_9] [i_9] = ((/* implicit */unsigned short) max((((/* implicit */int) ((unsigned char) arr_18 [i_9] [i_9] [i_9] [i_9]))), (((((/* implicit */_Bool) arr_18 [i_9] [i_9] [i_9] [i_9])) ? (((/* implicit */int) arr_18 [i_9] [i_9] [i_9] [i_9])) : (((/* implicit */int) arr_18 [i_9] [i_9] [i_9] [i_9]))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            var_26 -= ((/* implicit */short) arr_18 [10LL] [(unsigned char)8] [i_10] [i_10]);
            var_27 = arr_12 [i_9];
        }
        var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [(_Bool)1] [i_9] [i_9] [i_9] [i_9] [i_9])) && (((/* implicit */_Bool) arr_15 [i_9] [i_9] [i_9] [i_9]))))), (max((arr_31 [1] [i_9]), (((/* implicit */long long int) arr_28 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]))))))) ? (min((4294967294U), (((/* implicit */unsigned int) (_Bool)1)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_9])))));
    }
    var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (max((1238504682), (((/* implicit */int) (signed char)-61)))) : (max((((((((/* implicit */int) var_0)) + (2147483647))) >> (((((/* implicit */int) var_2)) + (2674))))), (((/* implicit */int) ((_Bool) var_4)))))));
    var_30 = ((/* implicit */unsigned char) max((((/* implicit */unsigned short) ((_Bool) max((var_10), (((/* implicit */unsigned int) var_4)))))), (max((((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) != (var_10)))), (var_1)))));
    var_31 = ((/* implicit */unsigned short) ((max((((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_8))))), (((int) var_5)))) & (((/* implicit */int) ((_Bool) min((((/* implicit */unsigned short) var_0)), (var_3)))))));
}
