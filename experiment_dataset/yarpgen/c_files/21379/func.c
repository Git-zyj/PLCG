/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21379
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
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1 - 1] [i_1 - 1]))) : (34359738367ULL))))));
                    var_15 = ((/* implicit */signed char) (~(((/* implicit */int) arr_2 [i_1 - 1]))));
                    arr_7 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) max((((/* implicit */unsigned int) (+(536870911)))), (4294967295U)))) == (max((((long long int) (signed char)-16)), (arr_3 [i_1 - 1] [i_1 - 1])))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */short) 268435455LL);
}
