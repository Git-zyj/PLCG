/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218261
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
    for (long long int i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [(unsigned char)16] [i_0] [i_0] = ((/* implicit */short) max(((~(((/* implicit */int) min((((/* implicit */short) arr_3 [i_0 - 1] [i_1])), (arr_1 [i_0])))))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0])))))));
                    arr_8 [i_2] [i_1 + 3] [i_0] [i_0] = (!(((/* implicit */_Bool) min(((~(arr_2 [i_0] [i_0]))), (min((((/* implicit */long long int) arr_4 [(unsigned char)9])), (arr_2 [i_0] [i_1])))))));
                }
            } 
        } 
    } 
    var_10 ^= ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) (~(min((((/* implicit */int) var_9)), (var_0)))))) : (min((((/* implicit */unsigned long long int) max((((/* implicit */short) (unsigned char)210)), ((short)-1)))), (min((((/* implicit */unsigned long long int) var_0)), (var_4))))));
}
