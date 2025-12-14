/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223411
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
    var_19 = var_14;
    var_20 *= ((/* implicit */signed char) (_Bool)1);
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 20; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (int i_2 = 1; i_2 < 21; i_2 += 4) 
            {
                {
                    arr_8 [i_2] [i_0] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U)))))));
                    var_21 = ((/* implicit */short) (+(562949953355776LL)));
                    var_22 -= (!((!(((/* implicit */_Bool) (+(4294967295U)))))));
                    var_23 = ((/* implicit */_Bool) min((var_23), ((_Bool)1)));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */_Bool) 883938290U);
}
