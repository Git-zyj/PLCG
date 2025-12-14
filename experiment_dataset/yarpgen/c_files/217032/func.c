/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217032
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
    var_20 ^= ((/* implicit */unsigned int) var_13);
    var_21 = ((/* implicit */unsigned int) var_15);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 8; i_1 += 3) 
        {
            {
                var_22 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) var_12)), ((~((-(arr_3 [i_0])))))));
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */short) min((arr_1 [(unsigned char)10] [i_1]), (arr_2 [i_0] [i_1 + 2])));
                var_23 &= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_2 [i_1 - 2] [i_1 + 3])) ? (((/* implicit */int) arr_1 [i_1 - 2] [i_1 + 2])) : (((/* implicit */int) arr_1 [i_1 - 1] [i_1 + 2]))))));
            }
        } 
    } 
}
