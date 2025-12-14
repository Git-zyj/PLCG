/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219221
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
    var_20 = ((/* implicit */unsigned int) (signed char)-28);
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        for (signed char i_1 = 4; i_1 < 14; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_1] [i_1] [i_0] = min((((((((/* implicit */int) var_9)) + (2147483647))) >> (((/* implicit */int) ((var_19) > (((/* implicit */unsigned long long int) var_18))))))), (var_2));
                    arr_10 [i_2] &= ((/* implicit */long long int) ((((((/* implicit */int) arr_0 [i_0 - 2] [7LL])) + (((/* implicit */int) var_15)))) <= (((/* implicit */int) max((((((/* implicit */long long int) ((/* implicit */int) var_8))) != (arr_1 [i_0] [(short)14]))), (var_4))))));
                    arr_11 [3U] [3U] [(signed char)13] = min((((/* implicit */int) min((var_8), (((/* implicit */short) (signed char)27))))), (var_5));
                }
            } 
        } 
    } 
}
