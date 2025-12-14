/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190607
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
        for (unsigned char i_1 = 4; i_1 < 14; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1 + 1] [i_1 - 3])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_11))))) ? (arr_2 [i_1 + 1] [i_1 - 2]) : ((~(arr_2 [i_1 - 2] [i_1 - 4])))));
                var_12 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)15360)) ? (((/* implicit */int) (unsigned char)74)) : (var_9))))))) >= (((/* implicit */int) ((unsigned char) (unsigned char)184)))));
            }
        } 
    } 
    var_13 = ((/* implicit */int) (unsigned char)182);
    var_14 = var_9;
}
