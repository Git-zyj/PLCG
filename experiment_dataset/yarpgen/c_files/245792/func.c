/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245792
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
    for (unsigned char i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        arr_2 [i_0 + 1] [i_0 + 1] = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) ((var_13) + (((/* implicit */int) arr_0 [i_0])))))))));
        arr_3 [i_0] = ((/* implicit */signed char) (!(((((/* implicit */int) arr_0 [i_0 + 1])) > (((/* implicit */int) ((signed char) (unsigned short)58457)))))));
        arr_4 [(short)0] = ((/* implicit */signed char) (~(((/* implicit */int) var_14))));
        arr_5 [i_0] [i_0] = ((/* implicit */_Bool) max(((-(((/* implicit */int) arr_1 [i_0 - 1])))), ((+(((int) var_4))))));
    }
    var_17 = ((/* implicit */int) var_6);
    var_18 |= ((/* implicit */signed char) (~(((/* implicit */int) ((unsigned short) ((var_9) == (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))))));
}
