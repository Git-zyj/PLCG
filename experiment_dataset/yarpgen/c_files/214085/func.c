/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214085
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
    for (short i_0 = 4; i_0 < 18; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_11 &= ((short) max((((/* implicit */unsigned int) ((((/* implicit */int) var_10)) / (arr_2 [(unsigned char)2] [i_0] [14])))), (min((arr_3 [i_0]), (((/* implicit */unsigned int) arr_1 [(signed char)11]))))));
                var_12 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((long long int) arr_2 [i_0 - 2] [i_1] [i_1])))));
                var_13 = ((/* implicit */unsigned char) var_0);
            }
        } 
    } 
    var_14 = max((((/* implicit */unsigned short) var_1)), ((unsigned short)2573));
}
