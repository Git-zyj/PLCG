/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52519
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
    for (unsigned char i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        arr_2 [i_0] |= ((/* implicit */unsigned char) min((((((/* implicit */int) (unsigned char)0)) << (((((/* implicit */int) (unsigned char)255)) - (233))))), (((/* implicit */int) ((((/* implicit */int) (unsigned char)31)) < (((/* implicit */int) (unsigned char)244)))))));
        var_11 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */int) ((unsigned char) arr_1 [i_0] [i_0]))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_0 [i_0])))))), ((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))))))));
    }
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) max((var_3), (var_0)))) * (((/* implicit */int) var_8))))) ? (((((/* implicit */int) min((var_1), (var_8)))) >> (((((/* implicit */int) (unsigned char)244)) - (234))))) : (((/* implicit */int) var_6))));
    var_13 = ((/* implicit */unsigned char) max((var_13), (var_6)));
}
