/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2712
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
    var_18 &= ((/* implicit */short) ((unsigned long long int) var_3));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_12))))))))) * (max((((var_3) - (((/* implicit */unsigned int) ((/* implicit */int) var_14))))), (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_3)))))));
                var_20 = ((/* implicit */unsigned long long int) var_4);
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_12))));
    var_22 = ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10)))))) >> (((/* implicit */int) var_11))));
}
