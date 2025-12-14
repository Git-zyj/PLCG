/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196909
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
    var_14 = ((/* implicit */unsigned short) min((((/* implicit */long long int) var_3)), (var_10)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            {
                arr_5 [21U] [21U] [i_1] &= ((unsigned short) max((((/* implicit */int) (unsigned short)29855)), (arr_1 [i_0] [i_1])));
                arr_6 [i_0] = ((/* implicit */long long int) (unsigned short)29855);
            }
        } 
    } 
    var_15 = ((/* implicit */int) min((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)31820))) * (4294967295U))), (((/* implicit */unsigned int) min((var_0), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_10))))))))));
}
