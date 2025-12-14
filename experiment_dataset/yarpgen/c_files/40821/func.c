/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40821
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
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            {
                arr_5 [i_0 - 1] [i_1] [i_1] = ((/* implicit */signed char) 18446744073709551611ULL);
                var_14 = ((/* implicit */short) arr_2 [i_0]);
                var_15 = ((/* implicit */unsigned char) var_1);
            }
        } 
    } 
    var_16 &= ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (min((((/* implicit */unsigned long long int) (((_Bool)1) || (((/* implicit */_Bool) var_12))))), (((unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
}
