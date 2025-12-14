/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35335
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
    var_10 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (var_6) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)2)) : (((/* implicit */int) var_8))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_11 -= ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) (short)-26))))));
                var_12 = ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-26)) ? (((/* implicit */long long int) ((/* implicit */int) (short)2))) : (var_7)))))))) : (((arr_0 [i_0] [i_1]) ^ (((((/* implicit */_Bool) var_4)) ? (arr_0 [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_1]))))))));
                arr_6 [i_1] [i_0] = ((/* implicit */short) min((((((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_0])) ? (((((/* implicit */unsigned long long int) arr_3 [i_0])) - (var_9))) : (((/* implicit */unsigned long long int) (-(var_4)))))), (((/* implicit */unsigned long long int) (+(arr_4 [i_0] [i_0] [i_0]))))));
            }
        } 
    } 
}
