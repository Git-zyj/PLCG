/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54139
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
    var_20 = ((/* implicit */unsigned int) var_10);
    var_21 -= ((/* implicit */_Bool) (-((-(3469423082U)))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_22 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_0]))));
        arr_2 [i_0] = ((/* implicit */short) (-(((/* implicit */int) var_13))));
        arr_3 [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0]))));
    }
    for (unsigned char i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        var_23 = ((/* implicit */short) (!((!(((/* implicit */_Bool) var_17))))));
        arr_8 [(short)7] [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) 825544204U)))))));
    }
    /* vectorizable */
    for (long long int i_2 = 2; i_2 < 22; i_2 += 3) 
    {
        var_24 ^= ((/* implicit */short) (~(((/* implicit */int) arr_1 [i_2 + 1]))));
        var_25 += ((/* implicit */unsigned short) (-(arr_0 [i_2 + 2] [i_2 + 2])));
    }
    var_26 = ((/* implicit */unsigned short) var_1);
}
