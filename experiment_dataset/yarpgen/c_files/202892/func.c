/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202892
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [21U] [21U] = ((/* implicit */unsigned long long int) (_Bool)1);
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        {
                            arr_12 [i_0] [i_2] [i_2] = ((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0]);
                            var_18 = ((/* implicit */unsigned int) min((min((((/* implicit */int) var_12)), (arr_2 [i_0]))), (((/* implicit */int) ((unsigned char) (unsigned char)252)))));
                            var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) 1860682935)), (arr_11 [i_0] [i_1] [i_2] [6U])))) ? (((((/* implicit */unsigned int) -1860682960)) * (25U))) : ((-(var_9)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) var_15))))), (var_16))))) : (min(((~(4294967281U))), (((/* implicit */unsigned int) ((unsigned char) var_9))))))))));
                            arr_13 [i_0] [i_2] [i_0] = ((/* implicit */_Bool) min(((signed char)-116), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_3 [i_3])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = (!(((/* implicit */_Bool) var_4)));
    var_21 = ((/* implicit */unsigned short) min(((~((-(1860682935))))), (((((/* implicit */int) ((unsigned char) var_8))) + (699858347)))));
}
