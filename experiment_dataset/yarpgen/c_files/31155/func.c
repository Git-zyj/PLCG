/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31155
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
    var_14 &= ((/* implicit */short) var_1);
    var_15 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_8))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        arr_2 [i_0 - 3] [i_0 - 3] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)228)) : (((/* implicit */int) (unsigned short)30353)))) <= (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (((/* implicit */int) var_10))))));
        arr_3 [i_0 + 2] [(signed char)1] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) >> (((((/* implicit */int) (short)-15808)) + (15824)))));
    }
}
