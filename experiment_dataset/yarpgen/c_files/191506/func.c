/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191506
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
    for (long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (int i_2 = 2; i_2 < 19; i_2 += 4) 
            {
                {
                    var_10 = ((/* implicit */long long int) (~(((18446744073709551615ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        var_11 = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1)))));
                        var_12 = (+(((/* implicit */int) arr_10 [i_0] [i_0] [i_2 - 1] [i_1])));
                        var_13 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) + (((/* implicit */int) arr_5 [i_0] [(short)18]))))) ? (arr_2 [i_0] [i_2 + 2] [i_2]) : (((/* implicit */long long int) ((var_9) - (var_3))))));
                    }
                    arr_11 [2] [i_1] [16ULL] [i_1] = ((/* implicit */unsigned char) (!((_Bool)1)));
                    arr_12 [i_0] [i_0] [i_0] [(short)13] = ((/* implicit */int) ((unsigned int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)33898))));
                }
            } 
        } 
    } 
    var_14 = (((+(((var_1) ? (((/* implicit */int) var_7)) : (var_6))))) + ((-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1)))))));
}
