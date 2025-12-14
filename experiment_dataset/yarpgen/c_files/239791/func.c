/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239791
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((int) max((arr_1 [15LL]), (((/* implicit */int) (unsigned char)93)))))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((arr_5 [i_2] [i_0] [i_0] [i_0]) ? (arr_4 [i_0]) : (((/* implicit */int) var_19)))) : (((((/* implicit */_Bool) arr_3 [i_2] [i_1])) ? (((/* implicit */int) (short)5095)) : (arr_0 [i_2]))))) : (((/* implicit */int) arr_2 [i_0]))));
                    arr_6 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_1 + 1])) ? (arr_3 [i_1] [i_1 + 1]) : (((/* implicit */int) arr_5 [i_1] [i_1] [i_1] [i_1 - 1]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (unsigned short)15)))) : (max((((/* implicit */long long int) (short)5095)), (134217727LL)))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */signed char) var_13);
    var_22 = ((/* implicit */short) ((unsigned long long int) -1));
}
