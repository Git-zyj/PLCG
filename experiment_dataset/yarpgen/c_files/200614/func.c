/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200614
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
    for (unsigned long long int i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        for (unsigned char i_1 = 3; i_1 < 15; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_8 [i_0 - 2] [i_0] [i_2] = ((/* implicit */signed char) (+(min((((/* implicit */unsigned int) arr_5 [i_2] [i_1] [(unsigned char)7])), (var_6)))));
                    arr_9 [i_2] [i_2] [i_2] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) >> (((((/* implicit */int) var_3)) + (15))))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)0)) > (((/* implicit */int) var_18))));
}
