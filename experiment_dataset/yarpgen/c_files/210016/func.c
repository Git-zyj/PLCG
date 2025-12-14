/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210016
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
    var_16 = max((((/* implicit */long long int) var_12)), (var_4));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */unsigned long long int) var_14);
                    arr_8 [i_1] [i_1] [i_2] = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0] [i_1] [i_2])) * (((/* implicit */int) arr_2 [i_2] [i_0] [i_0]))))), (max((((/* implicit */unsigned long long int) min((arr_7 [i_2] [i_1] [i_1] [7LL]), (((/* implicit */long long int) var_13))))), (((((/* implicit */unsigned long long int) arr_5 [i_1] [i_1])) * (arr_6 [i_1] [i_1] [i_1] [i_1])))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned short) var_2);
}
