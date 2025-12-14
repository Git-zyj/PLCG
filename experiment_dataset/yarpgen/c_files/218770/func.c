/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218770
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
    for (unsigned short i_0 = 3; i_0 < 15; i_0 += 2) 
    {
        for (int i_1 = 4; i_1 < 15; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 13; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) max((var_6), (var_6)))), (max((((/* implicit */unsigned long long int) var_15)), (var_7)))));
                    var_18 = ((/* implicit */unsigned short) ((min((((/* implicit */int) var_5)), (var_4))) >= (((/* implicit */int) var_1))));
                    arr_10 [i_0] [(unsigned short)9] [i_0 + 1] [i_0] = var_13;
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) var_1);
}
