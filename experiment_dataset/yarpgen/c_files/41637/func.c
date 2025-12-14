/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41637
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
    var_17 = ((/* implicit */long long int) ((short) var_4));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = arr_1 [i_0] [i_0];
        var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))));
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)17)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (234862097867136634LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [3LL] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_0])))))))) ? (((unsigned int) arr_0 [i_0])) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_1 [(unsigned short)2] [i_0]), (arr_1 [i_0] [i_0])))))));
        var_19 = ((/* implicit */long long int) arr_1 [i_0] [i_0]);
        arr_4 [i_0] [i_0] = ((/* implicit */short) arr_0 [i_0]);
    }
    for (signed char i_1 = 2; i_1 < 20; i_1 += 3) 
    {
        arr_7 [i_1 - 2] [i_1] = ((/* implicit */long long int) ((int) arr_6 [i_1]));
        arr_8 [(short)15] [i_1] = ((/* implicit */long long int) (_Bool)1);
        arr_9 [i_1 + 1] = ((signed char) ((signed char) arr_5 [i_1 - 1]));
    }
}
