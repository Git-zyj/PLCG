/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28242
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
    var_15 = ((/* implicit */unsigned int) var_3);
    var_16 = ((/* implicit */_Bool) var_8);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            {
                var_17 &= ((((/* implicit */_Bool) arr_2 [i_1 - 1] [i_1])) ? (((var_3) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_5)))) : (((((/* implicit */int) (unsigned char)242)) ^ (((/* implicit */int) ((unsigned short) var_5))))));
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) 511);
                arr_7 [i_0] [i_1] [(_Bool)1] |= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)10)) * (((/* implicit */int) (unsigned char)19))));
                var_18 = min((((/* implicit */unsigned int) arr_4 [i_1] [i_1] [i_1])), (min((((unsigned int) (unsigned char)240)), (((unsigned int) (unsigned short)40481)))));
            }
        } 
    } 
}
