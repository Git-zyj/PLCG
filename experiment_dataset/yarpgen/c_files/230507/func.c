/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230507
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
    var_12 = ((/* implicit */_Bool) ((short) max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) var_3)) : (var_5))), (max((var_5), (((/* implicit */unsigned long long int) var_3)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */short) arr_3 [i_0] [i_1] [i_0]);
                var_14 = ((/* implicit */unsigned short) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) | (arr_1 [i_0]))) ^ (((unsigned long long int) arr_1 [i_0])))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_4 [i_0] [(short)6] [i_0]))))));
            }
        } 
    } 
}
