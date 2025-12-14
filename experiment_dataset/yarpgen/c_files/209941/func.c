/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209941
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
    var_16 *= ((/* implicit */signed char) (((-(((/* implicit */int) (signed char)-96)))) >= (((/* implicit */int) ((signed char) (+(((/* implicit */int) var_0))))))));
    var_17 = var_9;
    /* LoopSeq 1 */
    for (signed char i_0 = 4; i_0 < 13; i_0 += 2) 
    {
        var_18 = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) (signed char)80))) >> (((((((((/* implicit */int) (signed char)-121)) >= (((/* implicit */int) (signed char)-32)))) ? (((/* implicit */int) (signed char)106)) : (((((/* implicit */int) (signed char)84)) - (((/* implicit */int) (signed char)-96)))))) - (179)))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */signed char) (-(((/* implicit */int) min((min(((signed char)122), ((signed char)-88))), ((signed char)127))))));
                    arr_9 [i_0] = ((/* implicit */signed char) (-((+(((((/* implicit */_Bool) (signed char)80)) ? (((/* implicit */int) (signed char)63)) : (((/* implicit */int) (signed char)32))))))));
                }
            } 
        } 
    }
    var_20 = ((signed char) max((var_13), (var_5)));
}
