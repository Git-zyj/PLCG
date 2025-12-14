/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28647
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
    for (int i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */_Bool) min((max((-2633091942083438655LL), (arr_3 [i_0 + 2]))), (((/* implicit */long long int) ((((/* implicit */int) var_10)) | (var_13))))));
                var_21 = ((/* implicit */unsigned char) -2633091942083438648LL);
            }
        } 
    } 
    var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) max((((/* implicit */long long int) max((((/* implicit */unsigned int) var_10)), (var_14)))), (((long long int) ((((/* implicit */int) var_8)) | (((/* implicit */int) var_12))))))))));
}
