/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51628
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
    for (unsigned long long int i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 1; i_3 < 19; i_3 += 3) 
                    {
                        arr_12 [i_0] [2ULL] [i_1 + 3] [i_1 + 3] [i_0] [i_0] = min((arr_2 [i_1]), (((unsigned long long int) 7160957486271000757ULL)));
                        var_17 |= ((((/* implicit */_Bool) min((((arr_2 [i_1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned long long int) arr_1 [i_2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1 + 4] [i_3]))) : (var_2));
                        var_18 -= ((((/* implicit */_Bool) ((arr_7 [i_1 + 4] [10ULL] [i_0 - 1]) & (arr_7 [i_1 + 4] [18ULL] [i_0 - 1])))) ? (((var_9) ? (19ULL) : (arr_7 [i_1 - 1] [0ULL] [i_0 + 1]))) : (((unsigned long long int) arr_7 [i_1 - 1] [0ULL] [i_0 - 1])));
                    }
                    var_19 += ((/* implicit */_Bool) 7411156195482968151ULL);
                    var_20 = var_9;
                }
            } 
        } 
    } 
    var_21 = var_12;
    /* LoopSeq 1 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (~(2ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_4]))) : (max((1691542328272538529ULL), (var_5))))) == (((arr_13 [i_4]) ? (((13498032594099229748ULL) + (arr_5 [10ULL]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_4] [i_4]))))))))));
        arr_15 [i_4] = (_Bool)0;
        var_23 = ((/* implicit */unsigned long long int) max((var_23), ((~(12698232224270203758ULL)))));
    }
    var_24 &= ((/* implicit */_Bool) var_5);
}
