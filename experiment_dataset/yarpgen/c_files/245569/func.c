/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245569
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
    for (unsigned int i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [(_Bool)1] [i_1] [i_0] = (!(((/* implicit */_Bool) ((signed char) arr_0 [i_0 - 1]))));
                arr_6 [i_0] [i_0] = ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) + (((((/* implicit */_Bool) -2642220492862588774LL)) ? (arr_2 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))));
                arr_7 [i_0] [i_0] = ((/* implicit */short) (-(((/* implicit */int) arr_1 [i_1]))));
                arr_8 [i_0] [i_1] = ((((((((/* implicit */int) var_6)) << (((arr_3 [i_1] [i_0]) - (60088907))))) % (((((/* implicit */int) (unsigned short)37297)) + (((/* implicit */int) (_Bool)1)))))) & (((/* implicit */int) arr_0 [i_0])));
            }
        } 
    } 
    var_10 = ((/* implicit */_Bool) ((((-1313727059) + (2147483647))) << (((((/* implicit */int) (short)5108)) - (5108)))));
    var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) -1313727062)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)-10345))));
    var_12 = ((/* implicit */unsigned int) var_8);
}
