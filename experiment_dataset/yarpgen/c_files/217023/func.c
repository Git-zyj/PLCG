/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217023
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
    var_15 = ((/* implicit */signed char) var_0);
    var_16 = ((/* implicit */unsigned long long int) var_10);
    var_17 = (-(var_13));
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        for (unsigned short i_1 = 3; i_1 < 19; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 21; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                arr_12 [(short)1] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) var_1);
                                var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) arr_2 [i_1 + 4] [i_1 + 3] [i_1]))));
                                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) arr_7 [i_0] [i_0] [i_0] [i_0 - 2] [i_0 - 2] [i_0]))));
                                arr_13 [i_4] [i_3 - 2] [i_1] [i_1] [i_0] = ((/* implicit */signed char) var_10);
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */long long int) (-((+(((/* implicit */int) arr_8 [i_0 - 1] [i_1 - 1]))))));
                    var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) var_11))));
                    var_22 = ((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)112)), ((unsigned short)48182)));
                }
            } 
        } 
    } 
}
