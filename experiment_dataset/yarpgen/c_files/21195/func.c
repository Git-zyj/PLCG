/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21195
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
    var_15 = ((long long int) ((((/* implicit */_Bool) ((5070252488000969602ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)27316)))))) ? (((((/* implicit */int) var_3)) % (((/* implicit */int) var_0)))) : (((/* implicit */int) (unsigned short)38219))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                var_16 = (i_0 % 2 == zero) ? (((/* implicit */unsigned long long int) ((((arr_3 [i_0] [i_1]) + (9223372036854775807LL))) << ((((~(((/* implicit */int) arr_0 [i_0])))) - (79)))))) : (((/* implicit */unsigned long long int) ((((((arr_3 [i_0] [i_1]) - (9223372036854775807LL))) + (9223372036854775807LL))) << ((((~(((/* implicit */int) arr_0 [i_0])))) - (79))))));
                arr_4 [i_0] [i_1] [i_1] = ((/* implicit */signed char) ((arr_1 [i_0 - 1] [i_0 + 1]) / ((-(arr_1 [i_0 - 1] [i_0 + 1])))));
            }
        } 
    } 
    var_17 = (+((~((~(((/* implicit */int) (unsigned short)27329)))))));
}
