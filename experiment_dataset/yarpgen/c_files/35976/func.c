/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35976
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
    var_16 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_0] [i_1] [i_2]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_5 [i_0] [18ULL] [i_2])) == (((/* implicit */int) arr_5 [i_0] [i_0] [i_2]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0])))))));
                    var_18 = ((/* implicit */short) arr_4 [i_0]);
                }
            } 
        } 
    } 
}
