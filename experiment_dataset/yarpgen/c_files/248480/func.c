/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248480
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]);
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned char i_2 = 2; i_2 < 15; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_8)) : (-1661719312)))) ? (((((/* implicit */int) var_11)) & (2147483647))) : (((((/* implicit */_Bool) arr_1 [i_1] [i_2 - 2])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_0 [i_2 - 2])))))));
                    var_15 |= ((/* implicit */unsigned long long int) min(((~(arr_7 [i_2] [i_2 - 2] [i_2 - 1] [(_Bool)1]))), (((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_2 + 1] [i_2] [i_2 + 1])) - (2147483637))))));
                }
            } 
        } 
    }
    var_16 += ((/* implicit */long long int) (-(((/* implicit */int) var_1))));
    var_17 = ((/* implicit */signed char) max((((((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) - (((/* implicit */int) (unsigned char)97))))) % (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) 1661719329)) : (var_6))))), (((/* implicit */unsigned long long int) var_8))));
}
