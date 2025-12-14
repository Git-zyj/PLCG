/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40429
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
    var_10 = ((/* implicit */int) (signed char)-122);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */_Bool) min((((var_3) * (((/* implicit */int) (unsigned char)0)))), (max((-835453412), (((/* implicit */int) var_1))))));
                var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) var_7))));
                arr_4 [i_0] [i_1] = ((/* implicit */long long int) var_6);
            }
        } 
    } 
}
