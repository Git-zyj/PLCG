/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49494
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
    var_15 = ((/* implicit */unsigned short) var_6);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */int) arr_4 [i_0] [i_1] [i_1])), (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1))))));
                arr_6 [i_1] [i_1] [i_1] = ((/* implicit */int) var_6);
                arr_7 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (((-(((/* implicit */int) var_10)))) > (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) != (var_3)))))))) >= (((arr_2 [i_1]) | (((/* implicit */long long int) ((/* implicit */int) max((arr_0 [8LL]), (arr_0 [i_1])))))))));
                arr_8 [i_0] [i_1] = ((/* implicit */_Bool) ((((((/* implicit */int) arr_4 [i_0] [i_1] [i_0])) + (((/* implicit */int) arr_4 [i_1] [i_1] [i_0])))) ^ (min((((((/* implicit */int) arr_4 [i_0] [i_1] [i_0])) / (((/* implicit */int) var_6)))), (((/* implicit */int) ((short) arr_2 [i_1])))))));
            }
        } 
    } 
}
