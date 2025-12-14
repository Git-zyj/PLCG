/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20850
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
    var_18 = min((((/* implicit */unsigned long long int) min((((long long int) var_16)), (var_5)))), (var_15));
    var_19 = ((/* implicit */int) max((((/* implicit */unsigned long long int) var_4)), (var_10)));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (unsigned int i_2 = 1; i_2 < 13; i_2 += 3) 
            {
                {
                    var_20 += ((/* implicit */long long int) max((((arr_5 [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 + 1]) < (arr_5 [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 + 1]))), ((!(((/* implicit */_Bool) arr_5 [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 + 1]))))));
                    var_21 = ((/* implicit */unsigned char) ((max((((/* implicit */long long int) arr_3 [i_0] [i_1])), (max((((/* implicit */long long int) (unsigned char)18)), (arr_2 [i_0]))))) ^ (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                    var_22 += ((/* implicit */_Bool) arr_5 [i_0] [(unsigned char)0] [i_2 - 1] [i_2]);
                }
            } 
        } 
    } 
}
