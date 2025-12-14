/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208957
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
    for (long long int i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    var_18 = ((long long int) ((((/* implicit */_Bool) arr_0 [i_0 - 2] [i_1])) ? (((/* implicit */int) ((signed char) arr_4 [i_1]))) : (((/* implicit */int) ((unsigned short) (unsigned char)249)))));
                    var_19 = ((/* implicit */long long int) arr_5 [1ULL] [i_0 - 2] [1ULL]);
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_4 [i_0 - 2]))) ? (min((arr_4 [i_0 - 2]), (arr_4 [i_0 - 1]))) : (((((/* implicit */_Bool) arr_4 [i_0 - 1])) ? (arr_4 [i_0 + 1]) : (arr_4 [i_0 + 1])))));
                    var_21 = (+(((/* implicit */int) ((((/* implicit */_Bool) (+(arr_4 [i_0])))) && (((/* implicit */_Bool) ((short) 519598280U)))))));
                }
            } 
        } 
    } 
    var_22 = ((long long int) var_5);
    var_23 = 193259123405404911ULL;
    var_24 = ((/* implicit */signed char) min((((/* implicit */long long int) var_11)), (((long long int) min((((/* implicit */unsigned long long int) var_0)), (11399903751559689030ULL))))));
}
