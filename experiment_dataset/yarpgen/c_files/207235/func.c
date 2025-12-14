/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207235
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
    var_20 = ((/* implicit */_Bool) (~(((/* implicit */int) var_3))));
    var_21 |= ((/* implicit */unsigned long long int) ((var_9) / (max(((-(((/* implicit */int) var_7)))), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) var_7))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_0] [(signed char)14] = ((/* implicit */unsigned char) min(((((~(((/* implicit */int) var_7)))) ^ (arr_3 [i_1] [i_0] [i_0]))), ((~(((((/* implicit */_Bool) arr_3 [(unsigned char)8] [i_0] [(_Bool)1])) ? (((/* implicit */int) arr_0 [i_0] [i_1])) : (((/* implicit */int) var_6))))))));
                arr_5 [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_0 [i_0] [i_1])) && (((/* implicit */_Bool) max((((/* implicit */short) arr_0 [i_0] [i_1])), (var_6)))))) && (((/* implicit */_Bool) max((((/* implicit */int) var_0)), (max((((/* implicit */int) var_18)), (arr_1 [i_0]))))))));
            }
        } 
    } 
}
