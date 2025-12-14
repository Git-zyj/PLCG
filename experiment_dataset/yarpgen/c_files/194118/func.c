/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194118
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 7; i_1 += 2) 
        {
            {
                arr_5 [i_1] = ((/* implicit */short) var_8);
                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_4 [i_1])) ? (arr_3 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)46431))))))))) ? (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_1 - 2]))))) & (((/* implicit */int) ((var_15) < (((/* implicit */unsigned long long int) arr_4 [i_0])))))))) : (((((/* implicit */_Bool) arr_1 [0U])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1 + 3]))) : (arr_4 [i_1 + 4])))));
            }
        } 
    } 
    var_20 = ((/* implicit */int) min((max((((/* implicit */long long int) var_12)), (var_11))), (((/* implicit */long long int) var_10))));
}
