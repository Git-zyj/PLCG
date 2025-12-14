/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240021
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
    var_12 += ((/* implicit */unsigned int) ((-1300784999) / (-1300784984)));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                arr_5 [i_0 + 2] [i_0] [i_1] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)1504)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)46))) : (2147483647LL))));
                var_13 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) 1300784994))) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_4 [i_0]))))));
            }
        } 
    } 
}
