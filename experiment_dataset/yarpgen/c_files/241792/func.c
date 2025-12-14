/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241792
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
    var_12 = ((/* implicit */unsigned long long int) var_11);
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 21; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                arr_4 [(signed char)17] [i_1] [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) 0ULL)) ? (0ULL) : (18446744073709551610ULL))) + (((((/* implicit */_Bool) arr_1 [i_0 + 3])) ? (arr_1 [i_0 + 2]) : (((/* implicit */unsigned long long int) arr_3 [i_0 - 2] [i_0] [i_1]))))));
                var_13 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((arr_1 [1ULL]) == (((/* implicit */unsigned long long int) arr_3 [i_0 + 1] [i_0 + 1] [i_0 + 1])))))) * ((-(var_6)))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned char) ((var_4) << (((/* implicit */int) ((((/* implicit */int) var_7)) == (((/* implicit */int) max((var_9), (var_10)))))))));
    var_15 = ((/* implicit */short) var_4);
}
