/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225871
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
    var_12 = ((/* implicit */long long int) (-((+(((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (unsigned short)256)) : (-1566643071)))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_13 += ((/* implicit */signed char) ((int) max((0LL), (((/* implicit */long long int) (unsigned char)20)))));
        var_14 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_1)) ? (arr_2 [1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))), (((/* implicit */unsigned long long int) var_11))));
        var_15 = ((/* implicit */unsigned long long int) max((var_15), ((((~(((((/* implicit */_Bool) arr_1 [4])) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) var_1)))))) >> (((((int) (unsigned char)252)) - (224)))))));
        var_16 = max((((((/* implicit */_Bool) (signed char)125)) ? ((~(((/* implicit */int) (unsigned char)239)))) : (var_3))), (((/* implicit */int) var_0)));
    }
}
