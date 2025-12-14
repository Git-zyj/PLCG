/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48608
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
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) ((unsigned long long int) 2920732300U))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (((((/* implicit */_Bool) 21U)) ? (arr_4 [i_0]) : (21U))))) : (21U)));
                    var_19 = ((/* implicit */int) arr_0 [i_2 + 3]);
                    arr_9 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned long long int) (short)15317);
                    arr_10 [i_2 + 3] [i_0] [i_0] = var_17;
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) var_8);
}
