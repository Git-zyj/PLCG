/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24251
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
    for (long long int i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 11; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((unsigned int) (((-(arr_5 [i_0 + 2] [i_1] [i_0]))) + (((/* implicit */long long int) (-(((/* implicit */int) var_5)))))));
                var_11 ^= ((/* implicit */unsigned char) arr_5 [i_0 + 1] [i_0] [i_0]);
                arr_7 [i_1] [i_0] [i_0 - 1] = ((/* implicit */int) (+(min((var_0), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_4 [i_0])))))))));
            }
        } 
    } 
    var_12 *= ((/* implicit */unsigned char) var_3);
}
