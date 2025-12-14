/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205444
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
    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) max((min((((/* implicit */int) max((((/* implicit */unsigned short) var_9)), (var_17)))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_11)))))), (((/* implicit */int) var_13)))))));
    var_19 &= ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
    var_20 &= ((/* implicit */unsigned short) var_9);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned short i_1 = 4; i_1 < 22; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) ((unsigned short) var_2))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7))))))) ? (max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_7)))), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_15)))))) : (max(((~(((/* implicit */int) var_0)))), (((/* implicit */int) ((unsigned char) var_5)))))));
                    arr_6 [i_1 - 3] [(unsigned short)20] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) min((var_16), (var_13)))), (max((((/* implicit */unsigned short) var_16)), (var_17)))))) ? (((((/* implicit */_Bool) min((var_5), (var_16)))) ? (((/* implicit */int) min((var_0), (var_6)))) : (((/* implicit */int) min((var_12), (var_6)))))) : (min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_15)))), (((/* implicit */int) min((var_15), (var_1))))))));
                }
            } 
        } 
    } 
}
