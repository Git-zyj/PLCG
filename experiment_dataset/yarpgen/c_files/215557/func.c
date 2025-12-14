/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215557
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
    var_10 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_5))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */unsigned int) min((arr_3 [9U] [9U] [i_0]), (arr_3 [i_0] [i_1] [i_0])));
                var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) min((((unsigned int) (signed char)72)), (((/* implicit */unsigned int) (signed char)8)))))));
                arr_4 [i_0] = ((/* implicit */unsigned int) arr_1 [i_0]);
            }
        } 
    } 
    var_13 += ((/* implicit */int) min((13U), (((/* implicit */unsigned int) (-(((/* implicit */int) min((var_6), ((signed char)0)))))))));
}
