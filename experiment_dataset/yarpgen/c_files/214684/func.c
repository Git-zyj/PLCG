/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214684
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
    var_10 = var_4;
    var_11 += ((((/* implicit */int) var_4)) > (min((((var_6) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) max((var_3), (var_3)))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_12 = ((_Bool) ((_Bool) min((arr_0 [(_Bool)1] [i_1]), (arr_3 [i_1] [i_1]))));
                    var_13 |= arr_0 [i_0] [i_1];
                }
            } 
        } 
    } 
}
