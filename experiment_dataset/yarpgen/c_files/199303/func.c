/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199303
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
    var_20 = ((/* implicit */unsigned int) max((((/* implicit */unsigned short) ((var_10) < (((/* implicit */unsigned long long int) -269084455))))), ((unsigned short)8017)));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned char) (-(((((/* implicit */int) (unsigned short)8017)) >> (((2980354674U) - (2980354663U)))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((int) (+(((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (unsigned short)14428)))))));
        var_22 &= ((/* implicit */int) arr_2 [i_0 - 1] [i_0 + 2]);
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) (signed char)45);
    }
    var_23 = ((/* implicit */unsigned char) (+(var_12)));
}
