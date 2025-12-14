/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3227
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
    var_16 = ((/* implicit */long long int) (((~(((/* implicit */int) ((signed char) var_4))))) & (((/* implicit */int) (_Bool)1))));
    var_17 += var_11;
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_18 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) 6461082560756207502LL)) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)62545)))))));
        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) min((arr_1 [i_0] [i_0]), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)128))))))))));
    }
    var_20 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_6) ? (var_3) : (var_8)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : ((~(((/* implicit */int) (unsigned char)48))))))) : (var_15)));
}
