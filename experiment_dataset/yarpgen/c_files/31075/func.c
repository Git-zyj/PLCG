/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31075
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 13; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned int) min((var_13), (959665941U)));
                    arr_10 [(short)6] [i_1] [(_Bool)1] [i_1] = ((/* implicit */unsigned int) arr_9 [0ULL] [i_1] [i_1]);
                    var_14 = ((/* implicit */_Bool) arr_9 [i_2] [i_2] [i_2]);
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) var_10))));
    var_16 = ((/* implicit */unsigned int) min((var_0), (((/* implicit */int) var_2))));
}
