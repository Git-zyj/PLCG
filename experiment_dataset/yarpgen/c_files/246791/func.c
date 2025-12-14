/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246791
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
    for (short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_18 = ((/* implicit */int) 1125899890065408LL);
        var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) (short)-32649))));
        var_20 = min(((+(((/* implicit */int) var_14)))), ((~(((/* implicit */int) (unsigned char)250)))));
        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_1 [7] [i_0])))) ? ((~(((/* implicit */int) var_11)))) : (arr_1 [i_0] [i_0])));
    }
    for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */_Bool) (short)32635);
        var_22 = ((/* implicit */unsigned char) var_16);
    }
    var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) var_3))));
    var_24 = ((/* implicit */long long int) ((1152919305583591424ULL) << (((-1063403823) + (1063403849)))));
}
