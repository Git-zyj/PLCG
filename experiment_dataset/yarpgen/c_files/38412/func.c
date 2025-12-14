/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38412
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
    var_13 += ((/* implicit */long long int) (+(((unsigned long long int) ((4611686017353646080ULL) ^ (((/* implicit */unsigned long long int) 695707860U)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            {
                arr_6 [i_1 - 1] = var_1;
                var_14 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) arr_2 [i_1])) > (((/* implicit */int) var_2)))))))) & (4611686017353646091ULL)));
                var_15 = ((/* implicit */long long int) ((short) max((((/* implicit */unsigned int) arr_5 [i_1 - 2] [i_1 - 2] [15U])), (max((3392342599U), (((/* implicit */unsigned int) arr_0 [i_0] [i_1])))))));
            }
        } 
    } 
}
