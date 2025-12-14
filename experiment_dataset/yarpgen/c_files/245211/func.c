/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245211
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned short) ((_Bool) var_9));
                arr_8 [i_1] [3ULL] [i_0] = ((/* implicit */unsigned int) var_13);
            }
        } 
    } 
    var_15 -= ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) != (var_2)))) & (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) < (16119126586887819677ULL))))));
}
