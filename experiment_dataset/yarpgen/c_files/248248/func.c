/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248248
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
    var_10 &= ((/* implicit */_Bool) ((unsigned short) var_3));
    var_11 = ((((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1)))) | (var_3))) << ((((((_Bool)1) ? (((/* implicit */long long int) (+(((/* implicit */int) var_0))))) : (max((((/* implicit */long long int) var_1)), (var_2))))) - (49046LL))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_1])) > (((/* implicit */int) (signed char)31)))))) : ((+(28LL)))));
                arr_5 [i_0] &= ((/* implicit */signed char) (-(max((arr_1 [i_0]), (((/* implicit */unsigned long long int) arr_2 [i_1]))))));
            }
        } 
    } 
    var_13 = ((/* implicit */long long int) var_4);
}
