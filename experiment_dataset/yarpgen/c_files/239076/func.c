/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239076
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 16; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */short) (-(min(((-(18446744073709551615ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_15)) * (((/* implicit */int) var_5)))))))));
                    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_3 [i_0] [i_2]))))))) ? (((/* implicit */int) arr_6 [i_0])) : ((~(((arr_8 [i_0] [i_0]) ? (var_17) : (((/* implicit */int) arr_3 [i_0] [0ULL]))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned char) var_10);
}
