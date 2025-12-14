/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218498
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
    var_20 += ((/* implicit */unsigned long long int) ((-713675499) == (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    var_21 = -2350915046797134706LL;
                    var_22 = ((/* implicit */long long int) ((-1328140656) + (886322329)));
                    var_23 = ((/* implicit */unsigned int) ((min((-2794202997778900352LL), (((/* implicit */long long int) (short)12745)))) | (((/* implicit */long long int) ((int) 18192775896721429883ULL)))));
                    var_24 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2] [i_2])) ? (arr_3 [i_2] [i_1] [i_2]) : (1377733313U))) - (((((/* implicit */_Bool) arr_6 [13] [i_0] [i_1] [i_2])) ? (arr_6 [i_2] [i_1] [i_1] [16ULL]) : (arr_3 [10ULL] [i_1] [i_2])))));
                }
            } 
        } 
    } 
}
