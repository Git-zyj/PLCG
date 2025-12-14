/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196433
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
    var_18 = var_7;
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                arr_7 [i_1] = ((/* implicit */unsigned short) min((max((((/* implicit */int) (unsigned short)65535)), (((((/* implicit */int) (signed char)-28)) ^ (((/* implicit */int) (signed char)-90)))))), (((/* implicit */int) ((max((var_10), (((/* implicit */unsigned long long int) arr_0 [i_0] [(signed char)10])))) >= (max((var_8), (((/* implicit */unsigned long long int) var_9)))))))));
                var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) arr_6 [i_0] [i_1]))));
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) var_5);
    var_21 = ((/* implicit */unsigned long long int) min((var_21), (min((((/* implicit */unsigned long long int) ((var_10) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4342394785736386498ULL)) ? (((/* implicit */int) (signed char)81)) : (((/* implicit */int) (unsigned char)93)))))))), (14188274026563584856ULL)))));
}
