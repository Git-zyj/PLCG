/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39436
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
    var_14 = ((/* implicit */_Bool) var_0);
    var_15 &= max((3639268216U), (((/* implicit */unsigned int) (short)0)));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    var_16 |= ((/* implicit */short) 655699079U);
                    /* LoopNest 2 */
                    for (short i_3 = 4; i_3 < 14; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 15; i_4 += 4) 
                        {
                            {
                                var_17 += ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((unsigned int) arr_10 [i_0 - 1] [i_1] [i_2] [i_3] [i_4 + 1]))) ? (((655699079U) / (var_0))) : ((-(3605739219U))))) | (max((0U), (((/* implicit */unsigned int) (_Bool)1))))));
                                var_18 -= ((/* implicit */_Bool) ((689228077U) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                            }
                        } 
                    } 
                    arr_12 [i_2] [15U] [i_0] [i_0] = ((/* implicit */long long int) ((unsigned int) ((3639268216U) / (188397240U))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_5 = 0; i_5 < 25; i_5 += 2) 
    {
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */long long int) 1886332063U)) & (-6179708143643952704LL)));
        arr_16 [i_5] = ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) / (4294967295U));
        arr_17 [i_5] = ((/* implicit */short) (~((+(((/* implicit */int) arr_15 [i_5] [i_5]))))));
        var_20 |= ((/* implicit */long long int) max((max((arr_14 [i_5] [i_5]), (arr_14 [i_5] [i_5]))), (max((arr_14 [i_5] [i_5]), (((/* implicit */unsigned int) (_Bool)1))))));
    }
}
