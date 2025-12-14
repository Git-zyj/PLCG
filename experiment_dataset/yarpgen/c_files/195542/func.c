/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195542
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */short) (+(((int) arr_0 [i_0] [i_0]))));
                var_16 = min((arr_4 [i_1]), (((((/* implicit */_Bool) (unsigned char)235)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned short)61516)))));
                var_17 = ((/* implicit */unsigned char) var_3);
                var_18 = ((/* implicit */short) max(((+(((/* implicit */int) arr_1 [i_0] [(signed char)15])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1])))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_14)) || ((!(((/* implicit */_Bool) var_9))))));
    var_20 = ((/* implicit */int) (unsigned char)27);
}
