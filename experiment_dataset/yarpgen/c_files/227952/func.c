/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227952
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 3; i_0 < 12; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))), (((((/* implicit */_Bool) arr_0 [i_0 - 3])) ? (1679577872) : (((/* implicit */int) arr_1 [i_0 - 3]))))));
        arr_3 [i_0] [6] = ((/* implicit */unsigned char) max((1679577872), (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0 - 3])) <= (((/* implicit */int) arr_1 [i_0 - 1])))))));
        arr_4 [i_0] = ((((/* implicit */_Bool) ((arr_0 [i_0 + 2]) + (arr_0 [i_0 + 2])))) ? (arr_0 [i_0 + 2]) : (((var_2) % (arr_0 [i_0 + 2]))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 14; i_1 += 1) 
    {
        var_14 = ((/* implicit */unsigned long long int) arr_1 [i_1]);
        arr_7 [i_1] = ((/* implicit */unsigned short) arr_5 [i_1] [i_1]);
    }
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 15; i_2 += 4) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) arr_0 [i_2]);
                var_16 = ((/* implicit */long long int) var_9);
                var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) -1679577873)) ? (((((/* implicit */_Bool) (signed char)53)) ? (-1679577872) : (arr_8 [i_3]))) : (((/* implicit */int) var_5))));
                var_18 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) var_4))))))) + (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_6)) < (var_13))))) - (((((/* implicit */_Bool) (signed char)123)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (1769746747U)))))));
            }
        } 
    } 
}
