/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54364
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
    var_12 = ((/* implicit */unsigned short) ((long long int) (unsigned char)16));
    var_13 |= ((/* implicit */long long int) var_11);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 24; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(arr_3 [i_1]))))));
                arr_4 [i_0] [i_0] = ((/* implicit */short) (((!(((/* implicit */_Bool) 2354206139U)))) ? (max((((/* implicit */unsigned long long int) arr_1 [i_0])), (arr_3 [i_0]))) : (arr_3 [i_1])));
            }
        } 
    } 
    var_15 = ((/* implicit */short) var_8);
    var_16 = ((/* implicit */short) var_10);
}
