/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199482
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
    for (int i_0 = 4; i_0 < 22; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 24; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0] [i_1] = (_Bool)1;
                arr_7 [i_0] [i_1] = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_3 [i_0 + 3])) ? (var_4) : (((/* implicit */int) arr_4 [i_1]))))));
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_19)))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))) ? (max(((-(((/* implicit */int) var_13)))), (((/* implicit */int) var_2)))) : (min((var_7), (((/* implicit */int) var_13))))));
    var_21 = ((/* implicit */long long int) (-(((/* implicit */int) var_12))));
}
