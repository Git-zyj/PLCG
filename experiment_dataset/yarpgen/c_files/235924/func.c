/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235924
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
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? ((+(((/* implicit */int) (short)4)))) : (((/* implicit */int) ((unsigned short) var_4)))))) || (((/* implicit */_Bool) (~((~(var_6))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? ((-(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_10 [i_3 - 1] [i_1] [i_3 - 1])) : (((((/* implicit */_Bool) arr_6 [i_2] [7])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7))))))));
                                var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_9), (((/* implicit */long long int) (short)32747))))) ? (((((/* implicit */_Bool) var_0)) ? (-7748125738602235933LL) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_1 - 1] [i_2] [i_3 - 1] [i_4] [i_3]))))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_9 [i_0] [i_1 + 1] [(unsigned short)9] [i_3 - 1] [i_4] [i_0])))))));
                            }
                        } 
                    } 
                } 
                var_15 |= ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
}
