/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47219
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
    var_13 = var_5;
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned int) var_7);
                                var_15 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_15 [i_4 - 2] [i_4] [i_4 + 1] [i_4 - 2] [i_4 - 1] [i_2] [i_4])) ? (0) : (((/* implicit */int) var_8))))));
                            }
                        } 
                    } 
                } 
                arr_16 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((int) var_2))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) max((arr_6 [i_1]), (((/* implicit */int) var_8))))))) : (max((((/* implicit */unsigned int) ((((/* implicit */int) var_8)) | (((/* implicit */int) arr_15 [i_0] [i_1] [i_1] [i_0] [i_0] [i_0] [i_1]))))), (arr_13 [i_0] [i_0])))));
                arr_17 [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) max((((/* implicit */short) arr_7 [i_0] [i_0] [i_0] [i_1])), (var_8))))));
            }
        } 
    } 
}
