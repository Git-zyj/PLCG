/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199664
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
    var_19 = ((/* implicit */short) var_4);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_20 = ((((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_1])) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_1]))))) * (((unsigned int) 18446744073709551615ULL)));
                arr_8 [i_0] [i_0] &= ((/* implicit */int) ((((1368020963971746619LL) / (-1LL))) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
            }
        } 
    } 
}
