/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20345
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
    for (short i_0 = 1; i_0 < 24; i_0 += 2) 
    {
        for (unsigned short i_1 = 3; i_1 < 24; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */unsigned short) (-((~(((/* implicit */int) (unsigned char)49))))));
                var_13 = ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) arr_2 [i_0])), ((-(arr_5 [(short)24] [i_0] [11ULL]))))) != (((/* implicit */unsigned long long int) var_4))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned char) var_10);
    var_15 = ((/* implicit */unsigned long long int) var_1);
    var_16 = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_0)), (var_11)))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_6))))), (var_9));
}
