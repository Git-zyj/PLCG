/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211242
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
    var_14 *= var_1;
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_15 = var_1;
                arr_5 [i_0] [i_0] [(signed char)7] = ((((/* implicit */_Bool) var_0)) ? ((~(min((((/* implicit */unsigned int) (short)-8783)), (1993482436U))))) : (var_8));
                arr_6 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-15))) - (4294967295U)));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) var_9);
    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) var_11))));
}
