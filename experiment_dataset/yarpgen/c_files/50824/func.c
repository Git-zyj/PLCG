/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50824
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
    var_19 ^= ((/* implicit */signed char) var_3);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned short) max((((unsigned long long int) arr_0 [i_0 - 2])), (((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) (signed char)-88))))))));
                var_20 = ((/* implicit */signed char) (~(max((arr_3 [i_0 - 1]), (arr_3 [i_0 + 2])))));
                var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) != (((/* implicit */int) ((_Bool) arr_3 [i_0 - 1]))))))));
                var_22 = ((/* implicit */unsigned char) 18315049583912213185ULL);
                var_23 &= ((/* implicit */signed char) arr_0 [i_0 - 1]);
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned int) (((-(356665113640991140LL))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_16))))))));
}
