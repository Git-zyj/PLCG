/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21397
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
    var_12 = ((/* implicit */unsigned char) (+(-45420006)));
    var_13 = ((/* implicit */short) max((((/* implicit */long long int) ((var_11) <= (var_11)))), (max((max((-5005240162415796991LL), (((/* implicit */long long int) (_Bool)1)))), (var_8)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 14; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                arr_4 [i_1] [i_1] = ((/* implicit */short) (((+((+(arr_1 [i_0 + 2]))))) - (((/* implicit */unsigned int) ((/* implicit */int) max(((_Bool)1), ((_Bool)1)))))));
                arr_5 [i_1] [i_0 - 2] [i_1] = (+(((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1]))) / (arr_1 [i_0 - 3]))));
            }
        } 
    } 
}
