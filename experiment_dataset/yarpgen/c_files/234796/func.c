/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234796
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
    var_20 += ((/* implicit */_Bool) ((unsigned char) max((((/* implicit */unsigned int) max((((/* implicit */unsigned char) var_12)), (var_1)))), ((+(var_13))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_21 = var_18;
        arr_2 [i_0] = ((/* implicit */_Bool) (-(((arr_1 [i_0 + 1]) / (arr_1 [i_0 + 1])))));
        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((((/* implicit */int) var_16)) >> (((((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1))))) ? (2205130762U) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)54)) << (((/* implicit */int) (unsigned char)22))))))) - (226492399U))))))));
    }
}
