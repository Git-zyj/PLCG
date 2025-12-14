/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224432
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
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) ((((((/* implicit */int) (short)-21880)) + (2147483647))) << (0U)))) ? (max((((/* implicit */unsigned long long int) var_1)), (var_0))) : (min((var_7), (((/* implicit */unsigned long long int) var_8)))))) : (min((((((/* implicit */_Bool) 3803416872U)) ? (var_7) : (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) 4294967267U)) < (var_2))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 6; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 7; i_1 += 4) 
        {
            for (unsigned int i_2 = 1; i_2 < 6; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [4U] [2U] [i_0 + 3] |= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) 9U)), (18446744073709551615ULL))) != (((/* implicit */unsigned long long int) arr_2 [i_2]))))), (((long long int) arr_2 [i_2 - 1]))));
                    var_17 = ((/* implicit */long long int) var_7);
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_13) < (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))) & (max((4231333634U), (var_4))))))));
}
