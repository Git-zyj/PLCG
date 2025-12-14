/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241206
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
    var_11 = ((/* implicit */unsigned short) var_2);
    var_12 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((min((var_4), (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_6))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_4)));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_0 [i_0 + 3])) ? (((/* implicit */unsigned long long int) arr_6 [i_0 + 3] [i_0 + 1] [i_0 + 3])) : (arr_0 [i_0 + 3]))) / (((/* implicit */unsigned long long int) (-(((/* implicit */int) max((arr_1 [i_1]), (((/* implicit */unsigned char) var_8))))))))));
                arr_8 [i_1] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1]))) : (arr_4 [i_0] [i_1] [i_0])))) ? (((/* implicit */unsigned long long int) min((arr_5 [i_1]), (((/* implicit */long long int) var_3))))) : (max((arr_0 [i_1]), (((/* implicit */unsigned long long int) arr_2 [i_1] [i_1])))))))));
            }
        } 
    } 
    var_13 += ((/* implicit */_Bool) max((min((((((/* implicit */_Bool) var_7)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_7))))), (((/* implicit */long long int) var_3)))), (((/* implicit */long long int) var_9))));
    var_14 = ((/* implicit */_Bool) var_9);
}
