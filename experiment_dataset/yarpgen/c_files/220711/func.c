/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220711
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 21; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_17 *= ((/* implicit */signed char) 3792108896U);
                    var_18 = ((/* implicit */unsigned char) var_13);
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */signed char) var_8);
}
