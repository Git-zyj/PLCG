/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203835
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
        for (short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_15 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (682021476U)));
                var_16 = ((/* implicit */short) min((((/* implicit */unsigned int) arr_2 [i_0])), (max((((/* implicit */unsigned int) arr_1 [1])), (min((arr_3 [6] [i_0] [i_0]), (arr_0 [i_0])))))));
                var_17 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((max((((/* implicit */unsigned int) arr_2 [i_0])), (arr_3 [i_0] [i_0] [i_1]))) == (min((arr_0 [i_0]), (((/* implicit */unsigned int) arr_2 [(_Bool)1])))))))) % (arr_0 [i_0])));
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (long long int i_3 = 0; i_3 < 18; i_3 += 3) 
        {
            for (long long int i_4 = 0; i_4 < 18; i_4 += 1) 
            {
                {
                    var_18 -= ((/* implicit */short) min((arr_11 [i_2] [i_2] [i_2]), (((/* implicit */long long int) (-(((((/* implicit */_Bool) 13062789830856883542ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)97)))))))));
                    arr_12 [2ULL] [i_3] [2ULL] |= ((signed char) arr_10 [i_4] [i_4] [0LL] [0LL]);
                }
            } 
        } 
    } 
    var_19 &= ((/* implicit */signed char) ((13062789830856883542ULL) == (((/* implicit */unsigned long long int) 3497050957U))));
}
