/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33241
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
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    arr_8 [i_1] [i_1] = ((/* implicit */short) (unsigned char)201);
                    arr_9 [i_0] [i_1] [i_2] [i_1] = 4294967283U;
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 10; i_4 += 2) 
                        {
                            {
                                arr_14 [i_1] [i_4] = ((/* implicit */int) 13U);
                                var_11 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned int) 1526906765))));
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_1] = ((/* implicit */unsigned short) 18446744073709551615ULL);
                                arr_16 [i_1] [i_2] [i_2] [i_1] [i_1] = 0ULL;
                                var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) 0U))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_13 = var_1;
    var_14 = ((/* implicit */unsigned long long int) var_1);
    var_15 = ((/* implicit */unsigned long long int) var_2);
}
