/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203396
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
    var_20 = ((/* implicit */unsigned short) var_4);
    var_21 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_13))))) ? (((/* implicit */int) (unsigned short)10)) : (((/* implicit */int) max((((/* implicit */unsigned short) var_3)), ((unsigned short)10)))))), (((((/* implicit */int) var_1)) << (((((((/* implicit */_Bool) (unsigned short)10)) ? (((/* implicit */int) (unsigned char)213)) : (((/* implicit */int) var_5)))) - (210)))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [(signed char)11])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (var_18) : (var_0)))));
        var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) (unsigned short)22638))));
    }
    for (long long int i_1 = 0; i_1 < 13; i_1 += 3) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_1]))))) || (((((/* implicit */int) arr_4 [i_1])) <= (((/* implicit */int) var_3))))));
        var_24 ^= (+(14154170165940974310ULL));
        var_25 = ((/* implicit */short) var_0);
    }
    var_26 = ((/* implicit */short) (~(((/* implicit */int) var_14))));
}
