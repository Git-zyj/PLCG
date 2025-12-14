/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221867
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
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopSeq 4 */
                for (int i_2 = 0; i_2 < 12; i_2 += 1) /* same iter space */
                {
                    var_12 = arr_4 [i_0] [i_1];
                    arr_8 [i_2] [i_1] [i_0 + 1] = ((/* implicit */unsigned short) var_8);
                    var_13 = ((((/* implicit */long long int) max((arr_7 [i_1]), (((/* implicit */int) var_10))))) >= (min((arr_4 [i_0 + 2] [i_1]), (arr_4 [i_0 + 2] [i_1]))));
                }
                for (int i_3 = 0; i_3 < 12; i_3 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 4; i_4 < 10; i_4 += 1) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 12; i_5 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_1]))))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_0 - 1] [i_1])) & (((/* implicit */int) arr_15 [i_0 + 2] [i_1])))))));
                                arr_17 [(signed char)7] [(signed char)8] [i_3] [i_1] [6LL] = ((/* implicit */unsigned long long int) arr_2 [i_0 + 2]);
                            }
                        } 
                    } 
                    var_15 *= ((/* implicit */int) (_Bool)0);
                    arr_18 [(_Bool)0] &= ((/* implicit */short) ((_Bool) arr_10 [i_0] [i_0] [6LL] [i_0]));
                }
                for (int i_6 = 0; i_6 < 12; i_6 += 1) /* same iter space */
                {
                    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((((/* implicit */int) arr_11 [(short)6] [i_1] [(signed char)0] [i_6] [0ULL] [i_6])) * (((/* implicit */int) (_Bool)1)))) > (((/* implicit */int) (unsigned short)65518)))))));
                    var_17 = (((-9223372036854775807LL - 1LL)) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)6))));
                    /* LoopSeq 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        arr_24 [i_0] [(short)11] [i_6] [i_1] = ((/* implicit */long long int) ((arr_14 [i_0 + 2] [i_1] [i_6] [i_7]) % (((/* implicit */unsigned int) ((((/* implicit */int) min(((unsigned short)504), ((unsigned short)65534)))) & (1549934395))))));
                        var_18 = ((/* implicit */short) max((((/* implicit */long long int) -418636174)), ((-9223372036854775807LL - 1LL))));
                    }
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        var_19 = min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_6)), (((((/* implicit */_Bool) (unsigned char)50)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1] [i_1]))) : (arr_21 [i_0] [i_0] [(short)3] [i_1] [i_0])))))), (((((/* implicit */_Bool) arr_22 [(_Bool)1] [i_1] [i_6] [i_8 - 1] [6])) ? (arr_22 [i_0] [i_8 - 1] [i_0] [i_1] [(unsigned char)11]) : (arr_22 [(short)2] [i_6] [(unsigned short)3] [i_1] [i_0]))));
                        var_20 = ((/* implicit */int) var_3);
                        var_21 -= ((/* implicit */unsigned int) ((((/* implicit */int) var_10)) ^ (((((/* implicit */int) arr_20 [i_0] [2ULL])) ^ (((/* implicit */int) arr_20 [i_1] [4ULL]))))));
                    }
                }
                for (int i_9 = 0; i_9 < 12; i_9 += 1) /* same iter space */
                {
                    var_22 = ((/* implicit */unsigned int) var_5);
                    var_23 -= arr_0 [i_1];
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 1) 
                    {
                        var_24 -= ((/* implicit */int) ((((arr_11 [(unsigned char)4] [i_1] [i_9] [(short)4] [i_0] [i_1]) ? (((/* implicit */int) arr_9 [10])) : (((/* implicit */int) var_11)))) != (((((/* implicit */_Bool) arr_9 [(short)10])) ? (((/* implicit */int) arr_25 [(_Bool)1] [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_13 [i_0] [6] [i_1] [i_9] [i_10]))))));
                        var_25 = ((/* implicit */_Bool) (-(((((/* implicit */int) arr_15 [i_0] [i_1])) / (((/* implicit */int) arr_2 [i_0]))))));
                        var_26 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 + 2])) ? (arr_14 [i_0 + 2] [i_0 - 1] [i_0 - 1] [i_0 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_0] [(unsigned short)0])))));
                    }
                    for (short i_11 = 3; i_11 < 11; i_11 += 1) 
                    {
                        arr_33 [i_0] [(unsigned char)5] [1LL] [i_1] = ((/* implicit */_Bool) arr_32 [i_0] [i_0] [i_9] [i_11 - 3]);
                        arr_34 [i_0] [i_1] [i_1] [(unsigned short)10] [i_9] = ((/* implicit */unsigned char) arr_11 [i_1] [i_0] [(unsigned short)3] [i_9] [i_9] [i_11]);
                    }
                    for (int i_12 = 0; i_12 < 12; i_12 += 1) 
                    {
                        var_27 -= ((/* implicit */unsigned long long int) (-(min((((arr_29 [(signed char)10] [i_1] [i_1] [6] [(short)0] [i_1]) & (var_0))), (((/* implicit */long long int) (signed char)-86))))));
                        var_28 = ((/* implicit */unsigned long long int) arr_14 [(short)6] [i_1] [i_1] [(signed char)8]);
                    }
                    arr_37 [i_1] = ((/* implicit */short) arr_27 [i_0 + 2]);
                }
                arr_38 [(short)8] &= ((/* implicit */unsigned char) arr_25 [4ULL] [6] [10ULL] [4ULL]);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_13 = 0; i_13 < 22; i_13 += 1) 
    {
        var_29 = ((/* implicit */signed char) (-(((/* implicit */int) max((arr_39 [i_13]), (arr_39 [i_13]))))));
        arr_41 [i_13] = ((/* implicit */int) ((((/* implicit */_Bool) arr_40 [i_13] [(unsigned short)5])) && (((/* implicit */_Bool) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)65))) | (3664619744120481204ULL))))))));
        var_30 -= ((/* implicit */long long int) var_6);
    }
    var_31 &= ((/* implicit */unsigned long long int) max(((~(((/* implicit */int) var_1)))), ((-(((/* implicit */int) (unsigned short)17))))));
    var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned long long int) var_3))))) ? (((/* implicit */int) var_2)) : (max((((/* implicit */int) var_6)), (((((/* implicit */int) (unsigned char)184)) & (418636173)))))));
    var_33 = ((/* implicit */long long int) var_5);
}
