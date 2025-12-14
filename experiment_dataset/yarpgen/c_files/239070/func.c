/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239070
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
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) == (var_2)))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)-32763)) : (((/* implicit */int) (short)31069))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)43884), ((unsigned short)65535))))) : (var_5)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */int) ((signed char) (short)31069));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 + 3])) ? (arr_0 [i_0 + 1] [i_0]) : (arr_0 [i_0 + 3] [i_0 + 3])));
        arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)31069)) ? (var_0) : (((/* implicit */long long int) arr_1 [i_0 + 1]))));
        arr_5 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_1 [i_0]) : (arr_0 [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_0 [i_0] [i_0]) < (arr_1 [i_0]))))) : (var_19)));
    }
}
