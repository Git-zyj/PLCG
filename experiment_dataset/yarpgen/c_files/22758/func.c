/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22758
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
    var_14 |= ((/* implicit */short) var_6);
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (short)-24625)) ? (3202520267U) : (3202520275U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((min((((/* implicit */unsigned int) (unsigned short)59844)), (var_12))) >= (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))) : (var_11)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            {
                arr_4 [(signed char)5] [i_1] = ((/* implicit */signed char) ((max((((/* implicit */int) arr_0 [i_1])), (var_6))) * (((/* implicit */int) var_5))));
                arr_5 [i_0] [i_1] [i_1] = ((min((((/* implicit */unsigned int) var_7)), (3202520267U))) - ((+(4294967286U))));
            }
        } 
    } 
}
