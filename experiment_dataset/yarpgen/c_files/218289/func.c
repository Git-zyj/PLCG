/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218289
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
    var_11 = ((/* implicit */unsigned short) (!((((-(((/* implicit */int) (signed char)-23)))) >= (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((1570760762391250055LL) == (((/* implicit */long long int) arr_3 [i_1 + 1] [i_1 - 1]))))) >= (((/* implicit */int) (!((!(((/* implicit */_Bool) 1570760762391250055LL)))))))));
                var_13 = ((/* implicit */short) ((_Bool) 1879171560U));
                arr_4 [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((~(-5210165980206190204LL))), (((/* implicit */long long int) arr_3 [i_1 - 1] [i_0]))))) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((unsigned short) arr_0 [(short)4] [(short)4]))) : (((/* implicit */int) ((_Bool) 1570760762391250055LL)))))));
            }
        } 
    } 
}
