/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191061
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (signed char i_1 = 3; i_1 < 11; i_1 += 4) 
        {
            {
                arr_6 [(unsigned short)10] [i_0] [i_0] = arr_2 [i_1];
                arr_7 [i_0] = ((/* implicit */long long int) (((+(arr_0 [i_1]))) != (((/* implicit */int) max((arr_4 [i_0] [i_1 + 1]), (arr_4 [i_1 - 3] [i_0]))))));
            }
        } 
    } 
    var_10 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1554923024)) ? (((/* implicit */int) ((signed char) max((var_8), (((/* implicit */unsigned char) var_5)))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)85))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((_Bool) (unsigned short)64512)))))));
}
