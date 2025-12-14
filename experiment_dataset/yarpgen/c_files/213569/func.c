/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213569
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned char) arr_0 [i_0]);
        arr_4 [i_0] = ((/* implicit */unsigned char) (+(min((arr_3 [i_0] [i_0]), (arr_3 [i_0] [i_0])))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 10; i_1 += 1) 
    {
        var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)124)) ? ((+(arr_6 [i_1 + 2]))) : (((/* implicit */long long int) (~(((/* implicit */int) (short)(-32767 - 1))))))));
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)(-127 - 1)))))) ? (arr_6 [i_1 + 2]) : (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_1 - 1])) - (arr_2 [i_1 + 2] [i_1]))))));
        arr_8 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_1 + 2])) <= (((((/* implicit */int) (_Bool)1)) >> (((var_0) - (1012432059)))))));
    }
    var_14 = ((/* implicit */unsigned char) ((((((/* implicit */int) ((_Bool) var_11))) >= (((/* implicit */int) min(((short)-31860), ((short)-14772)))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_6))));
    var_15 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */int) var_8)) | (((/* implicit */int) var_4))))) ? (((var_3) ? (((/* implicit */int) var_4)) : (-13))) : (((((/* implicit */int) var_10)) | (((/* implicit */int) (signed char)(-127 - 1))))))) >> ((((((~(1U))) >> (((/* implicit */int) var_1)))) - (2147483646U)))));
}
