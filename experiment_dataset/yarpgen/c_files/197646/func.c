/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197646
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
    var_20 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */int) ((_Bool) (short)6473))), ((-(((/* implicit */int) var_0))))))) ? (var_15) : (((/* implicit */int) var_13))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned short i_2 = 2; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_13))) / (min((var_7), (((/* implicit */long long int) arr_7 [i_2 + 1]))))));
                    var_21 -= max((max((((/* implicit */unsigned long long int) arr_7 [i_2 + 3])), (var_4))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_2 + 2])) || (((/* implicit */_Bool) arr_7 [i_2 + 3]))))));
                }
            } 
        } 
    } 
    var_22 |= ((/* implicit */int) var_16);
}
