/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190377
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
    var_12 = ((/* implicit */unsigned int) ((unsigned long long int) ((((((((/* implicit */long long int) ((/* implicit */int) var_11))) & (var_5))) + (9223372036854775807LL))) << (((var_8) - (946561126643099695LL))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) 588316833U))));
        /* LoopSeq 1 */
        for (int i_1 = 4; i_1 < 24; i_1 += 1) 
        {
            var_14 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */int) max((((/* implicit */short) var_0)), ((short)0)))) != (((/* implicit */int) (short)-3)))));
            arr_4 [i_0] [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) (short)0))));
        }
        var_15 = ((/* implicit */unsigned long long int) (short)-13);
    }
}
