/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32596
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
    var_20 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((int) ((unsigned short) var_19)))), (var_3)));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    var_21 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_19))));
                    var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (short)-31456))));
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) arr_0 [i_0] [i_0]);
                }
            } 
        } 
        var_23 += ((/* implicit */_Bool) max((((/* implicit */int) min((((_Bool) (_Bool)1)), (arr_3 [(short)8] [i_0] [(short)8])))), (((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0] [(short)6]))))) ? (arr_5 [(short)3] [i_0] [i_0]) : (((/* implicit */int) arr_6 [i_0] [17U]))))));
    }
}
