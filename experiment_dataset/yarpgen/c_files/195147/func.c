/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195147
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
    var_20 = ((/* implicit */unsigned short) var_13);
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 10; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */int) 18446744073709551596ULL);
                var_21 = ((/* implicit */int) var_7);
                arr_6 [i_0] [i_0] = min((((/* implicit */unsigned long long int) arr_3 [i_1] [i_0] [i_0])), ((+(arr_0 [i_0] [i_1]))));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */int) var_9);
            }
        } 
    } 
}
