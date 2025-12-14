/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205359
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
    var_15 = ((/* implicit */unsigned int) ((short) var_9));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_6 [1] [i_1] [i_1] [i_1] = min((((/* implicit */long long int) (-(((/* implicit */int) (short)-31078))))), (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)68))) : (arr_2 [i_0]))));
                    var_16 = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_5 [i_2 + 2])) ? (arr_2 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1 + 1]))))), (((/* implicit */long long int) (+((+(((/* implicit */int) (unsigned char)161)))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) == (((((/* implicit */_Bool) var_5)) ? (min((((/* implicit */unsigned long long int) var_4)), (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) * (var_14))))))));
}
