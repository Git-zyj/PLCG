/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194482
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
    var_10 = ((/* implicit */unsigned char) 0ULL);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 8; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    var_11 = ((/* implicit */signed char) max((var_2), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_1 - 2] [i_1])))))));
                    arr_10 [i_0 + 1] [i_1] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) min((((var_0) >> (((18446744073709551615ULL) - (18446744073709551615ULL))))), (arr_4 [i_1 + 1] [i_0 - 2]))))));
                }
            } 
        } 
    } 
}
