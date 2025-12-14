/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54143
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
    var_17 = ((/* implicit */unsigned long long int) var_0);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) % (var_9)))) >= (((11751350573495861262ULL) | (((/* implicit */unsigned long long int) 920688261658866673LL))))));
                    arr_11 [i_0] [i_1] [i_0] = ((/* implicit */int) var_2);
                }
            } 
        } 
    } 
}
