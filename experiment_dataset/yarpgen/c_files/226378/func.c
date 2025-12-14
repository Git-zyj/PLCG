/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226378
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
    for (unsigned short i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_18)) ? (var_11) : (((/* implicit */int) var_19)))) | (((((/* implicit */int) var_0)) % (((/* implicit */int) arr_4 [i_0 - 1]))))));
                arr_7 [i_0] = ((/* implicit */int) arr_5 [0U] [i_0 - 1]);
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) max((((((/* implicit */int) ((unsigned char) var_9))) * (((/* implicit */int) var_3)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
}
