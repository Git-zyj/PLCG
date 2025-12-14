/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197471
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
    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) 4002870670904386037ULL))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 24; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)83))) > (248319370U))));
                arr_6 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_13))))), (((((/* implicit */long long int) ((/* implicit */int) var_5))) % (var_15)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2584936661U)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned int) ((2147483647) - (((/* implicit */int) (signed char)127))))) : (4095733000U))) : (((/* implicit */unsigned int) (~(((((((/* implicit */int) (signed char)(-127 - 1))) + (2147483647))) << (((((/* implicit */int) (signed char)127)) - (127))))))))));
                arr_7 [i_0] [i_1] = ((/* implicit */short) ((unsigned char) (+(((/* implicit */int) min((((/* implicit */short) (signed char)(-127 - 1))), (var_13)))))));
                arr_8 [i_1] [i_0 - 2] [i_0 - 2] = ((/* implicit */short) max(((~(((/* implicit */int) (signed char)-127)))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 + 1] [23U]))) <= (9167397613981758518ULL))))));
            }
        } 
    } 
    var_19 = var_4;
    var_20 = ((/* implicit */unsigned short) var_1);
}
