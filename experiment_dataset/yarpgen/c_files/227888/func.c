/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227888
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
    /* LoopSeq 2 */
    for (signed char i_0 = 4; i_0 < 13; i_0 += 4) 
    {
        arr_2 [i_0 - 4] [i_0] = var_5;
        var_11 = ((/* implicit */signed char) ((unsigned short) (unsigned char)63));
        arr_3 [(unsigned char)9] [i_0] = ((/* implicit */unsigned char) var_9);
    }
    for (unsigned char i_1 = 0; i_1 < 12; i_1 += 4) 
    {
        arr_6 [i_1] = (((-(((/* implicit */int) var_6)))) + (((/* implicit */int) arr_4 [i_1])));
        arr_7 [i_1] = ((/* implicit */_Bool) (~((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1])))))))));
    }
    var_12 = ((/* implicit */signed char) ((long long int) var_9));
    var_13 = ((/* implicit */unsigned char) var_6);
}
