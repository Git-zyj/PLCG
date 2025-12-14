/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2079
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
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_7 [i_2] [8] [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]);
                    var_17 = var_15;
                    arr_8 [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) (signed char)-110);
                    arr_9 [i_0] [3U] [i_0] [(_Bool)1] = ((/* implicit */_Bool) ((var_5) ? (min((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2] [i_2] [i_2]))) >= (var_2)))), (1346578677U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(2948388619U))))))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */signed char) ((((-1276242175) + (2147483647))) >> (((((1346578677U) / (((/* implicit */unsigned int) ((/* implicit */int) var_16))))) - (25086U)))));
    var_19 = ((/* implicit */_Bool) max((((((-1276242187) + (2147483647))) >> ((((+(2293187172U))) - (2293187147U))))), (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)110))))));
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) 9225779295887049143ULL)) ? (var_14) : (var_6)));
    var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) < (var_14)))), (max((var_8), (18010000462970880LL))))))));
}
