/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199854
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
    var_15 = ((/* implicit */_Bool) var_4);
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((int) -1881315987))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_13))))) : (arr_3 [i_1 + 1] [2U] [i_1 - 2])))) : (((long long int) var_5))));
                var_17 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) (unsigned short)26462)) ? (arr_4 [i_0 - 2]) : (((/* implicit */int) var_1)))));
            }
        } 
    } 
    var_18 &= ((/* implicit */unsigned short) 13U);
    var_19 = var_11;
}
