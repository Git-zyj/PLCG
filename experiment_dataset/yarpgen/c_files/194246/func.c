/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194246
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) ((((/* implicit */int) arr_0 [i_0])) - (arr_4 [i_0 + 1] [i_0 - 2]))))) & (((/* implicit */int) ((signed char) var_10)))));
                var_14 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_10)) ? (((int) arr_1 [i_0])) : (((((/* implicit */int) arr_3 [i_0] [(unsigned char)5])) - (((/* implicit */int) arr_1 [i_0]))))))));
                var_15 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_3))))))) % ((-((+(((/* implicit */int) arr_5 [(unsigned char)8] [i_0]))))))));
                var_16 &= ((/* implicit */signed char) (~((-(((/* implicit */int) (short)6825))))));
                /* LoopSeq 4 */
                for (unsigned char i_2 = 3; i_2 < 9; i_2 += 1) /* same iter space */
                {
                    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_10))))))) ? (((((/* implicit */_Bool) max((arr_4 [(_Bool)1] [i_2]), (arr_4 [i_0 - 2] [i_0])))) ? (((((/* implicit */int) arr_5 [2] [i_0])) | (((/* implicit */int) arr_9 [i_0] [i_0] [i_1] [i_2 + 2])))) : ((~(((/* implicit */int) (signed char)3)))))) : (((/* implicit */int) ((_Bool) max((((/* implicit */unsigned char) var_10)), (var_12)))))));
                    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [i_0 - 2] [i_0 - 3] [(unsigned char)5] [i_0]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_10 [i_0 + 1] [i_0] [i_0])) <= (((/* implicit */int) arr_10 [i_2] [i_0] [i_2 - 3]))))) : (((/* implicit */int) ((_Bool) arr_3 [i_0] [i_0 - 1])))));
                    var_19 = ((/* implicit */long long int) var_5);
                }
                for (unsigned char i_3 = 3; i_3 < 9; i_3 += 1) /* same iter space */
                {
                    var_20 = ((/* implicit */unsigned char) ((short) ((((/* implicit */int) max((var_4), (arr_12 [(signed char)1] [i_1] [i_1] [i_1])))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))));
                    arr_13 [(unsigned char)0] [i_1] [(unsigned char)0] &= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_10 [i_0 - 3] [(unsigned char)10] [i_3 + 3])))) ? (max((((/* implicit */long long int) arr_10 [i_0 - 3] [(signed char)10] [i_3 + 2])), (var_3))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_10 [i_0 - 3] [0] [i_3 + 2]), (arr_10 [i_0 + 1] [(signed char)4] [i_3 - 2])))))));
                    arr_14 [(unsigned char)3] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (-((~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_9))))))));
                }
                for (unsigned char i_4 = 3; i_4 < 9; i_4 += 1) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        arr_20 [i_0] [(unsigned char)3] [9] = ((/* implicit */long long int) max((((/* implicit */int) ((unsigned char) -1508723562))), ((+(((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) arr_4 [i_0] [i_0])))))))));
                        arr_21 [i_0] [i_0] [i_4] [i_0] [(_Bool)1] = ((/* implicit */_Bool) min(((~(((((/* implicit */_Bool) var_9)) ? (arr_4 [1ULL] [1ULL]) : (((/* implicit */int) arr_11 [0U] [i_1] [i_1])))))), (((int) (short)-29009))));
                        var_21 -= ((((/* implicit */_Bool) (unsigned char)91)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)147))) : (2093470875883049105LL));
                    }
                    for (long long int i_6 = 0; i_6 < 12; i_6 += 1) 
                    {
                        var_22 = ((((/* implicit */_Bool) arr_23 [(unsigned char)10] [5] [i_0 - 2] [i_4 - 3])) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_4 [i_4 - 1] [i_4 + 1])))) : (((((/* implicit */_Bool) (signed char)75)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)48))))));
                        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_22 [i_0 + 1] [i_0] [2ULL] [i_0] [i_0]) : (((/* implicit */unsigned int) max((arr_4 [i_0] [(unsigned char)4]), (((/* implicit */int) arr_23 [(_Bool)1] [(_Bool)1] [(signed char)3] [(short)4])))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [2U] [i_1] [i_4 + 2] [i_0] [i_6] [6LL])) ? (((/* implicit */int) arr_3 [i_0] [(signed char)11])) : (((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_0] [(short)0] [i_4] [5LL])) && (((/* implicit */_Bool) arr_15 [(_Bool)1] [i_1] [i_4 - 2] [i_6])))))))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_16 [i_1] [i_6])) | (arr_15 [i_6] [i_0 - 1] [i_0 - 1] [i_0 - 1])))) ? (((/* implicit */unsigned int) max((((/* implicit */int) var_2)), (arr_4 [i_0] [5])))) : (arr_22 [i_0] [i_0 + 1] [i_0 - 2] [(unsigned char)0] [i_0])))));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 12; i_7 += 1) 
                    {
                        var_24 = ((/* implicit */unsigned char) (((~(arr_22 [i_0 + 1] [i_1] [i_4] [8LL] [i_7]))) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_23 [(unsigned char)8] [(unsigned char)5] [i_4] [i_7])) ? (((/* implicit */int) arr_8 [i_0 + 1] [i_0 + 1] [10LL] [i_0])) : (((/* implicit */int) arr_23 [i_7] [(unsigned char)4] [i_7] [(unsigned char)6])))))));
                        var_25 = ((/* implicit */_Bool) ((unsigned char) arr_3 [i_0] [i_0 - 2]));
                        var_26 |= ((/* implicit */unsigned long long int) (~(var_11)));
                        var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_25 [i_4 + 1] [i_4 - 2] [i_4 - 1] [i_4] [(unsigned char)7] [3])) || (((/* implicit */_Bool) arr_7 [i_0 - 3] [(unsigned char)5] [i_4 + 2] [i_7])))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 0; i_8 < 12; i_8 += 2) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 12; i_9 += 4) 
                        {
                            {
                                var_28 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((-(((/* implicit */int) arr_1 [i_9])))), (((/* implicit */int) ((unsigned char) arr_15 [10] [i_1] [i_8] [i_9])))))) ? (((((/* implicit */_Bool) max((arr_32 [i_0] [(short)5] [i_1] [i_4] [(_Bool)0] [i_9]), (((/* implicit */unsigned long long int) arr_7 [i_9] [(unsigned char)4] [i_9] [4U]))))) ? (arr_4 [i_0] [i_8]) : ((-(((/* implicit */int) var_6)))))) : (((((/* implicit */int) ((_Bool) arr_3 [i_8] [8LL]))) - (((/* implicit */int) arr_2 [i_8]))))));
                                var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) max((min((((/* implicit */long long int) arr_5 [4LL] [i_9])), (var_3))), (((/* implicit */long long int) (~((+(((/* implicit */int) arr_7 [5] [6ULL] [(_Bool)1] [5]))))))))))));
                                var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_4] [(unsigned char)10] [i_4 + 1] [i_4])) ? (9223372036854775786LL) : (9223372036854775807LL)))) ? (((/* implicit */int) arr_7 [9LL] [i_4 - 2] [i_0 - 2] [i_0 - 2])) : ((~(((/* implicit */int) arr_17 [i_0 - 3])))))))));
                            }
                        } 
                    } 
                }
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    var_31 &= ((/* implicit */unsigned char) min((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_17 [i_0])) & (((/* implicit */int) arr_27 [4LL] [4LL])))))))), ((~(((/* implicit */int) var_7))))));
                    /* LoopNest 2 */
                    for (long long int i_11 = 0; i_11 < 12; i_11 += 1) 
                    {
                        for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
                        {
                            {
                                arr_42 [i_0] [i_0] [i_0 - 3] [i_0] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((((/* implicit */int) var_6)) ^ (((/* implicit */int) var_7)))) : (((/* implicit */int) arr_19 [i_0] [i_0] [i_10] [(unsigned char)6] [i_11] [(_Bool)1]))))));
                                var_32 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [(unsigned char)6]))) | (arr_40 [(signed char)8] [(unsigned char)6] [(signed char)8] [(signed char)8] [10ULL] [i_11] [10]))) | (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_4), (var_6))))))))));
                                var_33 *= arr_25 [i_0 - 3] [(unsigned char)3] [i_12 + 1] [i_12] [i_12 + 1] [2U];
                                var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)93)) ^ (((/* implicit */int) (unsigned char)246))))) ? (((/* implicit */int) (unsigned char)205)) : (131071)))) ? (((/* implicit */unsigned long long int) arr_30 [i_0] [i_11] [i_12])) : (arr_40 [(_Bool)1] [(_Bool)1] [4U] [9] [(unsigned char)3] [6LL] [i_12 + 1])));
                            }
                        } 
                    } 
                    var_35 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (~(arr_39 [(short)1])))), (max((((/* implicit */unsigned long long int) arr_39 [(unsigned char)9])), (var_1)))));
                }
            }
        } 
    } 
    var_36 *= ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
    var_37 = ((/* implicit */short) var_11);
}
