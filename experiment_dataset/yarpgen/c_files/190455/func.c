/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190455
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
    for (unsigned char i_0 = 3; i_0 < 23; i_0 += 4) 
    {
        var_13 = ((/* implicit */signed char) max(((-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32077))) : (16864260039249875374ULL))))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((arr_1 [i_0 - 1] [i_0]) == (((/* implicit */int) var_5))))), (((var_3) - (((/* implicit */long long int) var_2)))))))));
        var_14 = ((/* implicit */unsigned long long int) max(((~(var_2))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)32077)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)43645))) : (var_3)))))))));
    }
    var_15 = (unsigned short)32096;
}
