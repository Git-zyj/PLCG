/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203189
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
    var_19 = ((/* implicit */unsigned char) var_17);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (int i_1 = 4; i_1 < 16; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned char) arr_2 [i_0] [4LL]);
                var_21 = ((/* implicit */long long int) max((var_21), (max((var_14), (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0])) >> (((arr_0 [i_0]) + (8073977678021913129LL))))))))));
                var_22 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_1 + 3] [i_1 + 3])) / (((/* implicit */int) arr_3 [i_1 - 4] [i_1 - 3]))))) ? (((/* implicit */int) arr_3 [i_1] [i_1 - 4])) : (((((/* implicit */_Bool) arr_3 [(unsigned char)6] [i_1 + 1])) ? (((/* implicit */int) arr_3 [i_1] [i_1 + 1])) : (((/* implicit */int) var_0))))));
                var_23 -= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) max(((~(arr_0 [i_0]))), (((/* implicit */long long int) min((arr_1 [(signed char)7]), (((/* implicit */unsigned short) arr_3 [(unsigned char)11] [i_1])))))))), ((-(min((((/* implicit */unsigned long long int) arr_1 [i_0])), (arr_5 [i_0] [i_1 - 1] [i_1])))))));
            }
        } 
    } 
    var_24 = ((/* implicit */signed char) var_9);
    var_25 ^= ((/* implicit */unsigned short) var_1);
}
