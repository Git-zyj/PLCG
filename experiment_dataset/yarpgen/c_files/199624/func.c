/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199624
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                arr_6 [i_0] [2U] [2U] &= ((/* implicit */short) ((((long long int) ((unsigned char) -5187877777813727647LL))) ^ (((/* implicit */long long int) ((unsigned int) (unsigned char)255)))));
                var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) var_11))));
                var_19 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 5924317263420723023LL)))) ^ (((144044819331678208LL) & (5924317263420723023LL)))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) max((var_20), (var_17)));
}
