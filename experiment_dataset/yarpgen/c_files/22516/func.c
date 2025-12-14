/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22516
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
    for (unsigned int i_0 = 4; i_0 < 17; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_4 [i_0])), (arr_3 [i_0 - 3] [i_1])));
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    var_15 *= ((/* implicit */unsigned short) arr_4 [6LL]);
                    var_16 = ((/* implicit */_Bool) arr_0 [i_0]);
                    var_17 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_4 [i_1])), (min((arr_3 [i_0 - 4] [i_1]), (((/* implicit */unsigned long long int) (unsigned short)13985))))));
                    arr_8 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_14), (arr_3 [i_0] [i_0])))) ? (((/* implicit */int) (unsigned short)50300)) : (((/* implicit */int) (_Bool)0))))) : (arr_1 [i_2])));
                    var_18 ^= ((/* implicit */unsigned short) var_5);
                }
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) arr_3 [i_0] [i_0]))));
                    arr_11 [i_3] [i_1] [i_1] [i_1] = ((/* implicit */int) (!(((((/* implicit */unsigned long long int) ((0) ^ (((/* implicit */int) arr_2 [4U]))))) >= ((+(arr_3 [i_1] [i_3])))))));
                }
                var_20 ^= ((/* implicit */unsigned int) min((min((((/* implicit */long long int) arr_4 [i_0 - 3])), (arr_9 [(signed char)6] [(signed char)6] [i_0]))), (((((/* implicit */_Bool) arr_10 [i_0 - 3] [i_0] [(unsigned short)8] [i_1])) ? (arr_9 [12LL] [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)26)))))));
                var_21 = min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_0] [i_0 - 4] [i_0])) > (((/* implicit */int) arr_7 [i_0 - 1] [i_0 - 4] [i_1]))))), (min((((((/* implicit */_Bool) (unsigned short)13989)) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) 0U)))), (arr_3 [i_0 - 1] [i_1]))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) min((min((var_0), (min((((/* implicit */unsigned int) var_3)), (var_5))))), (((/* implicit */unsigned int) (unsigned short)62367)))))));
    /* LoopSeq 2 */
    for (short i_4 = 3; i_4 < 14; i_4 += 3) 
    {
        /* LoopNest 3 */
        for (long long int i_5 = 0; i_5 < 16; i_5 += 3) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (short i_7 = 0; i_7 < 16; i_7 += 3) 
                {
                    {
                        var_23 = ((/* implicit */signed char) 30);
                        arr_24 [i_4] [i_4] [i_6] = ((/* implicit */signed char) var_7);
                        arr_25 [i_4] [i_4] [i_4 - 1] [i_4] [i_4] = ((/* implicit */unsigned int) min((min((arr_7 [i_4 - 3] [i_4 - 2] [i_7]), (arr_7 [i_4 + 2] [i_4 - 2] [i_6]))), (arr_7 [i_4 + 2] [i_4 + 1] [i_5])));
                        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [i_4])) ? (min((min((arr_21 [i_4] [i_4 + 1] [i_4]), (((/* implicit */unsigned long long int) arr_9 [i_4] [i_5] [i_6])))), (((/* implicit */unsigned long long int) min((arr_6 [i_4] [i_4] [i_4]), (arr_16 [i_4 + 2] [i_4])))))) : (arr_3 [i_5] [i_5])));
                    }
                } 
            } 
        } 
        arr_26 [i_4] [i_4 + 2] = ((/* implicit */_Bool) min((min((((/* implicit */unsigned int) (unsigned short)7680)), (3560101335U))), (min((2646518393U), (arr_12 [i_4 - 2])))));
        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) min((((/* implicit */long long int) min((arr_19 [0ULL] [0ULL] [0ULL] [i_4 - 2]), (arr_19 [(short)2] [(short)2] [(short)2] [i_4 - 1])))), (min((var_1), (((/* implicit */long long int) arr_19 [i_4] [10LL] [10LL] [i_4 + 2])))))))));
    }
    for (long long int i_8 = 0; i_8 < 25; i_8 += 3) 
    {
        var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) (~((~(((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))))))));
        var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 67553994410557440ULL)) || ((_Bool)0))))));
        arr_29 [i_8] = ((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) arr_28 [i_8])), (arr_27 [i_8] [i_8]))), ((~(arr_27 [i_8] [i_8])))));
    }
}
