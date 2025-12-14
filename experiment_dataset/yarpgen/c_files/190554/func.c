/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190554
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
    for (short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            for (int i_2 = 2; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */signed char) var_6);
                    var_20 ^= ((/* implicit */short) arr_0 [i_0]);
                    var_21 = ((/* implicit */short) arr_6 [i_1] [i_1] [(short)9]);
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            {
                                arr_15 [(unsigned char)16] [i_3] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */long long int) var_2);
                                arr_16 [i_2] [i_2] [i_3] = ((/* implicit */short) max((max((arr_8 [i_4] [i_2] [i_2 + 1] [i_2 + 2]), (arr_8 [i_1 + 2] [i_2] [i_3] [i_4]))), (((((/* implicit */_Bool) arr_8 [i_0] [i_2] [i_2 + 3] [i_3])) ? (arr_8 [i_0] [i_2] [i_2 + 1] [i_3]) : (arr_8 [i_0] [i_2] [i_2] [i_3])))));
                                var_22 = max((max((arr_14 [15U] [i_1] [i_3] [i_2] [i_4] [i_4]), (((/* implicit */unsigned long long int) max((arr_1 [i_4]), (((/* implicit */long long int) var_18))))))), (((((/* implicit */_Bool) var_9)) ? (max((((/* implicit */unsigned long long int) arr_1 [i_0])), (arr_14 [i_0] [i_1 - 2] [i_2 - 1] [i_2] [i_4] [19]))) : (((/* implicit */unsigned long long int) arr_0 [i_0])))));
                                var_23 = ((/* implicit */signed char) (short)14867);
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_17 [i_0] = ((/* implicit */int) max((((((/* implicit */_Bool) max((arr_3 [(short)19] [i_0]), (((/* implicit */unsigned int) arr_4 [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [10U] [i_0]))) : ((~(var_8))))), (((/* implicit */unsigned int) arr_6 [i_0] [0U] [i_0]))));
    }
    for (unsigned long long int i_5 = 4; i_5 < 13; i_5 += 3) 
    {
        var_24 = ((/* implicit */short) max((((/* implicit */long long int) arr_13 [i_5] [i_5] [i_5] [i_5] [i_5])), (max((((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_5]))) - (arr_11 [i_5 - 4] [i_5] [i_5] [(short)1]))), (((/* implicit */long long int) var_14))))));
        /* LoopNest 3 */
        for (short i_6 = 0; i_6 < 15; i_6 += 3) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (unsigned int i_8 = 0; i_8 < 15; i_8 += 3) 
                {
                    {
                        arr_27 [i_5] [i_7] [i_5] = arr_19 [4U] [i_5];
                        var_25 = ((/* implicit */unsigned short) (~(max((((/* implicit */unsigned int) (short)-30853)), (max((arr_0 [i_5]), (((/* implicit */unsigned int) var_0))))))));
                    }
                } 
            } 
        } 
        var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) arr_18 [0LL]))));
        arr_28 [i_5] = ((/* implicit */int) max((max((((/* implicit */unsigned int) (short)(-32767 - 1))), (arr_3 [i_5 - 2] [i_5]))), (max((((/* implicit */unsigned int) arr_5 [(signed char)1] [i_5] [i_5 + 1])), (arr_3 [i_5] [(unsigned short)6])))));
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 15; i_9 += 2) 
        {
            for (unsigned int i_10 = 2; i_10 < 14; i_10 += 3) 
            {
                for (unsigned char i_11 = 0; i_11 < 15; i_11 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (signed char i_12 = 0; i_12 < 15; i_12 += 1) 
                        {
                            var_27 = ((/* implicit */unsigned char) arr_11 [i_5] [i_9] [i_5] [i_10 - 1]);
                            arr_38 [i_10] [i_9] [i_10 - 2] [i_9] [i_11] [i_9] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_30 [(short)0] [(short)0]) : (898179955)))) ? (((/* implicit */int) arr_4 [14U])) : (arr_19 [i_5] [i_5])))) ? (max((((((/* implicit */_Bool) arr_7 [i_5] [i_9] [i_5])) ? (((/* implicit */int) arr_24 [(unsigned short)0] [i_9])) : (((/* implicit */int) (short)30852)))), (((/* implicit */int) arr_35 [i_9] [i_9])))) : (((/* implicit */int) var_2))));
                        }
                        /* vectorizable */
                        for (signed char i_13 = 0; i_13 < 15; i_13 += 1) 
                        {
                            arr_42 [i_5] [i_9] [i_10] [i_11] [i_5] [i_10 - 1] = ((/* implicit */int) arr_10 [i_5]);
                            var_28 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_22 [i_9] [i_10] [i_11])) ? (arr_13 [i_11] [i_9] [i_10] [i_11] [i_13]) : (((/* implicit */unsigned int) arr_6 [i_10 + 1] [i_10 - 2] [i_10 - 1]))));
                        }
                        /* LoopSeq 3 */
                        for (unsigned int i_14 = 0; i_14 < 15; i_14 += 3) 
                        {
                            var_29 = ((/* implicit */unsigned int) arr_14 [i_5] [(signed char)1] [(signed char)1] [i_5] [i_5] [i_14]);
                            var_30 = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_36 [i_5] [i_11] [i_5] [i_11] [i_5] [i_9] [i_5]), (((/* implicit */unsigned long long int) arr_23 [i_10]))))) ? (((/* implicit */int) arr_22 [i_5 - 4] [i_5 - 4] [i_5])) : ((-(arr_6 [i_5] [i_9] [(short)3])))))), (max((((/* implicit */long long int) max((arr_39 [(short)13] [i_5] [i_14] [i_11] [i_14]), (var_19)))), (max((((/* implicit */long long int) arr_30 [i_5] [i_9])), (arr_44 [i_5] [i_5] [i_10] [i_11] [i_11])))))));
                            var_31 = ((/* implicit */unsigned char) var_14);
                        }
                        for (unsigned long long int i_15 = 0; i_15 < 15; i_15 += 3) /* same iter space */
                        {
                            arr_47 [i_5 - 1] [i_9] [i_11] [i_5] = ((/* implicit */unsigned char) arr_19 [i_5 + 2] [i_5]);
                            var_32 *= ((/* implicit */short) arr_12 [i_5] [i_9] [i_10] [i_5 - 1] [i_15] [i_10 + 1]);
                            var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_5] [i_10 + 1] [i_10 + 1] [i_5])) ? (max((arr_43 [i_5] [i_9] [(short)4] [i_5] [i_15] [i_5] [i_11]), (((/* implicit */unsigned int) arr_25 [i_5] [i_9] [10ULL] [(signed char)12] [12ULL])))) : ((+(var_8)))))) ? (max((max((-4421028597329310139LL), (((/* implicit */long long int) var_19)))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_43 [(unsigned char)7] [(unsigned char)7] [12ULL] [i_5] [i_15] [i_15] [(short)4])) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_5] [i_9])))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_20 [i_5 - 2] [i_10 - 1])) < (((/* implicit */int) arr_20 [i_5 - 2] [i_10 - 1]))))))));
                            arr_48 [i_5] [i_5] [i_5 - 2] [(short)12] [(short)12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_40 [i_5] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_45 [i_5] [i_9] [0LL] [i_5] [i_5]))) : (arr_34 [i_5] [i_9])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) arr_4 [i_5 - 2])), ((short)30852))))) : (((((/* implicit */_Bool) arr_31 [9LL] [9LL] [i_11] [i_5])) ? (15368732578533963815ULL) : (((/* implicit */unsigned long long int) arr_1 [10ULL]))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_29 [i_5 - 3] [i_5])) ? (arr_29 [i_5] [i_5]) : (((/* implicit */int) arr_21 [i_5] [i_9]))))) : (((((/* implicit */_Bool) max((((/* implicit */long long int) arr_20 [i_9] [i_10])), (4421028597329310138LL)))) ? (arr_3 [i_5 + 1] [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_5] [i_9] [i_10 + 1] [(short)2] [i_9])))))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_16 = 0; i_16 < 15; i_16 += 3) /* same iter space */
                        {
                            arr_53 [7LL] [i_16] [i_5] [i_5] [13] = ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_5])) && (((/* implicit */_Bool) arr_10 [i_5]))));
                            var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_19)) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_50 [i_5 - 3] [i_9] [i_10] [i_11] [i_16])) : (arr_29 [i_5] [i_5]))) : (((/* implicit */int) arr_31 [i_9] [i_10 + 1] [i_11] [i_5]))));
                            var_35 = ((/* implicit */unsigned int) ((arr_44 [i_16] [i_5] [i_5] [i_5] [i_5 + 1]) / (((/* implicit */long long int) arr_41 [i_5] [i_5] [i_11] [i_10] [i_5] [i_5]))));
                            var_36 = ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_16] [(short)11] [(short)11])) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_50 [i_5] [i_5] [(signed char)4] [(unsigned char)1] [i_5 - 4]))))) : (arr_3 [i_10 + 1] [i_5 + 1])));
                        }
                        arr_54 [i_5] = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_19 [i_11] [i_9])))) ? (max((max((arr_10 [i_5]), (((/* implicit */unsigned long long int) arr_37 [i_5] [i_9] [i_5] [i_11] [i_9] [i_5] [i_11])))), (((/* implicit */unsigned long long int) arr_32 [(short)2] [(short)2])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_49 [i_5 - 2] [i_5] [i_5 + 1] [i_5] [i_5 - 2])) ? (((/* implicit */int) arr_45 [i_5 - 2] [i_9] [(signed char)11] [(signed char)11] [i_5])) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_17)) : (arr_46 [i_5] [0U] [i_10] [0U] [i_10]))))))));
                        arr_55 [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_5 [i_5 - 3] [17] [i_5 + 1]), (arr_5 [i_5 + 1] [13U] [i_5 - 2])))) ? (((/* implicit */int) arr_5 [0] [i_5] [i_5 - 3])) : (((((/* implicit */_Bool) arr_5 [i_5 - 2] [i_5 + 1] [i_5 + 2])) ? (((/* implicit */int) arr_5 [i_5] [i_5] [i_5 - 4])) : (((/* implicit */int) arr_5 [i_5] [i_5 - 2] [i_5 + 2]))))));
                        var_37 = ((/* implicit */unsigned int) arr_14 [i_5 - 4] [i_5 - 4] [i_10] [i_5] [i_10] [i_10]);
                    }
                } 
            } 
        } 
    }
    var_38 = ((/* implicit */signed char) var_11);
    var_39 = ((/* implicit */unsigned long long int) (short)30873);
}
