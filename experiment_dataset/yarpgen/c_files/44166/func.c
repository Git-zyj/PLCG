/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44166
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
    var_12 = ((/* implicit */int) ((unsigned int) var_8));
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 7; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            for (signed char i_2 = 3; i_2 < 8; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */signed char) arr_6 [i_0] [i_0] [i_0]);
                    arr_7 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned int) (signed char)-14))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_6 [i_2 + 1] [i_2] [i_2 + 1])))) : (min((var_5), (((/* implicit */unsigned int) arr_6 [i_2 + 2] [i_2 + 2] [i_2 + 2]))))));
                    arr_8 [i_0] [i_1] [i_2] [i_2] = max(((~(((((/* implicit */int) arr_6 [i_0] [i_0] [i_2])) ^ (((/* implicit */int) (unsigned short)46455)))))), (((((/* implicit */_Bool) ((unsigned char) arr_3 [i_0] [i_0]))) ? (((/* implicit */int) var_7)) : ((~(((/* implicit */int) (short)-28)))))));
                    arr_9 [i_1] &= ((/* implicit */_Bool) ((unsigned short) max((((/* implicit */int) arr_2 [i_0] [i_0])), ((+(((/* implicit */int) arr_2 [i_1] [i_2])))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-75)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (2112952364U)))) ? (min((var_1), (((/* implicit */unsigned long long int) (unsigned short)65533)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) & (((/* implicit */int) var_11)))))))));
}
