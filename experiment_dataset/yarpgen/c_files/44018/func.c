/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44018
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
    for (int i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 8; i_1 += 3) 
        {
            for (signed char i_2 = 3; i_2 < 10; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) -1340290648346239845LL)) ? (((arr_9 [i_0] [i_0] [i_2] [i_2]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0 + 1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_2])))));
                    var_14 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((unsigned char) arr_9 [i_2 - 1] [i_1 + 3] [i_2] [i_1 + 3]))), ((+(1046151781U)))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned short) (+(max((((((/* implicit */int) var_7)) * (((/* implicit */int) var_7)))), (var_9)))));
    var_16 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((unsigned short) (signed char)5))), (var_4)));
}
