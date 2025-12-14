/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26352
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
    var_12 |= 913644187;
    var_13 = ((/* implicit */unsigned long long int) (unsigned char)252);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 20; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) 4294967295U))));
                var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) (unsigned short)10479))));
                var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) (unsigned short)55058))));
                var_17 -= ((/* implicit */signed char) (unsigned char)123);
            }
        } 
    } 
}
