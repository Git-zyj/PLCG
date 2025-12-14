/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35928
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
    var_15 = ((/* implicit */unsigned char) max((min((((/* implicit */int) ((_Bool) var_14))), ((-(((/* implicit */int) var_5)))))), (((/* implicit */int) var_8))));
    var_16 += ((/* implicit */_Bool) ((unsigned char) var_12));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 18; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */signed char) ((arr_1 [i_0 - 1]) ? (((/* implicit */int) ((signed char) min((((/* implicit */short) (_Bool)0)), (arr_3 [i_0]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0 - 1])))))));
                arr_5 [i_1] = ((/* implicit */signed char) arr_3 [i_0 + 1]);
                var_17 ^= ((/* implicit */short) (~((-((-(((/* implicit */int) (short)-10833))))))));
            }
        } 
    } 
}
