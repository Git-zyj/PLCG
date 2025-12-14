/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47852
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
    var_16 = ((var_13) << (((var_12) - (988299013))));
    var_17 = (+(((unsigned long long int) var_12)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */int) (-(((((/* implicit */_Bool) min((var_12), (var_12)))) ? (max((((/* implicit */unsigned long long int) arr_1 [i_0])), (10432862935125194747ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((1822475684) == (1822475660)))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        {
                            arr_11 [i_0] [i_1] [i_3] [i_2] [10ULL] = ((/* implicit */int) ((((/* implicit */_Bool) (+(max((-1822475693), (-1822475685)))))) ? (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_2] [i_3])) ? (((/* implicit */unsigned long long int) arr_1 [i_0])) : (((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])) : (var_9))))) : (((/* implicit */unsigned long long int) arr_0 [i_0]))));
                            arr_12 [4ULL] [i_3] [i_2] [i_3] [i_3] [15ULL] = max((2147483643), (arr_4 [i_0]));
                            var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) (+(-1822475685))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (int i_4 = 0; i_4 < 10; i_4 += 3) 
    {
        /* LoopSeq 1 */
        for (int i_5 = 0; i_5 < 10; i_5 += 3) 
        {
            var_19 = ((/* implicit */unsigned long long int) max((var_19), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((arr_9 [i_4] [i_4] [i_5] [i_5]) << (((var_10) - (11656318887635093066ULL)))))) || (((/* implicit */_Bool) max((arr_14 [i_5]), (arr_3 [i_5] [i_4])))))))) : (((((/* implicit */_Bool) 16ULL)) ? (max((10496836515228698191ULL), (var_5))) : (arr_15 [i_5])))))));
            arr_18 [i_4] [i_4] = ((unsigned long long int) (+(2147483647)));
        }
        arr_19 [2] [i_4] = ((/* implicit */unsigned long long int) (-((+((-(-2145718510)))))));
    }
}
