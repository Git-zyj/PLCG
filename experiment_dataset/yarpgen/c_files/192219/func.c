/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192219
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 2) /* same iter space */
    {
        var_10 *= ((/* implicit */unsigned long long int) min((((/* implicit */int) (short)8176)), ((+(((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_1 [i_0]))))))));
        var_11 = ((/* implicit */long long int) max((min((min((var_3), (((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) ((signed char) 1447918425306152438ULL))))), (((/* implicit */int) arr_0 [i_0]))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) /* same iter space */
    {
        var_12 = ((/* implicit */signed char) (+(((/* implicit */int) (short)-31886))));
        arr_5 [i_1] = ((/* implicit */unsigned short) var_9);
        var_13 = ((/* implicit */unsigned short) ((short) arr_2 [i_1] [i_1]));
        var_14 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_8))));
    }
    var_15 = var_5;
    var_16 = ((/* implicit */long long int) ((var_1) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_9)), (var_5)))) ? (((((/* implicit */_Bool) 3137992112U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) : (2394110148U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) (short)-8176))) ? ((~(((/* implicit */int) var_8)))) : (((var_1) ? (((/* implicit */int) var_2)) : (2147483647))))))));
}
