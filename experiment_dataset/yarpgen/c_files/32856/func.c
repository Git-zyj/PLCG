/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32856
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
    var_18 = ((/* implicit */unsigned char) var_10);
    var_19 = ((/* implicit */short) min((var_14), (var_11)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) ((var_2) + (((18446744073709551593ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-24576)))))));
                var_20 |= var_11;
                var_21 += ((/* implicit */unsigned char) min((((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)18798)) * (((/* implicit */int) (unsigned short)11347))))) | (max((((/* implicit */long long int) var_12)), (var_8))))), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_12))) < (var_10))))));
            }
        } 
    } 
    var_22 = var_13;
}
