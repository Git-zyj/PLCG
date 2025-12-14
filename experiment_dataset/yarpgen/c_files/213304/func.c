/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213304
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
    var_12 &= ((/* implicit */unsigned int) var_1);
    var_13 = ((/* implicit */unsigned int) ((min((((/* implicit */long long int) var_11)), (min((var_8), (((/* implicit */long long int) var_7)))))) & (((/* implicit */long long int) ((/* implicit */int) ((var_5) <= (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_0))))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 23; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */short) ((unsigned short) ((((/* implicit */int) arr_3 [17LL] [i_0])) / (((((/* implicit */int) var_1)) + (arr_2 [i_0]))))));
                var_15 = (i_0 % 2 == 0) ? (((/* implicit */unsigned int) ((int) ((((((/* implicit */int) var_7)) ^ (((/* implicit */int) arr_4 [i_0] [(unsigned short)14])))) >> (((((/* implicit */int) arr_3 [i_0] [i_0])) + (23571))))))) : (((/* implicit */unsigned int) ((int) ((((((/* implicit */int) var_7)) ^ (((/* implicit */int) arr_4 [i_0] [(unsigned short)14])))) >> (((((((/* implicit */int) arr_3 [i_0] [i_0])) + (23571))) - (7111)))))));
                arr_6 [i_0 + 1] [i_0] [i_1] = ((/* implicit */unsigned char) min((((((/* implicit */int) arr_4 [i_0 + 1] [i_0 - 2])) - (((/* implicit */int) arr_4 [i_0 - 3] [i_0 + 1])))), (((/* implicit */int) ((((/* implicit */int) arr_4 [i_0 - 1] [i_0 - 3])) == (((/* implicit */int) arr_4 [i_0 - 1] [i_0 + 1])))))));
                arr_7 [i_0] [(_Bool)1] = ((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (arr_2 [i_0]) : (arr_2 [i_0])))), (arr_1 [i_0])));
            }
        } 
    } 
    var_16 = var_2;
}
