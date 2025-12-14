/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214090
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
    var_20 = ((/* implicit */_Bool) var_3);
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */long long int) (((-(arr_3 [i_0] [(_Bool)1] [i_0 - 1]))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((arr_1 [i_0 - 2]) < (arr_1 [i_1])))))));
                var_22 = ((/* implicit */unsigned int) (((+(arr_1 [i_0 + 2]))) != (((arr_1 [i_0 + 1]) / (arr_1 [i_0 - 1])))));
            }
        } 
    } 
    var_23 += ((/* implicit */unsigned short) var_13);
}
