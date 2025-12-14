/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242175
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
    var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) var_2))));
    var_15 = var_1;
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */int) (unsigned char)90);
                arr_6 [i_0] = ((/* implicit */signed char) ((2119974764) < (((((/* implicit */_Bool) (short)8969)) ? (((((/* implicit */_Bool) var_12)) ? (2147483647) : (((/* implicit */int) (short)-8969)))) : ((((_Bool)0) ? (((/* implicit */int) var_9)) : (-287997633)))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) (~((-(((/* implicit */int) (short)8969))))));
}
