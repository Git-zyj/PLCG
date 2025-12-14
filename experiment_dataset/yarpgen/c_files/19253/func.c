/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19253
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
    var_13 = ((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) ((var_1) - (var_11)))) ? (((/* implicit */int) max((((/* implicit */unsigned char) var_5)), (var_9)))) : (((/* implicit */int) var_6)))) : (((/* implicit */int) ((signed char) min((1111347766), (((/* implicit */int) var_2)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned char i_1 = 3; i_1 < 13; i_1 += 3) 
        {
            {
                var_14 -= ((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned short)49967)) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))))))), (((/* implicit */unsigned long long int) ((unsigned short) arr_2 [i_0] [i_1 + 3] [i_1 + 3])))));
                var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((127), (((/* implicit */int) (unsigned short)49967))))) ? (max((-1169274121), (var_7))) : (((/* implicit */int) arr_0 [i_1]))))) ? (((int) arr_3 [i_1])) : (((/* implicit */int) min((arr_2 [i_1 - 2] [i_1] [i_1 - 2]), (min(((unsigned short)0), (((/* implicit */unsigned short) arr_3 [i_1])))))))));
            }
        } 
    } 
}
