/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241656
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
    var_18 = ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) 1412353090)) ? (var_0) : (((/* implicit */int) var_3)))) : (1412353096));
    var_19 = ((/* implicit */unsigned char) var_11);
    /* LoopNest 2 */
    for (short i_0 = 4; i_0 < 15; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 15; i_1 += 4) 
        {
            {
                arr_6 [16U] [(short)11] [i_0 - 1] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) (~(3679084838U))))))) + (arr_4 [0])));
                var_20 = ((/* implicit */unsigned char) (+(min(((~(3))), (((((/* implicit */_Bool) var_16)) ? (var_15) : (-1412353096)))))));
            }
        } 
    } 
    var_21 = (-(((((((/* implicit */_Bool) -2147483646)) ? (((/* implicit */int) (short)6210)) : (((/* implicit */int) var_9)))) + (((((/* implicit */_Bool) var_2)) ? (var_0) : (((/* implicit */int) var_14)))))));
}
