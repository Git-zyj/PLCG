/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52311
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [(unsigned short)12] |= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_4 [i_0] [(_Bool)1] [i_0 + 1])) ? (arr_2 [(short)0]) : (((/* implicit */long long int) arr_4 [i_0] [(signed char)14] [i_0 + 1])))) + (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) | (var_9)))) ? (((/* implicit */long long int) min((arr_4 [i_0] [(unsigned char)18] [i_1]), (arr_4 [i_0] [12ULL] [2ULL])))) : (((arr_2 [(unsigned char)18]) - (arr_2 [16LL])))))));
                var_17 = ((/* implicit */unsigned int) ((min((var_3), (((/* implicit */long long int) 3215951418U)))) & (((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_0 + 1])) + ((~(((/* implicit */int) (_Bool)1)))))))));
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (((-(((/* implicit */int) arr_0 [i_0])))) < (((/* implicit */int) arr_5 [i_0 + 1])))))));
            }
        } 
    } 
    var_18 = ((/* implicit */short) min((((/* implicit */long long int) var_16)), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (var_3)))));
    var_19 = ((/* implicit */unsigned int) var_8);
}
