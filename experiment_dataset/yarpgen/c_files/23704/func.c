/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23704
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
    var_10 = ((/* implicit */unsigned int) ((unsigned char) var_2));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) var_8);
        arr_3 [i_0] = ((/* implicit */unsigned short) arr_1 [i_0] [i_0]);
        var_11 |= ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)106))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 22; i_1 += 4) 
    {
        var_12 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_1])) % (((/* implicit */int) arr_4 [(signed char)2] [i_1])))))));
        var_13 = ((/* implicit */unsigned char) var_5);
    }
}
