/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42005
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
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 4; i_2 < 12; i_2 += 1) 
            {
                {
                    var_12 = ((max((((/* implicit */long long int) (!(arr_0 [i_2])))), ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))) : (arr_4 [i_0] [i_0] [i_0] [i_0]))))) + ((~(((arr_1 [i_0] [i_1]) ? (var_5) : (var_5))))));
                    var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) max((((((/* implicit */int) arr_3 [i_1])) - (((/* implicit */int) var_11)))), (((/* implicit */int) ((_Bool) arr_2 [i_0 - 2]))))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */long long int) max((var_14), ((-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) (~(((/* implicit */int) var_3))))) : (var_0)))))));
}
