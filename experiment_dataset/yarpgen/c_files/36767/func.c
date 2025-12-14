/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36767
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
    for (unsigned short i_0 = 4; i_0 < 20; i_0 += 2) 
    {
        var_17 = ((/* implicit */signed char) arr_0 [4]);
        /* LoopSeq 4 */
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            var_18 = ((/* implicit */signed char) arr_0 [i_0]);
            arr_6 [(unsigned short)3] [i_0] [i_0 - 3] = ((/* implicit */signed char) max((((unsigned char) ((int) var_1))), (((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) (unsigned short)2184)) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((/* implicit */int) var_4))))))));
        }
        for (int i_2 = 0; i_2 < 22; i_2 += 3) 
        {
            var_19 &= ((/* implicit */signed char) ((unsigned char) max((((/* implicit */int) ((((/* implicit */int) (signed char)3)) < (((/* implicit */int) var_16))))), (arr_0 [i_0 - 4]))));
            var_20 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_4)))) <= (arr_7 [i_0 - 1] [i_0 + 1] [i_0 + 2])));
            var_21 &= arr_5 [i_0] [19] [i_0];
        }
        for (signed char i_3 = 0; i_3 < 22; i_3 += 3) 
        {
            var_22 = ((/* implicit */unsigned short) (-(((/* implicit */int) max((arr_8 [i_0 + 1] [(unsigned char)13] [i_0]), (arr_8 [i_0 + 1] [i_0 - 1] [i_0]))))));
            arr_13 [i_3] [i_3] [i_0] = ((/* implicit */unsigned long long int) var_7);
        }
        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 2) 
        {
            var_23 = ((/* implicit */unsigned long long int) ((((arr_7 [i_0] [(signed char)18] [(signed char)11]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_4]))))) == ((~(((((/* implicit */_Bool) var_6)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))));
            var_24 = ((/* implicit */unsigned char) ((signed char) arr_14 [i_0] [i_0 + 2] [i_0]));
            /* LoopSeq 2 */
            for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 4) 
            {
                var_25 = ((/* implicit */unsigned short) (~(var_12)));
                var_26 = ((/* implicit */unsigned char) max((((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned short) var_2)))))))), (var_11)));
                /* LoopSeq 3 */
                for (signed char i_6 = 0; i_6 < 22; i_6 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_7 = 0; i_7 < 22; i_7 += 3) 
                    {
                        var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-(arr_10 [i_0] [i_0])))), (((var_14) >> (((var_9) - (6483914014291927530ULL)))))))) ? (((/* implicit */int) max((var_13), (((/* implicit */unsigned char) arr_15 [i_0 - 4] [i_0 + 2]))))) : ((+(((/* implicit */int) arr_17 [5])))))))));
                        var_28 = ((/* implicit */unsigned short) ((signed char) arr_2 [i_0] [i_0]));
                        var_29 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 23ULL))));
                        arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] = ((unsigned short) ((((/* implicit */_Bool) arr_18 [i_7] [8] [i_5] [i_4] [0ULL])) ? (((/* implicit */int) arr_18 [i_7] [i_7] [i_7] [i_7] [i_7])) : (((/* implicit */int) arr_18 [i_0 + 1] [i_0 - 4] [i_0 + 1] [i_0] [(unsigned char)12]))));
                        arr_25 [2ULL] [i_5] [(unsigned char)14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) arr_19 [i_0 - 1] [i_0 - 4] [i_0 - 1] [i_0 + 1])) : (arr_23 [i_7] [i_6] [i_6] [i_5] [8ULL] [21ULL])))) ? (((var_8) % (min((((/* implicit */unsigned long long int) arr_18 [(unsigned short)11] [(unsigned char)2] [(signed char)7] [i_6] [4])), (var_15))))) : (((/* implicit */unsigned long long int) (+((+(((/* implicit */int) var_2)))))))));
                    }
                    /* vectorizable */
                    for (signed char i_8 = 0; i_8 < 22; i_8 += 1) 
                    {
                        var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_0 - 4] [i_0 - 3])) ? (((/* implicit */int) arr_4 [i_0 - 4] [i_0 - 4])) : (((/* implicit */int) var_5))));
                        var_31 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_4 [i_6] [i_0 - 1])))));
                    }
                    arr_28 [16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_27 [i_4] [i_4] [i_5] [i_5] [i_4] [(unsigned char)12] [i_6]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)252))) : (arr_27 [i_4] [i_5] [i_5] [i_5] [i_4] [i_0 + 1] [i_4])))) ? (min((((/* implicit */unsigned long long int) arr_10 [i_0 + 1] [i_0 - 1])), (var_15))) : (((unsigned long long int) var_9))));
                    var_32 = ((/* implicit */signed char) (-(((arr_19 [i_0] [i_0] [i_0 - 3] [i_0 + 2]) >> (((arr_19 [i_0] [i_0 - 4] [i_0 - 2] [i_0 + 1]) - (333814994)))))));
                }
                /* vectorizable */
                for (unsigned short i_9 = 0; i_9 < 22; i_9 += 2) 
                {
                    var_33 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_18 [i_0] [i_0 - 2] [i_0] [i_9] [i_9]))));
                    var_34 = ((/* implicit */unsigned long long int) min((var_34), ((~(((((/* implicit */unsigned long long int) var_11)) & (var_14)))))));
                    var_35 = ((/* implicit */unsigned long long int) max((var_35), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_10 [i_0] [(signed char)2])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)255)))) != (((/* implicit */int) ((unsigned short) arr_4 [i_0 + 2] [(unsigned short)11]))))))));
                    var_36 = ((/* implicit */int) var_8);
                }
                for (unsigned long long int i_10 = 0; i_10 < 22; i_10 += 2) 
                {
                    arr_33 [i_4] [i_5] [i_10] = ((((/* implicit */unsigned long long int) ((int) max((((/* implicit */unsigned long long int) arr_17 [i_0 - 4])), (var_12))))) * (max((((/* implicit */unsigned long long int) arr_20 [i_5] [i_10])), (((((/* implicit */_Bool) var_11)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))));
                    arr_34 [(signed char)2] [i_4] [(unsigned char)9] [18ULL] [(signed char)7] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) arr_29 [i_0] [i_0 - 1] [i_0] [i_0 - 3])) < (((/* implicit */int) arr_29 [i_0] [i_0 - 3] [i_0] [i_0 - 4]))))) & ((~(arr_31 [(unsigned char)3] [i_0 - 2] [i_0 + 1] [i_0] [i_0 - 3])))));
                }
            }
            for (unsigned long long int i_11 = 0; i_11 < 22; i_11 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_12 = 2; i_12 < 21; i_12 += 3) 
                {
                    var_37 *= ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) arr_22 [i_0 - 4] [i_0 - 4] [i_11] [i_12] [i_0 + 1])) ? (arr_22 [i_0 - 1] [i_4] [i_4] [i_12 - 1] [i_4]) : (arr_22 [i_0 - 4] [i_0 - 1] [i_12 - 2] [i_12 - 1] [i_0 + 2]))));
                    arr_39 [i_11] [i_11] = ((/* implicit */signed char) ((((unsigned long long int) arr_7 [i_0 - 3] [i_0 - 4] [i_12 - 2])) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (+(var_11))))))));
                    var_38 = min((((unsigned short) arr_29 [i_12] [i_4] [i_12 - 2] [8ULL])), (((/* implicit */unsigned short) ((unsigned char) arr_8 [(unsigned char)13] [i_12 - 1] [i_12 + 1]))));
                }
                for (unsigned long long int i_13 = 0; i_13 < 22; i_13 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_14 = 4; i_14 < 21; i_14 += 4) 
                    {
                        var_39 = ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_14 - 2] [i_13] [(unsigned char)21] [i_4]))) : (max((max((arr_7 [i_0 - 2] [i_4] [i_13]), (var_15))), (((unsigned long long int) var_2)))));
                        var_40 = ((/* implicit */int) ((unsigned short) (-(((/* implicit */int) var_16)))));
                    }
                    for (unsigned char i_15 = 3; i_15 < 21; i_15 += 2) 
                    {
                        arr_48 [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) (+(arr_9 [i_13]))))) || (((/* implicit */_Bool) var_4))));
                        arr_49 [i_0 + 2] [i_11] [i_13] [i_11] = ((/* implicit */signed char) min((((int) arr_23 [i_0 - 4] [i_0 + 1] [i_0 + 2] [i_15 + 1] [i_15 - 1] [i_15 - 2])), (max((((/* implicit */int) arr_32 [i_15 + 1] [19] [i_0 + 1])), (arr_22 [(signed char)18] [i_0] [i_0 - 4] [i_11] [i_13])))));
                    }
                    arr_50 [i_11] [i_0] [5] [i_11] [i_13] = ((/* implicit */unsigned long long int) arr_42 [i_0] [i_4] [i_11] [i_0 - 3]);
                    var_41 = ((/* implicit */int) max((((/* implicit */unsigned long long int) arr_10 [i_0 + 2] [(unsigned char)5])), (var_8)));
                }
                arr_51 [i_11] [i_11] [i_4] [i_11] = ((/* implicit */signed char) min((min((((/* implicit */int) arr_5 [i_0] [i_0] [i_0])), (((int) var_9)))), (((/* implicit */int) (!(((((/* implicit */_Bool) (unsigned short)11007)) && (((/* implicit */_Bool) var_9)))))))));
                var_42 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_8))));
                arr_52 [i_0 - 2] [i_4] [i_11] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_35 [8ULL] [i_4] [(unsigned short)19] [i_0])) << (((((/* implicit */int) var_16)) + (37)))))) | (((((/* implicit */_Bool) arr_38 [i_0 + 1] [i_4] [i_11] [i_0 + 1])) ? (arr_27 [i_11] [i_0] [i_0 + 2] [i_11] [i_4] [i_4] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)101))))))));
            }
            arr_53 [(unsigned short)19] [(unsigned short)19] [i_0] = min((var_4), (((/* implicit */unsigned short) ((signed char) (!(((/* implicit */_Bool) arr_11 [i_4] [i_4] [(unsigned char)16])))))));
        }
    }
    var_43 = (-(((/* implicit */int) var_6)));
    var_44 = var_13;
}
