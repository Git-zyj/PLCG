/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207364
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0])));
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_1 [i_0] [(unsigned char)14]) : (((/* implicit */long long int) var_2))));
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) var_7);
    }
    /* LoopNest 2 */
    for (unsigned int i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        for (unsigned int i_2 = 4; i_2 < 19; i_2 += 2) 
        {
            {
                /* LoopSeq 4 */
                for (signed char i_3 = 0; i_3 < 20; i_3 += 4) 
                {
                    var_12 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_1] [i_1] [i_1] [i_1]))) : (arr_1 [i_1] [i_1])))))) ? (((((/* implicit */_Bool) arr_10 [i_1] [i_2] [(signed char)0])) ? (arr_9 [i_2 - 3] [i_2 - 2]) : (((/* implicit */unsigned long long int) min((((/* implicit */int) var_3)), (1557712244)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((max((((/* implicit */unsigned int) var_0)), (arr_8 [i_1] [i_2] [i_3]))) > (var_2)))))));
                    arr_15 [i_1] [i_1] [i_1] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_8 [i_1] [i_2 - 1] [i_1])))) ? (min((arr_8 [(signed char)1] [i_2 - 1] [i_2]), (arr_8 [i_3] [i_2 - 1] [i_1]))) : (arr_8 [i_2] [i_2 - 1] [i_1])));
                    /* LoopSeq 2 */
                    for (short i_4 = 1; i_4 < 16; i_4 += 2) 
                    {
                        arr_19 [i_1] [i_1] [9] [i_4] |= arr_0 [i_2];
                        arr_20 [i_1] [i_1] [i_2 - 4] [(signed char)9] [i_4 + 4] = ((/* implicit */unsigned short) ((((arr_12 [i_4 + 2] [i_4 + 3] [i_4 + 2] [i_4 + 1]) ? (((/* implicit */int) arr_12 [i_4 + 3] [i_4 + 2] [i_4 + 3] [i_4 + 1])) : (((/* implicit */int) var_7)))) > (((/* implicit */int) min((((/* implicit */signed char) arr_12 [i_4 - 1] [i_4 + 2] [i_4 - 1] [i_4 + 2])), (arr_16 [i_4 + 3] [i_4 + 3] [i_4 - 1] [i_4 + 3] [i_4]))))));
                        arr_21 [i_2] = ((/* implicit */unsigned char) (~(652701371)));
                        arr_22 [i_3] [i_3] [(unsigned short)11] [i_3] = ((/* implicit */long long int) ((short) ((2011623859U) / (((/* implicit */unsigned int) -1557712245)))));
                        var_13 &= ((/* implicit */short) ((signed char) ((arr_9 [i_1] [i_1]) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_9)))))));
                    }
                    for (long long int i_5 = 0; i_5 < 20; i_5 += 1) 
                    {
                        var_14 = ((/* implicit */unsigned long long int) var_4);
                        arr_26 [i_1] [i_2] [i_5] [i_1] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_17 [i_3]), (((/* implicit */int) var_7))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_1] [i_1] [i_1] [i_5] [9])) ? (((/* implicit */int) arr_16 [18] [i_3] [(short)11] [i_3] [i_3])) : (((/* implicit */int) var_9))))) : (max((var_8), (((/* implicit */unsigned long long int) var_0))))))) ? ((+(arr_8 [i_1] [i_1] [i_1]))) : (((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_2)) ? (arr_17 [i_3]) : (((/* implicit */int) arr_13 [i_5])))), ((+(((/* implicit */int) var_1)))))))));
                        arr_27 [i_3] [i_2] [i_5] [i_2] [10U] = min((((/* implicit */int) ((((/* implicit */int) ((unsigned short) arr_5 [i_3]))) > (((/* implicit */int) ((((/* implicit */int) var_5)) > (((/* implicit */int) var_1)))))))), ((-((~(arr_10 [i_2] [i_3] [i_3]))))));
                    }
                }
                for (signed char i_6 = 0; i_6 < 20; i_6 += 3) 
                {
                    var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) arr_1 [i_6] [i_6]))));
                    /* LoopNest 2 */
                    for (short i_7 = 0; i_7 < 20; i_7 += 1) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) var_0))));
                                var_17 -= ((/* implicit */long long int) ((int) max((arr_32 [i_2 - 4] [i_2 - 4]), (((/* implicit */unsigned short) arr_31 [i_2 - 1] [i_2 - 1])))));
                                var_18 |= ((/* implicit */unsigned short) min((((/* implicit */unsigned char) ((arr_10 [i_2 - 4] [i_2] [i_6]) < (((((/* implicit */int) var_5)) & (arr_36 [i_2] [i_7])))))), (((unsigned char) var_0))));
                                var_19 = ((/* implicit */_Bool) var_10);
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 20; i_9 += 3) 
                {
                    var_20 = (+(((arr_25 [i_1] [12] [i_2 - 4] [i_9]) ? (arr_0 [(_Bool)1]) : (((/* implicit */int) arr_23 [i_9] [i_9] [i_9] [i_1])))));
                    var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) var_7))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_10 = 4; i_10 < 19; i_10 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (signed char i_11 = 0; i_11 < 20; i_11 += 4) 
                        {
                            arr_46 [2] [i_9] [2] [i_11] = ((/* implicit */_Bool) (~(arr_41 [i_9] [i_2 - 2] [i_2] [i_2 - 2] [i_10 - 3])));
                            var_22 = ((/* implicit */long long int) max((var_22), (((((/* implicit */_Bool) ((var_2) & (((/* implicit */unsigned int) ((/* implicit */int) arr_44 [i_1] [i_1] [i_2] [i_1] [i_1] [i_2])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_6) > (arr_6 [i_1]))))) : (((long long int) arr_44 [i_1] [6LL] [i_1] [i_9] [6LL] [i_11]))))));
                        }
                        for (int i_12 = 0; i_12 < 20; i_12 += 3) 
                        {
                            var_23 -= (~(((((/* implicit */int) arr_40 [(signed char)8] [i_1] [i_1] [i_1])) & (((/* implicit */int) arr_45 [i_10])))));
                            var_24 = ((/* implicit */unsigned char) ((unsigned long long int) 1557712244));
                            var_25 &= ((/* implicit */int) var_2);
                        }
                        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                        {
                            var_26 = ((/* implicit */short) (+(1557712244)));
                            arr_53 [i_9] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) - (((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_14 [i_9] [i_10] [i_13])) : (((/* implicit */int) arr_5 [i_10])))) : (((/* implicit */int) var_7))));
                            var_27 -= ((/* implicit */int) ((((/* implicit */int) arr_16 [i_2] [i_2 - 1] [i_10] [i_10 - 4] [i_13 - 1])) > (((((/* implicit */_Bool) arr_37 [i_10] [i_10] [i_10] [i_10] [i_10])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_44 [i_13 - 1] [i_13 - 1] [i_10] [i_13 - 1] [i_13] [i_13 - 1]))))));
                            var_28 = ((/* implicit */signed char) (+(arr_11 [i_2 - 2] [i_2 + 1])));
                            arr_54 [i_9] [i_10] &= ((/* implicit */int) ((((/* implicit */_Bool) arr_33 [i_10 - 2] [4LL])) ? (((((/* implicit */_Bool) arr_30 [i_1] [i_1] [i_1] [i_10 - 1])) ? (((/* implicit */unsigned long long int) var_0)) : (arr_35 [i_1] [i_2] [i_2] [i_2]))) : (arr_24 [i_1] [i_2] [i_1] [i_9] [i_9] [i_13])));
                        }
                        arr_55 [i_1] [i_1] [i_1] [i_9] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_52 [i_1] [i_2] [i_9] [i_2 + 1])) : (var_0)))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_4)));
                    }
                    arr_56 [i_9] = ((/* implicit */_Bool) ((unsigned char) arr_51 [i_2 - 3] [i_2 + 1] [i_2] [i_9] [i_2 - 3]));
                    var_29 = ((((/* implicit */_Bool) arr_24 [i_2] [i_2 - 1] [i_9] [i_2] [i_2 - 1] [(signed char)7])) ? (((/* implicit */int) arr_38 [i_1] [14] [i_2])) : (((/* implicit */int) arr_18 [i_1] [i_1] [i_2 - 2] [i_2 - 2])));
                }
                for (long long int i_14 = 0; i_14 < 20; i_14 += 3) 
                {
                    arr_59 [i_1] [i_1] [i_14] = ((/* implicit */long long int) arr_39 [i_1] [i_2 - 3] [17LL] [i_14]);
                    /* LoopSeq 1 */
                    for (int i_15 = 0; i_15 < 20; i_15 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (int i_16 = 2; i_16 < 17; i_16 += 4) 
                        {
                            var_30 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)23)) ? (435642772U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
                            arr_66 [i_1] [i_2 + 1] [3] [i_1] [i_14] [i_15] [i_16] = ((/* implicit */int) max((((unsigned int) var_10)), (((/* implicit */unsigned int) ((int) arr_33 [i_2 - 4] [i_2 - 1])))));
                            arr_67 [i_16 - 1] [i_15] [i_15] [(_Bool)1] [i_2] [(_Bool)1] [i_1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_8 [i_1] [(signed char)3] [i_1])) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) arr_57 [i_1] [i_1] [i_1] [i_15]))))) & (((/* implicit */unsigned int) (~(((/* implicit */int) arr_62 [i_1] [i_2] [i_14] [i_14] [i_15] [i_16])))))))) ^ (max((((((/* implicit */_Bool) var_10)) ? (var_8) : (((/* implicit */unsigned long long int) arr_36 [i_1] [i_2 - 3])))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) | (((/* implicit */int) var_4)))))))));
                        }
                        arr_68 [(unsigned short)16] [(unsigned short)16] [i_14] [i_14] [i_14] [i_14] = ((max((((/* implicit */unsigned long long int) ((arr_40 [i_1] [i_2] [i_1] [i_15]) ? (((/* implicit */int) arr_47 [(unsigned short)1])) : (var_6)))), (((var_9) ? (arr_24 [i_1] [14] [i_2] [(unsigned char)2] [i_1] [i_15]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_1] [i_14] [i_1] [i_1]))))))) < (min((var_8), (((/* implicit */unsigned long long int) var_0)))));
                    }
                }
                arr_69 [i_1] = ((/* implicit */_Bool) var_0);
            }
        } 
    } 
    var_31 = ((/* implicit */unsigned char) var_8);
}
