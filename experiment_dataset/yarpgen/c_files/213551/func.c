/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213551
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
    var_19 ^= ((/* implicit */long long int) ((unsigned long long int) var_5));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_20 ^= ((/* implicit */short) (~((+(var_3)))));
                arr_6 [i_0] [i_0] = ((/* implicit */short) (+(var_11)));
                arr_7 [i_0] = ((/* implicit */long long int) ((int) ((unsigned int) (short)8176)));
                var_21 = var_18;
            }
        } 
    } 
}
