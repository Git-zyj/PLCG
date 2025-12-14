/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236412
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
    var_15 = ((/* implicit */long long int) var_3);
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 17; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */long long int) arr_3 [(_Bool)1] [i_0 - 1]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        {
                            arr_13 [i_0 + 3] [i_1] [i_2] [(_Bool)1] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (-(((long long int) 4095U))))), (((unsigned long long int) min((-6361838119433427861LL), (((/* implicit */long long int) var_6)))))));
                            var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (-(1651820484U)))), (((((/* implicit */_Bool) arr_6 [i_0] [i_0 + 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_8))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = (~((+(((/* implicit */int) max(((short)-32764), (((/* implicit */short) (signed char)31))))))));
}
