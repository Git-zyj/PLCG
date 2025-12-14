/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242764
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
    var_20 = ((_Bool) (-(((/* implicit */int) var_2))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 7; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */long long int) ((unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0]))))))));
                var_22 = ((/* implicit */signed char) ((int) ((long long int) 5ULL)));
                var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_0 + 1] [i_0 + 2])) ? (arr_3 [i_0 + 1] [i_0 + 1] [i_0 + 2]) : (arr_3 [i_0 + 1] [i_0 + 1] [i_0 + 2])))))))));
                var_24 = ((/* implicit */int) var_0);
            }
        } 
    } 
}
