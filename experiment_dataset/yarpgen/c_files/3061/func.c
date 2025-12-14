/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3061
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
    var_19 = ((/* implicit */unsigned long long int) var_10);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 8; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_3 [i_0] [i_2]);
                    var_20 = ((/* implicit */long long int) (+((+(((/* implicit */int) (unsigned short)17872))))));
                    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) arr_2 [i_0] [i_1] [i_1]))));
                }
            } 
        } 
    } 
}
