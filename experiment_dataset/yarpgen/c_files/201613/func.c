/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201613
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
    var_20 ^= ((/* implicit */signed char) min((var_3), (((unsigned long long int) max((((/* implicit */unsigned long long int) var_9)), (var_11))))));
    var_21 = var_12;
    var_22 = ((/* implicit */short) ((unsigned long long int) max((min((var_18), (var_18))), (((short) var_4)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 16; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [(short)11] [i_2] [(signed char)7] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [2ULL] [i_1] [i_0])) ? (((((/* implicit */_Bool) 17441306785548489595ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)118))) : (13547745943074944355ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_13))))));
                    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) max((13072409910741851769ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_6)))))))) ? (((/* implicit */int) ((arr_0 [i_1]) <= (arr_0 [i_0])))) : (((/* implicit */int) ((short) arr_6 [i_0] [(short)14] [10ULL])))));
                    arr_9 [i_0] [i_0] = ((/* implicit */short) min((18446744073709551611ULL), (((/* implicit */unsigned long long int) (short)-31))));
                }
            } 
        } 
    } 
}
