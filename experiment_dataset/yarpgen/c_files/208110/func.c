/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208110
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
    for (unsigned long long int i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_10 -= ((((/* implicit */int) var_6)) > (((((/* implicit */int) arr_10 [20U] [i_0 + 3] [i_0 + 3] [i_1])) * (((/* implicit */int) ((var_7) == (((/* implicit */int) arr_10 [i_0 + 1] [i_0 + 1] [10U] [i_1]))))))));
                    arr_12 [i_2] = ((/* implicit */unsigned int) ((var_7) - (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) < (((/* implicit */int) (signed char)(-127 - 1))))))));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */unsigned int) (!(var_4)));
}
