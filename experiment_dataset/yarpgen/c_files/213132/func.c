/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213132
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
    var_10 = ((/* implicit */unsigned int) var_5);
    var_11 *= ((/* implicit */_Bool) var_7);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 23; i_1 += 4) 
        {
            {
                arr_8 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)(-127 - 1))) + (((/* implicit */int) ((signed char) (signed char)-116)))));
                arr_9 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) | (min((((/* implicit */unsigned int) (signed char)-105)), (var_1)))))) ? (((/* implicit */int) (unsigned short)17040)) : (((((/* implicit */_Bool) var_2)) ? ((((_Bool)1) ? (((/* implicit */int) (unsigned char)65)) : (((/* implicit */int) (short)30056)))) : (((/* implicit */int) var_2))))));
            }
        } 
    } 
}
