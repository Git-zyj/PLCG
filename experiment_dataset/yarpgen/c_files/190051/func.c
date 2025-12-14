/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190051
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = (unsigned char)49;
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] = var_8;
                    var_16 = (unsigned char)37;
                }
            } 
        } 
    }
    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((var_1) ? (((var_1) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_12)))) : (((/* implicit */int) var_11)))))));
}
