/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232854
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
    var_19 = ((/* implicit */unsigned short) var_3);
    var_20 = var_12;
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */unsigned int) arr_8 [i_0] [i_1 - 1] [i_2] [(unsigned short)1]);
                    var_22 = ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) - (3680359234U)))) ? (1023) : (((/* implicit */int) (unsigned short)4095))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) var_6);
}
