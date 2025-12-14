/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216639
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
    var_11 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)127))))) << (((((var_10) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_3))) - (2307256677U))))))));
    var_12 = ((/* implicit */signed char) var_9);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) (~((~(var_3))))));
                var_13 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_9))));
                var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((long long int) var_0))) ? (((((/* implicit */unsigned long long int) var_8)) & (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)40464)) && (((/* implicit */_Bool) -6700250808438572797LL)))))))))))));
                var_15 = ((/* implicit */signed char) (unsigned short)504);
            }
        } 
    } 
}
