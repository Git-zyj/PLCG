/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240268
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
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) var_3)) - (((/* implicit */int) ((((/* implicit */int) ((signed char) (signed char)127))) < (1571524590))))));
    var_18 = ((/* implicit */unsigned int) ((unsigned char) var_13));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) var_9))));
        arr_4 [i_0] = ((/* implicit */unsigned short) (-(var_12)));
        arr_5 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0])));
    }
    var_19 -= ((/* implicit */short) ((max((((((/* implicit */_Bool) var_8)) ? (2147483647) : (var_11))), (((/* implicit */int) var_16)))) >= (((/* implicit */int) (unsigned short)59490))));
}
