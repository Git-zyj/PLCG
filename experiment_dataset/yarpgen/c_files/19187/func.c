/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19187
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_17 = ((/* implicit */signed char) max((min((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])), (arr_0 [i_0]))), (((/* implicit */unsigned long long int) ((((-5247710530925759053LL) + (9223372036854775807LL))) << (((1097281213U) / (var_12))))))));
        var_18 = ((/* implicit */unsigned int) max(((short)12), (((/* implicit */short) (signed char)22))));
    }
    /* LoopNest 2 */
    for (unsigned int i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        for (unsigned char i_2 = 2; i_2 < 13; i_2 += 2) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_3 = 1; i_3 < 14; i_3 += 1) 
                {
                    for (short i_4 = 0; i_4 < 15; i_4 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */int) arr_9 [i_1] [i_2 + 2]);
                            arr_14 [i_2 - 1] [i_2] [i_2] [i_2] [i_2 + 2] = ((/* implicit */unsigned int) arr_12 [i_4] [i_3] [i_2] [i_1]);
                        }
                    } 
                } 
                var_20 = ((/* implicit */short) (((~(((/* implicit */int) var_13)))) ^ (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_2 - 2] [i_2 - 1])) || (((/* implicit */_Bool) arr_3 [i_2 - 2] [i_2 - 1])))))));
            }
        } 
    } 
}
