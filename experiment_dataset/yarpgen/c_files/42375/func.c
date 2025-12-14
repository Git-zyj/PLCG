/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42375
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
    var_10 = ((/* implicit */signed char) (-(-2054390450)));
    var_11 = ((/* implicit */signed char) var_1);
    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (2054390450) : (((/* implicit */int) (signed char)-39))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 3; i_0 < 8; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [(unsigned char)8] [i_1] [(unsigned char)8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0 - 2] [i_2])) ? (((/* implicit */int) arr_4 [i_0 - 2] [i_1] [i_1])) : (((/* implicit */int) arr_4 [i_0 - 1] [i_1] [(short)8]))));
                    arr_10 [i_0] [i_0] [i_2] = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2])) ? (((/* implicit */int) arr_3 [i_0 - 3] [i_0 - 3])) : (arr_6 [i_0] [i_1]))));
                }
            } 
        } 
        var_13 = ((((((/* implicit */_Bool) (signed char)-86)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))))) + (((/* implicit */unsigned long long int) 2054390449)));
        var_14 = ((/* implicit */int) arr_5 [i_0 + 1] [i_0 + 1]);
    }
}
