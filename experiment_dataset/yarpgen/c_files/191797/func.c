/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191797
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
    var_10 = ((/* implicit */long long int) max((var_7), ((~((+(((/* implicit */int) var_5))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    arr_10 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) (signed char)-90)), (arr_1 [i_0])))) ? (((int) var_0)) : (((/* implicit */int) arr_5 [i_1] [i_1])))))));
                    var_11 = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned char)163)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (1698606587323245596LL))), (((/* implicit */long long int) arr_1 [i_0]))))) ? (((/* implicit */int) ((_Bool) (~(((/* implicit */int) (unsigned char)80)))))) : (max((((/* implicit */int) arr_8 [i_0] [i_0] [i_2])), (((((/* implicit */_Bool) arr_4 [21] [21] [21])) ? (arr_1 [i_0]) : (((/* implicit */int) (signed char)-41)))))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned char) var_0);
    var_13 = ((/* implicit */signed char) var_4);
}
