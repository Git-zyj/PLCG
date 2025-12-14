/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198332
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
    var_20 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)30067))) % (min((((/* implicit */unsigned int) min((var_7), (((/* implicit */unsigned short) var_19))))), (max((((/* implicit */unsigned int) (short)-30067)), (var_4)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) min((((/* implicit */unsigned short) (short)-18122)), ((unsigned short)65535)))) & (((/* implicit */int) arr_3 [i_0]))));
                var_22 = ((/* implicit */short) min((var_22), (var_1)));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) (short)18122))));
    var_24 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)18421)) % (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)8))))))));
}
