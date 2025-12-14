/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217805
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
    var_13 = ((/* implicit */int) ((long long int) 2060943841));
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 16; i_1 += 3) 
        {
            for (signed char i_2 = 3; i_2 < 13; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_0] [i_2 - 3] [i_0 + 1] = ((((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0 - 2])) * (((/* implicit */int) arr_0 [i_0 - 2]))))) - ((((+(arr_6 [i_0 + 2] [i_1 + 1] [i_0] [(signed char)9]))) - (((/* implicit */long long int) var_8)))));
                    arr_9 [i_0] [i_2 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)112)) > (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-120))))))))));
                }
            } 
        } 
    } 
}
