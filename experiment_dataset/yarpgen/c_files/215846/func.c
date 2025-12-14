/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215846
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
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (-(min((1986746669), (var_13)))))) ? (max((((/* implicit */long long int) ((((/* implicit */int) var_18)) & (((/* implicit */int) var_4))))), (1703756431306739610LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-32760))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    var_21 ^= ((/* implicit */unsigned short) (((((~(arr_0 [i_2]))) + (9223372036854775807LL))) << (((((/* implicit */int) var_18)) - (16354)))));
                    arr_7 [i_1] [i_1] [i_2] [i_0] = ((/* implicit */long long int) max(((~(var_11))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_6 [i_2] [i_2] [i_2] [i_2])))))));
                    var_22 = ((/* implicit */short) (+(arr_1 [8LL])));
                    arr_8 [i_0] [i_0] [1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_0 [i_0]), (((/* implicit */long long int) arr_3 [i_1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)112)))))) : (arr_3 [i_1])));
                }
            } 
        } 
    } 
}
