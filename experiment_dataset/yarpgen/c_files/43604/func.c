/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43604
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned char i_2 = 2; i_2 < 11; i_2 += 4) 
            {
                {
                    arr_7 [i_1] [6ULL] [i_2 - 2] [11] = min((var_2), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (var_5) : (((/* implicit */int) arr_3 [7LL] [i_1]))))));
                    arr_8 [i_0] = ((/* implicit */long long int) var_18);
                    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((_Bool) (~(((/* implicit */int) (unsigned char)195))))) ? (((/* implicit */int) (short)-14345)) : (((((/* implicit */_Bool) arr_3 [i_2 - 2] [(unsigned short)11])) ? (((/* implicit */int) arr_3 [i_2 + 1] [4ULL])) : (((/* implicit */int) arr_3 [i_2 - 2] [(_Bool)1])))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */_Bool) var_1);
    /* LoopNest 2 */
    for (long long int i_3 = 0; i_3 < 17; i_3 += 4) 
    {
        for (short i_4 = 0; i_4 < 17; i_4 += 2) 
        {
            {
                var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */int) arr_14 [i_4] [(signed char)6] [i_3])), (((int) (_Bool)1)))))));
                arr_15 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) arr_13 [i_3] [i_4])) : (arr_11 [3] [(_Bool)1])));
                arr_16 [8] = ((/* implicit */unsigned long long int) (~((~(((unsigned int) (short)-14123))))));
                arr_17 [i_3] [i_4] = var_7;
            }
        } 
    } 
}
