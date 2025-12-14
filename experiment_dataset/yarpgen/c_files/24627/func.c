/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24627
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
    var_14 = ((/* implicit */int) var_12);
    /* LoopNest 2 */
    for (unsigned int i_0 = 4; i_0 < 13; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_15 ^= ((/* implicit */int) (-(arr_4 [i_0 + 2] [i_1] [i_1])));
                var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0 - 2])) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) ^ (((/* implicit */int) arr_2 [i_1]))))) : (max((((/* implicit */unsigned int) (unsigned short)64115)), (arr_0 [i_0] [i_1])))))) ? (max((((var_6) << (((/* implicit */int) arr_2 [i_0 + 3])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_1 [i_0]))))))) : (((/* implicit */unsigned long long int) var_2)))))));
                var_17 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_3 [i_0 - 1])))) ? (((/* implicit */long long int) var_8)) : ((+((+(arr_4 [(signed char)6] [i_1] [i_1])))))));
            }
        } 
    } 
}
