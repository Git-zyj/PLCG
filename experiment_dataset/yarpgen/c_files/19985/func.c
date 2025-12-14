/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19985
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
    var_13 = min((((/* implicit */unsigned long long int) (-(2294768658U)))), (2763575379686778501ULL));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_14 += min((((arr_5 [i_0 + 2]) | (arr_5 [i_0 + 3]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(18446744073709551615ULL)))) && (((/* implicit */_Bool) 0ULL))))));
                var_15 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 - 1])) ? (((/* implicit */unsigned long long int) arr_2 [i_0 - 1])) : (arr_1 [i_0 - 1])))) ? (min((min((((/* implicit */unsigned long long int) 3132868568U)), (18446744073709551615ULL))), ((-(18014329790005248ULL))))) : (((((((/* implicit */_Bool) 4738701583034402797ULL)) ? (arr_6 [i_1]) : (arr_1 [i_0]))) / ((-(arr_0 [18ULL] [i_0])))))));
                var_16 = ((/* implicit */unsigned long long int) ((0ULL) < (4109458969474615926ULL)));
                arr_8 [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((0ULL) & (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (1899063949535688741ULL) : (18446744073709551615ULL)))))) ? (arr_2 [i_1]) : (0U)));
            }
        } 
    } 
    var_17 += ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) var_4)), (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) 1805294360U)))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_6) == (((var_7) % (var_7)))))))));
    var_18 = ((/* implicit */unsigned int) max((var_18), (((((/* implicit */_Bool) (+(var_11)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_12)) : (var_6))) <= (((/* implicit */unsigned long long int) 22621487U)))))) : (var_10)))));
}
