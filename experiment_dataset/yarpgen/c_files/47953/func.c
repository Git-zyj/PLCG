/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47953
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        var_10 = ((/* implicit */unsigned short) max((var_10), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [(unsigned short)18])) ? (arr_1 [i_0 + 2]) : (arr_1 [i_0 - 1]))))));
        arr_2 [i_0] = ((/* implicit */int) ((signed char) (_Bool)1));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 4; i_1 < 15; i_1 += 2) 
    {
        var_11 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)20198)) - (((/* implicit */int) var_2))));
        var_12 = ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1 + 2]))) : (var_7)));
    }
    for (unsigned short i_2 = 3; i_2 < 22; i_2 += 4) 
    {
        var_13 |= ((/* implicit */unsigned char) max((max((5300005800134885879LL), (((/* implicit */long long int) -1951344469)))), (((/* implicit */long long int) ((_Bool) var_8)))));
        arr_7 [20U] [i_2] |= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((var_9) | (var_4)))) ? (((/* implicit */int) arr_5 [i_2])) : (-564606083)))));
    }
    var_14 = (+(var_4));
    var_15 = ((/* implicit */int) (unsigned short)19921);
}
