/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43825
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_18 = ((unsigned short) max((((/* implicit */unsigned int) min((((/* implicit */unsigned char) var_6)), ((unsigned char)244)))), ((~(169564589U)))));
                    var_19 &= ((/* implicit */unsigned short) arr_3 [(unsigned char)14]);
                }
            } 
        } 
    } 
    var_20 |= var_15;
}
