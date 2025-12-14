/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51225
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 15; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */unsigned char) max((((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) & (max((-3463616073384837575LL), (((/* implicit */long long int) (short)-1754)))))), (((/* implicit */long long int) ((((/* implicit */long long int) max((((/* implicit */int) arr_5 [1U] [i_2])), (1014335247)))) >= (arr_7 [(_Bool)1] [i_2 - 1] [i_2 - 1] [i_2]))))));
                    var_13 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)70)) & (((/* implicit */int) arr_0 [5ULL]))))) ? (((/* implicit */int) ((signed char) arr_3 [i_0] [i_2]))) : ((-(((/* implicit */int) arr_3 [i_0] [i_2]))))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) var_9)) / (((/* implicit */int) (unsigned char)42))))) / ((-(1290986201039128618LL)))))) | ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18446744073709551615ULL)))));
}
