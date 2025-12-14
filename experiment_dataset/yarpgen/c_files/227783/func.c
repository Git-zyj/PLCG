/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227783
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
    var_16 &= ((/* implicit */unsigned char) min((((/* implicit */int) (short)32767)), (1341080138)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23; i_0 += 4) 
    {
        for (unsigned char i_1 = 3; i_1 < 21; i_1 += 4) 
        {
            {
                var_17 ^= ((unsigned int) min((((/* implicit */short) arr_0 [i_0 + 1])), (arr_4 [i_1 + 3] [i_1 + 4] [i_1 + 1])));
                var_18 = ((/* implicit */unsigned short) max((var_18), (((unsigned short) min((arr_2 [i_1] [i_1 + 4] [i_1 + 4]), (((/* implicit */unsigned short) var_11)))))));
            }
        } 
    } 
    var_19 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_5))));
}
