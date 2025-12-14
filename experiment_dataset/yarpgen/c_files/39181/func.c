/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39181
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
    var_20 = var_1;
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 18; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_7 [i_1] = ((/* implicit */signed char) max((((/* implicit */short) arr_6 [i_2] [i_0])), (max((((/* implicit */short) ((unsigned char) arr_1 [i_2]))), (min((var_2), (((/* implicit */short) arr_6 [i_0] [i_2]))))))));
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((+(((/* implicit */int) (short)-7442)))), (((/* implicit */int) arr_6 [i_0] [i_1]))))) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((var_12) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1]))))))))));
                    var_22 = ((max((max((arr_0 [i_0]), (((/* implicit */long long int) arr_5 [i_1])))), (((((/* implicit */_Bool) arr_4 [(short)2] [i_1] [9U] [i_2])) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (short)7446))))))) - (((/* implicit */long long int) ((arr_6 [i_2] [i_0 + 3]) ? (((/* implicit */int) arr_6 [i_1] [i_0 - 1])) : (((/* implicit */int) var_18))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_17), (((/* implicit */short) ((unsigned char) var_14))))))) : (max((((/* implicit */unsigned int) var_17)), (((((/* implicit */unsigned int) ((/* implicit */int) var_18))) / (var_9)))))));
    var_24 = ((/* implicit */_Bool) (~(1544152326U)));
}
