/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221528
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (((/* implicit */int) (short)-32765)) : (((/* implicit */int) arr_0 [i_0] [i_1])))));
                var_11 -= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_0] [i_0] [i_1])) + (((/* implicit */int) arr_4 [i_0] [i_0] [i_1]))))), (max((arr_2 [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_4 [i_1] [i_1] [i_0]))))));
            }
        } 
    } 
    var_12 = ((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
}
