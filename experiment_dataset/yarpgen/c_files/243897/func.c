/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243897
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
    var_12 |= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) var_11)), (var_3)));
    var_13 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) 2813609752U)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) ? ((~(2813609758U))) : (((/* implicit */unsigned int) ((var_11) & (((/* implicit */int) (unsigned char)44)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)21300)) ? (((arr_0 [i_0 - 1] [i_0 + 2]) % (arr_0 [i_0 + 1] [i_0 - 1]))) : (((/* implicit */unsigned long long int) 3385361094U))));
        var_15 &= ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_1 [(_Bool)1])) ? (((/* implicit */int) arr_1 [2])) : (((/* implicit */int) arr_1 [2LL]))))));
        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 - 2])))))));
        var_17 = ((/* implicit */unsigned char) (-(arr_0 [i_0 + 1] [i_0 - 2])));
    }
    var_18 = ((/* implicit */unsigned char) var_8);
    var_19 = ((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_1)), (var_5))))))), ((((((~(((/* implicit */int) (unsigned short)13338)))) + (2147483647))) << (((((/* implicit */int) var_6)) - (1)))))));
}
