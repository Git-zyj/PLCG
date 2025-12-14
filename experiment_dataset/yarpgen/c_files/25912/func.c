/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25912
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
    var_10 = ((/* implicit */long long int) var_2);
    var_11 ^= ((/* implicit */unsigned int) max((((var_7) | (var_7))), (((/* implicit */unsigned long long int) var_1))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (long long int i_1 = 4; i_1 < 18; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */unsigned char) (+((~(6702347505480121251LL)))));
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned long long int) max((-295171520), (-1279235208)));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 1; i_2 < 17; i_2 += 3) 
                {
                    for (unsigned char i_3 = 1; i_3 < 17; i_3 += 2) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_13 *= ((/* implicit */int) min((min((((unsigned long long int) var_5)), (((((/* implicit */unsigned long long int) var_5)) | (var_4))))), (18446744073709551615ULL)));
                                var_14 |= ((/* implicit */int) min((((/* implicit */long long int) (_Bool)1)), (arr_4 [i_4] [i_1 - 3])));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
