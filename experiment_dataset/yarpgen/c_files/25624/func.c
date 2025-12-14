/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25624
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
    for (unsigned short i_0 = 4; i_0 < 12; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned int i_2 = 2; i_2 < 10; i_2 += 4) 
            {
                {
                    var_10 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 2061751386)) ? (1886691710U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_6)))))))) ? ((+(((((/* implicit */_Bool) -2061751387)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned char)255)))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_5 [i_2 + 4] [i_0 + 2] [i_2 - 1] [i_1]))))));
                    var_11 ^= ((/* implicit */unsigned char) var_0);
                }
            } 
        } 
    } 
    var_12 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) var_5)) : (var_8)));
}
