/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209271
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
    for (long long int i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            for (long long int i_2 = 2; i_2 < 16; i_2 += 3) 
            {
                {
                    var_20 *= var_5;
                    var_21 = ((/* implicit */short) arr_0 [i_2 + 1]);
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned int) (+(min((6447395164545399569ULL), (((/* implicit */unsigned long long int) var_8))))));
}
