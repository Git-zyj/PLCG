/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213752
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
    var_10 = ((/* implicit */unsigned char) min((((/* implicit */short) var_3)), (var_0)));
    var_11 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) var_7)))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) arr_1 [i_0] [i_0]))));
        var_13 |= ((/* implicit */unsigned char) max(((~((-(((/* implicit */int) (short)31280)))))), (((/* implicit */int) ((((/* implicit */_Bool) (short)31280)) || (((/* implicit */_Bool) arr_1 [i_0] [i_0])))))));
    }
    var_14 &= ((/* implicit */_Bool) var_5);
    var_15 = ((/* implicit */short) (-(max((max((((/* implicit */long long int) (short)31275)), (var_2))), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)31283)) ? (((/* implicit */int) (short)-31280)) : (((/* implicit */int) (short)31271)))))))));
}
