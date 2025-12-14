/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32664
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
    var_11 = ((/* implicit */unsigned long long int) ((min((-16LL), (31LL))) < (((((((/* implicit */int) (unsigned char)0)) <= (((/* implicit */int) (_Bool)0)))) ? (max((-38LL), (((/* implicit */long long int) (unsigned short)65525)))) : (((/* implicit */long long int) var_4))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                arr_7 [1] = ((/* implicit */int) 21U);
                arr_8 [i_0] [i_0] = ((/* implicit */int) (unsigned char)249);
            }
        } 
    } 
}
