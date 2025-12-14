/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227417
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */long long int) arr_3 [i_1]);
                var_14 = (signed char)-42;
                arr_7 [i_1] [i_1] = ((/* implicit */signed char) arr_3 [i_0]);
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) -1221809581301193700LL);
}
