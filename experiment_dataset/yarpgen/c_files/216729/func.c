/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216729
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
    var_18 &= ((/* implicit */unsigned short) var_8);
    var_19 = ((/* implicit */short) min((var_2), (((/* implicit */long long int) min((var_9), (var_14))))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) var_11);
        arr_3 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) var_12)), (var_2))) & (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))))), (max((min((var_0), (var_0))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_17)), (var_8))))))));
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 13; i_2 += 4) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_0] [(unsigned char)10] [i_1] |= ((/* implicit */unsigned char) min(((signed char)68), (((/* implicit */signed char) (_Bool)1))));
                        arr_12 [i_0] [i_2] [3] = ((/* implicit */unsigned short) var_11);
                    }
                } 
            } 
        } 
    }
    for (signed char i_4 = 0; i_4 < 12; i_4 += 1) 
    {
        arr_15 [i_4] [(_Bool)1] = ((/* implicit */unsigned long long int) var_10);
        arr_16 [i_4] = ((/* implicit */short) var_17);
    }
    for (unsigned char i_5 = 2; i_5 < 14; i_5 += 2) 
    {
        var_20 = ((/* implicit */int) ((var_10) > (((((/* implicit */int) arr_17 [i_5 + 1])) * (((/* implicit */int) arr_17 [i_5 + 1]))))));
        var_21 = ((/* implicit */unsigned int) var_16);
        arr_19 [0U] = ((/* implicit */long long int) min((min((var_10), (arr_18 [i_5 - 2]))), (((((/* implicit */int) min((var_14), (((/* implicit */short) arr_17 [i_5]))))) - (((/* implicit */int) var_3))))));
    }
}
