/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241396
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
    var_12 = ((/* implicit */unsigned char) (~(var_5)));
    var_13 = ((var_0) % (((/* implicit */unsigned long long int) var_2)));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 23; i_0 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */signed char) ((((arr_1 [i_0]) + (2147483647))) >> (max((arr_1 [i_0]), (((/* implicit */int) arr_0 [i_0]))))));
        var_15 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((short) arr_0 [i_0])))));
        arr_2 [i_0] = ((/* implicit */unsigned char) max((((((((/* implicit */_Bool) 458891886U)) ? (3836075410U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))) ^ (((/* implicit */unsigned int) arr_1 [i_0])))), (((/* implicit */unsigned int) arr_1 [i_0]))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23; i_1 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */long long int) var_5);
        arr_6 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_4 [i_1]) : (((/* implicit */unsigned long long int) arr_1 [i_1]))));
    }
    for (long long int i_2 = 4; i_2 < 20; i_2 += 1) 
    {
        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) var_3))));
        var_18 -= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_1 [i_2 - 4])) || (((/* implicit */_Bool) 3836075410U)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)-9354)) && (((/* implicit */_Bool) arr_1 [i_2 - 4]))))) : (((/* implicit */int) ((_Bool) arr_1 [i_2 - 4])))));
        var_19 = ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_2] [14ULL])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-9354))) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) 3836075410U)) && (((/* implicit */_Bool) 1099511627775ULL))))), (arr_5 [i_2 - 1] [i_2])))));
        arr_9 [i_2 - 3] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) 2630534842080133033LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-31303))) : (3836075423U)));
    }
    var_20 *= ((/* implicit */unsigned char) var_3);
    var_21 = ((/* implicit */unsigned short) var_9);
}
