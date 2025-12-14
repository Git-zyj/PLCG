/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228684
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
    for (long long int i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 20; i_2 += 4) 
            {
                {
                    var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) max(((-((+(-1410649784942403060LL))))), (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_7 [i_0] [11ULL] [i_2 + 2] [i_1])), (1848280241U)))))))));
                    arr_8 [i_0] [18] [i_2 + 3] [i_2 + 3] = ((/* implicit */unsigned short) var_7);
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) (_Bool)1))));
}
