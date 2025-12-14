/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2463
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2463 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2463
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
    var_20 = ((/* implicit */int) var_12);
    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((var_2) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        /* LoopSeq 4 */
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */_Bool) (~(arr_4 [i_0 + 1] [6] [i_0 + 1])))) ? ((~(-4599244405688233079LL))) : (((/* implicit */long long int) arr_1 [i_0 - 1])))))));
            var_23 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) -4599244405688233079LL)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [13U])))))) ? (((unsigned long long int) 4599244405688233078LL)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 + 1] [i_0 + 1]))))) * (((/* implicit */unsigned long long int) ((arr_3 [i_0] [i_0 - 1]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))))));
            arr_5 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((arr_3 [i_0] [i_1]) < (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)237)))))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 24; i_2 += 1) 
        {
            var_24 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0 - 1] [i_0 - 1] [i_0])) ? (arr_1 [i_0 - 1]) : (((/* implicit */unsigned int) arr_7 [i_0 - 1] [i_0] [i_0]))));
            arr_8 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((var_10) > (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))) / (((/* implicit */int) (unsigned short)7168))));
            arr_9 [i_0] = ((/* implicit */unsigned char) arr_3 [i_0] [i_0 - 1]);
        }
        /* vectorizable */
        for (unsigned char i_3 = 0; i_3 < 24; i_3 += 4) 
        {
            arr_12 [i_0] = ((unsigned short) var_18);
            arr_13 [i_0] [i_0] [i_3] = ((/* implicit */short) ((34359738112LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7179)))));
            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)58367)) ? (arr_4 [i_0] [i_0] [i_0 - 1]) : (((/* implicit */long long int) var_7))));
            var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (arr_6 [i_0])));
        }
        for (unsigned short i_4 = 1; i_4 < 22; i_4 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_5 = 1; i_5 < 22; i_5 += 4) 
            {
                /* LoopNest 2 */
                for (long long int i_6 = 0; i_6 < 24; i_6 += 3) 
                {
                    for (unsigned short i_7 = 2; i_7 < 22; i_7 += 3) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned int) max((max((((/* implicit */long long int) arr_10 [i_7] [i_4])), (max((-1190833238797098596LL), (((/* implicit */long long int) var_16)))))), (((/* implicit */long long int) arr_18 [i_0] [i_0] [i_0]))));
                            arr_24 [i_0 + 1] [18U] [i_5] [i_6] [i_7] [i_7 - 1] [i_6] &= ((unsigned long long int) arr_20 [(unsigned char)6] [i_5] [i_6] [i_7]);
                            var_28 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) var_17)) >= (((/* implicit */int) arr_15 [i_4] [i_4 - 1]))))) < (((((/* implicit */_Bool) arr_15 [i_4] [i_4 + 2])) ? (((/* implicit */int) arr_15 [7LL] [i_4 + 1])) : (((/* implicit */int) arr_15 [i_4] [i_4 - 1]))))));
                        }
                    } 
                } 
                var_29 = ((/* implicit */unsigned short) arr_10 [i_4 + 2] [4ULL]);
                var_30 = max((var_4), (((/* implicit */unsigned short) var_15)));
            }
            /* vectorizable */
            for (unsigned short i_8 = 0; i_8 < 24; i_8 += 3) 
            {
                arr_27 [i_0] [15U] [i_4 + 2] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_0] [i_4 - 1] [i_4 + 2])) ? (arr_16 [i_0] [i_4 + 2] [i_4 + 2]) : (((/* implicit */unsigned long long int) arr_7 [i_4 + 1] [i_4 + 2] [i_4 - 1]))));
                var_31 = ((/* implicit */short) ((unsigned short) (~(arr_17 [i_0 - 1]))));
            }
            arr_28 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [i_0] [i_4] [i_0])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_0 - 1] [i_4 + 1])) && (((/* implicit */_Bool) var_11))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_4 - 1] [i_4 + 2] [i_4 + 2])))))));
            /* LoopSeq 1 */
            for (unsigned int i_9 = 0; i_9 < 24; i_9 += 2) 
            {
                var_32 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_0 [i_9]))));
                arr_33 [i_0] [i_0] = ((/* implicit */unsigned int) (~((+(arr_20 [i_0] [i_9] [i_9] [i_0])))));
            }
        }
        var_33 = ((/* implicit */unsigned short) ((((arr_4 [i_0 - 1] [i_0] [i_0]) == (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0 + 1] [i_0 + 1] [i_0 + 1]))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_5)), (arr_18 [i_0 - 1] [i_0 - 1] [i_0 + 1])))) : (((/* implicit */int) ((short) arr_18 [i_0 + 1] [i_0 + 1] [i_0 + 1])))));
        var_34 ^= arr_18 [i_0] [i_0] [i_0 - 1];
        /* LoopSeq 1 */
        for (unsigned char i_10 = 0; i_10 < 24; i_10 += 2) 
        {
            arr_36 [i_0] [i_10] [i_0] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_14 [i_0 + 1] [i_0 - 1])) ? (arr_4 [i_0 + 1] [i_0] [i_0 - 1]) : (arr_14 [i_0 - 1] [i_0 + 1])))));
            arr_37 [i_0 - 1] [i_0] = ((/* implicit */unsigned short) var_1);
            /* LoopSeq 1 */
            for (unsigned char i_11 = 0; i_11 < 24; i_11 += 1) 
            {
                arr_40 [i_0 + 1] [i_0 + 1] [i_10] [i_0] = ((/* implicit */short) ((unsigned int) arr_30 [i_0] [i_11]));
                var_35 = ((/* implicit */unsigned int) var_10);
                /* LoopSeq 2 */
                for (unsigned short i_12 = 0; i_12 < 24; i_12 += 1) /* same iter space */
                {
                    arr_43 [i_0] [i_11] [(unsigned short)21] [10] [i_0] = ((/* implicit */long long int) arr_25 [i_12] [i_11] [i_10] [i_0 - 1]);
                    arr_44 [i_0] [i_0] [i_11] [i_0] [i_11] = var_0;
                    var_36 ^= ((/* implicit */unsigned int) arr_42 [i_0 - 1] [i_0 + 1] [i_0] [i_0 + 1]);
                }
                for (unsigned short i_13 = 0; i_13 < 24; i_13 += 1) /* same iter space */
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (long long int i_14 = 1; i_14 < 20; i_14 += 2) 
                    {
                        var_37 = ((/* implicit */short) (~(((/* implicit */int) arr_19 [(unsigned char)22] [i_0] [i_0 + 1] [i_14 + 2]))));
                        arr_49 [i_0] [i_0] [i_10] [i_11] [i_13] [i_14] [6ULL] = ((/* implicit */short) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_39 [i_0 + 1] [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) arr_39 [i_0 + 1] [i_0 - 1] [i_0 - 1]))));
                    }
                    for (long long int i_15 = 2; i_15 < 22; i_15 += 2) 
                    {
                        arr_52 [(unsigned short)16] [i_0] [i_11] [i_11] [i_11] [i_11] = (~(var_11));
                        var_38 ^= ((/* implicit */unsigned short) arr_14 [i_0 - 1] [i_0 - 1]);
                        var_39 = ((/* implicit */unsigned char) min((var_39), (((/* implicit */unsigned char) ((unsigned short) ((unsigned char) arr_1 [i_10]))))));
                    }
                    /* vectorizable */
                    for (long long int i_16 = 0; i_16 < 24; i_16 += 2) 
                    {
                        arr_55 [i_0] [i_10] [i_11] [i_13] [i_16] = ((/* implicit */unsigned int) ((var_6) << (((((var_11) + (6139335729405259982LL))) - (21LL)))));
                        arr_56 [i_0] [i_0] [1] [(unsigned short)22] [i_16] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)252))));
                        var_40 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_39 [i_0 - 1] [i_0 + 1] [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_0] [i_0] [i_0] [i_0 - 1] [i_16]))) : (((((/* implicit */long long int) arr_30 [i_0] [i_13])) | (var_11)))));
                    }
                    arr_57 [i_0] [i_10] [i_0] [i_13] = var_0;
                    arr_58 [i_0] [i_13] [i_13] [i_13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_41 [i_0] [i_0] [i_11] [i_11] [i_11] [i_13])));
                }
            }
            arr_59 [i_10] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_48 [i_0] [i_0] [i_0] [i_0] [i_0 - 1])) ? (max((max((arr_21 [i_0] [(unsigned char)2]), (((/* implicit */unsigned long long int) arr_47 [i_0 + 1] [i_0] [15U] [(short)4] [i_0] [i_10] [i_10])))), (((/* implicit */unsigned long long int) arr_19 [i_0 - 1] [i_0] [i_0] [i_0 + 1])))) : (((/* implicit */unsigned long long int) arr_23 [i_10] [15U] [i_10] [i_0] [i_0]))));
        }
    }
    for (unsigned int i_17 = 2; i_17 < 14; i_17 += 1) 
    {
        var_41 = ((/* implicit */unsigned short) var_8);
        arr_63 [i_17 + 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_54 [i_17 + 2] [i_17] [i_17] [i_17 + 1] [i_17 + 3])))) ? (max(((~(arr_10 [i_17] [i_17]))), (((/* implicit */unsigned int) arr_31 [i_17] [i_17 - 2] [i_17] [20LL])))) : (max((((/* implicit */unsigned int) arr_15 [i_17 + 2] [i_17])), (var_13)))));
    }
    var_42 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(max((var_10), (((/* implicit */long long int) var_0))))))) || (((/* implicit */_Bool) max((((/* implicit */long long int) var_13)), (var_3))))));
}
