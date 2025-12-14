/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212173
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */signed char) arr_0 [i_2] [9U]);
                    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) max((arr_0 [i_1 + 1] [i_1 + 1]), (((/* implicit */long long int) var_0)))))));
                    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [9LL])) ? (0) : (((/* implicit */int) arr_4 [i_2] [i_1] [i_0]))))) & (var_9)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_1 + 1]))) : (max((((unsigned int) (short)(-32767 - 1))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_0] [i_1] [(signed char)2])) * (((/* implicit */int) var_1)))))))));
                }
            } 
        } 
    } 
    var_17 |= var_12;
    var_18 = ((/* implicit */_Bool) ((((/* implicit */long long int) 16744448U)) / (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (var_2)))));
}
