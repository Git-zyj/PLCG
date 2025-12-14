/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248686
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
    var_10 = ((/* implicit */int) (-(max((var_0), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) / (((/* implicit */int) var_3)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned short) max((var_11), (var_1)));
                arr_5 [i_0] [(unsigned short)13] [i_1] = ((/* implicit */unsigned short) arr_2 [i_0] [(_Bool)1] [7ULL]);
            }
        } 
    } 
}
