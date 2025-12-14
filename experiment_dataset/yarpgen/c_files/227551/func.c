/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227551
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
    for (signed char i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) ((((/* implicit */int) max((var_6), (arr_6 [i_0] [i_0 - 1])))) >= (((/* implicit */int) var_1)))))));
                    var_15 = ((/* implicit */unsigned long long int) min((var_15), (max((((arr_1 [i_0 + 2]) & (arr_1 [i_0 + 3]))), (((/* implicit */unsigned long long int) ((_Bool) var_5)))))));
                }
            } 
        } 
    } 
    var_16 -= ((((/* implicit */_Bool) (signed char)73)) ? (((/* implicit */int) (signed char)73)) : (((/* implicit */int) (signed char)-74)));
    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) var_6))));
}
