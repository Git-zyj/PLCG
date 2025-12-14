/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191968
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
    var_15 = ((/* implicit */signed char) ((short) 16656280194704374913ULL));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_16 = ((/* implicit */signed char) ((((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 1])) / (((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 1]))));
        var_17 = ((/* implicit */short) var_6);
        var_18 *= ((/* implicit */long long int) ((((/* implicit */_Bool) 960U)) ? (((/* implicit */int) (signed char)126)) : (((/* implicit */int) (signed char)113))));
        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) arr_3 [i_0] [i_0 + 1])) : (((/* implicit */int) arr_2 [i_0] [i_0 + 1]))));
        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (4294967288U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3506)))));
    }
    for (unsigned short i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        var_21 = ((/* implicit */unsigned long long int) arr_4 [i_1]);
        arr_6 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_0 [i_1] [i_1]) ? (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_4 [i_1])))) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) max((960U), (((/* implicit */unsigned int) arr_5 [i_1] [i_1]))))) ? (arr_5 [i_1] [i_1]) : (((((/* implicit */_Bool) (signed char)-125)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)113))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 3) 
        {
            for (unsigned int i_3 = 1; i_3 < 15; i_3 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_4 = 0; i_4 < 16; i_4 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned int) max((min((arr_9 [i_1]), (((/* implicit */unsigned long long int) (+(8388544U)))))), (((/* implicit */unsigned long long int) (-(arr_11 [i_2]))))));
                        arr_16 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_3] [i_3]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_3 - 1] [i_2] [i_1])) ? (-8208938189143269448LL) : (var_13)))) ? (((12765778472028689338ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)21))))) : (((/* implicit */unsigned long long int) 328409787)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_9 [i_4]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_4] [i_3 - 1] [i_2] [i_2] [i_1])))))) ? (((/* implicit */int) ((_Bool) var_0))) : (((/* implicit */int) arr_15 [i_1] [i_2] [i_2] [12U] [i_1] [i_4])))))));
                        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-8)) ? (3ULL) : (((/* implicit */unsigned long long int) arr_5 [i_4] [9U]))));
                        var_24 = ((/* implicit */short) max((max((((/* implicit */long long int) (signed char)14)), (9223372036854775807LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)114)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_1]))))) ? (((((/* implicit */_Bool) arr_13 [i_3] [i_3] [i_3])) ? (((/* implicit */int) arr_15 [i_1] [i_2] [i_2] [i_1] [i_4] [i_4])) : (arr_10 [i_1] [i_1] [i_1]))) : (((/* implicit */int) arr_7 [i_2] [i_2])))))));
                    }
                    arr_17 [i_1] [i_1] [i_3 + 1] = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-114))))) ? (((/* implicit */int) (signed char)-102)) : ((+(((/* implicit */int) (signed char)-10)))))));
                    var_25 = ((/* implicit */unsigned short) ((unsigned int) arr_13 [i_3 - 1] [i_2] [i_1]));
                    /* LoopSeq 1 */
                    for (unsigned int i_5 = 0; i_5 < 16; i_5 += 1) 
                    {
                        var_26 = (!(((/* implicit */_Bool) min((((/* implicit */int) var_12)), (arr_5 [i_3 - 1] [i_3 + 1])))));
                        arr_21 [i_5] [i_5] [i_5] [i_5] [(unsigned short)3] [i_5] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (-(arr_5 [i_2] [i_3])))) && ((!(((/* implicit */_Bool) var_6)))))), (((_Bool) (unsigned short)3))));
                        /* LoopSeq 2 */
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) /* same iter space */
                        {
                            var_27 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */_Bool) 2904995280U)) ? (2147483647) : (((/* implicit */int) arr_14 [i_3] [i_3 + 1] [i_3] [i_3 + 1] [i_2]))))), (var_13)));
                            var_28 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (signed char)52)) : (arr_5 [i_1] [i_1])))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_5]))) / (arr_19 [i_1] [i_1] [i_1] [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_3 + 1] [i_3 + 1] [i_3 - 1]))))))));
                        }
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) /* same iter space */
                        {
                            var_29 = ((/* implicit */signed char) (+(((/* implicit */int) arr_14 [i_1] [i_1] [12U] [i_1] [7ULL]))));
                            arr_28 [i_5] [i_5] [i_3] [i_3] [(unsigned short)15] [i_7] [i_7] = ((/* implicit */unsigned int) (signed char)30);
                            var_30 = ((/* implicit */signed char) max((((unsigned int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)3))) : (9223372036854775807LL)))), (((/* implicit */unsigned int) arr_15 [i_2] [i_2] [i_3] [i_5] [i_2] [i_3]))));
                            var_31 |= min(((((-(186610673U))) * (min((((/* implicit */unsigned int) (_Bool)0)), (arr_26 [i_1] [i_1] [(unsigned short)14] [i_5] [i_7] [i_1] [i_7]))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_20 [i_2] [i_3 - 1] [i_3 - 1] [i_7 - 1]), (((/* implicit */long long int) arr_24 [i_1] [i_1] [(unsigned short)0] [i_5]))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65527))))));
                        }
                        /* LoopSeq 3 */
                        for (unsigned long long int i_8 = 1; i_8 < 14; i_8 += 2) 
                        {
                            var_32 |= ((/* implicit */unsigned int) ((((((/* implicit */long long int) 16U)) <= (9223372036854775794LL))) ? (((((/* implicit */_Bool) arr_1 [i_3 - 1])) ? ((-(18446744073709551612ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65514))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                            var_33 = ((/* implicit */unsigned short) ((arr_11 [i_1]) | (((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned short) arr_2 [(short)15] [(short)15]))))) ? (arr_26 [i_3] [i_3 - 1] [i_5] [i_3 + 1] [i_3 + 1] [(signed char)15] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(arr_14 [i_1] [i_2] [i_2] [i_5] [i_8])))))))));
                            var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [i_8 + 1] [i_8 - 1] [i_8 + 2]))))) ? (min((((/* implicit */unsigned int) arr_24 [i_1] [(unsigned short)4] [(unsigned short)4] [i_1])), (max((4294966331U), (((/* implicit */unsigned int) var_0)))))) : (((/* implicit */unsigned int) arr_5 [i_1] [i_1]))));
                            var_35 = ((/* implicit */unsigned short) 70368744177663ULL);
                        }
                        /* vectorizable */
                        for (unsigned int i_9 = 0; i_9 < 16; i_9 += 3) 
                        {
                            arr_33 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) 7LL);
                            var_36 = ((/* implicit */short) ((unsigned int) (+(arr_23 [i_5] [i_2] [(signed char)10]))));
                        }
                        /* vectorizable */
                        for (signed char i_10 = 0; i_10 < 16; i_10 += 4) 
                        {
                            arr_37 [i_1] [i_5] [i_5] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)72)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_10] [0ULL]))) : (((((/* implicit */_Bool) (short)21311)) ? (((/* implicit */unsigned long long int) arr_20 [i_1] [(_Bool)1] [i_5] [i_5])) : (2440394029274200097ULL)))));
                            arr_38 [i_1] [i_5] [i_3] [(unsigned short)6] [i_3] = ((/* implicit */unsigned char) arr_29 [i_1] [i_5]);
                        }
                        var_37 = ((/* implicit */unsigned int) ((signed char) arr_30 [i_1] [i_3] [(_Bool)1] [i_2] [i_2] [i_1]));
                    }
                }
            } 
        } 
        arr_39 [13U] |= ((/* implicit */unsigned int) (+((~(((/* implicit */int) arr_24 [i_1] [i_1] [i_1] [i_1]))))));
    }
    for (unsigned int i_11 = 0; i_11 < 11; i_11 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_12 = 2; i_12 < 10; i_12 += 1) 
        {
            for (unsigned short i_13 = 0; i_13 < 11; i_13 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_14 = 0; i_14 < 11; i_14 += 1) /* same iter space */
                    {
                        arr_51 [i_11] [i_12] [i_13] [i_14] = ((/* implicit */unsigned short) (signed char)-127);
                        arr_52 [i_11] [i_12] [i_11] = ((/* implicit */short) ((((/* implicit */int) arr_46 [i_12 - 2] [i_12 - 2] [i_12 + 1] [i_12 + 1])) ^ (((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)110))))) ? (((/* implicit */int) arr_22 [i_12 - 2] [i_12] [i_11] [i_12] [i_14] [i_12])) : (((/* implicit */int) (!(((/* implicit */_Bool) 1733609778U)))))))));
                        arr_53 [(signed char)2] [(signed char)2] [i_11] [i_12] = ((/* implicit */signed char) arr_36 [i_11] [i_11] [i_11] [(short)7] [i_11]);
                    }
                    /* vectorizable */
                    for (signed char i_15 = 0; i_15 < 11; i_15 += 1) /* same iter space */
                    {
                        arr_57 [i_12] [i_12] [i_13] [i_15] = ((/* implicit */_Bool) (+((-(-8208938189143269440LL)))));
                        var_38 = ((/* implicit */long long int) 18446744073709551615ULL);
                    }
                    arr_58 [i_12] [i_12] = ((/* implicit */int) ((_Bool) arr_12 [i_12 - 1]));
                }
            } 
        } 
        arr_59 [i_11] = ((/* implicit */short) 1943298395U);
        var_39 = ((/* implicit */long long int) min((var_39), (((/* implicit */long long int) arr_19 [i_11] [3LL] [i_11] [3LL]))));
    }
    var_40 += ((/* implicit */unsigned int) min((max((min((8208938189143269445LL), (((/* implicit */long long int) (short)32750)))), (((/* implicit */long long int) ((var_4) >= (((/* implicit */long long int) ((/* implicit */int) var_2)))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? (max((var_8), (((/* implicit */unsigned int) var_14)))) : (((((/* implicit */_Bool) var_8)) ? (2085054504U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)90))))))))));
}
