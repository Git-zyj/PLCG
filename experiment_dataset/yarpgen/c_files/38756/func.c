/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38756
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
    var_11 *= ((/* implicit */unsigned char) (-(((/* implicit */int) var_1))));
    var_12 = ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_2)) : (((((((/* implicit */int) var_9)) >= (((/* implicit */int) var_3)))) ? ((+(((/* implicit */int) var_0)))) : (((/* implicit */int) var_8)))));
    var_13 = min((min((var_5), (((/* implicit */int) min((((/* implicit */short) var_9)), (var_1)))))), (max(((~(var_5))), (((/* implicit */int) var_9)))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */short) var_9);
        var_14 &= ((/* implicit */short) arr_0 [i_0]);
        var_15 -= ((((((/* implicit */int) arr_2 [i_0] [i_0])) + (2147483647))) >> (((((/* implicit */int) arr_2 [i_0] [i_0])) + (25465))));
    }
    for (int i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) (~(((/* implicit */int) min((((/* implicit */short) ((700189877) <= (((/* implicit */int) var_8))))), (arr_2 [i_1] [i_1])))))))));
        var_17 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_1])) ? (arr_0 [i_1]) : ((((-(arr_1 [i_1] [i_1]))) >> (((arr_5 [1]) + (2007525231)))))));
    }
}
