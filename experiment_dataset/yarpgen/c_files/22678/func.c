/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22678
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) max((arr_1 [i_0]), (((/* implicit */unsigned short) arr_0 [i_0]))))) ^ ((~(((/* implicit */int) ((((/* implicit */_Bool) (short)32753)) && (((/* implicit */_Bool) 2663456350U)))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5))));
        var_10 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4)))) >= (((((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_1))))) + (((/* implicit */int) var_8))))));
    }
    var_11 = ((/* implicit */unsigned short) ((863522584U) * (((/* implicit */unsigned int) ((/* implicit */int) (short)-32)))));
    var_12 = ((/* implicit */short) (!(((/* implicit */_Bool) var_8))));
    /* LoopSeq 2 */
    for (unsigned short i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */short) var_0);
        arr_7 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((min((arr_4 [i_1]), (((/* implicit */unsigned long long int) var_1)))) ^ (((/* implicit */unsigned long long int) ((4294967295U) >> (((((/* implicit */int) (unsigned short)41689)) - (41687))))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-(4294967295U))))))) : (((/* implicit */int) var_5))));
        arr_8 [i_1] = ((/* implicit */unsigned short) max(((!(((/* implicit */_Bool) 1U)))), (((((/* implicit */_Bool) var_8)) && (((arr_4 [i_1]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [i_1])))))))));
    }
    /* vectorizable */
    for (short i_2 = 0; i_2 < 22; i_2 += 3) 
    {
        var_13 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_8))));
        arr_13 [i_2] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32))) * (arr_11 [i_2] [i_2])));
        var_14 = ((arr_11 [i_2] [i_2]) << (((((/* implicit */int) var_6)) - (14641))));
    }
}
