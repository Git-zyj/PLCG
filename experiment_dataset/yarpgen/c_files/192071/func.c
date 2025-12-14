/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192071
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
    for (long long int i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_1 + 2])) ? (((((/* implicit */_Bool) arr_4 [i_1 + 1])) ? (arr_4 [i_1 - 1]) : (arr_4 [i_1 + 4]))) : (((((/* implicit */_Bool) arr_4 [i_1 + 1])) ? (arr_4 [i_1 - 1]) : (arr_4 [i_1 - 1])))));
                var_20 = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_4 [i_0 - 1]), (arr_4 [i_0 - 2])))) ? (arr_4 [i_0 - 1]) : (((/* implicit */long long int) -1))));
                var_21 = ((/* implicit */short) max((((/* implicit */long long int) (!(((/* implicit */_Bool) (short)-1))))), (max((((/* implicit */long long int) arr_1 [i_0])), (((long long int) 65408LL))))));
                var_22 = ((/* implicit */_Bool) max((var_22), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0 + 1])) || ((!(((/* implicit */_Bool) 14ULL)))))))) >= ((~(min((18446744073709551606ULL), (9ULL)))))))));
            }
        } 
    } 
    var_23 = ((((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) (~(9ULL)))))) ? (((/* implicit */long long int) min((var_15), (((/* implicit */int) var_1))))) : (((long long int) ((((/* implicit */_Bool) var_0)) ? (var_15) : (((/* implicit */int) var_11))))));
    var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) var_2))));
    var_25 = var_7;
}
