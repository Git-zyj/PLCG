/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212168
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
    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) (-(((((((/* implicit */_Bool) (short)2047)) ? (2165472553257862301LL) : (((/* implicit */long long int) ((/* implicit */int) (short)2047))))) / (2165472553257862290LL))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 16; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */signed char) (~(max((4662540170693321629ULL), (((/* implicit */unsigned long long int) (short)0))))));
                var_17 = ((/* implicit */long long int) ((((/* implicit */int) ((arr_3 [i_0 - 1] [i_0 + 1] [i_0 - 2]) <= (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 1])))))) >> ((((-(arr_3 [i_0 - 2] [i_0 - 1] [i_0 - 1]))) + (3738523569999525161LL)))));
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) var_8);
}
