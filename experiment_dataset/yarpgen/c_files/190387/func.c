/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190387
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
    var_13 = ((/* implicit */_Bool) max((((/* implicit */long long int) 2937068518U)), (4437376543024905192LL)));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((16402218760945590307ULL) - (((/* implicit */unsigned long long int) 2937068518U))));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (signed char i_2 = 1; i_2 < 11; i_2 += 2) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_12 [i_3] = ((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL));
                        var_14 = ((/* implicit */int) min((((_Bool) arr_10 [i_2 - 1] [i_2] [i_2 - 1] [i_0] [i_0])), ((_Bool)0)));
                        var_15 = ((long long int) 1357898777U);
                    }
                } 
            } 
        } 
        arr_13 [10U] = ((/* implicit */short) ((long long int) (unsigned short)21208));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 3; i_4 < 12; i_4 += 2) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            {
                var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) max((((((/* implicit */int) arr_16 [i_4 - 1])) != (((/* implicit */int) arr_16 [i_4 - 2])))), (((((/* implicit */int) arr_16 [i_4 - 1])) <= (((/* implicit */int) arr_16 [i_4 - 1])))))))));
                arr_21 [i_4] [i_4] = ((unsigned long long int) 2937068494U);
                arr_22 [i_5] [i_5] [i_4] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((int) arr_19 [i_4] [i_4 - 2] [i_4 + 2]))) > (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_4] [i_4] [i_4]))) ^ (arr_19 [i_4] [i_4 + 2] [i_4 + 2])))));
                arr_23 [i_4] [i_4] [i_5] = ((unsigned long long int) ((unsigned int) 1357898777U));
                var_17 = ((/* implicit */long long int) arr_16 [(unsigned short)9]);
            }
        } 
    } 
}
