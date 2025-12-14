/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232385
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)143)))))));
                var_18 += ((/* implicit */unsigned char) max(((((((~(((/* implicit */int) var_2)))) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) (unsigned char)42))))))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)120)))))));
            }
        } 
    } 
    var_19 &= var_10;
}
