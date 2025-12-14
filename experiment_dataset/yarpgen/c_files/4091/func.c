/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4091
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
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_0] = min((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)56047)) : (((/* implicit */int) arr_4 [(unsigned short)4] [i_1] [i_1]))))) ? (((((/* implicit */_Bool) (unsigned short)9486)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0)))) : (var_1))), (max((((/* implicit */int) ((arr_4 [i_0] [i_0] [i_0]) && (((/* implicit */_Bool) (unsigned short)56047))))), (arr_3 [i_0] [i_0] [i_0]))));
                var_10 = ((/* implicit */int) var_0);
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */int) var_6)) != (((/* implicit */int) var_2))));
    var_12 = ((/* implicit */signed char) max((((/* implicit */int) var_9)), (max((((/* implicit */int) var_3)), (((((/* implicit */int) (unsigned short)56047)) / (((/* implicit */int) var_0))))))));
}
