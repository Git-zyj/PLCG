/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238592
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */int) min((arr_3 [i_0] [i_0] [i_1 - 2]), (((/* implicit */unsigned char) (signed char)125))))), ((~(((var_6) - (((/* implicit */int) arr_4 [i_1] [(_Bool)1] [i_0]))))))));
                var_11 ^= max((((((/* implicit */_Bool) 6733304241397285630ULL)) ? (arr_0 [i_1 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)11038))))), (((((unsigned int) var_2)) ^ (((/* implicit */unsigned int) ((/* implicit */int) min((arr_1 [(unsigned short)4]), (arr_1 [i_0]))))))));
                arr_6 [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_0] [i_1 + 1] [i_1])) ? (((/* implicit */unsigned int) ((int) 0))) : (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_1]))))), (max((arr_0 [(short)7]), (arr_0 [i_0])))))));
                arr_7 [i_1 - 1] [i_1] [i_0] = ((/* implicit */short) arr_0 [i_1 - 2]);
            }
        } 
    } 
    var_12 = (+(77801139U));
}
