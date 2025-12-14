/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245689
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
    for (long long int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_12 -= ((/* implicit */unsigned short) (-((-(var_3)))));
                var_13 = ((/* implicit */long long int) ((max((((/* implicit */int) max((((/* implicit */unsigned short) (signed char)125)), ((unsigned short)65472)))), (((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) var_10)))))) >= (8388607)));
            }
        } 
    } 
    var_14 |= ((/* implicit */signed char) max((((/* implicit */int) (unsigned short)65472)), ((~(((((/* implicit */int) var_10)) | (((/* implicit */int) (_Bool)1))))))));
}
