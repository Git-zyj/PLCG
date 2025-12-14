/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189746
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
    var_16 = ((/* implicit */signed char) (((+(var_13))) >= (((/* implicit */int) var_9))));
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (min((((((/* implicit */unsigned long long int) 2001518361U)) ^ (var_8))), (((/* implicit */unsigned long long int) var_12))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_1] [11])) || (((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-106)))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2] [5ULL] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((arr_14 [i_4] [i_1]) + (arr_14 [i_1] [i_4]))) : (max((((/* implicit */unsigned long long int) var_10)), (arr_14 [i_0] [i_3])))));
                                var_18 = ((/* implicit */int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) + (var_8))), (min((var_0), (((/* implicit */unsigned long long int) var_1))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned int) var_2);
    var_20 = var_3;
}
