/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200492
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
    var_13 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (var_7) : (var_2)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */short) max((var_10), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [9U] [i_1])) - (((/* implicit */int) arr_5 [i_1] [i_1] [i_1]))))) && (((/* implicit */_Bool) var_5)))))));
                arr_7 [i_0] &= ((/* implicit */signed char) ((unsigned short) (unsigned short)65520));
                arr_8 [i_0] [i_1] [i_1] |= ((/* implicit */unsigned short) max((((/* implicit */int) (short)-8408)), (1516911731)));
            }
        } 
    } 
}
