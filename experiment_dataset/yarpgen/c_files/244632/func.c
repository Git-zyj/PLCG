/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244632
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
    var_10 = ((/* implicit */unsigned char) -1712404662);
    var_11 = ((/* implicit */_Bool) 1712404661);
    var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 16917395888861837504ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (20ULL)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) arr_5 [i_0]);
                var_14 = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])), ((+(0ULL))))), (((/* implicit */unsigned long long int) var_8))));
                var_15 += ((/* implicit */long long int) (unsigned char)34);
            }
        } 
    } 
    var_16 = min((((/* implicit */long long int) var_5)), (548087176466880098LL));
}
