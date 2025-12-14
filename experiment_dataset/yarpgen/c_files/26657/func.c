/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26657
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
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 7; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 9; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 4 */
                            for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 1) 
                            {
                                var_13 = ((/* implicit */int) min((var_13), (((((/* implicit */int) ((arr_10 [i_1 - 2]) <= (arr_10 [i_1 + 1])))) << (((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_2] [i_3] [i_0])) ? (arr_6 [i_0] [i_1] [i_2] [i_3]) : (((/* implicit */long long int) var_12))))) ^ (max((((/* implicit */unsigned long long int) arr_3 [i_0] [i_4])), (arr_12 [i_0] [i_3] [i_1] [i_1] [i_0] [i_0]))))) - (13136743284586919134ULL)))))));
                                arr_13 [i_1] [i_1 + 1] [i_2] [i_3] [i_1] [i_1 - 1] [i_1 + 2] = ((/* implicit */_Bool) ((14423872134998755109ULL) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) arr_9 [i_0] [i_1 - 3] [i_1 - 3] [8LL] [i_4] [1U]))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 395587010)))))) : (arr_6 [i_0] [i_2] [i_3] [i_4]))))));
                            }
                            /* vectorizable */
                            for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                            {
                                var_14 &= ((/* implicit */unsigned int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                                var_15 = ((/* implicit */int) ((((/* implicit */long long int) arr_0 [i_1 + 3])) == (var_3)));
                                arr_16 [i_5] [i_0] [i_0] &= ((/* implicit */short) ((arr_15 [i_1 - 3] [i_1 + 2] [i_1] [i_0] [i_1] [i_1 - 3]) - (((/* implicit */int) arr_2 [i_1 - 1] [i_1 - 1]))));
                                var_16 = ((/* implicit */short) arr_3 [i_1] [i_1]);
                            }
                            for (unsigned int i_6 = 1; i_6 < 9; i_6 += 3) 
                            {
                                var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) 4294967284U)) || (((/* implicit */_Bool) max((var_8), (var_9))))))) + ((-(((/* implicit */int) arr_2 [i_1 - 2] [i_2 - 1]))))));
                                arr_20 [i_0] [i_0] [i_1 - 1] [i_1] [i_2] [i_3] [i_6] = ((/* implicit */unsigned long long int) arr_3 [i_0] [i_0]);
                            }
                            for (short i_7 = 3; i_7 < 9; i_7 += 2) 
                            {
                                var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((unsigned long long int) (short)-32755)) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_2] [i_3]))))))));
                                var_19 = ((/* implicit */_Bool) max((var_19), (max((((((/* implicit */_Bool) 72022409665839104LL)) || (((/* implicit */_Bool) 72022409665839093LL)))), (((((((/* implicit */_Bool) arr_14 [i_7] [9U] [i_1 - 3] [i_3] [i_7])) && (((/* implicit */_Bool) var_5)))) || ((!(((/* implicit */_Bool) arr_4 [i_0]))))))))));
                                var_20 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((max((arr_10 [i_1]), (((/* implicit */unsigned long long int) var_0)))) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))))))));
                                var_21 = ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
                                var_22 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_7]))) / (arr_22 [i_2 - 1] [i_1] [i_7 - 2])));
                            }
                            var_23 = ((((/* implicit */_Bool) ((unsigned int) arr_19 [i_1] [i_1 - 3] [i_1] [i_1 + 2] [i_1]))) ? ((~(((((/* implicit */_Bool) -72022409665839110LL)) ? (12736284340096950177ULL) : (arr_10 [8LL]))))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_0 [i_0])), (72022409665839100LL)))));
                        }
                    } 
                } 
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned int i_8 = 1; i_8 < 8; i_8 += 2) /* same iter space */
                {
                    var_24 ^= ((/* implicit */_Bool) (~(arr_10 [i_1 - 3])));
                    var_25 = ((/* implicit */short) arr_3 [3] [i_1]);
                }
                /* vectorizable */
                for (unsigned int i_9 = 1; i_9 < 8; i_9 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_10 = 2; i_10 < 9; i_10 += 3) 
                    {
                        for (unsigned int i_11 = 0; i_11 < 10; i_11 += 2) 
                        {
                            {
                                arr_33 [i_0] [i_0] [i_1] [i_1] [i_10] [i_1] = ((((/* implicit */_Bool) ((((arr_31 [i_0] [i_1] [i_9] [i_10] [i_0]) + (2147483647))) >> (((var_8) - (267453336)))))) ? (arr_12 [i_9 + 2] [i_9 + 1] [i_9 + 1] [i_9 - 1] [i_9] [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))));
                                var_26 = ((/* implicit */int) max((var_26), ((+(((/* implicit */int) ((short) 72022409665839104LL)))))));
                                arr_34 [i_0] [i_1] [i_1] [i_0] [(_Bool)1] [i_1] = ((/* implicit */short) arr_23 [i_0] [i_9 + 1]);
                                var_27 |= (!(((/* implicit */_Bool) arr_7 [i_1 + 2] [i_1] [i_9 + 2])));
                                var_28 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_1] [i_9 + 2] [i_10 - 1] [i_11])) ? (((/* implicit */unsigned int) arr_31 [i_0] [i_0] [i_0] [i_0] [i_0])) : (((unsigned int) var_5))));
                            }
                        } 
                    } 
                    var_29 ^= ((/* implicit */long long int) ((int) arr_17 [i_9 - 1] [i_9 + 2] [i_9 + 2] [i_9 + 2] [i_9 + 2]));
                    arr_35 [i_0] [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) == (arr_17 [i_9 + 1] [i_0] [(short)5] [i_1 - 3] [i_0])));
                }
                for (unsigned int i_12 = 1; i_12 < 8; i_12 += 2) /* same iter space */
                {
                    var_30 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_25 [i_0] [i_1])) ? (min((arr_0 [i_1 - 2]), (((/* implicit */unsigned int) var_7)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_37 [i_0] [i_0] [i_0] [i_0]))))))));
                    /* LoopSeq 1 */
                    for (int i_13 = 1; i_13 < 9; i_13 += 2) 
                    {
                        var_31 = ((/* implicit */int) (~((~(arr_28 [i_0] [i_0] [i_12 + 2] [i_0])))));
                        var_32 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_29 [i_1 - 2] [i_13 + 1] [i_13] [i_13] [i_13 - 1] [i_13])) || (((/* implicit */_Bool) arr_31 [i_1 + 1] [i_13 - 1] [i_13] [i_13 - 1] [i_13])))))) > (((((/* implicit */_Bool) arr_31 [i_1 - 2] [i_13 + 1] [i_1 - 2] [i_13 - 1] [i_1 - 2])) ? (arr_29 [i_1 - 3] [i_13 + 1] [i_1 - 3] [i_13] [i_13] [i_1 - 3]) : (((/* implicit */unsigned int) arr_31 [i_1 - 2] [i_13 + 1] [i_13 + 1] [i_13 + 1] [7LL]))))));
                        var_33 = ((/* implicit */int) ((((/* implicit */long long int) arr_1 [i_0] [i_1 - 2])) ^ (((((/* implicit */long long int) min((arr_24 [i_0] [i_0] [i_12] [i_0]), (var_4)))) + ((+(var_5)))))));
                    }
                    var_34 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_4 [i_1])) ? (var_4) : (((/* implicit */unsigned int) arr_7 [i_0] [i_0] [i_12 - 1])))))))));
                    var_35 = ((/* implicit */unsigned long long int) ((_Bool) max((min((((/* implicit */long long int) -1703192406)), (72022409665839096LL))), (((/* implicit */long long int) (-(((/* implicit */int) arr_18 [i_0] [9ULL] [9ULL] [i_12 + 1] [5U]))))))));
                    arr_42 [i_0] [i_1] [i_12] [i_0] = ((/* implicit */_Bool) (~(arr_17 [i_0] [i_1 + 1] [5] [i_1] [i_12])));
                }
                for (int i_14 = 3; i_14 < 7; i_14 += 2) 
                {
                    arr_47 [i_0] [i_0] [i_0] &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_46 [i_0] [i_0] [i_0] [i_0])) ? (var_6) : (((/* implicit */unsigned long long int) (~(arr_17 [i_0] [i_1 - 3] [i_14] [i_14] [i_0]))))))) ? (((unsigned int) 14LL)) : (((/* implicit */unsigned int) arr_7 [i_14] [i_14] [i_14 - 1])));
                    var_36 = ((/* implicit */unsigned int) min((min((arr_21 [i_1 - 2] [i_1]), (arr_21 [i_1 + 3] [i_1]))), (arr_21 [i_1 - 1] [i_1])));
                    var_37 ^= ((/* implicit */_Bool) 9798445913433533938ULL);
                    var_38 = (-(((/* implicit */int) arr_27 [5] [i_14 + 1] [i_14 + 3] [i_1 - 3])));
                }
            }
        } 
    } 
    var_39 = ((/* implicit */unsigned long long int) var_3);
    var_40 = var_10;
    /* LoopNest 2 */
    for (unsigned long long int i_15 = 1; i_15 < 22; i_15 += 2) 
    {
        for (int i_16 = 0; i_16 < 24; i_16 += 2) 
        {
            {
                var_41 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_1)) ? (arr_48 [i_15 + 1]) : (((/* implicit */unsigned long long int) var_8)))), (arr_50 [i_16] [i_15 + 2] [i_15 + 2])));
                var_42 = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_49 [i_15 + 1]))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) + (((/* implicit */int) (short)32754))))), (arr_48 [i_15]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_49 [4ULL]))) / ((+(arr_48 [i_15]))))));
            }
        } 
    } 
    var_43 ^= ((/* implicit */int) min((((/* implicit */unsigned long long int) var_10)), (var_6)));
}
