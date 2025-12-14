/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227202
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_2 [i_0] [(signed char)6] [i_1]))))) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) > (var_6)));
                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */_Bool) ((((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11)))) + (2147483647))) << (((((((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) + (3393))) - (6)))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)-26855)), (var_9)))) ? (min((((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [i_0])), (var_12))) : (max((((/* implicit */unsigned long long int) arr_2 [i_0] [i_0] [i_1])), (arr_4 [i_0] [i_0]))))) : (max((var_13), (arr_4 [i_0] [i_1]))))))));
                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned long long int) var_6)))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) ((unsigned short) var_17));
    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_10)) ? (var_18) : (((/* implicit */long long int) ((/* implicit */int) var_14))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_3) : (((/* implicit */long long int) 3020067491U))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-121))))) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) var_2)) : (var_17)))))) : (var_6)));
}
