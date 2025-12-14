/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223832
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
    for (int i_0 = 0; i_0 < 15; i_0 += 3) /* same iter space */
    {
        var_14 = min((((/* implicit */long long int) ((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_2 [i_0]))) > (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_3 [13]))))))), (((((/* implicit */_Bool) min((arr_2 [i_0]), (((/* implicit */long long int) var_2))))) ? (max((((/* implicit */long long int) var_1)), (arr_2 [i_0]))) : (max((((/* implicit */long long int) var_8)), (arr_2 [i_0]))))));
        /* LoopNest 2 */
        for (long long int i_1 = 3; i_1 < 13; i_1 += 3) 
        {
            for (long long int i_2 = 4; i_2 < 13; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) max((arr_6 [i_0]), (((/* implicit */unsigned long long int) arr_8 [i_2] [i_1 - 2])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) arr_4 [i_0] [i_1])) : (var_1)))) ? (var_7) : (((/* implicit */unsigned int) ((int) var_9)))))) : (((((/* implicit */_Bool) ((var_5) | (arr_2 [i_0])))) ? (max((((/* implicit */unsigned long long int) var_12)), (arr_5 [1LL] [14ULL]))) : (((/* implicit */unsigned long long int) ((int) var_7)))))));
                    var_15 = ((/* implicit */_Bool) arr_3 [i_2 - 3]);
                    var_16 = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) max((arr_3 [i_2]), (var_0)))) || (((/* implicit */_Bool) ((arr_1 [i_0] [i_1]) ? (((/* implicit */int) arr_1 [i_0] [i_1 - 1])) : (((/* implicit */int) arr_0 [i_1]))))))));
                    var_17 -= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_8 [i_0] [i_1])), (min((((/* implicit */unsigned long long int) ((unsigned char) var_3))), (min((arr_5 [i_0] [i_2]), (((/* implicit */unsigned long long int) arr_2 [(short)8]))))))));
                }
            } 
        } 
    }
    for (int i_3 = 0; i_3 < 15; i_3 += 3) /* same iter space */
    {
        arr_13 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [12])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_0 [i_3]))))) ? (((/* implicit */int) min((var_2), (((/* implicit */short) var_13))))) : (((/* implicit */int) max((var_13), (var_6))))))) ? (min((((int) arr_7 [6ULL] [(_Bool)1])), (((/* implicit */int) ((unsigned char) arr_10 [i_3] [i_3]))))) : (((/* implicit */int) max((min((((/* implicit */unsigned short) var_6)), (arr_0 [i_3]))), (((/* implicit */unsigned short) max((((/* implicit */short) var_6)), (var_8)))))))));
        var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) ((signed char) arr_2 [(unsigned char)8]))), (((((/* implicit */_Bool) arr_0 [i_3])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_13))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [2])) ? (((/* implicit */unsigned int) arr_8 [i_3] [i_3])) : (var_9)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_1 [(unsigned char)14] [i_3])), (arr_0 [i_3]))))) : (((unsigned int) var_7))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [4LL] [4LL])) ? (((/* implicit */long long int) var_9)) : (var_10)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) arr_2 [6LL])) ? (arr_3 [i_3]) : (((/* implicit */unsigned long long int) arr_10 [(signed char)7] [i_3])))))))))));
    }
    /* LoopNest 2 */
    for (unsigned int i_4 = 2; i_4 < 16; i_4 += 3) 
    {
        for (unsigned char i_5 = 2; i_5 < 17; i_5 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_6 = 2; i_6 < 17; i_6 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 1; i_7 < 15; i_7 += 3) 
                    {
                        for (unsigned short i_8 = 2; i_8 < 15; i_8 += 3) 
                        {
                            {
                                var_19 *= ((/* implicit */signed char) ((((_Bool) max((var_6), (var_13)))) ? (max((((((/* implicit */unsigned long long int) var_4)) - (arr_17 [i_5] [(unsigned char)8]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_8] [i_7] [i_6] [i_5] [i_4])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_6))))))) : (((/* implicit */unsigned long long int) ((max((var_7), (((/* implicit */unsigned int) var_6)))) % (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) var_11)), (arr_26 [16U]))))))))));
                                arr_28 [15U] [i_8] [(unsigned char)9] [i_5 + 1] [i_4] = ((/* implicit */long long int) max((var_1), (((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) arr_20 [i_4] [i_4 + 1] [i_4])) : (arr_15 [i_4])))))));
                            }
                        } 
                    } 
                    arr_29 [i_4] [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) min((arr_24 [i_4] [i_4] [i_5] [i_5] [i_6]), (arr_14 [i_4] [i_4])))) > (((/* implicit */int) ((unsigned char) var_3))))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_9)), (var_0)))) ? (((unsigned long long int) var_10)) : (((((/* implicit */_Bool) var_10)) ? (var_0) : (arr_19 [i_5] [i_4])))))));
                }
                for (unsigned char i_9 = 2; i_9 < 17; i_9 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (int i_10 = 2; i_10 < 16; i_10 += 3) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_11 = 0; i_11 < 18; i_11 += 3) 
                        {
                            var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_11] [i_10] [i_9 - 2] [i_5 - 2] [i_4])) ? (arr_30 [i_10 + 1]) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))) ? (((((/* implicit */_Bool) arr_20 [i_4 - 1] [2LL] [i_11])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_13)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_33 [i_4]))))))))));
                            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_30 [i_4]) + (((/* implicit */long long int) var_7))))) ? (((/* implicit */int) ((unsigned char) var_1))) : (((int) var_2))));
                            arr_37 [i_4] [i_4] [14U] = ((/* implicit */short) ((unsigned long long int) ((int) arr_25 [i_11] [i_10] [i_4] [i_5] [i_4])));
                            arr_38 [i_4] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_16 [4ULL])) : (((/* implicit */int) arr_26 [i_4]))))) ? (((/* implicit */int) ((_Bool) arr_21 [i_4 - 2] [4] [4] [i_4]))) : (((((/* implicit */_Bool) arr_36 [i_4] [i_5] [i_10] [i_10] [i_11] [i_10] [i_4])) ? (((/* implicit */int) var_3)) : (arr_20 [i_11] [i_5 + 1] [i_4])))));
                            arr_39 [0] [i_11] |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_36 [12] [i_4] [2LL] [2LL] [i_10] [i_11] [i_11]))))) ? (((/* implicit */unsigned long long int) ((int) arr_15 [12LL]))) : (((arr_19 [15] [(unsigned short)0]) >> (((((/* implicit */int) var_11)) - (54))))));
                        }
                        var_22 = ((/* implicit */int) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((arr_30 [i_9]) > (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_4])))))), (max((var_7), (arr_33 [i_5])))))), (((unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_4] [i_4])) ? (((/* implicit */int) arr_27 [i_4] [i_10] [i_9 - 2] [i_9 - 2] [i_10])) : (arr_18 [i_4] [i_10 + 2] [i_4]))))));
                        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) min((((((/* implicit */_Bool) ((int) var_10))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_13)))) : (var_0))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_31 [i_10] [i_9] [i_5 - 2] [i_4 - 1])))) ? (min((arr_15 [4U]), (((/* implicit */long long int) var_11)))) : (min((arr_35 [6LL]), (((/* implicit */long long int) arr_26 [12]))))))))))));
                        arr_40 [i_4] [i_9] [i_4] [9LL] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) ((max((var_0), (((/* implicit */unsigned long long int) var_7)))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_4 - 2] [i_5 + 1] [2ULL] [i_10])) || (((/* implicit */_Bool) var_8))))))))) != (((/* implicit */int) var_11))));
                        var_24 = ((/* implicit */unsigned short) ((int) var_0));
                    }
                    arr_41 [i_4] [i_5 + 1] [i_4] = ((/* implicit */unsigned char) ((((int) var_10)) << (((min((((unsigned int) var_10)), (max((((/* implicit */unsigned int) arr_36 [i_4] [i_5] [i_9 - 1] [i_9 - 1] [i_5] [i_9] [i_5])), (var_9))))) - (2061021858U)))));
                    var_25 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) arr_25 [5ULL] [(unsigned char)7] [i_4] [i_4] [i_9 + 1])), (arr_22 [i_4 - 2] [i_4] [i_4] [i_4] [i_4 - 2])))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_32 [i_5] [i_5] [i_5])))) : (((((/* implicit */_Bool) arr_26 [i_4])) ? (arr_34 [i_4] [i_4] [i_5] [i_5] [i_9]) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_11)) : (arr_18 [i_4 - 2] [i_5 - 1] [i_4])))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_4] [i_4] [i_9 + 1] [i_4]))) / (var_0)))))));
                }
                /* LoopSeq 1 */
                for (long long int i_12 = 0; i_12 < 18; i_12 += 3) 
                {
                    var_26 = ((/* implicit */short) max((((((/* implicit */_Bool) max((arr_35 [i_4]), (((/* implicit */long long int) arr_20 [i_4 - 2] [i_4] [i_4]))))) ? (((/* implicit */unsigned long long int) min((arr_42 [13ULL] [i_5] [i_12]), (((/* implicit */unsigned int) arr_14 [i_4 - 2] [i_12]))))) : (max((arr_17 [i_4] [i_4]), (((/* implicit */unsigned long long int) var_6)))))), (((/* implicit */unsigned long long int) max((var_6), (((/* implicit */unsigned char) ((arr_25 [i_12] [i_5 - 2] [i_4] [i_5] [i_4]) || (((/* implicit */_Bool) var_7))))))))));
                    arr_45 [i_12] [i_12] [i_12] [i_4] = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((_Bool) max((((/* implicit */long long int) var_3)), (var_10))))), (max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) % (arr_43 [i_4])))), (((arr_30 [i_5]) / (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_4] [i_5] [i_12] [i_12])))))))));
                }
                var_27 = ((/* implicit */signed char) max((arr_31 [i_4] [i_5 - 2] [i_5] [i_4 - 1]), (((((/* implicit */_Bool) arr_36 [i_4] [i_5] [i_5] [i_5] [i_5 - 2] [(_Bool)1] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_12)) >= (((/* implicit */int) var_11)))))) : (min((((/* implicit */long long int) var_3)), (arr_15 [i_4])))))));
                /* LoopSeq 1 */
                for (long long int i_13 = 0; i_13 < 18; i_13 += 3) 
                {
                    var_28 = ((/* implicit */short) max((((int) max((arr_31 [i_4] [i_4 + 2] [i_4 + 2] [(signed char)6]), (arr_15 [i_4])))), (arr_22 [i_13] [i_13] [i_5 - 2] [17] [i_4])));
                    arr_50 [i_4 - 1] [i_4] [5LL] = ((/* implicit */short) min((max((max((arr_43 [i_4]), (((/* implicit */unsigned int) var_12)))), (((/* implicit */unsigned int) ((var_7) > (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))))), (max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_48 [i_13]))) : (var_1))), (((/* implicit */unsigned int) arr_36 [i_4] [i_5 - 2] [i_4] [i_13] [i_13] [i_13] [i_4 + 1]))))));
                    arr_51 [i_4 + 1] [i_4] [i_5 - 1] [16] = ((/* implicit */_Bool) max((((long long int) max((((/* implicit */unsigned int) arr_22 [(unsigned short)3] [i_5] [i_5 - 2] [i_4 + 2] [i_4])), (arr_33 [7U])))), (((((/* implicit */_Bool) max((arr_19 [i_4] [i_4]), (((/* implicit */unsigned long long int) var_1))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_4] [i_13] [i_5] [i_4 - 1] [i_4]))) : (arr_43 [i_4])))) : (max((arr_35 [i_4]), (((/* implicit */long long int) var_1))))))));
                }
            }
        } 
    } 
    var_29 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((signed char) var_11))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_3)))))) : (var_5))), (((((/* implicit */_Bool) max((((/* implicit */long long int) var_8)), (var_10)))) ? (((var_10) & (((/* implicit */long long int) ((/* implicit */int) var_2))))) : (max((var_10), (((/* implicit */long long int) var_12))))))));
    var_30 = ((/* implicit */unsigned int) min((var_30), (max((((/* implicit */unsigned int) ((short) ((unsigned int) var_2)))), (min((((((/* implicit */_Bool) var_9)) ? (var_1) : (var_7))), (((/* implicit */unsigned int) ((((/* implicit */int) var_12)) / (((/* implicit */int) var_8)))))))))));
}
