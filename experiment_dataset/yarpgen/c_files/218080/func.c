/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218080
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
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */int) max((((/* implicit */long long int) (~(((((/* implicit */_Bool) 1934279155U)) ? (1934279155U) : (1934279148U)))))), ((~(arr_2 [i_0 - 1] [i_0 + 1])))));
                arr_7 [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((((((/* implicit */int) arr_4 [i_1])) + (2147483647))) >> ((((~(1934279151U))) - (2360688116U))))) == (((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (2360688149U))) > (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_0 - 1])) == (((/* implicit */int) arr_4 [i_1])))))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */int) ((long long int) ((2360688140U) - (784493566U))));
}
