/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213399
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
    var_16 = ((/* implicit */int) (unsigned short)1210);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */long long int) min(((unsigned char)0), (arr_4 [i_0])));
                arr_5 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((((/* implicit */int) arr_4 [i_1])) - (arr_0 [i_0] [i_1])))));
                arr_6 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)30514)) < (arr_0 [i_0] [i_0])))) - (((/* implicit */int) arr_4 [i_0]))))) ? (((((long long int) arr_3 [i_1])) & (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)37)) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_4 [i_1]))))))) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
            }
        } 
    } 
}
