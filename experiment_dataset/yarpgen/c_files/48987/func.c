/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48987
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
    var_19 ^= ((/* implicit */_Bool) (-(max((max((((/* implicit */int) var_7)), (var_9))), (max((var_9), (((/* implicit */int) (unsigned char)228))))))));
    var_20 = ((/* implicit */int) var_7);
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        var_21 = (-(max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_6)))), (((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1])))));
        var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)26446)))))));
        var_23 ^= ((/* implicit */int) ((4294967282U) << (((((/* implicit */int) (unsigned short)32768)) - (32739)))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 3) 
    {
        var_24 = arr_4 [i_1] [i_1];
        var_25 = ((/* implicit */short) (~(((unsigned int) (+(arr_3 [i_1]))))));
        var_26 += ((/* implicit */int) arr_3 [i_1]);
    }
}
