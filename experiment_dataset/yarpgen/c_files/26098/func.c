/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26098
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 4; i_0 < 9; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 9; i_2 += 4) 
            {
                for (unsigned char i_3 = 0; i_3 < 12; i_3 += 4) 
                {
                    {
                        var_20 = ((/* implicit */unsigned int) (-(((max((((/* implicit */unsigned long long int) (signed char)-90)), (4551290748066873736ULL))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))));
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((1043499542U) - (((/* implicit */unsigned int) ((/* implicit */int) var_18)))))) ? ((+(((/* implicit */int) arr_6 [i_2 - 2] [i_2 + 1] [i_2 - 2])))) : (((((/* implicit */int) var_18)) + (((/* implicit */int) var_18))))));
                    }
                } 
            } 
        } 
        arr_11 [(unsigned char)7] = ((((/* implicit */int) (signed char)90)) << (((3931679095U) - (3931679095U))));
    }
    for (long long int i_4 = 0; i_4 < 24; i_4 += 3) 
    {
        arr_14 [i_4] = ((/* implicit */int) var_6);
        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_13 [i_4])), (arr_12 [i_4])))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (signed char)-90)), (3999709122U)))) : ((-(((var_5) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))))));
    }
    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_9)), (max((var_16), (((/* implicit */unsigned int) (signed char)90))))))) ? (((((/* implicit */_Bool) -5821011410462880558LL)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) var_4)) : (var_10))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2494)))));
}
