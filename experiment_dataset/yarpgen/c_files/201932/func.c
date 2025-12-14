/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201932
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
    var_10 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) (!(((/* implicit */_Bool) var_1)))))) ? (var_9) : (var_1)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */unsigned long long int) min((((((/* implicit */int) arr_4 [i_1 - 1])) + (((/* implicit */int) var_5)))), (((arr_4 [i_1 + 1]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_6))))));
                var_12 = arr_3 [(unsigned char)12];
            }
        } 
    } 
    var_13 = ((/* implicit */long long int) var_5);
    var_14 = var_0;
}
