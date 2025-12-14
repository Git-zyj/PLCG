/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197186
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
    var_12 = ((/* implicit */int) min((((/* implicit */unsigned int) ((unsigned char) (unsigned short)40164))), (var_4)));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned long long int) ((2444615002U) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))))));
        arr_3 [i_0] [i_0] &= ((/* implicit */unsigned long long int) ((((var_7) / (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_7)))))) ^ (((/* implicit */unsigned int) max((((/* implicit */int) var_6)), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)26)) : (((/* implicit */int) var_11)))))))));
    }
    for (long long int i_1 = 0; i_1 < 17; i_1 += 4) 
    {
        var_14 = ((/* implicit */unsigned int) min((arr_4 [i_1] [14]), (max(((unsigned short)61440), (((/* implicit */unsigned short) (_Bool)1))))));
        var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((unsigned char) max((var_9), (((/* implicit */unsigned int) var_2)))))) : (((/* implicit */int) var_5)))))));
    }
}
