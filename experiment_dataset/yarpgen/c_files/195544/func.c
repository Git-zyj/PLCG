/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195544
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
    var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) var_17))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_0)))) : (arr_0 [i_0])));
        var_20 = ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-91))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 4) 
    {
        var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_1] [i_1])))))));
        var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) var_13))));
        var_23 |= ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [2ULL])) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (signed char)105))))) < (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)63))) ^ (4294967287U))))))));
    }
}
