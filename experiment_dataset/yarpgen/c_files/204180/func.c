/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204180
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
    var_16 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((var_12) || (((/* implicit */_Bool) var_0)))))))) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1232))) * (17922320846898251594ULL))))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */int) max((var_17), ((+(max((((/* implicit */int) ((signed char) var_14))), (((arr_1 [2ULL] [2ULL]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_0 [i_0]))))))))));
                arr_4 [6ULL] [i_1] = ((/* implicit */int) var_4);
            }
        } 
    } 
}
