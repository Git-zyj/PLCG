/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53436
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_16 += ((/* implicit */unsigned int) arr_1 [i_0]);
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)12057)) : (var_11)))) ? (((((/* implicit */long long int) ((/* implicit */int) var_5))) & (arr_1 [i_0]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) -12)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (_Bool)0)))))));
        var_17 -= ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_14))));
        var_18 ^= (-2147483647 - 1);
    }
    /* vectorizable */
    for (long long int i_1 = 2; i_1 < 17; i_1 += 2) 
    {
        var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 0ULL))));
        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) var_13))));
        arr_5 [i_1 + 2] [i_1 + 2] = ((/* implicit */unsigned short) ((unsigned char) ((unsigned char) arr_3 [i_1])));
    }
    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((unsigned short) ((((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (var_2)))) >> (((-1708064334) + (1708064364)))))))));
}
