/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217046
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
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 8; i_1 += 2) 
        {
            {
                arr_6 [(short)1] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) (short)21753)) > ((~(((/* implicit */int) (signed char)-40)))))))));
                var_17 += ((/* implicit */unsigned char) (~(((((/* implicit */long long int) ((/* implicit */int) var_6))) & (arr_5 [i_1 + 2] [i_1 - 1] [i_1 + 2])))));
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) var_3);
}
