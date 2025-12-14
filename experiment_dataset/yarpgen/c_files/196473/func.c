/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196473
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
    var_12 = ((/* implicit */short) (~(var_5)));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned short) ((12289806389379774568ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3141)))));
        var_14 = ((/* implicit */int) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) == (min((((/* implicit */unsigned long long int) var_6)), (var_8)))))));
        var_15 &= ((/* implicit */int) min(((~(((((/* implicit */_Bool) (short)-10877)) ? (arr_2 [10LL]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62377))))))), (((/* implicit */unsigned int) arr_1 [i_0] [(_Bool)0]))));
        var_16 = ((/* implicit */short) min((((((/* implicit */_Bool) (unsigned short)3141)) ? (((arr_0 [i_0]) - (arr_0 [i_0]))) : (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)44867))))))), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)62395)))))));
    }
    var_17 *= 9086074567497897019ULL;
    var_18 = ((/* implicit */unsigned char) var_9);
}
