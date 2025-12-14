/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52454
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
    var_15 ^= ((/* implicit */int) ((3746468122505115381ULL) & (var_14)));
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) 111860171))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */short) ((max((arr_3 [i_1 + 3] [i_1]), (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(_Bool)1] [i_1])))))))) | (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_1])))))), (((((/* implicit */long long int) ((/* implicit */int) var_10))) / (3LL)))))));
                var_18 = ((/* implicit */short) ((min((var_3), (((/* implicit */unsigned long long int) ((var_13) ? (((/* implicit */long long int) 111860171)) : (arr_3 [i_0] [i_1])))))) << (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (arr_3 [i_1 + 1] [i_1])))));
                var_19 = ((short) ((((/* implicit */_Bool) 111860169)) ? (((/* implicit */long long int) -111860172)) : (arr_3 [i_1] [i_1])));
            }
        } 
    } 
}
