/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42185
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
    for (unsigned long long int i_0 = 3; i_0 < 16; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_18 -= ((/* implicit */unsigned int) ((signed char) min((((/* implicit */unsigned long long int) ((_Bool) arr_2 [i_0]))), (((((/* implicit */_Bool) arr_5 [i_0] [i_1 + 1] [4U])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (18446744073709551611ULL))))));
                    var_19 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_1 [i_1 + 2]), (arr_1 [i_1 - 1])))) ? (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (max((arr_1 [i_1 + 3]), (arr_1 [i_1 + 3])))));
                    arr_8 [i_0] [i_1 + 2] [i_0] = ((/* implicit */signed char) min(((+(-1914826909))), (((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))));
                }
            } 
        } 
    } 
    var_20 += ((/* implicit */unsigned long long int) max((min((var_14), (((((/* implicit */_Bool) var_2)) ? (1259262724900044403LL) : (var_14))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -6793371252875886393LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)113))) : (2669303653U)))))))));
    var_21 = ((((/* implicit */unsigned long long int) -1259262724900044391LL)) <= (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) % (min((5ULL), (((/* implicit */unsigned long long int) (short)-3205)))))));
}
