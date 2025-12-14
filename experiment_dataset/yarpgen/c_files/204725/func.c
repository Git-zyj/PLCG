/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204725
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
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned int i_1 = 3; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_2 = 1; i_2 < 13; i_2 += 3) 
                {
                    var_14 += ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)152))));
                    arr_8 [i_0] [i_1] [i_2 - 1] [5U] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) 1400069065)) : (arr_7 [i_2]))) / (((/* implicit */unsigned int) ((var_11) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_2)))))));
                }
                var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) max((((arr_7 [i_1 + 3]) - (arr_7 [i_1 - 3]))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_4 [3ULL] [i_1 + 1] [i_0]))))))))));
                var_16 += arr_0 [i_0];
            }
        } 
    } 
    var_17 -= ((((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)32767), (((/* implicit */short) ((((/* implicit */_Bool) 3471113780U)) || (((/* implicit */_Bool) (short)-8646))))))))) | (3883382693554392483ULL));
    /* LoopSeq 1 */
    for (unsigned long long int i_3 = 1; i_3 < 23; i_3 += 1) 
    {
        var_18 = max((((/* implicit */unsigned long long int) ((((/* implicit */int) max((arr_9 [i_3] [(unsigned char)22]), (((/* implicit */short) var_10))))) * (((/* implicit */int) ((var_7) == (((/* implicit */long long int) ((/* implicit */int) var_0))))))))), (var_1));
        var_19 = ((/* implicit */unsigned long long int) (((((~(((((/* implicit */_Bool) arr_10 [7ULL] [17ULL])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10)))))) + (2147483647))) >> (((max((((/* implicit */unsigned long long int) (-(arr_10 [(short)17] [(signed char)0])))), (var_5))) - (10793922626025029206ULL)))));
        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) max((((/* implicit */int) var_11)), (arr_10 [i_3 - 1] [i_3 - 1]))))));
    }
}
