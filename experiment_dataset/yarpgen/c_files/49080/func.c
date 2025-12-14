/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49080
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
    var_13 = ((/* implicit */unsigned char) 1997993846U);
    var_14 = ((/* implicit */unsigned char) var_8);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */short) ((int) ((unsigned long long int) ((2561615692U) * (1239040078U)))));
                var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (min((1239040078U), (((/* implicit */unsigned int) ((((/* implicit */int) (short)-8673)) < (((/* implicit */int) (unsigned short)60669))))))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) + (((/* implicit */int) max((arr_0 [i_0]), (((/* implicit */short) arr_3 [i_0] [i_0])))))))))))));
                arr_5 [i_0] = ((/* implicit */short) arr_3 [i_0] [i_1]);
            }
        } 
    } 
}
