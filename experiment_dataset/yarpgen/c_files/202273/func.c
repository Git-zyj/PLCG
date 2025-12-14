/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202273
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
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 14; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)95))))) - (var_6))))));
                var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((((/* implicit */int) (signed char)95)) >> (((3319064125U) - (3319064100U))))))));
                var_18 &= ((/* implicit */unsigned short) (signed char)-6);
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((signed char)-12), ((signed char)84)))) ? (((/* implicit */unsigned long long int) 1192576487580060113LL)) : (((((/* implicit */_Bool) 6034826040331517923LL)) ? (3410061191030691310ULL) : (((/* implicit */unsigned long long int) 1022999319521714137LL))))));
}
