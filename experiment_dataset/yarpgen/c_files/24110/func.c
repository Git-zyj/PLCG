/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24110
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
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    arr_9 [(short)7] [i_0] [i_1] = ((/* implicit */unsigned int) ((int) ((((((/* implicit */int) arr_3 [i_0] [i_1])) != (((/* implicit */int) var_5)))) ? (((/* implicit */unsigned long long int) min((arr_4 [i_1]), (((/* implicit */unsigned int) arr_8 [i_1] [i_1]))))) : (var_4))));
                    var_10 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)255))))), (((unsigned long long int) arr_5 [i_0] [i_0 + 2] [i_0]))));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */unsigned int) var_6);
    var_12 = var_3;
}
