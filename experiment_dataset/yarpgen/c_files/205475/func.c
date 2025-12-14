/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205475
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
    var_16 = ((/* implicit */signed char) (-(min((max((((/* implicit */unsigned int) var_8)), (var_10))), (min((var_7), (((/* implicit */unsigned int) var_9))))))));
    var_17 = ((/* implicit */_Bool) max((max((((short) var_13)), (((/* implicit */short) ((var_7) < (var_7)))))), (((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 17; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (unsigned int i_2 = 3; i_2 < 17; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */signed char) ((int) ((_Bool) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) arr_2 [i_0] [i_1]))))));
                    var_19 ^= ((/* implicit */unsigned int) max((max((((/* implicit */long long int) arr_5 [i_0 - 1] [i_0 - 2])), (arr_2 [i_2 + 1] [i_0 + 1]))), (((/* implicit */long long int) var_10))));
                    arr_7 [i_0] [9LL] = ((/* implicit */signed char) ((unsigned char) max((((/* implicit */unsigned int) var_3)), (arr_6 [i_1] [i_1] [i_0]))));
                }
            } 
        } 
    } 
}
