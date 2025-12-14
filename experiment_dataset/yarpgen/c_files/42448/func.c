/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42448
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    var_17 ^= ((/* implicit */int) max((((((/* implicit */_Bool) arr_7 [i_1 - 2] [i_1 - 1] [i_1 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (4294967295U))), (((((/* implicit */_Bool) 2U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1 + 2] [i_1 + 2]))) : (var_9)))));
                    var_18 = ((/* implicit */short) ((((/* implicit */unsigned int) ((min((var_14), (arr_2 [9] [i_2]))) + (((/* implicit */int) arr_1 [i_1 + 1]))))) + (((((/* implicit */_Bool) min((-2147483642), (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)199))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_3))) - (2U)))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_3 = 2; i_3 < 18; i_3 += 4) 
    {
        arr_10 [i_3] [(unsigned char)19] = ((/* implicit */unsigned short) min((max((((/* implicit */unsigned long long int) min((58720256), (2097136)))), (12615344471851414511ULL))), (((/* implicit */unsigned long long int) var_12))));
        arr_11 [i_3 + 2] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) arr_9 [i_3 - 1])) == (((/* implicit */int) arr_9 [i_3 + 4]))))) % (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_3 + 1]))) <= (4294967277U))))));
    }
}
