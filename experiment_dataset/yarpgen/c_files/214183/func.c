/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214183
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
    for (short i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        var_15 = ((/* implicit */long long int) arr_2 [i_0 + 1]);
        var_16 = ((/* implicit */int) min((var_16), (var_2)));
        var_17 = ((/* implicit */unsigned short) (-(((int) arr_0 [i_0] [i_0 - 1]))));
    }
    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)77)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)77))) : (264241152U)));
    var_19 = ((/* implicit */signed char) (((+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) var_1)) : (-9085172259550088877LL))))) / (((((/* implicit */long long int) min((var_1), (((/* implicit */int) (short)-128))))) / (((long long int) (short)17466))))));
    var_20 &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)45))));
}
