/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238669
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
    for (int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_10 = ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1))));
                var_11 = ((/* implicit */long long int) ((unsigned char) arr_2 [i_1] [i_0] [i_0]));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned char) ((18446744073709551600ULL) << (((793020616U) - (793020591U)))));
    var_13 = ((/* implicit */unsigned long long int) (unsigned char)112);
}
