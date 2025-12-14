/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42345
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
    for (unsigned long long int i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 10; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [7] [i_1] [i_0] = ((/* implicit */int) (+(5682555827499476113LL)));
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned char) var_18);
}
