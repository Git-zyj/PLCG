/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217657
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((((long long int) var_11)) >> (((arr_5 [i_0]) - (1774928533))))))));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (signed char)115);
            }
        } 
    } 
    var_15 += ((/* implicit */int) 4294967287U);
}
