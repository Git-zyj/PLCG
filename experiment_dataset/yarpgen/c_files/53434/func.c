/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53434
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
    var_20 = ((/* implicit */unsigned char) ((signed char) (signed char)58));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 9; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */unsigned char) ((arr_4 [i_1 - 2] [i_1 - 2] [i_1 + 2]) & (((/* implicit */long long int) ((/* implicit */int) max((arr_2 [(unsigned char)8] [i_0]), (var_11)))))));
                var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(max((3084538091817897486LL), (-3084538091817897486LL))))))));
                arr_7 [i_0] [i_0] = ((/* implicit */signed char) min((((/* implicit */int) ((unsigned char) arr_4 [i_1 - 3] [(signed char)2] [i_1]))), (((((/* implicit */int) arr_6 [i_1 - 1] [(unsigned char)4])) & (((/* implicit */int) arr_2 [i_1 - 3] [i_0]))))));
            }
        } 
    } 
}
