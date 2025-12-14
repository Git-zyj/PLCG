/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24204
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
    for (long long int i_0 = 1; i_0 < 7; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */short) min((min((arr_5 [i_0] [i_1] [i_0 - 1]), (arr_5 [i_0] [(short)8] [i_0 + 3]))), (min((arr_5 [8U] [i_1] [i_0 + 3]), (-3096755069149389689LL)))));
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned long long int) min((min((((var_2) >> (((((/* implicit */int) (short)5989)) - (5934))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)10))))))), (((/* implicit */long long int) (short)5989))));
            }
        } 
    } 
    var_15 = min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)15641)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (-5615290459115497505LL)))) : (((((/* implicit */_Bool) (short)-27981)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))) : (5398109116639788631ULL))))), (((/* implicit */unsigned long long int) ((min((var_10), (((/* implicit */long long int) var_13)))) & (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 5615290459115497504LL))))))))));
    var_16 = ((/* implicit */unsigned char) var_2);
}
