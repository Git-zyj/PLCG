/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229549
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
    var_18 = ((/* implicit */unsigned long long int) var_4);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (signed char i_1 = 3; i_1 < 15; i_1 += 3) 
        {
            for (signed char i_2 = 3; i_2 < 14; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */signed char) (short)-7795);
                    var_20 = ((/* implicit */unsigned long long int) min((var_20), (max((((/* implicit */unsigned long long int) ((long long int) ((_Bool) (unsigned short)45395)))), (max((arr_5 [i_2] [i_1] [i_0]), (((/* implicit */unsigned long long int) arr_4 [i_1] [i_1 - 1] [i_1 - 3]))))))));
                    var_21 *= ((/* implicit */signed char) 8510447601176847135LL);
                }
            } 
        } 
    } 
}
