/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36367
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
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((((/* implicit */int) max((((/* implicit */unsigned short) var_10)), (var_4)))) < (((((/* implicit */int) var_10)) ^ (((/* implicit */int) var_0))))))) : (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) <= (((/* implicit */int) ((unsigned short) var_10))))))));
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) max((var_12), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_14)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */_Bool) ((short) min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_2)))), (((var_3) / (((/* implicit */int) arr_3 [i_0] [i_0] [i_1])))))));
                /* LoopSeq 3 */
                for (signed char i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    var_19 = ((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0] [i_0]);
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 9; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 6; i_4 += 4) 
                        {
                            {
                                arr_11 [i_0] [i_4] [i_2] [i_2] [i_3] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((unsigned long long int) -89489051)) <= (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_4 + 2])) ^ (((/* implicit */int) arr_1 [i_4 + 2])))))));
                                var_20 = ((/* implicit */unsigned short) ((unsigned char) ((min((arr_0 [i_0]), (((/* implicit */unsigned long long int) arr_9 [i_0] [i_1] [i_4] [i_4])))) <= (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) arr_5 [i_0] [i_1] [i_0] [i_4 + 4]))))))));
                                var_21 ^= ((/* implicit */long long int) var_5);
                                arr_12 [9] [i_4] [i_4] [(short)4] = ((((/* implicit */int) max(((unsigned short)64785), (((/* implicit */unsigned short) (signed char)-90))))) <= (max((2147483647), (((/* implicit */int) min((((/* implicit */unsigned short) var_14)), ((unsigned short)64073)))))));
                                arr_13 [i_0] [4U] [i_2] [i_0] [i_4] = ((/* implicit */unsigned short) ((int) var_4));
                            }
                        } 
                    } 
                }
                for (int i_5 = 3; i_5 < 8; i_5 += 2) 
                {
                    var_22 = ((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_5] [i_5]);
                    var_23 = ((/* implicit */unsigned char) ((((((((/* implicit */int) var_4)) ^ (var_6))) <= (((/* implicit */int) min((var_14), (((/* implicit */unsigned char) arr_15 [i_0] [i_0] [i_0]))))))) ? (max((max((arr_7 [i_5] [(_Bool)0] [(_Bool)0] [i_1] [i_0] [i_0]), (((/* implicit */long long int) var_14)))), (((/* implicit */long long int) (+(((/* implicit */int) arr_6 [i_0] [i_1] [i_5] [i_5 + 1]))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_5] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [i_1] [i_5]))) : (arr_2 [(signed char)6] [i_1] [i_5])))) ? ((-(((/* implicit */int) (unsigned short)4094)))) : (var_11))))));
                }
                for (unsigned short i_6 = 1; i_6 < 7; i_6 += 1) 
                {
                    /* LoopSeq 1 */
                    for (short i_7 = 0; i_7 < 10; i_7 += 4) 
                    {
                        var_24 = ((/* implicit */_Bool) arr_20 [i_0] [i_1] [i_0] [i_7]);
                        var_25 ^= ((/* implicit */unsigned char) ((((((var_11) > (((/* implicit */int) arr_3 [i_7] [i_1] [i_6])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [(unsigned short)0] [i_1] [i_1] [i_0])) << (((((/* implicit */int) var_8)) + (29438)))))) : (max((((/* implicit */unsigned long long int) arr_4 [i_6] [i_1] [i_0])), (arr_22 [i_0] [i_1] [i_6] [i_7]))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_5), (var_0)))))));
                        var_26 ^= ((/* implicit */short) ((((((((/* implicit */_Bool) arr_7 [2ULL] [i_1] [i_6 - 1] [i_7] [i_7] [i_0])) ? (arr_17 [i_7] [(short)6] [(short)0] [i_0]) : (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_0])))) <= (((((/* implicit */_Bool) var_12)) ? (arr_16 [(unsigned short)9] [i_1]) : (((/* implicit */unsigned long long int) arr_7 [i_7] [i_7] [i_6] [i_1] [i_1] [i_0])))))) ? ((+(((/* implicit */int) ((arr_22 [i_0] [i_0] [i_6 + 2] [i_7]) < (((/* implicit */unsigned long long int) var_3))))))) : (((/* implicit */int) var_5))));
                    }
                    var_27 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_6 + 3]))))) >> ((((~(max((var_11), (var_12))))) + (2292872)))));
                    var_28 = ((/* implicit */unsigned short) (((+((~(((/* implicit */int) var_4)))))) / (((/* implicit */int) ((signed char) arr_5 [i_0] [i_0] [i_1] [i_6 - 1])))));
                }
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 1) 
                {
                    var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) (!((!(var_0))))))));
                    var_30 &= ((/* implicit */signed char) ((unsigned int) var_6));
                    var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_8])) ? (arr_17 [i_1] [i_1] [i_1] [i_8]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_0] [i_0])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_21 [i_1])))))));
                }
                for (unsigned long long int i_9 = 4; i_9 < 9; i_9 += 2) 
                {
                    var_32 = ((/* implicit */short) ((((/* implicit */_Bool) arr_19 [i_0] [i_1] [i_1] [i_9 - 2])) ? (((/* implicit */int) arr_29 [i_1] [(unsigned char)8] [i_1] [i_1])) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_1)) : (var_6)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [(signed char)4] [(signed char)4] [(signed char)4] [i_0]))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_7)))))))));
                    var_33 &= ((unsigned short) ((int) ((int) arr_23 [i_0])));
                    /* LoopSeq 3 */
                    for (signed char i_10 = 1; i_10 < 6; i_10 += 4) 
                    {
                        var_34 = ((/* implicit */short) ((((((/* implicit */_Bool) ((arr_22 [i_10] [1LL] [i_0] [i_0]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_0] [i_0] [(unsigned char)7] [i_1] [i_9 - 1] [i_10])))))) ? (((/* implicit */unsigned long long int) ((arr_7 [i_0] [i_0] [i_0] [9U] [i_10] [i_10 + 3]) * (((/* implicit */long long int) ((/* implicit */int) var_13)))))) : ((+(arr_22 [i_0] [i_1] [i_0] [(unsigned short)7]))))) / (((/* implicit */unsigned long long int) min((262143LL), (((/* implicit */long long int) (signed char)17)))))));
                        var_35 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_31 [i_0] [i_1] [i_9] [(unsigned short)5])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_10))))) * (((((/* implicit */_Bool) (+(((/* implicit */int) var_13))))) ? (max((((/* implicit */unsigned int) arr_20 [i_0] [i_1] [i_9] [i_10])), (arr_27 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))));
                        var_36 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_22 [i_9 - 1] [i_1] [i_1] [i_10]), (((/* implicit */unsigned long long int) arr_15 [i_9] [i_1] [i_0]))))) ? (((/* implicit */int) var_4)) : (((var_6) | (((/* implicit */int) var_8))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) -89489051)) ? ((-2147483647 - 1)) : (-1)))) : (min((((/* implicit */unsigned int) min((var_4), (((/* implicit */unsigned short) arr_28 [i_0] [i_1] [i_9 - 1]))))), (max((arr_4 [i_0] [i_1] [(signed char)3]), (((/* implicit */unsigned int) var_14))))))));
                        arr_33 [i_0] [i_1] [i_9] [i_10] = ((/* implicit */unsigned char) ((signed char) max((((((/* implicit */_Bool) var_12)) ? (var_3) : (((/* implicit */int) var_5)))), (((int) arr_4 [i_10] [(unsigned short)5] [i_0])))));
                        arr_34 [2U] [i_9 - 4] [3] [i_1] [i_0] [i_0] = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((arr_19 [i_10] [i_9] [(short)4] [i_0]), (((/* implicit */int) arr_26 [i_0] [i_0] [i_9] [(signed char)5]))))), (min((((/* implicit */unsigned long long int) arr_28 [i_1] [i_9 + 1] [i_1])), (arr_16 [i_0] [i_9 + 1])))))) ? (max((((2147483647) / (((/* implicit */int) (short)-21023)))), (((/* implicit */int) ((arr_24 [i_0] [i_1] [i_9] [i_10]) < (((/* implicit */long long int) -89489051))))))) : (((/* implicit */int) ((short) 89489051))));
                    }
                    for (unsigned char i_11 = 1; i_11 < 9; i_11 += 3) /* same iter space */
                    {
                        arr_37 [i_0] [i_0] [i_11] [i_9] [i_11] [i_11 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) arr_18 [i_9 - 3] [i_9 - 2] [i_11 + 1]))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_13))))) : (((((/* implicit */_Bool) arr_25 [(short)3] [i_1] [i_9 - 4] [(_Bool)0])) ? (arr_25 [i_0] [i_9 + 1] [i_9 - 1] [i_9 - 1]) : (arr_25 [i_1] [i_9 + 1] [i_9 - 1] [i_9 + 1])))));
                        arr_38 [i_11] [i_1] [i_9 - 1] [i_9] [i_11 - 1] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_31 [i_9 + 1] [i_11 + 1] [i_9] [i_11])) < (((/* implicit */int) arr_31 [i_9 + 1] [i_11 + 1] [i_9] [i_9])))) || (((/* implicit */_Bool) max((((/* implicit */signed char) var_5)), (var_13))))));
                        var_37 = ((/* implicit */int) min((var_37), (((/* implicit */int) max((min((((/* implicit */long long int) var_8)), (arr_7 [i_9] [i_9 - 2] [i_9 + 1] [i_9] [i_9 + 1] [i_9]))), (((/* implicit */long long int) var_12)))))));
                        var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_30 [i_1] [i_9 + 1])) ? (((((/* implicit */_Bool) arr_31 [i_0] [i_0] [i_0] [i_0])) ? (var_15) : (arr_22 [i_9 + 1] [i_9 - 4] [i_11 + 1] [i_11 - 1]))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_14))))), ((+(((/* implicit */int) var_13)))))))));
                    }
                    for (unsigned char i_12 = 1; i_12 < 9; i_12 += 3) /* same iter space */
                    {
                        var_39 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)-32358)) | (-89489051))))));
                        arr_43 [i_9] [i_9] [8] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */int) arr_9 [i_12] [i_1] [i_1] [i_0])), ((~(max((arr_10 [(unsigned short)4] [i_1] [i_9] [i_12 + 1] [i_12]), (((/* implicit */int) var_13))))))));
                        arr_44 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((arr_40 [i_0] [i_0] [i_0] [i_0] [i_0]) ? (((/* implicit */int) arr_21 [0])) : (((/* implicit */int) var_8))))))) ? (arr_19 [i_0] [i_12] [i_9] [i_1]) : (((/* implicit */int) ((signed char) max((((/* implicit */unsigned long long int) arr_3 [i_1] [i_9] [i_1])), (var_15)))))));
                    }
                    arr_45 [i_1] [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */int) ((short) var_12))) * (((/* implicit */int) ((arr_27 [i_0]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_9])))))))), (((((/* implicit */_Bool) arr_19 [i_0] [i_9 - 3] [i_9 - 3] [i_9])) ? (arr_23 [i_9 - 1]) : (arr_19 [i_0] [i_9 - 2] [i_9 - 1] [i_9])))));
                    var_40 -= ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned short) arr_21 [i_1])))));
                }
            }
        } 
    } 
}
