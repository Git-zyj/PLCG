/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240259
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
    for (int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */short) min((((/* implicit */int) ((signed char) arr_3 [i_0 - 1]))), (((int) ((((/* implicit */_Bool) var_0)) ? (arr_0 [(signed char)7]) : (((/* implicit */int) arr_1 [i_0] [i_1])))))));
                arr_4 [i_0] [i_0] = min((((arr_3 [i_0]) - (arr_3 [i_0]))), (((/* implicit */long long int) (signed char)88)));
            }
        } 
    } 
    var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) ((var_0) <= (((((/* implicit */int) (unsigned short)27)) << (((((/* implicit */int) (unsigned short)65532)) - (65528))))))))));
}
