/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196789
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
    var_13 = ((/* implicit */unsigned int) (signed char)0);
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 19; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    var_14 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_4))));
                    var_15 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_1] [i_1 - 1]))))) ? (((/* implicit */int) var_12)) : (((((/* implicit */_Bool) arr_1 [(unsigned char)2])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8))))));
                }
            } 
        } 
    } 
}
