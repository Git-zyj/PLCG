/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220863
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
    for (short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)9))));
                var_12 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_0])) || (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)65535)))))));
            }
        } 
    } 
    var_13 = ((/* implicit */_Bool) ((14300825149179617666ULL) >> (((min(((~(896954111))), (((/* implicit */int) ((781228519U) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)-21392)))))))) + (896954169)))));
    var_14 = ((/* implicit */short) var_7);
}
