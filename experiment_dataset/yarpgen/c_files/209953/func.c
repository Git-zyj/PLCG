/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209953
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
    var_13 = ((/* implicit */signed char) var_4);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 12; i_2 += 4) 
            {
                {
                    var_14 *= ((/* implicit */signed char) max((((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2 - 1] [i_2 + 1]))) / (var_7))), ((-(3531821114U)))));
                    var_15 ^= -16LL;
                    var_16 = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
                }
            } 
        } 
    } 
}
