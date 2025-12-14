/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29587
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
    var_10 += var_1;
    var_11 = ((/* implicit */unsigned int) min((((/* implicit */long long int) (short)-28900)), (var_4)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = arr_2 [i_0] [i_0];
        /* LoopNest 3 */
        for (long long int i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_10 [i_0] [i_0] [5ULL] [i_3] = ((/* implicit */unsigned int) var_0);
                        /* LoopSeq 1 */
                        for (long long int i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            var_12 = var_8;
                            var_13 *= arr_0 [12U];
                            var_14 |= ((/* implicit */short) arr_9 [10LL] [i_1 - 1] [10LL]);
                        }
                        var_15 -= ((/* implicit */unsigned int) var_1);
                        var_16 ^= ((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_1 + 1] [i_1] [i_1 + 1])) == (((/* implicit */int) arr_6 [i_1 - 1] [i_1] [i_1 - 1]))));
                    }
                } 
            } 
        } 
    }
}
