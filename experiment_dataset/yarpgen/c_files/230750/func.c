/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230750
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
    for (long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 10; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */unsigned long long int) max((var_12), (((min((((/* implicit */unsigned long long int) arr_0 [i_1 - 4] [i_1 - 1])), ((~(8599848603056129792ULL))))) >> (((min((var_8), (((((/* implicit */unsigned long long int) 8191527778368560795LL)) | (var_9))))) - (8642398742802022124ULL)))))));
                    arr_6 [i_2] [i_1] [i_1] = ((/* implicit */signed char) ((5647017488868724253LL) | (((/* implicit */long long int) ((/* implicit */int) (signed char)31)))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) ((long long int) 2305843000623759360ULL));
}
