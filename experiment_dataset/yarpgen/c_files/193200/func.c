/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193200
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
    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) 4101399279U)) && (((/* implicit */_Bool) (unsigned short)48150)))) ? (((/* implicit */int) (unsigned short)48150)) : (((/* implicit */int) ((((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_6)))) || (((/* implicit */_Bool) var_3))))))))));
    var_20 = ((/* implicit */unsigned int) var_7);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_21 = ((/* implicit */unsigned short) var_17);
        var_22 *= ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))) <= (((/* implicit */int) arr_0 [i_0]))));
        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) (~(max((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))), (((int) arr_0 [i_0])))))))));
    }
    for (long long int i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        var_24 = ((((max((var_2), (((/* implicit */long long int) (_Bool)1)))) | (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) arr_3 [i_1] [i_1])) : (arr_2 [i_1])))))) == (((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */unsigned int) var_16)) : (193568033U)))))));
        var_25 = var_12;
    }
}
