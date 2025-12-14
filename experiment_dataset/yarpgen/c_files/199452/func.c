/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199452
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
    var_18 &= ((/* implicit */_Bool) max((((/* implicit */long long int) ((11585151532541092157ULL) <= (6861592541168459435ULL)))), (max((((/* implicit */long long int) (short)-1)), (min((((/* implicit */long long int) (unsigned short)52992)), (-6503565053872227868LL)))))));
    var_19 = (-(min((var_8), (((/* implicit */unsigned long long int) min((((/* implicit */int) var_5)), (var_3)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_20 *= (((~(2852395570223745427ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))));
                var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) min((arr_4 [i_0] [i_0]), (((/* implicit */unsigned char) arr_0 [i_0] [0])))))));
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) (-(var_16)));
}
