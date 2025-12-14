/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37296
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
    var_17 = var_9;
    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_10)))) ? (var_10) : (((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) var_4)) >= (9072664620629150266ULL)))))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned int) ((unsigned char) ((long long int) -6012664073491341504LL)));
        var_20 *= ((/* implicit */unsigned char) (~(((((((/* implicit */int) arr_0 [i_0])) <= (((/* implicit */int) arr_0 [i_0])))) ? (((unsigned int) arr_1 [4LL])) : (((arr_1 [(unsigned char)2]) / (arr_1 [2U])))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) 
    {
        var_21 *= ((/* implicit */unsigned int) arr_2 [i_1] [i_1]);
        arr_5 [i_1] = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_3 [i_1]))))) : (arr_4 [i_1] [i_1]))));
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 12; i_2 += 1) 
        {
            for (long long int i_3 = 4; i_3 < 11; i_3 += 2) 
            {
                {
                    var_22 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [1LL] [i_2] [i_3 - 3]))) : (arr_2 [i_2] [i_3 + 1])))) ? (((((/* implicit */_Bool) arr_6 [i_1] [i_2])) ? (((/* implicit */unsigned long long int) arr_6 [i_2] [i_2])) : (arr_10 [i_1] [i_1] [i_1] [i_1]))) : (((/* implicit */unsigned long long int) arr_8 [i_1] [i_1]))))));
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_11 [i_3] [i_2] [i_1]))) ? (((arr_10 [i_1] [2U] [i_2] [2U]) >> (((arr_8 [(unsigned char)10] [2U]) - (848413944U))))) : (((((/* implicit */_Bool) arr_2 [i_3] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))) : (arr_7 [i_2] [i_2])))))) ? (((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_2] [i_3 - 4])) ? ((~(arr_10 [i_1] [i_1] [2ULL] [4LL]))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)127))) & (0U)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_2] [2ULL])) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_3] [i_2] [(unsigned char)11]))) : (((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_4 [i_1] [i_2]) : (arr_4 [i_1] [i_2]))))))));
                }
            } 
        } 
    }
    for (unsigned char i_4 = 0; i_4 < 14; i_4 += 4) 
    {
        var_24 = arr_14 [9LL];
        var_25 *= ((/* implicit */unsigned char) (~((~(arr_13 [i_4])))));
    }
    var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) ((unsigned char) (-(var_10)))))));
}
