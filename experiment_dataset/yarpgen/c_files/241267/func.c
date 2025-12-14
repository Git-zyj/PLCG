/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241267
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
    var_15 = ((_Bool) (-(((((/* implicit */_Bool) var_9)) ? (var_6) : (var_13)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1 - 1] [i_1 - 1])) ? (arr_1 [i_0] [i_1 - 1]) : (arr_1 [i_0] [i_1 - 1])))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)233))))) : (arr_1 [i_0] [i_1 - 1])));
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */long long int) ((((var_12) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_3 [i_0] [i_0])))) : (max((((/* implicit */unsigned long long int) arr_0 [(unsigned char)2])), (arr_3 [i_0] [(_Bool)1]))))) << (((((/* implicit */_Bool) ((var_12) ? (arr_3 [i_1 - 1] [i_0]) : (((/* implicit */unsigned long long int) arr_0 [i_1]))))) ? (((/* implicit */int) ((_Bool) arr_1 [i_0] [i_0]))) : (((/* implicit */int) var_12))))));
                var_16 += ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_0 [i_1 - 1]) : (arr_4 [i_0] [i_1] [(unsigned short)13]))))) ? ((~(((var_3) ? (((/* implicit */long long int) arr_0 [i_0])) : (var_0))))) : (min((min((var_4), (((/* implicit */long long int) arr_0 [i_0])))), (((/* implicit */long long int) (~(arr_0 [i_0]))))))));
                var_17 = ((/* implicit */int) arr_3 [i_0] [i_0]);
            }
        } 
    } 
}
