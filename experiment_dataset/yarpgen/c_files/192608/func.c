/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192608
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
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (min((var_11), (((/* implicit */unsigned int) ((_Bool) var_2))))) : (var_8)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_0 [i_0])))) : (min((((/* implicit */long long int) arr_1 [(short)2] [(short)2])), (arr_0 [15ULL]))))) + (((/* implicit */long long int) min((((/* implicit */int) arr_1 [18] [18])), (arr_4 [i_0] [i_1])))))))));
                var_14 = ((/* implicit */long long int) max((var_14), ((~(min((arr_0 [i_0]), (arr_0 [i_1])))))));
            }
        } 
    } 
}
