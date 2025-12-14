/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3332
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
    var_17 += ((/* implicit */unsigned short) max((var_12), (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_15))))))))));
    var_18 = var_16;
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */int) min((((/* implicit */unsigned int) (+(((/* implicit */int) min((((/* implicit */unsigned short) (signed char)53)), (arr_2 [i_0]))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned int) arr_0 [i_0] [4])) : (767481110U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0]))) : (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))) : (767481110U)))))));
                var_20 = ((/* implicit */int) (+((-(((((/* implicit */unsigned int) 1842941942)) | (767481110U)))))));
            }
        } 
    } 
}
