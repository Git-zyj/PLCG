/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44939
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) max((max((arr_1 [i_0] [i_0]), (var_10))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1647161976300864917LL)) ? (((/* implicit */unsigned long long int) var_5)) : (arr_0 [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_5)))) : (6199008163482869351ULL)))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    arr_10 [i_0] [i_1] [i_2] = var_0;
                    arr_11 [i_0] [i_1] = 4294967295U;
                }
            } 
        } 
        arr_12 [7ULL] = arr_1 [i_0] [i_0];
        arr_13 [23LL] [i_0] = ((/* implicit */unsigned long long int) ((short) (-(((((((/* implicit */int) (signed char)-120)) + (2147483647))) << (((var_8) - (2738991255U))))))));
    }
    var_11 = ((/* implicit */long long int) min((1152921504606846912ULL), (((/* implicit */unsigned long long int) var_7))));
    var_12 = ((/* implicit */unsigned long long int) 2770678857U);
}
