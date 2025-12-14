/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192855
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
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 11; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] [i_0] &= ((/* implicit */unsigned int) arr_0 [i_0]);
        arr_4 [i_0] = ((/* implicit */unsigned long long int) (~(min((((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_0] [(short)8]))))), (((((/* implicit */long long int) ((/* implicit */int) var_1))) + (var_14)))))));
        arr_5 [i_0] [(unsigned char)1] = ((/* implicit */long long int) arr_1 [6] [i_0]);
        var_15 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) 4733359940541809023LL)) ? (-656887341) : (((/* implicit */int) (unsigned short)15475))));
    }
    for (int i_1 = 0; i_1 < 11; i_1 += 2) /* same iter space */
    {
        var_16 = ((/* implicit */int) max((arr_6 [i_1]), (((((/* implicit */_Bool) 1682848885347634642LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))) : (min((var_7), (((/* implicit */unsigned long long int) arr_7 [7LL]))))))));
        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) arr_7 [i_1]))));
        var_18 ^= ((/* implicit */long long int) arr_6 [i_1]);
        var_19 = ((/* implicit */long long int) arr_7 [i_1]);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 11; i_2 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(1408743108748881709ULL)))) || (((/* implicit */_Bool) 2940110533368468881LL))));
        /* LoopSeq 1 */
        for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_4 = 0; i_4 < 11; i_4 += 1) 
            {
                var_21 *= ((/* implicit */unsigned long long int) arr_11 [i_4]);
                /* LoopNest 2 */
                for (long long int i_5 = 0; i_5 < 11; i_5 += 2) 
                {
                    for (long long int i_6 = 0; i_6 < 11; i_6 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */int) arr_0 [(unsigned short)0]);
                            var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_14 [i_5] [i_2] [i_2])) : (((/* implicit */int) arr_2 [i_6] [8LL]))))) ? (((/* implicit */int) arr_20 [i_2] [i_3] [6LL] [i_5] [0ULL] [i_5] [8LL])) : (arr_7 [i_2]));
                            var_24 = ((/* implicit */unsigned int) arr_2 [i_2] [i_3]);
                        }
                    } 
                } 
            }
            /* LoopSeq 1 */
            for (unsigned short i_7 = 2; i_7 < 10; i_7 += 2) 
            {
                /* LoopSeq 3 */
                for (unsigned short i_8 = 0; i_8 < 11; i_8 += 3) 
                {
                    arr_25 [i_2] [i_2] = ((/* implicit */unsigned int) arr_18 [i_7 - 2] [i_3]);
                    var_25 ^= ((/* implicit */unsigned long long int) (~(arr_9 [i_2] [i_3])));
                    var_26 = ((/* implicit */_Bool) arr_19 [i_7 - 2] [i_7 - 1] [i_7 + 1] [i_3]);
                    var_27 &= ((/* implicit */unsigned long long int) arr_19 [i_7 - 1] [5LL] [i_7 + 1] [(short)5]);
                }
                for (long long int i_9 = 0; i_9 < 11; i_9 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_10 = 1; i_10 < 10; i_10 += 4) /* same iter space */
                    {
                        var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_26 [i_7 + 1] [i_10] [i_10 + 1] [i_10])) ? (((/* implicit */int) arr_17 [i_7 - 1] [i_7 - 1] [i_10 - 1] [i_10 + 1])) : (((/* implicit */int) arr_26 [4] [4] [i_10 - 1] [i_10]))));
                        var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) ((((/* implicit */int) arr_11 [i_7 - 1])) + (((/* implicit */int) var_6)))))));
                        var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) (short)11048))));
                    }
                    for (unsigned short i_11 = 1; i_11 < 10; i_11 += 4) /* same iter space */
                    {
                        arr_35 [i_2] [i_2] [i_11] [i_9] [(unsigned short)9] = ((/* implicit */long long int) arr_29 [i_11] [i_3] [i_3] [i_3] [(unsigned short)0] [i_3]);
                        arr_36 [i_2] [i_3] [i_7] [i_11] [i_11] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_2 [i_7 + 1] [i_11 + 1]))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned long long int i_12 = 0; i_12 < 11; i_12 += 2) 
                    {
                        var_31 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) -49519164))));
                        var_32 = ((/* implicit */long long int) ((((var_14) / (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2]))))) >= (arr_22 [i_7] [i_7 + 1] [i_7] [i_7 + 1])));
                        arr_39 [1] [i_12] [3U] [i_7] [i_3] [1] [1] = (+(arr_22 [i_2] [i_2] [i_2] [i_9]));
                    }
                    for (long long int i_13 = 0; i_13 < 11; i_13 += 2) 
                    {
                        var_33 ^= ((/* implicit */_Bool) arr_34 [i_2] [i_3] [i_2] [i_9] [0ULL] [i_2] [i_3]);
                        var_34 = ((/* implicit */unsigned int) ((arr_20 [i_2] [i_3] [i_3] [i_7] [i_9] [i_13] [i_13]) ? (((/* implicit */int) arr_20 [i_2] [i_9] [i_9] [3] [(short)10] [i_2] [i_2])) : (var_13)));
                    }
                }
                for (unsigned long long int i_14 = 0; i_14 < 11; i_14 += 4) 
                {
                    var_35 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)59719)))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_15 = 0; i_15 < 11; i_15 += 4) /* same iter space */
                    {
                        var_36 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_31 [i_7 - 1] [i_14] [i_7 - 1] [i_7 - 1] [8LL]))));
                        var_37 = (+(arr_24 [i_7] [i_7] [i_7 - 1] [i_7]));
                        arr_47 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) arr_0 [i_14]);
                    }
                    for (unsigned long long int i_16 = 0; i_16 < 11; i_16 += 4) /* same iter space */
                    {
                        var_38 += ((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_7 + 1] [i_7 - 1])) > (((/* implicit */int) arr_8 [i_7 - 1] [i_7 - 1]))));
                        var_39 = (~(arr_21 [i_7 - 1] [i_7] [i_7] [(unsigned short)3]));
                        var_40 = ((/* implicit */short) arr_43 [i_2] [i_2] [i_3] [i_2] [6LL] [i_16]);
                        var_41 |= (!(((/* implicit */_Bool) var_4)));
                    }
                    var_42 = ((/* implicit */unsigned short) ((arr_48 [i_2] [i_3] [i_7 - 1] [i_14] [i_2] [i_7]) / (-1682848885347634625LL)));
                }
                var_43 = ((/* implicit */unsigned short) 1682848885347634642LL);
                var_44 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_46 [i_2] [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */long long int) arr_43 [i_7 + 1] [i_3] [i_2] [i_2] [i_2] [i_2])) : (3365689482764589848LL)));
            }
            /* LoopSeq 1 */
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                var_45 = ((/* implicit */int) var_3);
                var_46 = ((/* implicit */long long int) arr_41 [i_17] [(signed char)1] [i_17] [i_3] [i_2] [i_2]);
            }
        }
    }
    var_47 = ((/* implicit */unsigned short) min((((unsigned int) var_7)), (((/* implicit */unsigned int) var_8))));
}
