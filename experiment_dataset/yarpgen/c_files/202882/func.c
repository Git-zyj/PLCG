/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202882
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
    /* LoopSeq 1 */
    for (long long int i_0 = 3; i_0 < 17; i_0 += 3) 
    {
        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (-(((/* implicit */int) (signed char)111)))))));
        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) var_5))));
    }
    /* LoopNest 3 */
    for (signed char i_1 = 3; i_1 < 17; i_1 += 4) 
    {
        for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 4) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    arr_9 [i_3] [i_3] [i_3] = ((/* implicit */signed char) (-((~(((/* implicit */int) var_19))))));
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 0; i_4 < 18; i_4 += 3) 
                    {
                        for (signed char i_5 = 4; i_5 < 17; i_5 += 3) 
                        {
                            {
                                arr_16 [i_1] [i_1] [i_3] [i_3] [i_5] = ((/* implicit */int) (~(((((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_1] [i_2] [i_1] [i_1])) ? (((/* implicit */int) arr_12 [i_1] [i_3] [i_3] [i_4] [i_4])) : (((/* implicit */int) (short)13794))))) / (((long long int) (short)-13782))))));
                                var_22 = ((/* implicit */unsigned char) (-((+(((/* implicit */int) (short)4518))))));
                            }
                        } 
                    } 
                    arr_17 [i_1] [i_1] [i_2] [i_1] = ((/* implicit */long long int) var_15);
                }
            } 
        } 
    } 
}
