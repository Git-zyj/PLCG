/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241019
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_10 = ((/* implicit */signed char) max((var_9), (((((/* implicit */_Bool) (((_Bool)1) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [(short)4])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (max((((/* implicit */unsigned long long int) (_Bool)1)), (4124981031247279161ULL)))))));
        /* LoopSeq 3 */
        for (unsigned char i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                var_11 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) var_0)) >= (((/* implicit */int) var_6))))))))));
                var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_1 + 1])) ? (((/* implicit */int) arr_2 [i_1 + 1])) : (((/* implicit */int) var_6))));
            }
            var_13 = ((/* implicit */unsigned long long int) ((((-1506039070) + (2147483647))) << (((((((/* implicit */int) (_Bool)1)) + (((((/* implicit */int) var_6)) + (((/* implicit */int) var_5)))))) + (20612)))));
            /* LoopSeq 1 */
            for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 2) 
            {
                var_14 = ((/* implicit */signed char) 2017390699U);
                /* LoopSeq 3 */
                for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 2) 
                {
                    var_15 ^= ((/* implicit */int) ((((9223372036854775794LL) >= (((/* implicit */long long int) ((/* implicit */int) var_0))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (var_0))))) / (arr_8 [i_0] [i_1 - 2] [i_4]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((10173810446539180974ULL), (var_8)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)171))))))))));
                    /* LoopSeq 3 */
                    for (short i_5 = 3; i_5 < 16; i_5 += 2) /* same iter space */
                    {
                        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_7 [(unsigned char)17] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) var_3)) - (57149))))))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((_Bool) arr_10 [i_4] [i_0] [i_4] [i_0] [i_0] [i_0])))));
                        var_17 = ((/* implicit */long long int) var_0);
                        var_18 = ((/* implicit */_Bool) max(((~(((/* implicit */int) ((_Bool) (_Bool)1))))), (((((/* implicit */_Bool) arr_15 [(unsigned char)3] [i_1 - 1] [i_3] [i_4] [i_5 + 1])) ? (((/* implicit */int) arr_15 [i_5 + 1] [i_4] [i_3] [i_1 - 2] [i_0])) : (((/* implicit */int) var_5))))));
                        var_19 = ((/* implicit */_Bool) arr_8 [i_5] [(unsigned short)0] [i_0]);
                        arr_17 [i_5] [i_0] [i_3] [i_0] [i_0] = ((/* implicit */short) max((max((var_0), (arr_10 [i_1 - 2] [i_0] [i_1 - 2] [i_1 - 2] [i_1 - 2] [(_Bool)1]))), (((/* implicit */unsigned short) (_Bool)1))));
                    }
                    for (short i_6 = 3; i_6 < 16; i_6 += 2) /* same iter space */
                    {
                        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1 + 1] [i_1 + 1] [i_0] [i_1 + 1])) ? (arr_3 [i_6 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((_Bool)1), ((_Bool)1)))))));
                        var_21 -= ((/* implicit */short) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)20605)));
                        arr_21 [i_6] [i_4] [i_0] [3LL] [i_0] = ((/* implicit */_Bool) var_3);
                    }
                    /* vectorizable */
                    for (short i_7 = 3; i_7 < 16; i_7 += 2) /* same iter space */
                    {
                        var_22 = ((/* implicit */short) ((var_9) << (((/* implicit */int) ((_Bool) arr_1 [i_3])))));
                        var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((var_2) != (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_7] [i_7 + 2] [i_7 - 1] [i_7 - 1] [i_1 - 1]))))))));
                    }
                }
                for (unsigned short i_8 = 4; i_8 < 17; i_8 += 2) 
                {
                    var_24 = max((max((max((((/* implicit */long long int) var_2)), (9223372036854775794LL))), (((/* implicit */long long int) 1048575U)))), (((/* implicit */long long int) (_Bool)1)));
                    var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0] [i_3] [i_0] [i_0] [i_0])) ? (arr_11 [i_0] [i_3] [i_1 - 2] [i_0]) : (var_8)))) ? (arr_8 [i_0] [i_1 - 2] [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0ULL)) ? (arr_12 [i_0] [7LL] [i_3] [i_8]) : (arr_26 [i_1] [2LL] [i_1] [i_1] [(unsigned char)17]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_8 - 1] [i_0] [i_0] [i_0])) ? (4293918720U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_0] [(_Bool)1] [i_0] [i_0] [(_Bool)1])))))) ? (((/* implicit */int) (signed char)-40)) : (((/* implicit */int) var_6))))) : ((+(((unsigned long long int) var_6))))));
                }
                /* vectorizable */
                for (unsigned long long int i_9 = 1; i_9 < 15; i_9 += 2) 
                {
                    /* LoopSeq 3 */
                    for (short i_10 = 0; i_10 < 18; i_10 += 3) 
                    {
                        arr_33 [(signed char)13] [(_Bool)1] [i_3] [i_0] [(_Bool)1] = var_1;
                        var_26 -= ((/* implicit */short) -2503594173736638809LL);
                        var_27 |= ((((/* implicit */unsigned long long int) arr_26 [i_1] [i_1 + 1] [i_1] [i_9 - 1] [i_1 + 1])) != (((((/* implicit */_Bool) var_8)) ? (arr_27 [(unsigned char)6] [i_0] [i_1] [i_3] [i_9] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))));
                    }
                    for (long long int i_11 = 2; i_11 < 17; i_11 += 3) 
                    {
                        var_28 = ((unsigned long long int) (_Bool)1);
                        var_29 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_11 + 1])) ? (((/* implicit */int) arr_6 [i_3] [i_3] [i_3] [i_3])) : (((/* implicit */int) arr_5 [i_1 + 1]))));
                        arr_37 [i_1] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_0))));
                        var_30 = var_2;
                    }
                    for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
                    {
                        arr_40 [10U] [i_0] [i_3] [0ULL] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_2) + (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [(_Bool)1] [i_1 + 1] [i_0] [i_1])))))) ? (((/* implicit */int) (short)-8664)) : (((((/* implicit */_Bool) (signed char)104)) ? (((/* implicit */int) (signed char)23)) : (((/* implicit */int) (short)-15020))))));
                        arr_41 [i_3] [i_1] [i_1] &= ((/* implicit */_Bool) arr_30 [i_12] [i_3] [(unsigned short)12] [(unsigned short)12] [i_3] [i_0]);
                        var_31 = ((/* implicit */unsigned short) (-(((int) (_Bool)1))));
                        arr_42 [i_0] [(unsigned char)6] [(unsigned char)0] [i_0] = ((/* implicit */unsigned long long int) (+(var_7)));
                    }
                    var_32 = ((/* implicit */_Bool) arr_32 [i_9 + 3] [i_9 + 2] [i_9 - 1] [i_3] [i_1 + 1]);
                    var_33 += ((/* implicit */long long int) (short)29574);
                }
                var_34 = ((/* implicit */long long int) min((var_34), (max((((/* implicit */long long int) 1743637504)), ((-9223372036854775807LL - 1LL))))));
                var_35 = ((/* implicit */unsigned int) max(((~(var_8))), (max((((arr_0 [2LL]) ? (arr_22 [i_0] [i_0] [i_0] [i_1] [i_1] [i_3] [i_0]) : (arr_22 [11] [i_3] [i_0] [i_1 + 1] [i_0] [(short)15] [(signed char)12]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1393395514)) ? (((/* implicit */int) (signed char)-30)) : (((/* implicit */int) arr_34 [i_3] [i_3] [i_1] [i_1] [12U] [12U])))))))));
            }
        }
        /* vectorizable */
        for (int i_13 = 1; i_13 < 17; i_13 += 3) 
        {
            arr_45 [i_0] [7ULL] [i_0] = (+(((((/* implicit */int) (unsigned char)224)) * (((/* implicit */int) (_Bool)1)))));
            var_36 += ((/* implicit */unsigned char) (+(((arr_44 [i_0] [i_0]) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_13])))))));
            var_37 = ((/* implicit */unsigned long long int) min((var_37), ((~(var_9)))));
            var_38 -= ((/* implicit */unsigned long long int) ((((unsigned long long int) 1211237788)) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
        }
        /* vectorizable */
        for (unsigned int i_14 = 0; i_14 < 18; i_14 += 3) 
        {
            var_39 = ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_15 [(unsigned short)13] [16] [i_14] [i_14] [i_14])));
            var_40 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_38 [i_14] [i_14] [i_0] [i_0])) != (((/* implicit */int) var_6))));
            arr_50 [(_Bool)1] [(_Bool)1] &= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (((((/* implicit */_Bool) arr_10 [i_14] [8LL] [i_14] [(short)10] [8LL] [i_0])) ? (arr_8 [(signed char)12] [i_14] [(signed char)12]) : (((/* implicit */unsigned long long int) 2041856414U))))));
            var_41 = ((/* implicit */unsigned char) arr_26 [i_14] [8LL] [i_0] [i_0] [(unsigned short)9]);
        }
    }
    var_42 = ((/* implicit */unsigned int) var_4);
}
