/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224039
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
    var_11 = ((/* implicit */long long int) (unsigned short)886);
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */signed char) arr_7 [i_2] [i_0 + 1] [i_0 + 1] [i_0 + 1]);
                    var_13 = ((/* implicit */_Bool) min((((/* implicit */int) var_4)), (var_1)));
                }
            } 
        } 
    } 
}
