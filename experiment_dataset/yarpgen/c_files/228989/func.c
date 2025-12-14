/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228989
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
    /* vectorizable */
    for (signed char i_0 = 3; i_0 < 21; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */_Bool) (signed char)48);
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_0 + 1]))));
        arr_5 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)63)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) : (((((/* implicit */_Bool) (signed char)-109)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)236))) : (arr_1 [i_0])))));
        arr_6 [i_0] = ((/* implicit */unsigned short) (_Bool)1);
    }
    /* vectorizable */
    for (signed char i_1 = 3; i_1 < 21; i_1 += 1) /* same iter space */
    {
        arr_9 [i_1] = ((/* implicit */short) ((8790074312717095LL) & (arr_7 [i_1 - 2] [i_1 - 2])));
        arr_10 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1 - 3])) ? (((/* implicit */int) arr_2 [i_1 - 1])) : (((/* implicit */int) arr_0 [i_1]))));
        arr_11 [i_1] [i_1] = ((signed char) arr_0 [i_1 + 2]);
    }
    var_11 |= ((((/* implicit */int) var_0)) < (((/* implicit */int) var_6)));
}
