/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26148
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
    var_14 = ((/* implicit */unsigned char) ((((int) var_6)) - ((-(929634340)))));
    var_15 = (-(((/* implicit */int) ((unsigned char) min((var_6), (((/* implicit */unsigned long long int) -8092922510175676258LL)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) 9172988456130690692ULL)) ? (var_8) : (((/* implicit */int) var_7))));
        var_16 = ((/* implicit */unsigned char) ((signed char) -5449396686347935665LL));
        var_17 = ((/* implicit */unsigned long long int) ((unsigned char) arr_0 [i_0] [i_0]));
        arr_3 [i_0] = ((/* implicit */signed char) ((unsigned char) arr_1 [i_0] [i_0]));
    }
    for (unsigned long long int i_1 = 1; i_1 < 16; i_1 += 3) 
    {
        arr_7 [i_1] = (i_1 % 2 == 0) ? (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((arr_6 [i_1] [i_1]) + (2147483647))) >> (((((((arr_6 [i_1] [i_1]) + (2147483647))) >> (((((/* implicit */int) arr_4 [(signed char)11] [i_1])) - (38))))) - (54070))))))))) : (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((arr_6 [i_1] [i_1]) + (2147483647))) >> (((((((((arr_6 [i_1] [i_1]) + (2147483647))) >> (((((/* implicit */int) arr_4 [(signed char)11] [i_1])) - (38))))) - (54070))) + (1872)))))))));
        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) var_11))));
    }
    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((unsigned long long int) ((int) var_11))))));
}
