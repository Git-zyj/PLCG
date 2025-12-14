/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240550
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) >= ((~(((/* implicit */int) ((var_13) || (((/* implicit */_Bool) arr_3 [i_0])))))))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (signed char)72)), ((unsigned char)0)))))));
            }
        } 
    } 
    var_16 &= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_4))));
    var_17 = ((/* implicit */short) max(((-(((/* implicit */int) ((_Bool) var_2))))), (((/* implicit */int) var_1))));
}
