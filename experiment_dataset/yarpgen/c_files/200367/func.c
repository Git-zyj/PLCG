/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200367
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_17 = (((-(((((/* implicit */_Bool) var_10)) ? (arr_3 [i_1] [(short)6] [i_1]) : (var_4))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [2ULL]))));
                var_18 *= ((/* implicit */unsigned long long int) arr_1 [i_1]);
                var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) var_6))));
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned short) ((_Bool) var_2))))));
            }
        } 
    } 
    var_20 = var_10;
}
