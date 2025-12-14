/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44548
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
    var_11 = ((/* implicit */short) min((var_0), (var_5)));
    var_12 = ((/* implicit */long long int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_3))))), (((unsigned short) ((long long int) var_4)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 20; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                arr_6 [(unsigned short)13] [(unsigned short)13] [i_0] = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) min((var_2), (((/* implicit */unsigned short) (unsigned char)225))))) : (((((/* implicit */int) (unsigned char)40)) - (((/* implicit */int) var_6)))))));
                arr_7 [i_0] [i_1] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 3])) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0 - 2]))))) ? (arr_3 [i_0] [i_0]) : (min((-2051400840505060527LL), (((/* implicit */long long int) (unsigned short)59)))));
            }
        } 
    } 
}
