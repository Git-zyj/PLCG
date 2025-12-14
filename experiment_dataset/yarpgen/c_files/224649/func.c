/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224649
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
    var_15 = ((/* implicit */int) (+(((min((var_10), (((/* implicit */long long int) var_0)))) / (((/* implicit */long long int) ((int) (unsigned char)234)))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            var_16 += ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (unsigned char)221)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 1631378458)))) : (((unsigned int) var_9))))));
            var_17 = ((/* implicit */int) ((unsigned short) ((unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)234)) : (((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))))));
        }
        var_18 = ((/* implicit */unsigned int) ((((((arr_4 [i_0]) + (2147483647))) << (((((arr_4 [i_0]) + (1291234620))) - (14))))) <= (((/* implicit */int) (unsigned char)22))));
    }
}
