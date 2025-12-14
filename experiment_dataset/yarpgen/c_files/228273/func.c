/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228273
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
    for (int i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    arr_9 [(_Bool)1] [i_0] [i_0] |= ((/* implicit */unsigned long long int) ((_Bool) ((var_8) && (arr_0 [i_0 + 1] [i_0 + 1]))));
                    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0 + 1])) / ((-(((/* implicit */int) arr_4 [i_0 + 1]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (unsigned short)58454))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [2]))) / (var_2))) : (((/* implicit */unsigned long long int) ((var_12) / (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (134217724) : (((/* implicit */int) arr_5 [i_0 + 2] [i_0 + 1])))))));
                    var_15 = ((/* implicit */unsigned long long int) arr_1 [i_0 + 3]);
                }
            } 
        } 
    } 
    var_16 |= ((/* implicit */int) var_1);
}
