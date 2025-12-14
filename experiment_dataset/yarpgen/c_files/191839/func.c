/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191839
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                arr_5 [6] = ((/* implicit */short) (!(((/* implicit */_Bool) (short)-24018))));
                arr_6 [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) ((long long int) ((unsigned short) (-(((/* implicit */int) arr_1 [i_1]))))));
                var_18 = ((/* implicit */int) ((((/* implicit */_Bool) (+(var_1)))) ? (((/* implicit */long long int) ((/* implicit */int) (short)6131))) : (arr_4 [i_0])));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) var_3);
}
