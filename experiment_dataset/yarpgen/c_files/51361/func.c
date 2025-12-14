/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51361
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
    for (unsigned int i_0 = 3; i_0 < 23; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    arr_10 [i_0] [i_0] = ((/* implicit */unsigned char) 12U);
                    var_19 = 6U;
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            {
                                arr_16 [i_0] [i_1] [i_1] [i_2] [i_3] [i_0] [i_4] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) 3705578431U)), (18446744073709551615ULL)));
                                arr_17 [i_4] [i_4] [i_0] [i_2] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) 1837690949U);
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */signed char) min((((long long int) arr_13 [i_0 + 1] [i_0 - 1] [i_0 - 2] [i_0] [i_0] [i_0 - 2])), (((/* implicit */long long int) (~(1837690949U))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((var_2), (var_17)))))))) : (var_18)));
}
