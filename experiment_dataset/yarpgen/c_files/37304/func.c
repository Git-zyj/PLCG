/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37304
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
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_6))));
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)177)) && (((/* implicit */_Bool) var_12))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            {
                var_19 |= ((/* implicit */unsigned short) var_2);
                var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) var_0))));
                arr_5 [i_1 - 1] = ((/* implicit */unsigned int) (~(549621596160ULL)));
            }
        } 
    } 
}
