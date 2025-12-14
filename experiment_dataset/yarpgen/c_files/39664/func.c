/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39664
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
    var_11 ^= ((/* implicit */short) min((((/* implicit */long long int) (~(((/* implicit */int) ((short) var_0)))))), (((((/* implicit */_Bool) (unsigned short)45772)) ? (((var_4) ? (-5788280243994245914LL) : (-5788280243994245914LL))) : (((((/* implicit */_Bool) 5788280243994245915LL)) ? (-5788280243994245914LL) : (5788280243994245914LL)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) (~(((((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (-8984268365691012580LL) : (((/* implicit */long long int) arr_5 [i_0])))) - (max((-5788280243994245914LL), (-5788280243994245915LL))))))))));
                var_13 ^= max((arr_3 [i_0] [i_0]), ((+((~(var_9))))));
            }
        } 
    } 
}
