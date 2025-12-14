/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246089
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
    for (unsigned char i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    arr_7 [i_1] [3LL] = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) (+(var_5)))), (max((((/* implicit */unsigned long long int) var_17)), (var_15))))) * (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_0 [(short)8])) != (((/* implicit */int) arr_0 [1])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 2]))) : (((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */long long int) arr_1 [i_0])) : (arr_6 [i_2] [(short)5] [5U] [5U]))))))));
                    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_19)), (arr_6 [i_0] [11U] [i_2] [7LL])))) ? (((var_6) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)113)))))))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_5 [7LL]))))))) : (max(((+(arr_3 [i_1] [8ULL]))), ((~(var_7)))))));
                    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (+(((/* implicit */int) arr_2 [(_Bool)1] [i_1] [i_2])))))));
                    arr_8 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0 + 2] [i_0 + 4] [i_0 + 3] [i_0 + 4])) ? (((/* implicit */int) arr_5 [(unsigned char)7])) : (((/* implicit */int) var_19))))) | (((((var_18) | (((/* implicit */long long int) arr_1 [i_0 + 3])))) / (((/* implicit */long long int) ((/* implicit */int) arr_2 [(unsigned short)9] [i_1] [9U])))))));
                    var_22 &= ((/* implicit */unsigned int) max((var_10), (((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)9337)))))));
                }
            } 
        } 
        arr_9 [(unsigned char)0] = ((/* implicit */unsigned long long int) arr_6 [i_0] [i_0 + 2] [0LL] [i_0 + 2]);
        /* LoopSeq 4 */
        for (int i_3 = 0; i_3 < 12; i_3 += 2) 
        {
            var_23 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((arr_6 [i_0] [i_0 + 3] [(unsigned char)3] [3U]), (arr_6 [i_0] [i_0 - 1] [6U] [i_0]))))));
            arr_12 [i_0 + 3] [1LL] = ((/* implicit */unsigned int) max(((signed char)-114), ((signed char)-81)));
        }
        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 1) 
        {
            var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) max(((-(((/* implicit */int) var_16)))), (((((/* implicit */_Bool) arr_13 [i_0 + 4] [i_0 - 1] [i_0])) ? (((/* implicit */int) arr_5 [i_0 - 1])) : (((/* implicit */int) arr_5 [i_0 + 3])))))))));
            var_25 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_13 [i_0 + 4] [i_4] [i_4])) && (((/* implicit */_Bool) max((((/* implicit */int) var_14)), (arr_1 [i_4])))))) ? (max((max((var_15), (((/* implicit */unsigned long long int) var_12)))), (((/* implicit */unsigned long long int) var_18)))) : (((/* implicit */unsigned long long int) (-(arr_10 [i_0 - 1]))))));
            var_26 |= ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)120)) ? (((/* implicit */int) (signed char)-121)) : (((/* implicit */int) (_Bool)1))))) - (var_9)));
            var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((max((((/* implicit */long long int) (short)-2120)), (-5365094081725157366LL))), (max((((/* implicit */long long int) -1)), (576460752303423488LL)))))) ? ((+(((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) arr_5 [10U])) : (((/* implicit */int) var_16)))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) var_13))))) ? ((+(((/* implicit */int) var_11)))) : ((~(arr_3 [i_0] [i_0]))))))))));
        }
        for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 2) 
        {
            arr_18 [i_5] [i_0] |= ((/* implicit */signed char) min((min(((-(arr_17 [i_0] [i_5] [i_0 + 3]))), (((/* implicit */long long int) var_4)))), (((/* implicit */long long int) var_11))));
            arr_19 [i_5] = ((/* implicit */signed char) max((var_13), (((/* implicit */short) ((((/* implicit */int) var_17)) != (((/* implicit */int) max((arr_13 [i_0] [i_0 + 2] [i_0 + 3]), (arr_14 [i_0] [i_5] [i_0])))))))));
        }
        for (short i_6 = 0; i_6 < 12; i_6 += 4) 
        {
            var_28 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_12)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_6] [i_6] [i_6])))))))) ? ((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [(unsigned short)9] [(unsigned short)9] [i_6]))))))) : (((((/* implicit */_Bool) arr_4 [i_0 + 2] [i_0 + 2])) ? (arr_10 [i_0 + 1]) : (((/* implicit */int) ((arr_20 [i_0]) > (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0]))))))))));
            var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_4 [3LL] [3LL])) >= ((-(((/* implicit */int) arr_13 [5LL] [i_0] [i_6])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [2ULL] [2ULL])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_14 [(signed char)2] [i_6] [i_6]))))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_11 [i_0] [i_0] [i_6]))))) : (max((arr_17 [i_0] [i_0] [10ULL]), (arr_20 [i_0]))))) : (((((/* implicit */long long int) arr_3 [i_0 + 3] [i_0 + 4])) | (((((/* implicit */_Bool) var_14)) ? (var_9) : (((/* implicit */long long int) var_7)))))))))));
            /* LoopNest 3 */
            for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 4) 
            {
                for (unsigned char i_8 = 0; i_8 < 12; i_8 += 2) 
                {
                    for (long long int i_9 = 0; i_9 < 12; i_9 += 3) 
                    {
                        {
                            arr_29 [i_0] [(unsigned char)7] [(unsigned short)7] [i_8] [i_8] [i_9] = ((/* implicit */unsigned long long int) var_8);
                            arr_30 [i_0] [i_9] [i_0] [i_0] [i_0 + 3] [i_0] [i_0 + 3] = (+(max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_7])) ? (arr_6 [7U] [i_0] [7U] [i_0]) : (((/* implicit */long long int) arr_1 [i_8]))))), (max((((/* implicit */unsigned long long int) arr_26 [i_7] [11ULL] [i_9])), (var_6))))));
                        }
                    } 
                } 
            } 
        }
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 12; i_10 += 2) 
        {
            for (short i_11 = 4; i_11 < 10; i_11 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_12 = 0; i_12 < 12; i_12 += 3) 
                    {
                        for (short i_13 = 1; i_13 < 10; i_13 += 1) 
                        {
                            {
                                var_30 = ((/* implicit */short) arr_10 [(unsigned char)5]);
                                arr_41 [i_11] [i_12] [i_12] [i_11 - 4] [7] [7] [i_11] = ((/* implicit */signed char) min((((((/* implicit */int) arr_23 [i_0] [i_0 - 1] [i_11 + 1] [i_13 + 2])) - (((/* implicit */int) arr_23 [i_0] [i_0 - 1] [i_11 + 1] [i_13 - 1])))), (((/* implicit */int) min((arr_23 [(unsigned short)6] [i_0 + 4] [i_11 - 4] [i_13 - 1]), (arr_23 [4LL] [i_0 - 1] [i_11 + 2] [i_13 + 2]))))));
                                arr_42 [i_12] [i_12] [i_11 - 4] [i_11] = ((/* implicit */unsigned int) min(((-(((((/* implicit */_Bool) arr_24 [i_12] [(unsigned char)2] [i_11])) ? (var_12) : (((/* implicit */long long int) arr_10 [i_10])))))), (((/* implicit */long long int) ((((/* implicit */int) arr_16 [i_13 - 1] [i_12] [i_10])) != ((-(arr_10 [9ULL]))))))));
                                arr_43 [i_0] [i_0 + 3] [i_0] [i_0] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_39 [i_0 + 2] [i_11] [i_11] [(short)5] [i_11] [1] [i_0 - 1]))))) ? (((/* implicit */int) min((arr_39 [i_0 + 2] [i_11] [i_0] [i_0] [i_0 + 4] [i_0] [i_11 + 1]), (arr_39 [i_0 + 2] [i_11] [8U] [8] [i_12] [8] [i_12])))) : (((/* implicit */int) arr_39 [i_0 + 2] [i_11] [i_0 + 2] [i_10] [i_11] [i_13 + 2] [5U]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_14 = 0; i_14 < 12; i_14 += 3) 
                    {
                        for (short i_15 = 0; i_15 < 12; i_15 += 4) 
                        {
                            {
                                arr_50 [i_11] = ((/* implicit */signed char) var_2);
                                arr_51 [i_11] = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) arr_16 [i_14] [i_14] [1LL])) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_35 [i_11] [i_11] [11LL])))))))));
                                var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_8)) : (arr_32 [i_11])))))) ? ((+(((/* implicit */int) arr_25 [i_0])))) : (var_4))))));
                            }
                        } 
                    } 
                    arr_52 [(short)6] [i_10] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_11 - 2] [i_11 + 1] [i_11] [i_0 - 1] [i_0])) ? (arr_28 [i_11 - 4] [i_11 - 2] [i_11] [i_0 + 3] [i_0]) : (arr_28 [i_11 + 1] [i_11 - 4] [i_11] [i_0 + 4] [8LL])))) ? (arr_40 [i_0] [i_0 + 1] [5U] [i_11] [i_11] [7U]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_11 - 4] [i_11 + 2] [(signed char)5])) ? ((+(arr_24 [i_11] [i_0 + 2] [i_11]))) : (((/* implicit */long long int) (+(arr_44 [i_0] [(signed char)0] [i_0] [i_0])))))))));
                    var_32 -= ((/* implicit */unsigned long long int) arr_48 [i_0] [i_0] [(short)1] [3U] [4ULL]);
                }
            } 
        } 
    }
    for (int i_16 = 4; i_16 < 15; i_16 += 1) 
    {
        var_33 = ((/* implicit */int) arr_54 [i_16]);
        /* LoopNest 2 */
        for (unsigned char i_17 = 0; i_17 < 16; i_17 += 1) 
        {
            for (short i_18 = 0; i_18 < 16; i_18 += 3) 
            {
                {
                    arr_60 [i_17] [i_17] [i_17] [i_17] = ((/* implicit */_Bool) (-(arr_58 [i_16] [(signed char)11] [i_17])));
                    var_34 = (((!(((/* implicit */_Bool) arr_57 [i_16 - 3] [(short)12] [i_18])))) ? ((((!(((/* implicit */_Bool) arr_54 [(short)15])))) ? (((((/* implicit */_Bool) arr_57 [i_16] [i_16] [i_18])) ? (((/* implicit */long long int) ((/* implicit */int) arr_55 [i_16 - 4]))) : (arr_54 [(unsigned char)0]))) : (((/* implicit */long long int) ((/* implicit */int) arr_59 [i_16] [i_17]))))) : (max((((/* implicit */long long int) arr_55 [i_16 - 1])), (((((/* implicit */_Bool) arr_57 [(short)7] [(short)7] [i_18])) ? (var_12) : (((/* implicit */long long int) arr_57 [i_16 + 1] [15ULL] [i_16 + 1])))))));
                    /* LoopNest 2 */
                    for (unsigned int i_19 = 0; i_19 < 16; i_19 += 1) 
                    {
                        for (short i_20 = 0; i_20 < 16; i_20 += 2) 
                        {
                            {
                                var_35 = ((/* implicit */long long int) min((var_35), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_57 [i_16] [i_16] [9LL])) ? (var_15) : (arr_53 [i_17] [i_20]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -779335623)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-16631))))) : (max((((/* implicit */unsigned long long int) max((arr_59 [i_16] [(signed char)2]), (arr_59 [i_16 - 3] [i_18])))), (((arr_53 [i_16] [i_16]) * (((/* implicit */unsigned long long int) arr_62 [15ULL] [i_17] [i_18] [15ULL])))))))))));
                                arr_67 [i_16] [i_16 - 4] [i_17] [i_18] [3ULL] [i_19] [i_17] = ((/* implicit */unsigned short) var_0);
                                var_36 = ((/* implicit */unsigned int) min((var_36), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-83)))))) / ((~(-3090151407010727721LL))))))));
                                var_37 += ((/* implicit */unsigned long long int) ((arr_65 [i_20] [14ULL] [i_19] [i_20] [i_18] [i_17] [i_16]) > (min(((-(arr_54 [4LL]))), (((/* implicit */long long int) (-(((/* implicit */int) var_1)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_68 [i_16] |= ((/* implicit */int) var_8);
        var_38 = ((/* implicit */long long int) max(((+(var_7))), (max((max((arr_57 [i_16] [i_16 - 3] [i_16]), (arr_64 [i_16 + 1] [11] [i_16 - 4] [i_16 + 1] [11]))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_54 [(unsigned char)4])))))))));
    }
    var_39 = (-(max(((+(-2600647306891200034LL))), (var_12))));
}
