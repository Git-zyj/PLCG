/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200179
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
    var_10 &= ((/* implicit */int) max((var_8), (min((min((((/* implicit */long long int) var_9)), (var_0))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_9)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */int) arr_2 [i_0 + 1]);
        arr_4 [i_0 + 1] [i_0] = ((/* implicit */signed char) (-(arr_0 [i_0 + 1])));
        /* LoopSeq 2 */
        for (int i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            var_11 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1 + 4] [i_0])) ? (((/* implicit */long long int) arr_0 [i_0])) : (arr_7 [(signed char)9] [i_0]))))));
            arr_8 [i_1 - 1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_5 [i_0 - 1]))));
            arr_9 [i_0] [i_0] [7LL] = ((/* implicit */long long int) (+(arr_0 [i_0 + 1])));
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                for (unsigned int i_3 = 0; i_3 < 14; i_3 += 1) 
                {
                    {
                        var_12 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)127)) > (((/* implicit */int) (signed char)92))));
                        arr_14 [i_0] [(signed char)8] [i_0] [i_1] [i_2] [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_3] [i_3] [7] [7])) ? (arr_10 [i_0] [i_3] [1LL] [i_3]) : (((/* implicit */unsigned int) arr_1 [i_3])))))));
                        arr_15 [i_0] [(signed char)11] [i_3] [5U] [i_0] [i_1] = ((((((/* implicit */_Bool) (signed char)-113)) ? (1239052678) : (((/* implicit */int) (signed char)-93)))) << ((((((-(arr_5 [i_3]))) + (1260912117))) - (31))));
                        arr_16 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (arr_5 [i_0 - 1]) : (arr_0 [i_0 + 1])));
                    }
                } 
            } 
            var_13 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? ((-(arr_5 [i_1 - 1]))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0])))))));
        }
        for (long long int i_4 = 0; i_4 < 14; i_4 += 2) 
        {
            var_14 = ((((/* implicit */_Bool) arr_5 [i_0 - 1])) ? (arr_19 [i_0]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [i_0 - 1])) ? (arr_17 [i_4]) : (arr_17 [i_0])))));
            var_15 = ((/* implicit */unsigned int) min((var_15), ((-(arr_10 [i_0 - 1] [i_0] [i_0 + 1] [i_0 + 1])))));
            var_16 = ((/* implicit */long long int) (-(((/* implicit */int) arr_13 [i_0 - 1] [i_0 - 1] [i_4] [i_4]))));
            var_17 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-127))) & (4294967270U)));
        }
    }
    for (unsigned int i_5 = 1; i_5 < 23; i_5 += 2) 
    {
        arr_23 [i_5] [i_5] = ((/* implicit */unsigned int) max(((+(((((/* implicit */_Bool) 1584144722U)) ? (arr_22 [i_5 - 1]) : (((/* implicit */int) (signed char)92)))))), (((/* implicit */int) arr_21 [3]))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_6 = 0; i_6 < 24; i_6 += 4) 
        {
            arr_26 [i_5] = ((/* implicit */unsigned int) arr_21 [i_6]);
            var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) arr_25 [i_5]))));
        }
        for (signed char i_7 = 1; i_7 < 20; i_7 += 3) 
        {
            arr_31 [i_5] = ((/* implicit */int) (!(((((/* implicit */int) (signed char)-83)) < (((/* implicit */int) (signed char)111))))));
            arr_32 [i_5] [22U] [i_7 + 4] &= ((/* implicit */unsigned int) (+(arr_28 [i_5] [i_5])));
            var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) arr_22 [i_7 + 4]))));
            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((~(((/* implicit */int) arr_21 [i_5])))), (arr_22 [i_5])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_29 [i_5])) ? (((/* implicit */int) ((arr_24 [i_5 + 1]) < (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_5 - 1] [i_7] [i_7 + 4])))))) : ((-(arr_22 [i_7])))))) : (min((((/* implicit */long long int) (-(arr_20 [i_7])))), (((((/* implicit */_Bool) arr_25 [i_5])) ? (((/* implicit */long long int) arr_24 [i_5])) : (arr_25 [i_7])))))));
        }
        for (signed char i_8 = 0; i_8 < 24; i_8 += 2) 
        {
            var_21 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_21 [i_5 - 1])) ? ((-(67108863LL))) : (((/* implicit */long long int) (-(arr_24 [i_8]))))));
            arr_35 [i_5 + 1] = ((/* implicit */long long int) (+(arr_28 [i_5 - 1] [i_5 - 1])));
            arr_36 [i_5] [i_5] [i_8] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_25 [i_8]))))), (arr_29 [i_5 + 1]))))));
            arr_37 [i_8] [i_5] = ((/* implicit */unsigned int) arr_30 [13] [i_8] [i_5]);
        }
    }
}
