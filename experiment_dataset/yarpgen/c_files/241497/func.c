/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241497
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_0 + 2] [i_0]))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_0 [i_0 + 2]))));
        arr_3 [i_0] = ((/* implicit */short) var_3);
        arr_4 [i_0] [i_0] &= ((/* implicit */unsigned char) (+(((/* implicit */int) arr_0 [i_0 + 2]))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 1; i_1 < 21; i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) var_7)) + (((((/* implicit */int) arr_1 [i_1] [i_1])) - (((/* implicit */int) (short)-13962))))));
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 17; i_2 += 1) 
    {
        var_15 *= ((/* implicit */unsigned long long int) (((~(((/* implicit */int) arr_6 [i_2])))) & (((((/* implicit */_Bool) arr_10 [i_2] [i_2])) ? (((/* implicit */int) (unsigned char)199)) : (((/* implicit */int) (unsigned char)184))))));
        arr_11 [i_2] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_12))));
    }
    var_16 = ((/* implicit */int) var_5);
}
