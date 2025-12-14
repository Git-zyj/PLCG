/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214647
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) arr_2 [i_0]);
        var_12 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) 502210055887253066ULL))) ? (9059245935064311788ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0])))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */short) min((min((((/* implicit */int) arr_3 [i_1])), (min((((/* implicit */int) arr_2 [i_1])), (-1945761137))))), (((/* implicit */int) arr_3 [i_1]))));
        var_13 = ((/* implicit */unsigned short) ((unsigned long long int) (!(((((/* implicit */_Bool) 2437715531U)) || (((/* implicit */_Bool) arr_6 [i_1])))))));
    }
    var_14 = ((/* implicit */long long int) max((((/* implicit */unsigned int) min((((/* implicit */short) var_5)), (((short) (short)13221))))), (max((((/* implicit */unsigned int) max(((unsigned short)54443), (((/* implicit */unsigned short) (_Bool)1))))), (max((((/* implicit */unsigned int) (_Bool)1)), (2791425623U)))))));
}
