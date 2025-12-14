/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239539
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 19; i_1 += 3) 
        {
            {
                var_12 ^= ((/* implicit */short) ((((unsigned int) arr_3 [i_1 + 4] [i_1 + 1] [i_1 - 1])) << (((((/* implicit */int) ((unsigned char) arr_3 [i_1 - 2] [i_1 - 2] [i_1 - 2]))) - (200)))));
                arr_5 [(unsigned short)12] |= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_3))))))) < (((((/* implicit */unsigned int) ((((/* implicit */int) var_0)) << (((((((/* implicit */int) var_6)) + (4358))) - (15)))))) - (arr_2 [i_0] [i_0] [i_0])))));
                var_13 = ((/* implicit */_Bool) ((((unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_6))))) ^ (arr_2 [i_0] [i_0] [i_1])));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned int) var_10);
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_4))));
}
