/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20812
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
    var_17 = var_10;
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned char) (((_Bool)0) ? (((/* implicit */int) (unsigned char)226)) : (((/* implicit */int) (short)-9809))));
                arr_5 [5U] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_1 [i_0] [i_0]), (((/* implicit */long long int) var_13))))) ? (((/* implicit */int) (signed char)-63)) : (((/* implicit */int) ((((/* implicit */int) (short)31)) < (((/* implicit */int) (unsigned char)7)))))))) ? (((/* implicit */int) min((((unsigned short) arr_3 [i_0] [i_1] [i_1])), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_1])) && (((/* implicit */_Bool) arr_0 [i_0])))))))) : ((~(-1249015431)))));
                arr_6 [i_1] = ((/* implicit */unsigned int) arr_2 [i_0]);
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) arr_3 [i_0] [i_0] [i_1]);
                arr_8 [i_0] |= ((/* implicit */signed char) (unsigned char)237);
            }
        } 
    } 
}
