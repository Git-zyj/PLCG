/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242789
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
    var_13 = ((/* implicit */int) max((var_13), (((((/* implicit */int) var_0)) << (((((/* implicit */int) ((unsigned char) ((unsigned short) var_9)))) - (111)))))));
    var_14 = ((/* implicit */long long int) var_5);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 2) /* same iter space */
    {
        var_15 = ((/* implicit */int) ((_Bool) ((var_8) >= (((/* implicit */int) arr_2 [i_0] [i_0])))));
        arr_3 [i_0] = ((((/* implicit */_Bool) ((arr_0 [i_0]) ? (((arr_0 [i_0]) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [(unsigned char)14] [i_0]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_1)))))))) ? (((/* implicit */unsigned int) -1792537732)) : (var_3));
    }
    for (unsigned char i_1 = 0; i_1 < 24; i_1 += 2) /* same iter space */
    {
        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) max((((((/* implicit */_Bool) -7838946599057977396LL)) ? (67108863LL) : (((/* implicit */long long int) var_3)))), (((/* implicit */long long int) ((unsigned char) arr_4 [i_1]))))))));
        arr_6 [i_1] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_2 [6LL] [i_1])) ? (((((/* implicit */_Bool) arr_4 [i_1])) ? (var_12) : (((/* implicit */int) (short)16894)))) : (var_7))), ((+(min(((-2147483647 - 1)), (((/* implicit */int) arr_2 [9U] [i_1]))))))));
        var_17 = ((/* implicit */int) var_0);
        var_18 = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) (short)16887)) ? (((/* implicit */int) (short)-16861)) : (((/* implicit */int) (unsigned short)64685)))));
    }
}
