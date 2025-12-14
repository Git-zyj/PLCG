/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192220
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
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_18)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) == (var_8)))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (signed char i_1 = 3; i_1 < 20; i_1 += 4) 
        {
            for (unsigned char i_2 = 1; i_2 < 20; i_2 += 4) 
            {
                {
                    var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 595745263U))));
                    var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((var_17), ((signed char)62))))));
                    var_23 = ((/* implicit */_Bool) ((short) (-(((unsigned int) (short)3606)))));
                }
            } 
        } 
    } 
}
