/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47571
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
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) ((min((var_0), (((/* implicit */long long int) var_4)))) <= (((/* implicit */long long int) ((/* implicit */int) var_8)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */_Bool) (-(max((arr_5 [(unsigned short)1] [i_1 - 1] [i_1]), (((/* implicit */int) var_7))))));
                var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) arr_1 [i_1]))));
            }
        } 
    } 
    var_16 = ((/* implicit */short) var_1);
    var_17 = ((unsigned char) var_7);
}
