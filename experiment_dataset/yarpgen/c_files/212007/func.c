/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212007
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_0] [i_0] = arr_4 [i_1 + 1] [i_1 + 1] [i_0];
                    var_14 = arr_4 [i_0] [i_1 + 2] [i_2];
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */_Bool) ((max((var_1), ((((_Bool)1) || (((/* implicit */_Bool) (short)-1)))))) ? (((((/* implicit */_Bool) (short)-8175)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8)))) : (((((/* implicit */int) (_Bool)0)) << (((/* implicit */int) min(((_Bool)1), ((_Bool)1))))))));
}
