/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41751
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) (signed char)-22))));
        arr_3 [i_0] [i_0] = ((/* implicit */int) 137434759168ULL);
    }
    /* LoopNest 2 */
    for (long long int i_1 = 1; i_1 < 12; i_1 += 4) 
    {
        for (int i_2 = 0; i_2 < 13; i_2 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) -69772285))));
                /* LoopNest 2 */
                for (signed char i_3 = 0; i_3 < 13; i_3 += 2) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned long long int) 9223372036854775807LL);
                            arr_16 [i_1] [i_4] [i_1] [i_1] = ((/* implicit */long long int) 69772292);
                            var_22 = ((/* implicit */_Bool) 53385555U);
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 |= ((/* implicit */_Bool) var_13);
}
