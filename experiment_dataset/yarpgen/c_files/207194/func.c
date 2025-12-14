/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207194
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_10 = ((/* implicit */unsigned long long int) max((((/* implicit */int) var_1)), ((~(((/* implicit */int) var_1))))));
                    arr_8 [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1])) ? (arr_4 [i_0]) : (arr_4 [i_0])))) || (((/* implicit */_Bool) ((unsigned short) var_1)))));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */signed char) var_6);
}
