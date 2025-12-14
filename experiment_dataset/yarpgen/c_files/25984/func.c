/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25984
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
    var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) var_7))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            {
                arr_6 [i_0] [5LL] [i_0] = ((/* implicit */unsigned int) min((((((/* implicit */int) arr_2 [i_0 - 2] [(short)2] [i_1 + 1])) << (((arr_3 [i_0] [i_0 + 1]) - (3227965407156754062ULL))))), (((/* implicit */int) arr_2 [i_0 + 2] [i_0 + 2] [i_0 + 1]))));
                var_12 = ((/* implicit */signed char) min((((((/* implicit */int) arr_5 [i_1 + 3] [(unsigned char)6])) < (var_3))), (((max((((/* implicit */unsigned long long int) (unsigned char)55)), (arr_3 [(unsigned char)15] [i_0]))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
                var_13 ^= ((/* implicit */unsigned char) ((((/* implicit */long long int) min((((/* implicit */int) var_6)), ((~(((/* implicit */int) (unsigned char)15))))))) != (((((var_1) + (9223372036854775807LL))) << (((arr_0 [i_0 + 1]) - (13268009611658457230ULL)))))));
                arr_7 [i_1] = ((/* implicit */signed char) var_5);
            }
        } 
    } 
}
