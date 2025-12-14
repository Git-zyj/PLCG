/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5390
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
    var_16 = ((/* implicit */unsigned char) var_14);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned short) (_Bool)1);
                var_18 -= ((/* implicit */short) (((+(((/* implicit */int) min((arr_4 [i_1] [i_0]), (arr_4 [i_0] [i_0])))))) < ((+(arr_3 [i_0])))));
            }
        } 
    } 
}
