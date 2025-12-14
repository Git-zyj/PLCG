/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243357
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
    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((var_14) || (((/* implicit */_Bool) max((((/* implicit */unsigned short) ((((/* implicit */int) var_2)) < (((/* implicit */int) var_4))))), (min((((/* implicit */unsigned short) var_14)), (var_8)))))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        var_16 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)56))) : (var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_0)) >= (((/* implicit */int) var_4)))))) : (((var_7) >> (((var_12) - (3946016263U))))))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)31846)) && (((/* implicit */_Bool) arr_8 [i_0] [i_0])))) || (((/* implicit */_Bool) (+(arr_6 [i_3])))))))));
                        arr_10 [i_0] [i_1] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_13) : (((/* implicit */long long int) (-(arr_1 [i_1])))))))));
                        var_17 = ((/* implicit */long long int) (~(((arr_5 [i_1]) ? (arr_6 [i_2]) : (((/* implicit */int) arr_5 [i_0]))))));
                    }
                    for (unsigned int i_4 = 0; i_4 < 21; i_4 += 1) 
                    {
                        arr_13 [11U] [i_1] [i_2] [i_4] = ((/* implicit */int) -4853079849347860763LL);
                        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) var_9))));
                        arr_14 [i_1 + 1] [i_4] |= ((/* implicit */long long int) 1619744483U);
                    }
                    for (signed char i_5 = 1; i_5 < 20; i_5 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 4) 
                        {
                            var_19 = ((((/* implicit */long long int) min((((/* implicit */unsigned int) var_14)), (((arr_18 [i_0] [i_0] [i_1] [i_2] [i_2] [i_0] [i_6]) >> (((var_5) + (1634001706)))))))) % (((((/* implicit */_Bool) var_10)) ? (min((-4853079849347860763LL), (((/* implicit */long long int) (unsigned short)49918)))) : (((/* implicit */long long int) arr_18 [i_0] [i_1] [i_1] [i_2] [i_5 - 1] [i_5 - 1] [i_6])))));
                            var_20 = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_8 [i_0] [i_0])), (var_1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))) : (max((var_10), (((/* implicit */unsigned long long int) var_8)))))));
                            var_21 = ((/* implicit */unsigned short) var_6);
                            arr_20 [i_0] [i_1] [i_2] [i_5] [12U] [i_1] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((var_6), (((/* implicit */long long int) arr_3 [i_5 - 1]))))), (max((((/* implicit */unsigned long long int) arr_3 [i_5 - 1])), (arr_17 [15U] [i_5] [i_5 + 1] [i_1 - 2] [(signed char)20] [(signed char)20])))));
                        }
                        for (long long int i_7 = 2; i_7 < 17; i_7 += 3) /* same iter space */
                        {
                            var_22 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_18 [i_2] [(signed char)14] [i_2] [i_5 + 1] [i_7] [0LL] [i_7 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)3))) : (arr_18 [i_2] [i_2] [i_2] [i_5 + 1] [i_2] [i_5 - 1] [i_7 - 2])))));
                            var_23 = ((/* implicit */_Bool) ((unsigned long long int) (((!(((/* implicit */_Bool) var_10)))) ? (((/* implicit */int) min((var_8), (((/* implicit */unsigned short) var_0))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [0U] [i_5] [0U] [i_1] [0U]))))))));
                        }
                        for (long long int i_8 = 2; i_8 < 17; i_8 += 3) /* same iter space */
                        {
                            arr_25 [i_8] [i_1 + 1] [i_2] [i_5] [i_8] = ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)63053)) ? (((/* implicit */int) (signed char)119)) : (-1839669923)))), (1203050956U)));
                            var_24 &= ((/* implicit */unsigned long long int) min((((/* implicit */int) var_14)), (min(((-(((/* implicit */int) (_Bool)1)))), (((((/* implicit */int) var_2)) >> (((-1839669931) + (1839669934)))))))));
                            var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_8] [(_Bool)1] [i_8 - 2] [i_5 - 1] [i_5 - 1])) ? (((/* implicit */int) arr_12 [i_0] [i_8] [i_8 - 2] [(unsigned char)9] [i_5 - 1])) : (((/* implicit */int) arr_12 [i_0] [10LL] [i_8 - 2] [(unsigned short)19] [i_5 - 1]))))) ? (min((arr_17 [i_0] [i_1] [i_1] [i_1] [i_1 - 2] [i_5 + 1]), (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_5 [i_0])), (arr_21 [i_0] [i_5] [i_2] [i_1] [i_0] [i_0])))))) : (var_9))))));
                        }
                        /* LoopSeq 1 */
                        for (long long int i_9 = 0; i_9 < 21; i_9 += 3) 
                        {
                            arr_30 [i_9] [i_9] [i_9] [(signed char)15] [i_5] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) <= (arr_7 [i_5 - 1] [i_1 + 1]))) ? (arr_22 [i_1] [i_1] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_1 - 2] [i_1] [i_5] [i_5 - 1] [(signed char)17] [i_1 - 2])))));
                            arr_31 [i_0] [i_9] [i_0] [(unsigned short)12] = ((/* implicit */long long int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-119))) & (max((arr_17 [i_0] [i_1] [i_0] [i_2] [i_5] [i_0]), (((/* implicit */unsigned long long int) var_6)))))), (((/* implicit */unsigned long long int) ((int) (unsigned short)126)))));
                        }
                        /* LoopSeq 3 */
                        for (unsigned short i_10 = 0; i_10 < 21; i_10 += 2) 
                        {
                            arr_34 [i_2] [i_5 + 1] [i_2] [4] [i_10] [i_5 - 1] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_2] [i_10] [i_2] [19LL])) || (((/* implicit */_Bool) (~(((/* implicit */int) var_8)))))))) >> (((/* implicit */int) ((((((/* implicit */_Bool) 0)) ? (arr_9 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))))) > (((/* implicit */unsigned int) ((((-1839669927) + (2147483647))) >> (((arr_29 [i_0] [i_0] [i_0]) - (3958688755U)))))))))));
                            var_26 = ((/* implicit */unsigned short) ((unsigned char) (~(arr_9 [10] [i_1] [i_5 - 1] [5U]))));
                            arr_35 [i_0] [i_0] [i_0] = arr_32 [i_10] [i_5] [i_2] [18U] [i_0];
                            var_27 |= ((/* implicit */unsigned short) ((((/* implicit */long long int) -777861439)) >= (-6588643772071788682LL)));
                            arr_36 [14] = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)13362)) : (2117469454)))) + (((((/* implicit */unsigned int) ((/* implicit */int) var_2))) * (arr_19 [i_5 + 1] [9LL] [i_1] [i_0])))))), (((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_5)))) : (((((/* implicit */_Bool) var_11)) ? (var_10) : (((/* implicit */unsigned long long int) var_12))))))));
                        }
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            var_28 = ((/* implicit */unsigned short) arr_2 [i_0] [i_0]);
                            var_29 = ((/* implicit */unsigned char) arr_28 [i_11] [(unsigned short)0] [i_2] [6] [8U]);
                        }
                        for (unsigned long long int i_12 = 0; i_12 < 21; i_12 += 2) 
                        {
                            var_30 += ((/* implicit */short) arr_32 [i_0] [i_0] [i_2] [i_5] [i_12]);
                            var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) (unsigned short)30824))));
                            var_32 = ((/* implicit */long long int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)114))) | (9763227948390600366ULL))), (((/* implicit */unsigned long long int) ((var_13) > (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)4)))))))))));
                            var_33 = ((/* implicit */long long int) max((var_33), (var_6)));
                        }
                        var_34 = ((/* implicit */unsigned short) ((var_6) << (((max((((/* implicit */unsigned int) var_8)), (2686359257U))) - (2686359257U)))));
                        /* LoopSeq 1 */
                        for (long long int i_13 = 3; i_13 < 19; i_13 += 2) 
                        {
                            var_35 -= ((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_3 [14])), (max((arr_9 [i_0] [i_1] [i_2] [i_5]), (((/* implicit */unsigned int) arr_15 [(unsigned char)18] [i_1] [i_1] [i_1]))))));
                            arr_46 [i_13] [(unsigned char)20] [(unsigned char)7] [(unsigned short)11] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */int) ((var_10) >= (((/* implicit */unsigned long long int) var_6))))) << (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(signed char)9]))) > (arr_26 [i_1] [i_1 - 1] [i_2] [20U] [i_13] [i_0]))))))) == (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_15 [(unsigned char)5] [i_5] [i_2] [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 31639686586864128LL)))))) : (((unsigned int) var_11))))));
                            var_36 = var_3;
                        }
                    }
                    arr_47 [17ULL] [i_1] [i_2] |= ((((arr_41 [7U] [i_1] [i_2] [(_Bool)1] [i_1 - 2] [i_2]) >= (arr_41 [i_0] [i_2] [i_2] [i_0] [i_1 + 1] [(signed char)8]))) ? (((/* implicit */int) max((var_2), (var_2)))) : ((-(((/* implicit */int) (unsigned short)1106)))));
                    arr_48 [7LL] [i_1] [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned short) var_5)))))) && (((/* implicit */_Bool) (((-(((/* implicit */int) arr_0 [(unsigned short)10])))) * (((/* implicit */int) (!(var_0)))))))));
                    arr_49 [i_1 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_1) ^ (0LL)))) ? (((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)59994))) == (3873372235U))) ? (((/* implicit */int) (signed char)-58)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (_Bool)0))));
                }
            } 
        } 
    } 
}
