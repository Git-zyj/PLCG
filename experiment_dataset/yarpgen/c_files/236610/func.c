/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236610
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
    var_15 = ((/* implicit */short) (!(((/* implicit */_Bool) var_6))));
    var_16 = ((/* implicit */short) var_6);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_17 ^= ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) < (min((((/* implicit */long long int) (short)-14847)), (-1LL))))))));
        var_18 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_10)), (arr_2 [(short)3])))) ? (((((/* implicit */_Bool) arr_2 [5])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (short)14847)))) : (((/* implicit */int) ((arr_1 [i_0]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(unsigned char)2])))))))) / (((/* implicit */int) var_13))));
    }
}
