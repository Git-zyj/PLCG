/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220727
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
    var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) var_12))));
    var_14 -= var_8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 23; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) max(((~(((unsigned long long int) (_Bool)0)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_5 [i_0] [i_1] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)-23460)) != (((/* implicit */int) (unsigned char)7)))))) : ((~(arr_1 [i_2] [i_0])))))))))));
                    var_16 = ((/* implicit */long long int) (((-(arr_5 [i_2 - 2] [i_2 + 2] [i_2 - 2]))) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)126)))));
                    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_5 [i_2 + 1] [i_2 + 2] [i_2 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)23460)))))) ? (min((((/* implicit */long long int) (+(((/* implicit */int) arr_6 [i_0]))))), (arr_4 [i_0]))) : (((/* implicit */long long int) ((int) arr_5 [i_2 - 1] [i_2 + 1] [i_2 + 1])))));
                }
            } 
        } 
    } 
    var_18 = (unsigned char)7;
}
