/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38237
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
    var_11 = ((/* implicit */unsigned short) ((unsigned int) var_7));
    var_12 |= ((/* implicit */unsigned int) var_2);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned int i_2 = 4; i_2 < 7; i_2 += 1) 
            {
                {
                    arr_9 [0] [i_2 + 1] [i_2 + 1] &= ((/* implicit */unsigned int) max((((max((arr_1 [4]), (-1125987683))) < (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_4))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 10996700010967359245ULL)) ? (arr_8 [i_1]) : (((/* implicit */int) var_3))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_1) : (((/* implicit */long long int) arr_1 [4U])))))))));
                    var_13 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_2 + 1] [i_2 + 2] [i_2 + 3])) > (((/* implicit */int) ((unsigned short) (signed char)77)))))), (arr_4 [i_0])));
                    var_14 = ((/* implicit */unsigned short) ((((min((arr_3 [i_0] [i_2 + 3]), (var_8))) + (2147483647))) << (((((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2 + 1] [i_2 - 2] [i_2 + 1]))) : (var_10))) - (18446744073709551596ULL)))));
                }
            } 
        } 
    } 
}
