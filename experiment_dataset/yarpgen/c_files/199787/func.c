/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199787
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
    var_11 = ((/* implicit */int) (!(((/* implicit */_Bool) min((var_6), (((/* implicit */long long int) var_5)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_6 [i_2] [i_2] [i_0] [i_2] = ((/* implicit */signed char) min((((/* implicit */int) ((_Bool) arr_4 [i_2] [i_1] [i_0]))), ((+(((/* implicit */int) arr_3 [i_1]))))));
                    var_12 = (+(((/* implicit */int) (signed char)0)));
                    var_13 = ((/* implicit */unsigned char) min((var_13), (((unsigned char) var_3))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) (!(((/* implicit */_Bool) var_8)))))));
    var_15 *= ((/* implicit */signed char) (-(var_10)));
}
