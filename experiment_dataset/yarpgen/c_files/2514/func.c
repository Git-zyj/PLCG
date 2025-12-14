/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2514
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
    for (short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) (+(5322660260187792213LL)));
                    var_19 = ((/* implicit */long long int) ((((int) arr_5 [i_2 - 1] [i_1] [i_1])) * (((/* implicit */int) arr_5 [(short)3] [i_1] [i_1]))));
                }
            } 
        } 
    } 
    var_20 = var_2;
}
