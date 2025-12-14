/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41386
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */short) (((-(arr_4 [i_1]))) != (max((arr_4 [i_0]), (arr_4 [i_0])))));
                arr_7 [i_0] = ((/* implicit */_Bool) -792133203);
            }
        } 
    } 
    var_10 = ((/* implicit */signed char) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_8))))), (max((var_7), (((/* implicit */unsigned short) var_9))))));
}
