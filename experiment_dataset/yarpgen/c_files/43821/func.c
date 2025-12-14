/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43821
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
    for (short i_0 = 4; i_0 < 18; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */long long int) (+(min((((/* implicit */unsigned int) ((int) var_15))), (max((var_9), (((/* implicit */unsigned int) (unsigned short)30511))))))));
                var_20 = ((/* implicit */unsigned int) arr_1 [i_0 + 3] [i_1]);
            }
        } 
    } 
    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (unsigned char)90))));
}
