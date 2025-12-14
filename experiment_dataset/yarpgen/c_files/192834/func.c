/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192834
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
    var_15 = ((/* implicit */short) (~((~(((((/* implicit */_Bool) 16156139362212658466ULL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_5))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) - (((2290604711496893149ULL) << (((var_11) - (14311963451354419967ULL))))))))));
                /* LoopSeq 3 */
                for (unsigned int i_2 = 1; i_2 < 21; i_2 += 4) 
                {
                    var_17 = ((/* implicit */unsigned short) ((2U) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) arr_0 [i_2 + 2])) : (((/* implicit */int) var_4)))))));
                    arr_6 [i_1] [i_1] [i_2] [i_1] = ((/* implicit */unsigned short) 3290957300U);
                }
                /* vectorizable */
                for (long long int i_3 = 0; i_3 < 24; i_3 += 4) /* same iter space */
                {
                    arr_9 [i_0] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */long long int) 2147483647)) <= (var_3))))));
                    arr_10 [i_0] [(unsigned short)13] [i_0] [i_0] = ((/* implicit */unsigned short) (_Bool)0);
                }
                for (long long int i_4 = 0; i_4 < 24; i_4 += 4) /* same iter space */
                {
                    arr_14 [i_4] [i_4] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) ((unsigned short) var_7))) * (((/* implicit */int) var_5))));
                    var_18 = ((/* implicit */unsigned long long int) (unsigned short)939);
                }
                var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (unsigned short)64430))));
                arr_15 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) 3440798445U);
            }
        } 
    } 
}
