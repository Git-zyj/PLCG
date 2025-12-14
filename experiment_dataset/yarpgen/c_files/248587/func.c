/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248587
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
    var_13 ^= ((((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_9))))), (max((-178782068), (-178782075)))))) ? (((((/* implicit */_Bool) var_9)) ? ((+(var_3))) : (((/* implicit */long long int) max((139964280U), (var_11)))))) : (((/* implicit */long long int) max((min((var_1), (var_6))), (((((/* implicit */_Bool) var_8)) ? (var_1) : (var_1)))))));
    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) -3506934825461706180LL)) ? (((/* implicit */unsigned int) var_8)) : (var_9)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 8; i_1 += 1) 
        {
            {
                var_15 += ((/* implicit */int) ((((((/* implicit */_Bool) -20)) ? (9223372036854775807LL) : (((/* implicit */long long int) -10)))) >> (((/* implicit */int) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))));
                var_16 |= ((/* implicit */long long int) -327934176);
                var_17 += ((/* implicit */unsigned int) min((arr_2 [i_0] [i_0] [i_0]), (((var_8) / (arr_2 [i_0] [10LL] [i_0])))));
                arr_5 [i_1 + 1] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) arr_4 [i_1 - 2] [i_1 - 1])) <= (((-9223372036854775785LL) - (((/* implicit */long long int) arr_4 [i_0] [i_0]))))))) >> (((((((/* implicit */_Bool) arr_2 [i_1 + 3] [i_1 + 2] [i_1 - 2])) ? (-9223372036854775785LL) : (((/* implicit */long long int) arr_4 [3U] [i_1 - 2])))) + (9223372036854775786LL)))));
            }
        } 
    } 
}
