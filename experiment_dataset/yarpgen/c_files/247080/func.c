/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247080
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
    var_12 *= ((/* implicit */unsigned char) (-((-(((int) 1816677560U))))));
    var_13 = ((int) max((((/* implicit */unsigned int) max((var_3), (((/* implicit */unsigned short) var_1))))), (((((/* implicit */_Bool) var_2)) ? (1816677560U) : (2325606241U)))));
    var_14 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) ((var_11) + (((/* implicit */long long int) var_10))))) ? (1816677560U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) max(((~(max((var_0), (((/* implicit */long long int) arr_1 [i_0] [i_0])))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (1816677548U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1))))))) ? ((-(((/* implicit */int) (short)-24355)))) : (((/* implicit */int) max((((/* implicit */short) arr_0 [i_0])), (arr_1 [i_0] [i_0])))))))));
        arr_3 [i_0] [i_0] &= ((/* implicit */unsigned int) var_0);
        var_15 = arr_0 [i_0];
    }
}
