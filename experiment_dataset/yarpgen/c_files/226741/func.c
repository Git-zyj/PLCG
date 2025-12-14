/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226741
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
    var_14 = max((9827701102740315167ULL), (((/* implicit */unsigned long long int) (signed char)0)));
    var_15 = ((((/* implicit */_Bool) var_6)) ? (min((((/* implicit */long long int) (!(((/* implicit */_Bool) 15ULL))))), (((long long int) var_2)))) : ((~((~(var_7))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                arr_4 [11LL] [(short)3] [i_1] |= ((/* implicit */unsigned long long int) min((((/* implicit */int) max((arr_3 [i_0 + 1] [i_0 + 1] [i_1]), (arr_3 [i_0 + 1] [i_0 + 1] [i_0 - 1])))), (((int) 6963113808716511657LL))));
                arr_5 [i_0] [i_1] = ((/* implicit */signed char) arr_1 [12ULL]);
            }
        } 
    } 
    var_16 = ((/* implicit */short) ((((/* implicit */int) var_11)) >= (((/* implicit */int) var_11))));
}
