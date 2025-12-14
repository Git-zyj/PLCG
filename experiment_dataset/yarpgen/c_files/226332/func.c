/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226332
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (long long int i_2 = 4; i_2 < 7; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-16))))) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_0] [i_0]))));
                    arr_7 [i_1] = ((/* implicit */short) (+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_6 [i_2] [i_2 + 2] [i_2] [i_2 - 3])) : (((/* implicit */int) (short)15))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */signed char) max((((((/* implicit */_Bool) 7LL)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (short)-26256)))), (((/* implicit */int) (signed char)-11))));
}
