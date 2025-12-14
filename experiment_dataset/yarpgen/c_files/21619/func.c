/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21619
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
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) (+(((/* implicit */int) var_0)))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) ((unsigned long long int) arr_2 [i_0] [i_0]))) ? (((long long int) arr_0 [i_0])) : (-2LL))));
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)32758)) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_0 - 1]))))) : (((long long int) min((((/* implicit */unsigned long long int) (short)-24)), (8087799436612119123ULL))))));
        var_14 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)18811))))));
    }
    var_15 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))));
}
