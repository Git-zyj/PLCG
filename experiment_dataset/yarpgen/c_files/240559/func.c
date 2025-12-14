/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240559
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) arr_6 [3LL] [3LL] [i_1]);
                    var_20 |= ((/* implicit */signed char) arr_4 [i_0]);
                    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (~((+(((/* implicit */int) (unsigned char)14)))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 4; i_4 < 13; i_4 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)57625))))) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : (((/* implicit */int) (_Bool)0)))));
                                var_23 = ((/* implicit */short) max((((/* implicit */unsigned int) max(((~(((/* implicit */int) var_5)))), (((/* implicit */int) arr_5 [i_4 + 3] [i_4 - 4] [i_4 + 4]))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)57625)) ? (arr_9 [i_0] [14ULL] [3ULL] [i_2] [15] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [(unsigned short)7] [16ULL] [14U])))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)48)) * (((/* implicit */int) arr_10 [i_3] [i_3] [i_3] [i_3] [6ULL]))))) : (0U)))));
                                var_24 = ((/* implicit */long long int) (((~(((/* implicit */int) arr_2 [i_4 + 2] [i_4 - 2])))) <= (((/* implicit */int) (_Bool)0))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)14))) + (4467570830351532032ULL)));
    var_26 = ((/* implicit */_Bool) var_0);
}
