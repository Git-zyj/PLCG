/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46342
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
    for (unsigned int i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    var_20 ^= ((/* implicit */signed char) (short)8057);
                    arr_10 [i_0] [i_1] [i_2] = ((/* implicit */short) (_Bool)0);
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned int) max((var_1), (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (((short) var_2)))))));
}
