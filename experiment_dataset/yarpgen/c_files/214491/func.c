/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214491
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
    var_12 = ((/* implicit */unsigned short) (~(var_6)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned int) (unsigned char)254);
                var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) (unsigned char)4))));
                var_15 ^= ((/* implicit */_Bool) var_2);
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */short) min((var_3), (((/* implicit */signed char) (_Bool)1))))), (((short) var_10))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((_Bool) ((var_5) | (((/* implicit */long long int) ((/* implicit */int) var_1)))))))));
    var_17 = ((/* implicit */_Bool) ((short) max(((-(((/* implicit */int) var_3)))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)250)))))));
    var_18 = ((/* implicit */unsigned char) (-(var_9)));
}
