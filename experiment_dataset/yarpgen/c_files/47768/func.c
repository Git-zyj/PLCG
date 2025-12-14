/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47768
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
    var_11 &= ((/* implicit */short) ((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_4)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-20593))))), (((/* implicit */long long int) ((((((/* implicit */int) (short)-20603)) + (2147483647))) << (((var_8) - (15481644104578019750ULL))))))))) == (((((/* implicit */_Bool) ((unsigned int) 16014619072187000200ULL))) ? (((/* implicit */unsigned long long int) (~(var_7)))) : (var_3)))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */short) (((~(arr_0 [5LL] [10LL]))) == (((((((/* implicit */_Bool) 8388352ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (var_3))) + (((((/* implicit */_Bool) var_7)) ? (var_8) : (8388353ULL)))))));
        var_12 = ((/* implicit */unsigned long long int) var_7);
        var_13 = ((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL));
        var_14 = ((/* implicit */short) ((unsigned short) arr_1 [i_0]));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 19; i_1 += 4) 
    {
        var_15 = ((/* implicit */short) 14314041082432902308ULL);
        var_16 *= ((/* implicit */signed char) var_6);
    }
    var_17 = ((/* implicit */short) min((((long long int) var_10)), (((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_5))))))))));
}
