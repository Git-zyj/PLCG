/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223686
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 15; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_10 [i_1] = ((/* implicit */_Bool) arr_9 [i_2 + 1] [i_2] [i_2] [i_0 + 2]);
                    var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) var_8))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) var_3))));
    var_17 = ((/* implicit */long long int) ((unsigned short) ((max((((/* implicit */int) var_2)), (var_6))) <= (((/* implicit */int) (signed char)106)))));
}
