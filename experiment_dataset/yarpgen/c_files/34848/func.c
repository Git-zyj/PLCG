/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34848
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
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 329294429U)) && (((/* implicit */_Bool) ((((_Bool) var_3)) ? (var_0) : (((/* implicit */int) var_13)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            for (signed char i_2 = 2; i_2 < 21; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */unsigned char) arr_2 [i_2] [i_1]);
                    var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) max(((short)0), (((/* implicit */short) (unsigned char)197)))))));
                    var_19 -= ((/* implicit */unsigned int) max((var_6), (((/* implicit */unsigned short) (signed char)7))));
                }
            } 
        } 
    } 
}
