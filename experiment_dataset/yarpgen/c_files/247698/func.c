/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247698
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
    var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_0))))));
    var_15 = ((/* implicit */unsigned int) 0LL);
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_11)))) <= ((+(((/* implicit */int) var_11)))))))) : (((((((/* implicit */long long int) ((/* implicit */int) (signed char)0))) / (3864348378811047393LL))) + (((((/* implicit */_Bool) 6929515436933789225ULL)) ? (((/* implicit */long long int) var_6)) : (-3864348378811047393LL)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_1]))))) * (((((/* implicit */_Bool) ((((/* implicit */long long int) arr_1 [i_0])) / (arr_3 [i_0] [i_1])))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) max((arr_4 [i_0]), (((/* implicit */unsigned short) var_5)))))))));
                arr_5 [15] [i_1] [15] = ((/* implicit */signed char) (+(0U)));
                var_18 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) var_5))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)74))) : (min((arr_3 [i_0] [i_0]), (((/* implicit */long long int) (signed char)6))))));
            }
        } 
    } 
}
