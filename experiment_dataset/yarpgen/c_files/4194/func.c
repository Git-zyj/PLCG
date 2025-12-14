/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4194
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
    var_13 = ((/* implicit */short) var_12);
    var_14 = ((/* implicit */short) (~((~(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) var_11)))))))));
    var_15 = ((/* implicit */_Bool) var_12);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            {
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_3 [i_0] [i_0] [i_0]);
                arr_8 [i_0] [i_1 - 1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) var_0)) ? (arr_6 [i_0]) : (((/* implicit */long long int) var_12)))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)93))))))) : (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (unsigned char)31)))))));
            }
        } 
    } 
    var_16 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_1)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) var_4)), (var_2))))))) ^ (((/* implicit */long long int) ((/* implicit */int) var_4)))));
}
