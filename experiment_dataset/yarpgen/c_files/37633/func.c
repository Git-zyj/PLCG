/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37633
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
    var_11 = ((/* implicit */long long int) ((((((/* implicit */int) var_1)) + (2147483647))) << (((((/* implicit */int) var_7)) - (17984)))));
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        arr_2 [i_0 + 4] = ((/* implicit */long long int) arr_1 [i_0] [i_0]);
        arr_3 [i_0] [i_0 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 3])) ? (((/* implicit */int) (unsigned char)226)) : (((/* implicit */int) (unsigned char)39))))) && (((/* implicit */_Bool) min((arr_0 [i_0 + 4]), (arr_0 [i_0 + 1]))))));
        var_12 -= ((/* implicit */short) ((1214013116186176258ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)204)))));
        var_13 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)52))))) >> (((((((/* implicit */_Bool) (unsigned char)220)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (((unsigned long long int) arr_0 [i_0])))) - (61118ULL)))));
        arr_4 [i_0] = ((unsigned char) (-(((/* implicit */int) arr_0 [i_0 + 2]))));
    }
}
