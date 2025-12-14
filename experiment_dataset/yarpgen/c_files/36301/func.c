/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36301
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
    var_16 &= ((/* implicit */short) (_Bool)0);
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((unsigned long long int) (_Bool)1)))));
        /* LoopNest 2 */
        for (short i_1 = 4; i_1 < 14; i_1 += 2) 
        {
            for (long long int i_2 = 2; i_2 < 15; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) (_Bool)1))) ? ((((_Bool)1) ? (6761524823122344183LL) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) < (var_8)))))));
                    arr_7 [i_0] [(short)0] = ((/* implicit */long long int) arr_0 [i_0] [i_1]);
                }
            } 
        } 
    }
}
