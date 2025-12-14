/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245695
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
    for (short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */short) 15585801108021075990ULL);
                var_11 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) (_Bool)0))));
            }
        } 
    } 
    var_12 = ((/* implicit */long long int) min((((/* implicit */int) var_4)), ((-((-(((/* implicit */int) (_Bool)1))))))));
}
