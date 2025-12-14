/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209901
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
    var_17 += ((/* implicit */unsigned long long int) (signed char)82);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 17; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_1] [i_2] = ((/* implicit */int) var_2);
                    var_18 = ((/* implicit */short) arr_4 [i_2 + 2] [i_1] [i_1] [(unsigned char)19]);
                }
            } 
        } 
    } 
}
