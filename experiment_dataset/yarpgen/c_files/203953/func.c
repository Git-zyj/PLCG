/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203953
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
    for (long long int i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 19; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    var_19 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0 - 1] [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(short)15]))) : (arr_9 [i_0 - 1] [i_0]))))) ? (((var_13) << (((/* implicit */int) arr_7 [i_0 + 1] [i_0 + 2])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1975903634)) ? (((/* implicit */int) arr_4 [i_1 - 1] [(unsigned char)17] [i_2])) : (((/* implicit */int) var_5)))))));
                    arr_10 [(signed char)16] [i_1] [21ULL] = ((/* implicit */long long int) var_6);
                    var_20 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) arr_1 [i_0] [i_2]))) ? (((((arr_5 [i_0]) - (((/* implicit */int) var_12)))) | (((/* implicit */int) var_10)))) : (((((/* implicit */_Bool) arr_9 [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0]))))) : (((/* implicit */int) ((_Bool) arr_9 [i_2] [i_1])))))));
                }
            } 
        } 
        arr_11 [i_0] = ((/* implicit */short) arr_1 [i_0] [i_0 - 1]);
        arr_12 [i_0] = ((/* implicit */short) arr_0 [i_0]);
    }
    var_21 |= ((/* implicit */signed char) ((((((/* implicit */_Bool) (-(((/* implicit */int) var_15))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (unsigned char)231)) : (1975903634)))) : (((var_2) >> (((((/* implicit */int) var_10)) - (62))))))) + (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (-(((/* implicit */int) (unsigned char)143)))))))));
}
