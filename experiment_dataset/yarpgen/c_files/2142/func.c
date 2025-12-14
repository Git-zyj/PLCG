/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2142
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
    var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)187)) > (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_7)))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (unsigned char)48;
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) arr_1 [i_0]))) - (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
        var_15 = ((/* implicit */unsigned char) min((var_15), ((unsigned char)154)));
    }
    /* vectorizable */
    for (unsigned char i_1 = 1; i_1 < 10; i_1 += 1) /* same iter space */
    {
        var_16 ^= var_1;
        var_17 = (unsigned char)200;
        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_1 + 2])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)45))))) : (((((/* implicit */_Bool) (unsigned char)158)) ? (((/* implicit */int) (unsigned char)154)) : (((/* implicit */int) arr_4 [i_1] [i_1])))))))));
    }
    for (unsigned char i_2 = 1; i_2 < 10; i_2 += 1) /* same iter space */
    {
        var_19 = var_1;
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)111)) >> ((((~(((/* implicit */int) (unsigned char)154)))) + (171)))));
        arr_8 [i_2] = min((((unsigned char) (!(((/* implicit */_Bool) (unsigned char)139))))), ((unsigned char)68));
        arr_9 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) ((unsigned char) (unsigned char)91))) >= (((((/* implicit */int) (unsigned char)67)) | (((/* implicit */int) (unsigned char)57))))))) * ((~(((/* implicit */int) ((((/* implicit */int) (unsigned char)139)) <= (((/* implicit */int) (unsigned char)101)))))))));
        arr_10 [i_2] = (unsigned char)131;
    }
}
