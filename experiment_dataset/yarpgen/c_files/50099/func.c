/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50099
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
    var_13 = ((/* implicit */long long int) var_10);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */_Bool) max((((unsigned int) -2744916353155789419LL)), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_2 [i_1 - 1] [i_1 - 1])))))));
                var_15 += max(((~(var_3))), (((/* implicit */long long int) ((arr_4 [i_1 - 1] [i_1 - 1] [i_1 + 1]) > (arr_4 [i_1 - 1] [i_1 + 1] [i_1 - 1])))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_16 |= ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_2])) ? (arr_8 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) var_2))))) ? (max((arr_7 [i_0]), (((/* implicit */long long int) arr_10 [i_0])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_3])) ? (((/* implicit */int) (unsigned short)10604)) : (((/* implicit */int) arr_2 [i_2] [i_3]))))))));
                                var_17 = ((/* implicit */unsigned long long int) arr_6 [i_1 + 1] [i_1]);
                                var_18 += ((/* implicit */long long int) 4193792U);
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */_Bool) max((((((/* implicit */int) arr_0 [i_0])) | (((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) arr_0 [i_0]))));
                var_20 = ((/* implicit */short) arr_9 [i_1] [i_1 + 1] [i_1] [i_0] [i_0] [i_0]);
            }
        } 
    } 
}
