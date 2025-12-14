/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19757
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
    var_19 = var_1;
    var_20 = ((/* implicit */unsigned int) 1658746781);
    /* LoopSeq 3 */
    for (int i_0 = 3; i_0 < 9; i_0 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_4 [i_0] [i_1] [i_1]))) ? (((((/* implicit */_Bool) arr_0 [i_2])) ? (arr_7 [i_0] [3U] [3U]) : (((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [1U])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))))));
                    var_22 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) min((((arr_6 [i_0] [i_1] [5U]) + (((/* implicit */unsigned int) arr_0 [i_0])))), (((/* implicit */unsigned int) arr_1 [i_0]))))), (((((((/* implicit */_Bool) -1658746755)) ? (19ULL) : (((/* implicit */unsigned long long int) 1509737309)))) - (((((/* implicit */unsigned long long int) arr_0 [i_0 - 1])) + (var_15)))))));
                }
            } 
        } 
        var_23 = ((/* implicit */int) ((long long int) arr_2 [i_0 - 3]));
        arr_9 [i_0] [i_0] = ((((/* implicit */int) arr_1 [i_0])) & (((((/* implicit */int) arr_3 [i_0 - 1])) * (((/* implicit */int) ((var_18) <= (32657835)))))));
    }
    for (int i_3 = 3; i_3 < 9; i_3 += 3) /* same iter space */
    {
        arr_12 [i_3] = ((/* implicit */unsigned int) ((_Bool) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)253)), (8732269755759485724LL)))))));
        arr_13 [i_3 - 3] = ((/* implicit */unsigned char) ((short) ((int) ((arr_0 [i_3]) >> (((((/* implicit */int) arr_3 [0])) - (36)))))));
    }
    /* vectorizable */
    for (unsigned int i_4 = 3; i_4 < 19; i_4 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (unsigned int i_6 = 0; i_6 < 21; i_6 += 3) 
            {
                {
                    var_24 = ((/* implicit */int) ((unsigned long long int) (~(-1LL))));
                    var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) arr_22 [i_4 - 1] [i_5])) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_20 [i_4] [i_4] [i_4] [7])))) : (((/* implicit */int) arr_20 [i_4 + 2] [i_4] [i_4 - 3] [i_4]))));
                    var_26 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) arr_15 [i_5])) % (arr_19 [i_4] [i_5] [i_5] [i_6]))))));
                    var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_14 [i_4 + 2])) ? (-10LL) : (((/* implicit */long long int) arr_22 [(short)5] [i_5]))));
                }
            } 
        } 
        var_28 = 2;
        var_29 += ((int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_4] [i_4] [i_4] [i_4]))) <= (var_11)));
        var_30 = var_4;
        /* LoopNest 2 */
        for (unsigned int i_7 = 0; i_7 < 21; i_7 += 2) 
        {
            for (signed char i_8 = 1; i_8 < 20; i_8 += 2) 
            {
                {
                    var_31 = ((/* implicit */short) (~(arr_15 [i_8 + 1])));
                    /* LoopSeq 1 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_10 = 0; i_10 < 21; i_10 += 1) 
                        {
                            arr_31 [i_8] [i_10] [(signed char)4] [i_8] [i_4] [i_8] = ((/* implicit */unsigned int) ((arr_26 [i_9] [i_8] [i_4]) <= (((/* implicit */unsigned long long int) -1019170500))));
                            var_32 = ((((/* implicit */_Bool) arr_17 [i_9] [i_8 - 1] [i_4 - 2])) ? (((/* implicit */int) arr_17 [i_8 + 1] [i_8 + 1] [i_4 - 1])) : (((/* implicit */int) arr_17 [i_8] [i_8 - 1] [i_4 - 1])));
                            arr_32 [i_7] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_20 [i_4] [i_4] [i_4] [i_4])) + (((/* implicit */int) arr_20 [i_4] [i_4] [i_8 - 1] [i_4]))))) ? (((/* implicit */int) ((signed char) (_Bool)1))) : (arr_27 [i_7] [(_Bool)1] [(_Bool)1] [i_8] [(signed char)12] [(_Bool)1])));
                        }
                        for (int i_11 = 0; i_11 < 21; i_11 += 2) /* same iter space */
                        {
                            arr_36 [i_8] [i_7] [i_8] [i_8] = (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [(short)5] [(short)5] [i_4]))))));
                            var_33 = ((/* implicit */signed char) ((((arr_28 [i_11]) * (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) * (((/* implicit */unsigned int) ((int) arr_20 [i_8 + 1] [i_8] [i_8] [9U])))));
                            var_34 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_34 [i_8] [10] [i_8] [i_8] [i_4 + 1] [i_4 - 1] [i_4]))) & (((arr_24 [i_9]) % (arr_24 [i_4])))));
                        }
                        for (int i_12 = 0; i_12 < 21; i_12 += 2) /* same iter space */
                        {
                            arr_39 [i_8] [i_7] [i_8] [i_8] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551579ULL)) || (((/* implicit */_Bool) arr_16 [i_8 - 1]))));
                            var_35 = ((/* implicit */signed char) ((_Bool) arr_22 [i_8 + 1] [i_4 - 3]));
                        }
                        arr_40 [i_4] [i_7] [i_8] [i_9] [i_8] [i_9] = ((/* implicit */unsigned int) var_1);
                    }
                    arr_41 [i_4] [i_7] [i_8] = ((/* implicit */unsigned char) (+(arr_33 [i_8 - 1] [i_4 - 1] [i_4] [i_4] [i_4 + 1])));
                    var_36 = ((/* implicit */int) ((((/* implicit */unsigned int) 1019170499)) & (arr_25 [i_8])));
                }
            } 
        } 
    }
}
