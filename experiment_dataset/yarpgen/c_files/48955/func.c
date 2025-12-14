/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48955
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
    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) min((3072353068554706131LL), (((/* implicit */long long int) var_5))))) && (((/* implicit */_Bool) (unsigned char)0))))) >> (((/* implicit */int) ((((/* implicit */_Bool) ((13849170474559394735ULL) & (((/* implicit */unsigned long long int) -4565044125403600763LL))))) && (((/* implicit */_Bool) ((unsigned char) -4565044125403600754LL)))))))))));
    var_20 = ((unsigned char) ((((/* implicit */_Bool) 4565044125403600750LL)) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (short)-2161)), (9223372036854775794LL)))) : (0ULL)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    var_21 *= ((/* implicit */long long int) ((((/* implicit */_Bool) min(((~(((/* implicit */int) var_4)))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_2 [i_2] [i_1] [(signed char)14])) : (((/* implicit */int) arr_6 [i_2] [i_2] [i_2] [i_0 + 1]))))))) && (((/* implicit */_Bool) min((((/* implicit */long long int) var_8)), (arr_0 [i_0 - 3]))))));
                    var_22 = (i_1 % 2 == zero) ? (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((var_13) >> (((((((/* implicit */_Bool) (short)-435)) ? (((/* implicit */unsigned long long int) arr_4 [i_1])) : (var_16))) - (10683657894833850551ULL)))))) >= (2042826000061183176ULL)))) : (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((var_13) >> (((((((((/* implicit */_Bool) (short)-435)) ? (((/* implicit */unsigned long long int) arr_4 [i_1])) : (var_16))) - (10683657894833850551ULL))) - (11075355870653013547ULL)))))) >= (2042826000061183176ULL))));
                    arr_7 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (-(arr_0 [i_0 - 2])))) ? ((+(18446744073709551592ULL))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_5 [(short)1] [8] [8] [i_2])))))));
                }
                /* LoopSeq 2 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                {
                    var_23 = ((/* implicit */long long int) min((min((((/* implicit */int) min((arr_5 [i_3] [i_1] [i_0] [i_0]), (arr_5 [i_0] [i_0] [i_3] [(unsigned char)0])))), (((((/* implicit */int) arr_5 [i_0] [i_1] [i_0] [i_0])) >> (((4565044125403600754LL) - (4565044125403600733LL))))))), (((/* implicit */int) ((signed char) min((((/* implicit */unsigned char) (signed char)117)), ((unsigned char)8)))))));
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 3; i_4 < 12; i_4 += 1) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 15; i_5 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((short) (-(var_13))))), (((((/* implicit */_Bool) (-(var_13)))) ? (-4565044125403600786LL) : ((~(-2801162022181831623LL)))))));
                                arr_15 [i_0] [i_1] [i_3] [i_3] [i_1] [i_5] [6ULL] = ((signed char) max((((/* implicit */unsigned long long int) arr_10 [i_0] [i_0 + 1] [i_0 + 1] [i_0 - 2] [i_1])), (var_16)));
                                var_25 = ((/* implicit */int) max(((+(arr_0 [i_4 - 1]))), ((+(4565044125403600767LL)))));
                                arr_16 [i_0] [i_0] [i_1] [i_3] [i_1] [i_1] = ((/* implicit */long long int) ((signed char) arr_2 [i_3] [i_4] [i_5]));
                                arr_17 [5] [i_1] [i_1] [i_1] [(unsigned char)11] = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_1])) ? (6038180597792098996ULL) : (((/* implicit */unsigned long long int) arr_12 [i_0 + 1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (8562416750301031234ULL))) >= (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_1 [(unsigned char)8] [i_0 - 1])) ? (arr_4 [i_1]) : (-4565044125403600754LL))) + (((/* implicit */long long int) ((/* implicit */int) var_4)))))));
                            }
                        } 
                    } 
                    var_26 &= ((/* implicit */signed char) arr_1 [i_0] [i_3]);
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_7 = 0; i_7 < 15; i_7 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_27 = ((/* implicit */_Bool) ((((arr_23 [i_8] [i_8] [5ULL] [i_6] [i_1] [i_0 + 2]) ? (((/* implicit */int) (signed char)10)) : (((/* implicit */int) var_0)))) >> (((arr_9 [i_0 - 2] [i_6] [i_7]) + (7605062152251546415LL)))));
                            var_28 = ((/* implicit */long long int) ((((((/* implicit */int) arr_5 [i_0] [i_7] [i_6] [i_7])) + (((/* implicit */int) (signed char)0)))) & (((/* implicit */int) arr_21 [i_0 - 2] [i_1]))));
                        }
                        arr_24 [i_1] [i_6] [i_1] [i_1] = ((/* implicit */signed char) ((arr_5 [i_0 - 3] [i_0] [i_0 + 1] [i_0 - 3]) ? (2147483647) : (((/* implicit */int) arr_5 [i_0 + 1] [(unsigned char)6] [i_0 + 1] [(short)8]))));
                        arr_25 [i_0 - 2] [i_1] [i_1] [i_1] = ((/* implicit */signed char) var_3);
                        arr_26 [i_0] [i_1] [i_0] [i_0] = var_11;
                    }
                    /* vectorizable */
                    for (long long int i_9 = 0; i_9 < 15; i_9 += 3) 
                    {
                        arr_29 [i_0] [i_0] [i_1] [i_1] = ((/* implicit */int) (~(((8562416750301031240ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                        arr_30 [i_9] [i_1] [10LL] [i_1] [i_0 + 2] = ((/* implicit */signed char) ((((/* implicit */int) arr_18 [i_0] [i_1] [i_1] [i_6])) ^ (((/* implicit */int) arr_18 [i_0] [i_1] [(unsigned short)6] [i_6]))));
                        arr_31 [i_1] [i_1] = (i_1 % 2 == zero) ? (((((((((/* implicit */_Bool) -5351007090216933958LL)) ? (arr_4 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [(short)3] [i_1] [i_1] [i_1]))))) + (9223372036854775807LL))) >> (((var_17) - (8383669270261764931LL))))) : (((((((((((/* implicit */_Bool) -5351007090216933958LL)) ? (arr_4 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [(short)3] [i_1] [i_1] [i_1]))))) - (9223372036854775807LL))) + (9223372036854775807LL))) >> (((var_17) - (8383669270261764931LL)))));
                    }
                    var_29 = ((/* implicit */long long int) max((var_29), (min((((min((((/* implicit */long long int) (signed char)-29)), (arr_4 [14ULL]))) / (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) arr_22 [i_0 + 2] [i_1] [i_0] [i_1] [i_1])))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [4ULL])) && (((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_1] [i_6] [i_6] [i_6])))))))));
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    var_30 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_14 [i_0] [i_0 - 3] [i_0 + 1] [(signed char)5] [i_0 + 2] [i_1])) & (((/* implicit */int) (signed char)123))));
                    var_31 = arr_28 [i_0] [(signed char)13] [i_1];
                }
                arr_36 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_0] [i_1] [i_0 - 2] [i_0])) ? (min((arr_35 [i_1] [(signed char)0]), (((/* implicit */long long int) var_6)))) : (((((/* implicit */long long int) ((/* implicit */int) (signed char)113))) - (arr_0 [i_0])))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5))));
            }
        } 
    } 
}
