/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51244
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
    var_11 ^= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) 8818144269292476180LL)) ? (((/* implicit */int) (unsigned char)35)) : (((/* implicit */int) var_4))))));
    var_12 = (-(((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_9))) - (((/* implicit */unsigned int) var_5)))));
    var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) var_1))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) arr_1 [i_0 + 2]);
                    var_15 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((((/* implicit */int) arr_7 [i_0 + 1] [i_0 - 1] [i_0 + 3] [i_0])) * (0)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0 - 1] [(unsigned short)14] [(unsigned char)8] [i_0 + 3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 - 1]))) : (((((/* implicit */_Bool) 1765062564U)) ? (131068LL) : (((/* implicit */long long int) 2529904731U))))))) : (((((/* implicit */_Bool) 2529904732U)) ? (((/* implicit */unsigned long long int) 1765062564U)) : (18446744073709551615ULL)))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (9399039301688007120ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) ? (((var_4) ? (((/* implicit */int) (unsigned short)64125)) : (((/* implicit */int) (signed char)97)))) : ((~(100755549))))) / (max((max((-363118399), (100755549))), (((/* implicit */int) (unsigned short)1411))))));
}
