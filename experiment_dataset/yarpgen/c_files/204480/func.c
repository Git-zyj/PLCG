/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204480
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
    var_13 = ((/* implicit */signed char) var_6);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    arr_9 [i_0] = ((/* implicit */long long int) arr_5 [i_2] [i_0]);
                    var_14 = ((/* implicit */int) (-(((unsigned int) (+(((/* implicit */int) (unsigned char)140)))))));
                }
            } 
        } 
    } 
}
