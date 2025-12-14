/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39018
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
    var_19 = ((/* implicit */short) ((var_2) > (((/* implicit */unsigned int) ((/* implicit */int) var_13)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (int i_1 = 4; i_1 < 21; i_1 += 4) 
        {
            {
                var_20 |= ((/* implicit */unsigned char) min(((~(((/* implicit */int) max((((/* implicit */unsigned short) (signed char)118)), (arr_3 [i_0])))))), (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-119)))))));
                var_21 *= ((/* implicit */int) ((((((/* implicit */int) (signed char)118)) / (arr_0 [i_1 - 3] [i_1 - 4]))) < (((/* implicit */int) arr_3 [i_1 - 1]))));
            }
        } 
    } 
}
