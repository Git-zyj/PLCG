/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194697
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
    var_11 = ((/* implicit */unsigned int) ((_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (5152439448395168292ULL))));
    var_12 = ((/* implicit */int) ((signed char) ((long long int) ((int) var_1))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 23; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    arr_9 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((int) ((((int) (_Bool)1)) >> ((((+(((/* implicit */int) var_2)))) + (19621))))));
                    arr_10 [i_1] [i_1] [i_1] [i_2] = ((/* implicit */_Bool) ((unsigned char) ((_Bool) var_7)));
                }
            } 
        } 
    } 
}
