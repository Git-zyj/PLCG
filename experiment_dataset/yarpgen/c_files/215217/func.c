/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215217
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 13; i_2 += 3) 
            {
                {
                    var_18 += (signed char)(-127 - 1);
                    arr_6 [i_1] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_4 [i_2 + 1] [i_2 + 3] [i_2] [i_2 + 3]), (arr_4 [i_2 + 3] [i_2 + 3] [i_2] [i_2 + 2])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : ((-(min((-8059137762366759963LL), (((/* implicit */long long int) arr_2 [i_0] [i_1]))))))));
                    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_5 [i_2 + 2] [i_2 + 4] [2LL])), (var_17)))) ? (((/* implicit */int) arr_5 [i_2 + 4] [i_2 + 1] [(unsigned short)14])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_2 + 2] [i_2 + 1] [(short)2]))))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_3 = 0; i_3 < 12; i_3 += 4) 
    {
        arr_9 [i_3] [i_3] = ((/* implicit */unsigned long long int) ((var_15) / (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_3])) - (((/* implicit */int) arr_5 [i_3] [i_3] [i_3]))))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_0 [i_3])))))));
        arr_10 [i_3] = ((/* implicit */unsigned int) max((((/* implicit */int) ((short) arr_3 [i_3] [i_3]))), (((((/* implicit */int) var_1)) / (((/* implicit */int) arr_7 [i_3]))))));
    }
    var_20 = 1389996474U;
    var_21 ^= ((/* implicit */long long int) var_12);
    var_22 = ((/* implicit */unsigned short) var_0);
}
