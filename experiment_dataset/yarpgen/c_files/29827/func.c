/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29827
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
    var_12 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((var_3), (((/* implicit */long long int) var_10)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) (+(1199351651)))) ? (min((var_6), (((/* implicit */unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (short)32748)), (arr_5 [i_0])))))));
                arr_7 [i_1] = (-(((/* implicit */int) ((((/* implicit */_Bool) (short)-32736)) || (((/* implicit */_Bool) arr_3 [i_0] [i_1]))))));
            }
        } 
    } 
    var_13 = ((/* implicit */int) var_0);
}
