/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219282
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 19; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_2] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_12))));
                    arr_9 [i_2] = (!(((/* implicit */_Bool) ((long long int) min((var_2), (var_2))))));
                    arr_10 [i_1] [i_2] [i_0] = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_14))))))))));
                    arr_11 [i_0] [i_1] [i_2] = ((/* implicit */int) var_13);
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */_Bool) ((short) ((short) (-(((/* implicit */int) var_3))))));
}
