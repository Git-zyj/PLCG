/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23217
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
    var_14 = ((/* implicit */long long int) var_2);
    var_15 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 7; i_1 += 1) 
        {
            {
                var_16 &= ((/* implicit */signed char) ((((((((/* implicit */_Bool) arr_4 [(signed char)6])) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) arr_0 [i_0] [(short)0])))) <= (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned int) arr_0 [2] [i_1])) : (arr_1 [i_0]))))) ? (((/* implicit */int) ((((/* implicit */int) ((arr_0 [i_0] [i_1]) != (arr_0 [8ULL] [(unsigned short)6])))) >= (((arr_4 [i_0]) ^ (((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))))))) : (min((235915727), (((/* implicit */int) (unsigned char)26))))));
                var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1 + 1] [i_1 + 3] [i_1 + 3])) ? (((/* implicit */int) arr_3 [i_1 + 3] [i_1 - 2])) : (((/* implicit */int) arr_2 [i_1] [i_1] [i_1 + 3]))))) ? (((/* implicit */int) arr_3 [i_0] [i_1 + 3])) : (arr_4 [i_0]));
            }
        } 
    } 
}
