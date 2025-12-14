/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225539
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
    for (int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 16; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) arr_3 [1U] [1U] [i_0]);
                    var_19 = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) arr_3 [i_2 + 1] [i_2 + 2] [i_2 + 2])) ? (((/* implicit */int) arr_3 [i_2 + 2] [i_2 + 2] [i_2 + 3])) : (((/* implicit */int) arr_3 [i_2 + 1] [i_2 - 1] [i_2 + 3])))));
                    var_20 |= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_4 [16ULL] [i_2 - 1])) ? (((/* implicit */unsigned int) arr_4 [i_1] [i_2 + 1])) : (var_13))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2 - 1] [i_0] [i_0])))));
                    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) var_0))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) var_7))));
}
