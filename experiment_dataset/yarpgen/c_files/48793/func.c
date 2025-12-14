/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48793
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
    for (int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */signed char) max((((/* implicit */unsigned int) min((arr_6 [i_1 + 1] [i_1 + 1]), (arr_6 [i_1 + 1] [i_1 - 1])))), (arr_7 [i_1])));
                    var_13 = max((min((max((arr_7 [(unsigned char)18]), (((/* implicit */unsigned int) arr_4 [i_2])))), (((/* implicit */unsigned int) arr_6 [i_1 + 1] [i_1 + 1])))), (max((arr_7 [i_1 - 1]), (arr_7 [i_1 + 1]))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */long long int) var_4);
    var_15 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((var_3) - (((/* implicit */long long int) ((/* implicit */int) var_5))))) - (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? (var_10) : (var_11)));
}
