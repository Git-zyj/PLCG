/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202505
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
    var_19 ^= ((/* implicit */unsigned long long int) max((var_1), (((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned char) (signed char)13)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) ((((arr_5 [i_0] [i_0] [i_0 + 1]) || (arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 1]))) ? (((/* implicit */int) arr_5 [i_0 - 1] [i_0] [i_0 - 1])) : (((/* implicit */int) arr_5 [(unsigned char)7] [i_1] [i_0 - 1]))));
                var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(max((15084839998587229435ULL), (3361904075122322198ULL))))))));
                var_22 *= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) max((18446744073709551607ULL), (((/* implicit */unsigned long long int) var_7))))) ? (((((/* implicit */_Bool) 15084839998587229417ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (3361904075122322198ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_0 [i_0]), (arr_0 [(unsigned short)8]))))))), (3361904075122322178ULL)));
                arr_7 [i_0] [i_1] = var_14;
            }
        } 
    } 
}
