/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243375
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
    var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) var_6))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */short) var_4);
                arr_7 [i_0] [i_0] = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_1])) : (((/* implicit */int) var_11)))) + (2147483647))) << (0U)));
                arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned char) (((((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_2 [i_0]))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1]))))));
                arr_9 [i_0] [i_0] = ((/* implicit */unsigned int) var_12);
                arr_10 [i_0] = var_6;
            }
        } 
    } 
    var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) min((((/* implicit */unsigned int) var_5)), (var_4))))));
}
