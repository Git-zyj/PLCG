/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238193
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
    var_20 = ((/* implicit */long long int) min((var_20), (var_19)));
    var_21 = ((((/* implicit */_Bool) -9071243235853955441LL)) ? (-2517114110218870960LL) : (3214740326254583996LL));
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 14; i_2 += 4) 
            {
                {
                    var_22 = ((/* implicit */long long int) min((var_22), (((((/* implicit */_Bool) var_17)) ? (min((min((-3214740326254584016LL), (arr_3 [i_0] [i_0]))), (min((-3214740326254583997LL), ((-9223372036854775807LL - 1LL)))))) : (((((/* implicit */_Bool) max((arr_0 [i_0] [i_1 + 1]), (arr_7 [i_0] [i_0] [i_2])))) ? (((long long int) arr_6 [i_0])) : (max((arr_6 [i_0]), (arr_0 [i_0] [i_0])))))))));
                    var_23 = ((/* implicit */long long int) max((var_23), (max((((arr_0 [i_1 + 1] [i_0 + 4]) / (arr_7 [i_2 + 1] [i_0] [i_0 + 4]))), (((((/* implicit */_Bool) -3214740326254583997LL)) ? (4306332354798860299LL) : (4306332354798860319LL)))))));
                    var_24 = min((((arr_4 [i_1]) >> (((arr_2 [i_0 + 4]) - (2418552954173906723LL))))), (min((((var_19) / (arr_3 [i_2] [i_1]))), (min((arr_6 [i_1]), (arr_2 [i_2 + 1]))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        for (long long int i_4 = 3; i_4 < 16; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_4] [i_1] [i_1] = ((/* implicit */long long int) ((5375082312466338428LL) <= (((/* implicit */long long int) ((/* implicit */int) ((min((arr_12 [i_0] [i_1] [i_2] [i_2] [i_4]), (arr_3 [i_4] [i_3]))) == (((((-4418698835296132278LL) + (9223372036854775807LL))) >> (((9223372036854775807LL) - (9223372036854775801LL)))))))))));
                                var_25 = (+(-9115072767311349212LL));
                                var_26 = 9223372036854775807LL;
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
