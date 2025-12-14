/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204113
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
    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) var_15))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */short) var_2);
                arr_8 [i_1] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min(((-(((/* implicit */int) (signed char)32)))), (((/* implicit */int) (signed char)25)))))));
            }
        } 
    } 
    var_18 = ((/* implicit */short) ((unsigned short) (~(((((/* implicit */_Bool) (short)-8225)) ? (((/* implicit */int) (short)8225)) : (((/* implicit */int) (signed char)-13)))))));
}
