/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41247
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
    var_10 = (short)(-32767 - 1);
    var_11 = ((/* implicit */int) (short)32767);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        arr_2 [(unsigned short)10] [i_0] = (!(((/* implicit */_Bool) ((int) (unsigned char)91))));
        var_12 = ((/* implicit */unsigned char) 13631091893978218970ULL);
        var_13 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_0 [i_0] [i_0]) / (((/* implicit */long long int) ((/* implicit */int) var_6)))))) ? (((-4647850488600815372LL) / (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))) ? (arr_0 [i_0] [i_0]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((((/* implicit */int) var_6)) / (((/* implicit */int) var_2)))) : (((((/* implicit */_Bool) arr_0 [(unsigned short)0] [i_0])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)233)))))))));
        var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)32744)) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_0 [(signed char)1] [(signed char)1])));
    }
}
