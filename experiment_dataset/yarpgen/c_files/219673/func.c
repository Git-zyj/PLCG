/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219673
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 17; i_2 += 1) 
            {
                {
                    var_12 ^= ((/* implicit */signed char) var_5);
                    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6536327616519767174ULL)) ? (((/* implicit */int) arr_7 [i_2] [i_2 - 2] [i_2])) : (((/* implicit */int) arr_8 [i_2] [i_2 - 2] [i_2 - 2] [i_2 + 2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2]))) : (((((/* implicit */_Bool) arr_1 [i_2 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) 3941342191U)))))) : (((((/* implicit */_Bool) var_7)) ? (arr_5 [i_0] [i_0] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-22736)))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((((/* implicit */int) var_10)) - (((/* implicit */int) (unsigned short)65530)))))));
                        var_15 = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))) : (arr_5 [i_2 + 1] [i_2 - 2] [i_2 - 1])));
                    }
                    arr_12 [i_0] [i_0] [i_2] [i_1] = ((/* implicit */unsigned short) (((-(1719755150U))) - (((/* implicit */unsigned int) (-((-(785125290))))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */_Bool) var_2);
}
