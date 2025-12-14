/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233334
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
    for (short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (signed char i_1 = 3; i_1 < 14; i_1 += 3) 
        {
            {
                arr_5 [i_1] = (i_1 % 2 == 0) ? (((/* implicit */int) ((6ULL) >> (((arr_2 [i_0] [i_0] [i_1]) - (10481752557264484209ULL)))))) : (((/* implicit */int) ((6ULL) >> (((((arr_2 [i_0] [i_0] [i_1]) - (10481752557264484209ULL))) - (6285809301146323207ULL))))));
                var_16 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 18446744073709551610ULL)) ? (6ULL) : (((/* implicit */unsigned long long int) 8000233189181241133LL))));
                var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) var_15))));
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(var_0))))));
}
