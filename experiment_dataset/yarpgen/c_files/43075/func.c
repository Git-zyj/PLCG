/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43075
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
    for (short i_0 = 4; i_0 < 13; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */short) min(((!((_Bool)1))), (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)8592))) >= (5635584188968418796LL)))));
                var_10 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (min((((/* implicit */unsigned long long int) arr_1 [i_1])), (arr_0 [i_1]))) : (((/* implicit */unsigned long long int) arr_4 [i_0] [i_1])))))));
                arr_6 [i_1] [i_1] [11LL] = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (2551054345U) : (((/* implicit */unsigned int) (-2147483647 - 1)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 11202146096317992560ULL))))) : (((/* implicit */int) ((((/* implicit */int) (short)22187)) != (((/* implicit */int) arr_3 [7]))))))), ((((-2147483647 - 1)) ^ (((/* implicit */int) (short)22179))))));
            }
        } 
    } 
    var_11 = ((/* implicit */int) var_6);
}
