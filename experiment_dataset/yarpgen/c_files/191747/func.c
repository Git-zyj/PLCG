/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191747
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
    var_19 = var_12;
    var_20 = (_Bool)1;
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_21 += var_8;
                var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) (+(min(((((_Bool)1) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (_Bool)1)))))))));
                arr_6 [i_0] = ((/* implicit */_Bool) (((!(arr_1 [i_0] [i_0]))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1))));
                var_23 = (_Bool)1;
            }
        } 
    } 
}
