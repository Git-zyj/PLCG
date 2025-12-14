/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39255
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
    var_10 = ((short) (unsigned char)190);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_11 *= ((/* implicit */signed char) var_6);
                var_12 = ((/* implicit */signed char) (~(((/* implicit */int) ((var_4) <= (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) -4263171025523935876LL)))))))));
                var_13 = ((/* implicit */unsigned char) arr_1 [i_0] [i_0]);
            }
        } 
    } 
}
