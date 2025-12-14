/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219254
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
    for (short i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                arr_4 [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))) * (((((/* implicit */_Bool) 8757828948975970109LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (8757828948975970109LL))))))));
                arr_5 [i_0] [i_0] = ((/* implicit */_Bool) var_9);
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) min((-737542862), ((-(max((((/* implicit */int) (unsigned char)102)), (var_5)))))));
}
