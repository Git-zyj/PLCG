/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26648
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_0] [5] = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)12534))))) ? (((17707434249517697355ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((int) var_10))))));
                arr_8 [i_0] = arr_4 [i_1];
                arr_9 [i_1] = ((/* implicit */unsigned char) (~(max((var_4), (var_4)))));
            }
        } 
    } 
    var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((int) var_3)))));
}
