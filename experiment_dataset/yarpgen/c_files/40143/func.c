/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40143
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_10 = ((/* implicit */unsigned short) max((var_10), (((/* implicit */unsigned short) arr_4 [i_0 - 1] [i_0] [i_0]))));
                arr_6 [i_0 - 1] = ((/* implicit */short) 12ULL);
                var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-37)) ? ((-(((-1086986811080777201LL) - (((/* implicit */long long int) ((/* implicit */int) (short)-30021))))))) : (((/* implicit */long long int) ((/* implicit */int) (short)-1478)))));
                arr_7 [i_0] [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) var_7))));
            }
        } 
    } 
    var_12 = ((/* implicit */short) max((var_12), (var_7)));
    var_13 = ((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_2)) ? (var_5) : (var_5))))) ^ (((/* implicit */int) var_9)));
}
