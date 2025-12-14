/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4505
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
    for (unsigned short i_0 = 3; i_0 < 14; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            {
                arr_4 [i_1] = ((/* implicit */unsigned char) (signed char)-24);
                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) ((unsigned short) 13800242890442002650ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_3 [i_0 - 1] [i_1 + 2]), (arr_3 [i_0 + 2] [i_1 - 1]))))) : (288230376151711728LL)));
            }
        } 
    } 
    var_20 |= ((/* implicit */signed char) var_10);
}
