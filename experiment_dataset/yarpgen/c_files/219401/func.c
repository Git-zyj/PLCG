/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219401
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
    var_16 = ((/* implicit */unsigned short) var_0);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 6; i_1 += 4) 
        {
            {
                arr_5 [i_1] |= ((/* implicit */unsigned long long int) max((min((var_15), (arr_0 [i_0]))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_1 - 2] [i_1 + 1])) - (((/* implicit */int) arr_4 [i_1 + 2] [i_1 + 3])))))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 2; i_2 < 9; i_2 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        var_17 ^= ((/* implicit */_Bool) ((((/* implicit */long long int) (~(((int) arr_6 [i_3] [1LL] [(unsigned short)0]))))) | (min((((/* implicit */long long int) arr_3 [i_2 + 1] [7U] [(unsigned short)4])), (min((((/* implicit */long long int) var_11)), (arr_1 [i_0])))))));
                        arr_10 [i_0] [i_3] [i_3] [9U] = ((/* implicit */int) (-(max((((/* implicit */long long int) arr_4 [i_1] [i_1 + 1])), (min((((/* implicit */long long int) var_14)), (-9223372036854775798LL)))))));
                        var_18 = ((/* implicit */int) ((((max((-9223372036854775798LL), (((/* implicit */long long int) var_1)))) * (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (short)16383)))))) >= (((/* implicit */long long int) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) arr_7 [i_2 + 1] [i_2 - 2] [i_2 - 1] [i_1 - 3])))))));
                    }
                    arr_11 [6LL] [6LL] [6LL] |= ((/* implicit */unsigned long long int) arr_8 [i_2] [i_1] [(short)4] [i_0]);
                }
                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) min((min((((/* implicit */long long int) (unsigned short)2047)), (-7268578969004744607LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_1 - 1])) ? (((/* implicit */int) arr_4 [i_1 + 2] [i_1])) : (((/* implicit */int) var_12))))))))));
            }
        } 
    } 
}
