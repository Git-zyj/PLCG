/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190803
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
    var_12 = var_7;
    var_13 = var_6;
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [(short)9])) ? (((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0] [i_1])) ? (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) : (((/* implicit */int) ((arr_0 [i_0 - 1] [i_1]) != (((/* implicit */long long int) arr_3 [i_0 - 1] [i_1]))))))) : (((/* implicit */int) arr_2 [i_1] [i_0] [i_0]))));
                arr_4 [(short)0] = ((((((/* implicit */unsigned long long int) arr_0 [i_0] [i_1])) < (((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])))))) ? ((~(arr_1 [i_0]))) : (((/* implicit */unsigned long long int) ((((3026986239U) != (((/* implicit */unsigned int) ((/* implicit */int) (signed char)39))))) ? (arr_0 [i_0 - 1] [i_0 + 1]) : (((/* implicit */long long int) ((((/* implicit */int) arr_2 [14U] [i_0 - 1] [i_0 + 1])) ^ (arr_3 [i_0] [15ULL]))))))));
                arr_5 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_2 [i_0 - 1] [i_0] [i_1])), (arr_1 [i_1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? ((~(arr_0 [10ULL] [10ULL]))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_0] [i_0] [5LL])))))))) : (arr_1 [i_0])));
            }
        } 
    } 
}
