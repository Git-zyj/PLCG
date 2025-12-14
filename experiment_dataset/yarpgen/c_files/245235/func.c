/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245235
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
    /* vectorizable */
    for (int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(2U)))) ? (((4294967293U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)24))))) : (((/* implicit */unsigned int) -332174506))));
        var_10 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65528))) * (10U)));
    }
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) max((((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) -1333736003439214043LL)))), (((((/* implicit */unsigned int) 1091890728)) < (474351334U))))))) ^ ((+((+(1333736003439214037LL)))))));
    var_12 = var_2;
    var_13 = ((/* implicit */_Bool) ((unsigned short) ((var_8) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (306224068U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_3)) > (var_9))))))));
}
