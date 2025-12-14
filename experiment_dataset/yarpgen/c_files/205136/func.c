/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205136
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned int i_1 = 3; i_1 < 10; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 12; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) (~((+(((/* implicit */int) arr_4 [i_2] [i_2 + 1] [i_1 - 2])))))))));
                    var_20 = ((/* implicit */int) ((((/* implicit */int) ((((long long int) 1590227219)) != (((/* implicit */long long int) max((((/* implicit */int) arr_5 [i_0])), (var_3))))))) > (((int) (signed char)(-127 - 1)))));
                    var_21 -= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)255)) || (((/* implicit */_Bool) (unsigned char)207))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */int) max((var_17), ((-9223372036854775807LL - 1LL))));
    var_23 = ((/* implicit */short) ((signed char) var_0));
}
