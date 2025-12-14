/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38692
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
    var_15 = ((/* implicit */unsigned long long int) var_9);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            {
                var_16 |= ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) arr_1 [i_1] [i_1 + 2])) ? (((/* implicit */int) min((arr_1 [i_0 + 1] [i_1]), ((unsigned char)224)))) : (arr_4 [i_0 - 2]))));
                arr_5 [i_0] [16] [i_0] = ((/* implicit */short) ((((int) var_7)) << ((((~(arr_4 [i_0 + 1]))) + (101881230)))));
            }
        } 
    } 
}
