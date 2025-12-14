/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222950
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
    var_13 = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_12) : (var_7)))) ? (max((72381303586963035LL), (var_10))) : (((((/* implicit */_Bool) var_1)) ? (var_2) : (var_9))))), (var_7));
    var_14 = ((long long int) var_6);
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 16; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            {
                arr_5 [i_1] [i_1] = ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) max((9223372036854775807LL), (arr_4 [10LL])))) ? (((((/* implicit */_Bool) var_12)) ? (arr_2 [i_0]) : (274877906943LL))) : (max((var_7), (var_7))))) : ((-9223372036854775807LL - 1LL)));
                var_15 = arr_4 [10LL];
                arr_6 [i_0] [i_1] [i_1 + 1] = ((((/* implicit */_Bool) (~(-274877906951LL)))) ? (((((/* implicit */_Bool) 3749397610234834762LL)) ? (arr_4 [i_1 - 1]) : (arr_4 [i_0 + 2]))) : (((((/* implicit */_Bool) var_3)) ? (2997499966807993653LL) : (arr_3 [i_1 - 1]))));
                arr_7 [i_1] = ((((((/* implicit */_Bool) arr_2 [i_0 - 3])) ? (arr_2 [i_0 + 2]) : (arr_2 [i_0 + 2]))) >> (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_6) : ((-9223372036854775807LL - 1LL)))))))));
            }
        } 
    } 
    var_16 = max((((((var_6) >= (var_3))) ? (var_1) : (var_12))), (((((/* implicit */_Bool) min((var_4), (var_4)))) ? (-274877906943LL) : (((var_2) / (var_12))))));
}
