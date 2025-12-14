/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220218
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
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)1)) ? (12770051256231741258ULL) : (((/* implicit */unsigned long long int) 811413608U))));
                var_12 += (short)1;
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    for (short i_3 = 2; i_3 < 8; i_3 += 4) 
                    {
                        {
                            arr_14 [i_3] [(_Bool)1] [i_1] [i_0] = ((/* implicit */unsigned int) (signed char)56);
                            arr_15 [i_0] [i_1] [i_2] [i_3 - 2] [1] = max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 8918010444771008099ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))), (min((((((/* implicit */unsigned int) var_5)) - (var_0))), (((/* implicit */unsigned int) max((var_8), (var_10)))))));
                            var_13 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned int) (signed char)-45)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_14 = ((/* implicit */short) (+((~(min((12770051256231741249ULL), (((/* implicit */unsigned long long int) var_7))))))));
}
