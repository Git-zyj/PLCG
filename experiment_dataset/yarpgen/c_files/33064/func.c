/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33064
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
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        for (unsigned int i_1 = 4; i_1 < 15; i_1 += 3) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_16 &= max((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)53281)), (2643683207307339120ULL)))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (15803060866402212495ULL))) : (((/* implicit */unsigned long long int) 163612985564261267LL)))), (max((((((/* implicit */_Bool) var_11)) ? (var_0) : (13032882117271992478ULL))), (((/* implicit */unsigned long long int) 9223372036854775799LL)))));
                    var_17 = ((((/* implicit */_Bool) ((13032882117271992478ULL) >> (((arr_5 [i_2 - 1] [i_1 + 2] [i_0 - 2] [i_0]) - (1755406426344886760LL)))))) ? (max((arr_5 [i_2 - 1] [i_1 - 4] [i_0 - 2] [i_0]), (((/* implicit */long long int) arr_4 [i_1 - 1] [i_0 - 1] [i_0])))) : ((~(-8302775136316481587LL))));
                    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) -8904150459887816039LL)) ? (min((max((5413861956437559116ULL), (((/* implicit */unsigned long long int) (_Bool)1)))), (5413861956437559137ULL))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_4 [i_0] [i_1] [i_0])))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) 2783886548503048240LL)) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_15)) - (((/* implicit */int) ((_Bool) var_11)))))) : (min((min((var_11), (((/* implicit */unsigned int) (unsigned short)16624)))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_15)))))))));
}
