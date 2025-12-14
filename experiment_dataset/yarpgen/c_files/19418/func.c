/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19418
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
    for (unsigned short i_0 = 4; i_0 < 23; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) >= ((-(var_14)))));
                    var_16 = ((/* implicit */long long int) var_10);
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)8295))))) ? (((/* implicit */long long int) min(((~(((/* implicit */int) (short)-8296)))), (((/* implicit */int) (short)8282))))) : (min((8746921060597384102LL), (((/* implicit */long long int) (-(1911924141U))))))));
                        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) var_8))));
                    }
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_1), (((/* implicit */long long int) var_5))))) ? (((((/* implicit */_Bool) (short)-8306)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)38990))) : (9223372036854775807LL))) : (((/* implicit */long long int) ((/* implicit */int) var_6)))));
}
