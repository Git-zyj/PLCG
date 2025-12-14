/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227173
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] [12LL] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_7))))) == ((-(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_2 [i_0] [(signed char)10] [i_0])))))));
                arr_6 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 - 1])) ? (((/* implicit */long long int) ((((/* implicit */int) var_6)) / (((/* implicit */int) var_5))))) : (max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) arr_2 [i_0] [i_0] [i_0]))))))) ? (((/* implicit */int) ((0U) > (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) arr_1 [i_0 - 1]))));
                arr_7 [i_0] = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((((((/* implicit */int) arr_1 [(signed char)8])) | (((/* implicit */int) var_6)))) + (2147483647))) << (((((((/* implicit */int) arr_1 [i_0 - 1])) + (30786))) - (29)))))), (((((9223372036854775807LL) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) - (((/* implicit */long long int) ((/* implicit */int) max((arr_3 [i_0]), (arr_1 [i_1])))))))));
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned int) max((max((((((/* implicit */int) var_3)) - (((/* implicit */int) var_0)))), (((((/* implicit */int) var_2)) | (((/* implicit */int) var_8)))))), (((/* implicit */int) var_7))));
}
