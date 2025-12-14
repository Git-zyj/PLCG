/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228295
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
    var_14 = ((/* implicit */unsigned char) (+(((((/* implicit */int) (signed char)7)) / (((/* implicit */int) var_9))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_15 += ((/* implicit */unsigned long long int) ((unsigned char) (!(((/* implicit */_Bool) ((4294967295U) / (var_2)))))));
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) 946602407U);
                var_16 += ((/* implicit */unsigned char) var_2);
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)52)) - (((/* implicit */int) var_11))))) != (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)-54))))) - (18446744073709551599ULL))))))));
    var_18 = ((/* implicit */unsigned short) var_13);
    var_19 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-4)) ? (((/* implicit */int) (signed char)-4)) : (((/* implicit */int) (signed char)-11))));
}
