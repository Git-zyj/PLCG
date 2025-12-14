/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25689
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 8; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 10; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((arr_2 [i_0] [i_1 + 2] [i_2 + 2]) > (((/* implicit */long long int) (~(((/* implicit */int) (short)20697))))))))));
                    arr_9 [i_0] [10U] [i_2] [i_1 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2] [i_2] [i_2 + 1])) ? (((/* implicit */int) arr_8 [i_1 + 3])) : (((/* implicit */int) (short)0))))) ? (((((((/* implicit */_Bool) var_5)) ? (var_8) : (((/* implicit */int) arr_1 [i_2 - 1])))) & (((/* implicit */int) arr_6 [i_2] [i_1 - 1] [i_1 + 2] [i_2])))) : (((/* implicit */int) var_6))));
                    arr_10 [i_2] [i_1] [i_1] = ((/* implicit */short) arr_6 [i_2] [i_1 + 2] [i_1 - 1] [i_2]);
                    var_17 &= ((/* implicit */unsigned int) ((((_Bool) var_9)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)2073)) ? (((/* implicit */int) arr_6 [i_0] [i_1 + 4] [i_1 + 4] [(short)10])) : (((/* implicit */int) var_5))))) <= (var_10)))) : (((/* implicit */int) (_Bool)0))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (var_2) : (((((/* implicit */int) var_13)) * (((/* implicit */int) var_4)))))))));
    var_19 += ((/* implicit */unsigned int) ((short) (-(((/* implicit */int) var_14)))));
}
