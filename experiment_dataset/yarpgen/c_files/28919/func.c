/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28919
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
    var_14 = ((/* implicit */_Bool) (-((-(((var_3) / (var_9)))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */unsigned long long int) max((var_15), ((-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1] [i_2])) ? (var_1) : (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) 570403279U)) : (max((arr_8 [i_2] [i_0] [i_1] [i_0]), (((/* implicit */unsigned long long int) var_6))))))))));
                    var_16 &= ((/* implicit */long long int) arr_2 [i_2] [i_1]);
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_1)))) ? (min((((((/* implicit */unsigned long long int) 3724564016U)) + (var_2))), (((((/* implicit */unsigned long long int) var_4)) % (var_2))))) : (((/* implicit */unsigned long long int) (~((~(var_3))))))));
}
