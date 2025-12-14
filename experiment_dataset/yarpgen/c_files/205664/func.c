/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205664
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
    var_13 &= ((/* implicit */unsigned short) var_4);
    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) var_5))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 5554661590572677819LL)) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))))))))))));
        arr_4 [(short)8] &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_3 [i_0]))) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [0LL])))))) && (arr_2 [4LL])));
        var_16 &= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_9))));
    }
    /* vectorizable */
    for (long long int i_1 = 1; i_1 < 18; i_1 += 3) 
    {
        var_17 &= 482792418U;
        arr_7 [i_1] [i_1 + 1] &= ((/* implicit */unsigned short) (-(0LL)));
    }
}
