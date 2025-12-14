/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248691
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
    var_12 *= ((/* implicit */unsigned short) var_5);
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 ^= ((/* implicit */signed char) (short)1397);
                var_14 += ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) 1715004855871467553ULL)) ? (((/* implicit */int) (unsigned char)77)) : (((/* implicit */int) (short)-1386))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)47)) & (((/* implicit */int) (unsigned char)198))))), (min((min((((/* implicit */long long int) (short)1404)), (0LL))), (((/* implicit */long long int) var_3))))));
}
