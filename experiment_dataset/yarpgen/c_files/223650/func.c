/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223650
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
    var_18 = ((/* implicit */unsigned char) var_16);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned int i_1 = 4; i_1 < 11; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_1] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) 6363387)) ? (((/* implicit */unsigned int) -6363380)) : (2636137956U)))));
                    var_19 = ((/* implicit */_Bool) (~(((/* implicit */int) var_9))));
                }
            } 
        } 
    } 
}
