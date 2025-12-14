/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221535
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
    for (unsigned long long int i_0 = 4; i_0 < 16; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned long long int) (_Bool)1);
                var_13 = ((/* implicit */long long int) max(((((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (arr_2 [i_0 - 4] [i_1] [i_0 - 4]))) >= (((/* implicit */int) ((((/* implicit */int) var_12)) == (var_10)))))), (((((/* implicit */_Bool) (unsigned short)3893)) || (((/* implicit */_Bool) var_10))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned int) (-(var_6)));
}
