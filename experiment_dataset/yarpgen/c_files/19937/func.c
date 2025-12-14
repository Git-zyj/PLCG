/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19937
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
    var_13 = ((/* implicit */unsigned int) var_7);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) arr_8 [i_0] [i_1] [i_2] [i_2]);
                    var_15 |= ((/* implicit */unsigned char) var_5);
                    var_16 -= ((/* implicit */unsigned int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_0]))))), (arr_2 [i_1])));
                }
            } 
        } 
    } 
}
