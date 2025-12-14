/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39017
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
    var_14 = ((/* implicit */short) var_12);
    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) max((((/* implicit */int) var_8)), (((int) var_6)))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */_Bool) min((((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) & (var_3)))), (((/* implicit */short) ((unsigned char) (short)127)))));
                    var_17 = var_9;
                    arr_8 [i_0] = ((/* implicit */short) (_Bool)0);
                }
            } 
        } 
    } 
}
