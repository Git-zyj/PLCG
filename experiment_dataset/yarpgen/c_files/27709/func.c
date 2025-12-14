/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27709
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
    var_13 = ((/* implicit */signed char) 0ULL);
    var_14 *= ((/* implicit */signed char) max((3428921517014556876ULL), (((/* implicit */unsigned long long int) (unsigned short)34280))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 19; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((signed char) arr_3 [i_0 - 1] [i_1 - 2])))));
                    var_16 -= arr_2 [i_0] [(signed char)14] [(unsigned short)14];
                }
            } 
        } 
    } 
}
