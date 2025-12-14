/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41826
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
    for (unsigned char i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        for (unsigned int i_1 = 3; i_1 < 11; i_1 += 4) 
        {
            {
                arr_4 [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) min((max((18446744073709551601ULL), (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) (-(arr_2 [i_0 - 1] [i_0 - 1]))))))) ? (((unsigned long long int) arr_2 [i_0 + 1] [i_0 - 2])) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 18446744073709551615ULL)))));
                arr_5 [i_1] [i_1] = ((/* implicit */long long int) max((var_4), (((/* implicit */unsigned int) ((arr_2 [i_0 - 1] [i_0 - 1]) < (arr_2 [i_0 + 1] [i_0 + 1]))))));
            }
        } 
    } 
    var_10 = ((/* implicit */unsigned int) min((var_10), (((((unsigned int) ((((/* implicit */int) var_8)) | (((/* implicit */int) var_0))))) & (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))));
}
