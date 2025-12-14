/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25972
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
    var_20 = max((((/* implicit */unsigned long long int) (+(3890114255U)))), (((((/* implicit */_Bool) max((var_0), (var_1)))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (18446744073709551615ULL))) : (var_11))));
    var_21 = ((/* implicit */unsigned int) ((var_17) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_18)))));
    var_22 |= ((/* implicit */_Bool) var_7);
    /* LoopSeq 1 */
    for (signed char i_0 = 4; i_0 < 12; i_0 += 2) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            arr_6 [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */int) arr_2 [i_0 + 1])) | (((/* implicit */int) (_Bool)0))));
            arr_7 [i_0] &= ((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_0 + 1] [i_0 - 4])) * (((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 4]))));
            arr_8 [7ULL] &= ((/* implicit */unsigned int) ((arr_2 [i_1]) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_2 [i_0 + 2]))));
            /* LoopSeq 2 */
            for (unsigned long long int i_2 = 1; i_2 < 13; i_2 += 2) 
            {
                arr_12 [i_0] = ((/* implicit */unsigned char) 2927288902U);
                /* LoopNest 2 */
                for (unsigned int i_3 = 2; i_3 < 13; i_3 += 4) 
                {
                    for (unsigned long long int i_4 = 2; i_4 < 13; i_4 += 3) 
                    {
                        {
                            arr_17 [i_0] [i_4] = ((/* implicit */_Bool) ((((((/* implicit */int) arr_14 [i_4] [i_3] [i_0 - 2] [i_0 - 2])) & (((/* implicit */int) arr_4 [i_0])))) - (((/* implicit */int) arr_2 [i_2 + 1]))));
                            arr_18 [i_0] [i_0] [i_4] [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_4 - 2] [i_4 - 2])) ? (((/* implicit */int) arr_14 [i_0] [i_2 + 1] [i_2] [i_4 - 2])) : (((/* implicit */int) var_15))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)175))) - (1367678394U))))));
                /* LoopNest 2 */
                for (unsigned int i_5 = 1; i_5 < 12; i_5 += 3) 
                {
                    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                    {
                        {
                            arr_24 [(_Bool)1] [i_1] [i_2] [i_5 + 2] [i_6] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_23 [i_6] [i_6] [i_6 + 1] [i_6] [(_Bool)1]))));
                            var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) arr_19 [i_0] [i_0]))));
                            var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((arr_11 [i_0 - 4] [i_1] [i_2 + 1]) ? (((/* implicit */int) arr_11 [i_6 + 1] [i_1] [i_0 - 3])) : (((/* implicit */int) arr_11 [i_0 + 2] [i_0] [i_0 + 2])))))));
                            var_26 = ((/* implicit */unsigned long long int) (_Bool)1);
                            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)171)) * (((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */int) arr_14 [i_0] [9U] [i_0 - 2] [i_0])) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)64))) != (6094290356053928822ULL))))));
                        }
                    } 
                } 
            }
            for (signed char i_7 = 0; i_7 < 14; i_7 += 4) 
            {
                var_28 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_20 [i_0 - 1] [12U]))));
                arr_29 [i_1] [i_1] [i_1] [i_0] = (~(0ULL));
                /* LoopSeq 2 */
                for (unsigned char i_8 = 0; i_8 < 14; i_8 += 4) /* same iter space */
                {
                    arr_32 [i_0] [i_1] [i_7] = ((/* implicit */unsigned int) ((arr_11 [i_0 - 4] [i_0 - 4] [i_0 + 2]) ? (((/* implicit */int) arr_11 [i_0 - 3] [i_0 - 3] [i_0 + 2])) : (((/* implicit */int) arr_21 [i_0 + 2]))));
                    var_29 = ((/* implicit */unsigned long long int) ((6993794913461247696ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)64)))));
                    arr_33 [i_0] [i_1] [i_7] [i_8] [i_7] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) arr_13 [i_0] [i_0] [i_7] [i_8]))) << ((((+(11452949160248303920ULL))) - (11452949160248303893ULL)))));
                }
                for (unsigned char i_9 = 0; i_9 < 14; i_9 += 4) /* same iter space */
                {
                    var_30 *= ((/* implicit */signed char) 1247572471U);
                    /* LoopSeq 1 */
                    for (unsigned char i_10 = 0; i_10 < 14; i_10 += 1) 
                    {
                        var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_0 + 2] [i_0 - 4])) && (((/* implicit */_Bool) arr_3 [i_1] [i_0 + 2]))));
                        arr_38 [i_0] [13ULL] [i_7] [13ULL] [13ULL] [i_10] = var_8;
                    }
                }
            }
        }
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_12 = 0; i_12 < 14; i_12 += 4) 
            {
                for (unsigned char i_13 = 0; i_13 < 14; i_13 += 2) 
                {
                    {
                        var_32 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_36 [i_0 - 3] [i_0 - 3] [i_12] [i_13] [i_13]))));
                        var_33 = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((_Bool) arr_22 [i_0 + 2] [i_0 - 4]))), (((arr_22 [i_0 - 4] [i_0 + 2]) / (arr_22 [i_0 - 1] [i_0 + 2])))));
                        arr_47 [i_0] [(signed char)6] [(_Bool)1] = ((/* implicit */signed char) arr_4 [i_0]);
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned int i_14 = 1; i_14 < 10; i_14 += 3) 
            {
                for (unsigned long long int i_15 = 2; i_15 < 11; i_15 += 4) 
                {
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        {
                            var_34 = ((/* implicit */unsigned int) ((var_6) % (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_21 [i_0 - 3])), ((+(((/* implicit */int) (_Bool)1)))))))));
                            var_35 += ((/* implicit */unsigned long long int) (unsigned char)232);
                            arr_57 [i_16] [i_11] [i_11] [i_11] [i_11] [i_11] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_39 [i_14 + 3] [i_0 + 2])) ? (((/* implicit */int) (_Bool)1)) : ((+(((/* implicit */int) var_5)))))), (((/* implicit */int) min((var_18), (arr_28 [i_0] [i_11] [i_16]))))));
                            arr_58 [i_0 - 2] [i_11] [i_16] [i_15] [i_16] [i_14] [8U] = ((/* implicit */signed char) ((unsigned char) min((((/* implicit */unsigned char) arr_28 [i_0 - 1] [i_0 - 3] [i_15 + 2])), (min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)223))))));
                            arr_59 [i_16] [i_16] [i_16] = ((/* implicit */unsigned char) (~(156943559U)));
                        }
                    } 
                } 
            } 
        }
        arr_60 [i_0] = ((/* implicit */_Bool) max(((unsigned char)79), ((unsigned char)13)));
        arr_61 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) * (arr_45 [i_0 + 1] [i_0 + 1] [i_0] [i_0])))) ? (((((/* implicit */unsigned long long int) min((arr_44 [i_0 - 3]), (((/* implicit */unsigned int) arr_10 [i_0 + 2] [i_0]))))) * (arr_16 [(unsigned char)3] [i_0 - 2] [i_0 - 4] [i_0 - 2] [i_0 - 4]))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)63))) / (var_11)))) ? (((/* implicit */unsigned long long int) arr_22 [i_0] [i_0])) : (((((/* implicit */_Bool) var_16)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))))));
    }
}
