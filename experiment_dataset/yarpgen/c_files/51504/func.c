/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51504
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
    for (unsigned long long int i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_3 [i_1]);
                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((min((((/* implicit */int) arr_5 [i_1] [i_0] [i_0 - 2])), (var_9))) * (((((/* implicit */int) (unsigned short)49023)) + (((/* implicit */int) arr_5 [i_0] [i_0] [2LL]))))))) ? ((~(((((/* implicit */_Bool) arr_3 [i_1 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (arr_4 [i_0] [i_1] [i_1]))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)16750))))) ? (((((/* implicit */_Bool) arr_4 [6U] [i_1] [i_1 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (0U))) : (((var_3) + (((/* implicit */unsigned int) var_16))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) var_5)) == (min((var_2), (((/* implicit */int) (unsigned char)94)))))));
}
