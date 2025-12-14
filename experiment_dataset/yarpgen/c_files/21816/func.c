/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21816
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
    var_14 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) var_12)) & (((/* implicit */int) (!(var_7)))))))));
    var_15 = ((max((((/* implicit */int) var_1)), ((-(((/* implicit */int) var_12)))))) >= (((/* implicit */int) var_2)));
    var_16 = ((/* implicit */signed char) var_5);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0 - 1]))));
        arr_4 [5ULL] [i_0] = ((/* implicit */unsigned char) (~((-(((/* implicit */int) (unsigned char)238))))));
        arr_5 [i_0] [i_0 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (16933922899802086943ULL) : (((/* implicit */unsigned long long int) (-2147483647 - 1)))));
    }
}
