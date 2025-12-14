/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39627
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
    var_13 = ((/* implicit */int) var_12);
    var_14 = ((/* implicit */unsigned long long int) var_4);
    /* LoopSeq 1 */
    for (int i_0 = 3; i_0 < 14; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned char) ((((arr_2 [i_0 - 2] [i_0]) - ((~(arr_3 [i_0]))))) + (min((((/* implicit */long long int) ((int) 1612369184906527444LL))), (((arr_2 [(signed char)6] [i_0]) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
        var_16 = ((/* implicit */int) ((((/* implicit */_Bool) (short)0)) ? (((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)20472)) ? (((/* implicit */int) (short)-13602)) : (371322179)))) : (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0]))));
        var_17 = ((/* implicit */short) ((((unsigned int) var_11)) > (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (short)0)), ((unsigned short)45064)))))));
    }
}
