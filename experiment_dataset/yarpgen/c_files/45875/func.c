/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45875
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
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 20; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_1] [(short)4] [i_2] = ((/* implicit */short) 3884805500U);
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 19; i_3 += 2) 
                    {
                        for (long long int i_4 = 3; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) (unsigned short)26183))));
                                arr_13 [i_2] [i_1 - 1] [i_2 + 3] [i_1 + 1] [i_4 + 1] = ((/* implicit */unsigned short) (short)-28753);
                                arr_14 [i_0] &= ((/* implicit */long long int) (short)28753);
                                arr_15 [i_0] [1LL] [i_2] [i_2] [i_0] [i_4] = ((/* implicit */short) 4644086766780744027LL);
                                arr_16 [i_0] [i_1] [i_2 + 3] [i_3] [(signed char)8] = ((/* implicit */unsigned long long int) 4294967295U);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */signed char) 17635511952417430441ULL);
}
