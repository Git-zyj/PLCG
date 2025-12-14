/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247312
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
    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) min((((/* implicit */long long int) var_4)), (((long long int) (+(var_18)))))))));
    var_20 = (~(((unsigned int) (~(((/* implicit */int) (signed char)-13))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */signed char) arr_3 [i_0] [i_0] [i_0]);
                arr_5 [i_1] = ((/* implicit */short) max((((/* implicit */unsigned int) var_6)), (((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (arr_4 [i_0] [10LL]) : (arr_4 [i_0] [i_1])))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (arr_4 [i_1] [i_1]) : (arr_4 [i_0] [i_1])))));
            }
        } 
    } 
}
