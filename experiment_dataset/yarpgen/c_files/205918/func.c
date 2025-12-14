/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205918
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) /* same iter space */
    {
        arr_3 [4U] = ((/* implicit */_Bool) ((unsigned short) ((arr_0 [2]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (var_5))));
        arr_4 [i_0] = ((arr_2 [i_0]) / (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6))))));
        arr_5 [i_0] [(unsigned short)8] |= ((/* implicit */unsigned int) arr_1 [4U]);
    }
    for (unsigned short i_1 = 0; i_1 < 11; i_1 += 3) /* same iter space */
    {
        arr_9 [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (unsigned short)30520))) ? (0U) : (((/* implicit */unsigned int) arr_1 [i_1])))))));
        arr_10 [8ULL] = ((/* implicit */unsigned int) arr_1 [i_1]);
    }
    /* vectorizable */
    for (signed char i_2 = 2; i_2 < 10; i_2 += 1) 
    {
        arr_14 [i_2] = ((/* implicit */_Bool) ((int) ((((/* implicit */int) arr_13 [i_2] [i_2 - 2])) - (((/* implicit */int) (unsigned short)43821)))));
        arr_15 [(unsigned char)4] = ((/* implicit */unsigned long long int) ((unsigned short) arr_0 [(unsigned short)4]));
    }
    var_17 = ((/* implicit */unsigned long long int) var_11);
}
