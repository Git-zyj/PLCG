/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248606
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
    var_11 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) + ((~(((/* implicit */int) (unsigned short)2665))))));
    var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) var_3))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */long long int) min((var_13), (var_10)));
                arr_6 [i_1] [i_1] [i_1] = var_1;
                var_14 = ((/* implicit */unsigned short) var_7);
                var_15 = var_9;
            }
        } 
    } 
}
