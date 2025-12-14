/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248371
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
    var_13 *= ((/* implicit */_Bool) max((((((-9223372036854775788LL) + (9223372036854775807LL))) << (((((-9223372036854775788LL) - (-9223372036854775785LL))) + (14LL))))), (max((((/* implicit */long long int) ((signed char) var_12))), (var_2)))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) -9223372036854775780LL))) + ((-2147483647 - 1))));
        var_15 = ((/* implicit */signed char) var_7);
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        var_16 = ((/* implicit */long long int) var_3);
        arr_6 [i_1] [i_1] &= ((/* implicit */unsigned char) ((unsigned int) arr_4 [i_1] [i_1]));
        arr_7 [i_1] [(_Bool)1] = ((/* implicit */unsigned short) var_5);
        arr_8 [8] = ((short) arr_5 [i_1]);
    }
    var_17 = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) max((var_12), (((/* implicit */long long int) -2147483643))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) + (var_3))))) < (((/* implicit */unsigned long long int) max((-6974294935022191574LL), (3602654143183561232LL))))));
    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) max((var_0), (-8279027018925173437LL))))));
}
