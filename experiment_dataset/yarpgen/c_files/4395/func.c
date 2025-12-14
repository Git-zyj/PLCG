/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4395
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
    var_14 = ((/* implicit */int) var_2);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 9; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((/* implicit */short) 1419687848);
                var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1] [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)64960)) : (((/* implicit */int) arr_4 [i_0]))))))))) == (((((14732356812624431503ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1 + 2]))))) ? (((var_1) ? (1810409021800492282ULL) : (7375843003581235899ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)134))))))))));
                var_16 ^= ((/* implicit */unsigned int) var_5);
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) max(((+(((/* implicit */int) var_9)))), ((((!(((/* implicit */_Bool) (signed char)101)))) ? (((/* implicit */int) ((((/* implicit */int) var_4)) < (((/* implicit */int) var_13))))) : (((/* implicit */int) var_5))))));
    /* LoopSeq 1 */
    for (long long int i_2 = 0; i_2 < 18; i_2 += 1) 
    {
        var_18 = ((/* implicit */long long int) ((int) arr_9 [i_2]));
        arr_11 [i_2] [i_2] &= ((/* implicit */long long int) (~(arr_9 [i_2])));
    }
}
