/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223644
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                arr_6 [i_1] [3ULL] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) max((arr_4 [i_0] [i_1]), (arr_4 [i_1] [i_0])))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */int) arr_4 [i_0] [i_1])) : (((/* implicit */int) (unsigned char)255))))));
                arr_7 [i_0] = ((/* implicit */long long int) arr_3 [i_0] [i_0]);
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_12)))))));
}
