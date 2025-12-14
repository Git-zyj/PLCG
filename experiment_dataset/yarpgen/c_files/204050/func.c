/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204050
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
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 12; i_2 += 3) 
                {
                    for (int i_3 = 1; i_3 < 10; i_3 += 4) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) (+(((arr_7 [(unsigned short)9] [i_1 - 3] [i_2 - 3] [i_3] [(signed char)10] [i_0]) ? (((/* implicit */int) arr_7 [i_0] [i_1 - 4] [i_2] [i_2 - 2] [i_1 - 4] [4ULL])) : (((/* implicit */int) arr_7 [i_0] [i_1 + 1] [5] [i_3] [(unsigned short)2] [(unsigned short)2])))))))));
                            var_14 = ((/* implicit */unsigned long long int) max((var_14), (14479860100461367110ULL)));
                            var_15 = arr_9 [4] [i_2] [i_3];
                        }
                    } 
                } 
                var_16 = max(((-((((_Bool)1) ? (288212783965667328ULL) : (4094ULL))))), (3ULL));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) != (var_3)));
    var_18 += ((var_8) ? (var_12) : (((/* implicit */unsigned long long int) ((int) ((var_11) / (((/* implicit */int) (unsigned short)32768)))))));
    var_19 = ((/* implicit */unsigned short) var_3);
}
