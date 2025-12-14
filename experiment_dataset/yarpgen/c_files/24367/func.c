/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24367
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
    var_12 = ((/* implicit */unsigned char) var_7);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */long long int) ((unsigned short) ((_Bool) arr_0 [i_0])));
                var_13 = ((/* implicit */unsigned char) -4159441764869806320LL);
                var_14 = ((/* implicit */unsigned long long int) (signed char)-62);
            }
        } 
    } 
}
