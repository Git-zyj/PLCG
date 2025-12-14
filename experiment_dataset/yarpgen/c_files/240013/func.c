/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240013
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
    var_15 = ((/* implicit */unsigned long long int) var_0);
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((_Bool) arr_7 [i_2]))), (arr_1 [i_0] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(var_5)))) < ((((_Bool)0) ? (((/* implicit */unsigned long long int) var_11)) : (arr_1 [i_0] [i_0]))))))) : (arr_3 [i_0] [i_1])));
                    var_16 -= ((long long int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))) | ((+(arr_5 [i_0] [i_1])))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */_Bool) ((var_12) ? (var_2) : (var_8)));
}
