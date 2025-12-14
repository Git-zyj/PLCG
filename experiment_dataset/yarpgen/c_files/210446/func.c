/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210446
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
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_0] &= ((/* implicit */_Bool) ((long long int) max((4291293013U), (3674259U))));
                arr_5 [(signed char)3] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (871872667U))))));
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) var_11);
    var_20 = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) -9223372036854775806LL)))))));
}
