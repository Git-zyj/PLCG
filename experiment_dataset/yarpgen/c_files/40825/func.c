/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40825
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
    var_18 = ((/* implicit */signed char) ((long long int) var_8));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 15; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((long long int) (~(-762481347)))))));
                    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-55))) : (((unsigned long long int) (unsigned char)166)))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned char) var_1);
    var_22 |= ((/* implicit */unsigned int) var_7);
    var_23 &= ((/* implicit */_Bool) var_17);
}
