/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243428
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
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((((var_10) + (2147483647))) << (((((var_3) + (937599516))) - (28))))) : (((/* implicit */int) ((_Bool) ((2147483647) / (((/* implicit */int) (unsigned short)29147))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_0] [i_1] = ((/* implicit */short) arr_3 [i_1] [i_1] [i_1]);
                    arr_10 [(unsigned short)3] [(unsigned short)3] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((var_6) ? (((/* implicit */int) (unsigned short)44259)) : (((/* implicit */int) ((_Bool) (_Bool)1)))))) && ((_Bool)1)));
                    arr_11 [i_0] [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)44264)) | (((((/* implicit */int) max((var_2), (var_2)))) / (((/* implicit */int) ((_Bool) arr_2 [i_0] [i_0])))))));
                }
            } 
        } 
    } 
    var_15 = var_4;
    var_16 = ((/* implicit */short) var_3);
    var_17 = ((long long int) ((min((-3323836066721114611LL), (var_5))) / (((/* implicit */long long int) ((var_6) ? (((/* implicit */int) var_1)) : (var_3))))));
}
