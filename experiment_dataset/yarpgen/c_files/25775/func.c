/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25775
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
    var_10 |= ((min((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_3))))), (min((var_8), (((/* implicit */unsigned long long int) (_Bool)1)))))) >> (((min((((/* implicit */int) ((unsigned short) var_8))), (var_9))) - (13076))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                arr_7 [i_1] [8U] [i_1] |= ((/* implicit */unsigned long long int) (!((_Bool)0)));
                var_11 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)-1777)) ? (((/* implicit */int) (_Bool)1)) : ((+(528482304))))), ((-(((/* implicit */int) max(((_Bool)1), ((_Bool)1))))))));
            }
        } 
    } 
    var_12 &= ((/* implicit */short) ((2072423619U) >> (((((/* implicit */int) (unsigned short)45588)) - (45586)))));
}
