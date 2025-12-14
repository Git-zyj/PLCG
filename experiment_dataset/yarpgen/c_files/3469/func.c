/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3469
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
    var_14 = ((/* implicit */short) (+(((/* implicit */int) var_9))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_15 ^= ((/* implicit */unsigned short) (unsigned char)229);
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 20; i_2 += 3) 
            {
                {
                    var_16 *= ((/* implicit */signed char) max((4408279077069487097ULL), (((/* implicit */unsigned long long int) (unsigned char)255))));
                    var_17 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)226)) > (((/* implicit */int) (unsigned char)255))));
                }
            } 
        } 
    }
}
