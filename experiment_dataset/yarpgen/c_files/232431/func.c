/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232431
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            for (unsigned short i_2 = 2; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_0] [i_0] [i_0] = ((min((var_8), (var_8))) | (((/* implicit */long long int) min((((((/* implicit */_Bool) (unsigned short)16648)) ? (1903892422U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)4680))))), (max((var_2), (var_9)))))));
                    var_10 = ((/* implicit */signed char) min((var_10), (((/* implicit */signed char) min((((/* implicit */unsigned int) (-(var_4)))), (((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? ((-(var_2))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (var_5) : (var_5)))))))))));
                    var_11 = ((/* implicit */unsigned int) var_6);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 2; i_4 < 20; i_4 += 3) 
                        {
                            {
                                arr_13 [16] [10] [i_0] [i_0] [i_1 - 2] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned long long int) var_7))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_8))) : (((/* implicit */long long int) ((var_9) >> (((var_4) - (1366879350))))))))) ? (((3298534883328LL) * (((/* implicit */long long int) ((/* implicit */int) (short)-4670))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : ((-(var_2)))))));
                                arr_14 [i_0] [i_0] [2U] = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) max(((short)4669), ((short)4677))))) >= (var_2))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) max((max((((/* implicit */long long int) (-(var_9)))), (min((((/* implicit */long long int) var_7)), (var_8))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_1) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) ? (((((/* implicit */_Bool) -4452116910864034372LL)) ? (((/* implicit */int) (short)-4670)) : (((/* implicit */int) (short)-4670)))) : (((/* implicit */int) ((var_8) > (((/* implicit */long long int) var_2)))))))))))));
}
