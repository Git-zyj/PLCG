/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220197
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
    var_14 = ((/* implicit */short) min((((((/* implicit */_Bool) (unsigned short)23953)) ? (-1757671316) : (16))), (var_3)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((signed char) (unsigned char)7)))));
                var_16 = ((/* implicit */unsigned long long int) min(((((-(((/* implicit */int) var_0)))) & (((147884993) >> (((-147884977) + (147884978))))))), ((~((+(((/* implicit */int) var_0))))))));
                var_17 = ((/* implicit */_Bool) max((((/* implicit */int) var_0)), ((((+(((/* implicit */int) var_9)))) & (((/* implicit */int) ((signed char) var_0)))))));
            }
        } 
    } 
}
