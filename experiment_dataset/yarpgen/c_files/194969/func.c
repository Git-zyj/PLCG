/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194969
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
    var_11 = ((/* implicit */unsigned char) var_4);
    var_12 = var_6;
    var_13 = ((/* implicit */unsigned char) var_3);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)254))))), (((unsigned int) ((arr_4 [i_0]) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (signed char)-8)))))));
                var_15 = ((/* implicit */int) max((var_15), (arr_0 [i_0])));
            }
        } 
    } 
}
