/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215483
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            {
                var_15 |= ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) == (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [2U] [2U])) ? (-1968244486097230865LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) arr_0 [i_1 - 1] [i_1 + 1])) : ((((_Bool)1) ? (((/* implicit */int) arr_0 [i_0] [i_1])) : (((/* implicit */int) (_Bool)1))))))));
                arr_5 [i_0] [i_1] [i_0] &= ((/* implicit */long long int) ((unsigned int) (((_Bool)1) ? (((/* implicit */int) arr_4 [i_1 - 1])) : (((/* implicit */int) arr_4 [i_1 - 1])))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 1; i_2 < 20; i_2 += 2) 
                {
                    for (long long int i_3 = 2; i_3 < 17; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                arr_15 [i_0] [i_0] [i_2] [i_3 - 2] [i_4] [i_4] |= ((/* implicit */unsigned int) arr_9 [i_2 - 1]);
                                var_16 = ((/* implicit */unsigned short) min((max((((/* implicit */long long int) arr_13 [i_3] [i_3] [i_3] [i_3 + 3] [i_3 + 3])), (arr_14 [i_4] [i_4] [i_4] [i_4] [i_3 + 3]))), (((/* implicit */long long int) ((unsigned int) arr_13 [8LL] [2U] [i_3] [i_3] [i_3 + 3])))));
                            }
                        } 
                    } 
                } 
                arr_16 [i_0] [i_1] [14U] &= ((/* implicit */_Bool) ((unsigned short) ((arr_11 [i_1 - 1]) >> (((arr_11 [i_1 - 1]) - (4070952834U))))));
            }
        } 
    } 
    var_17 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? ((((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)866), ((unsigned short)64669))))) : (1670318014U))) : (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) ^ (1646438156U)))));
    var_18 &= ((unsigned int) ((((/* implicit */_Bool) ((unsigned int) (_Bool)1))) && (var_10)));
}
