/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33946
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
    var_10 = var_0;
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 1) /* same iter space */
    {
        var_11 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) (short)32767))) ? (((/* implicit */int) ((((/* implicit */int) max(((short)8612), ((short)-12847)))) >= (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (short)12847)) : (((/* implicit */int) arr_1 [i_0]))))))) : (((/* implicit */int) ((short) min(((short)31686), (var_4)))))));
        arr_3 [i_0] = arr_2 [i_0];
        arr_4 [i_0] = arr_1 [i_0];
        arr_5 [i_0] = var_9;
    }
    for (short i_1 = 0; i_1 < 24; i_1 += 1) /* same iter space */
    {
        var_12 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-9358)) ? (((/* implicit */int) arr_6 [i_1] [i_1])) : (((((/* implicit */_Bool) arr_7 [(short)9] [i_1])) ? (((/* implicit */int) arr_7 [i_1] [i_1])) : (((/* implicit */int) var_2))))));
        arr_8 [i_1] = ((short) var_5);
        arr_9 [(short)10] [i_1] = arr_2 [(short)20];
        var_13 = var_7;
    }
    var_14 = ((short) (~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_6))))));
}
