/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5089
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
    for (int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */_Bool) 0ULL);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    for (signed char i_3 = 1; i_3 < 17; i_3 += 4) 
                    {
                        {
                            var_19 ^= ((/* implicit */unsigned int) 4611686018427387904ULL);
                            arr_12 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) min((min((18446744073709551615ULL), (18446744073709551606ULL))), (min((min((18446744073709551610ULL), (18446744073709551615ULL))), (((/* implicit */unsigned long long int) (_Bool)1))))));
                            arr_13 [i_2] [i_0] = ((/* implicit */unsigned int) 18446744073709551610ULL);
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned short)15)), (min((((/* implicit */unsigned int) (_Bool)1)), (4165563283U)))))), (-8506394284499528862LL)));
}
