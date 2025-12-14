/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239293
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
    for (short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) max((max((max((arr_8 [i_2] [i_2]), (((/* implicit */long long int) arr_4 [i_1] [i_1] [i_1])))), (max((arr_1 [i_0]), (((/* implicit */long long int) arr_7 [i_0] [i_0] [i_0] [i_0])))))), (((/* implicit */long long int) (+(((/* implicit */int) min((arr_0 [i_0]), (((/* implicit */unsigned char) arr_2 [i_0]))))))))));
                    var_12 += ((/* implicit */long long int) arr_0 [i_2]);
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */short) (+((-(((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_8)))))))));
}
