/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224745
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
    for (int i_0 = 3; i_0 < 14; i_0 += 1) 
    {
        for (signed char i_1 = 4; i_1 < 13; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 12; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (short i_4 = 2; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_14 = arr_9 [i_4] [i_3] [(unsigned char)7] [10U] [i_0] [i_0];
                                arr_13 [i_0 - 2] [i_4] [i_0 - 2] [i_0 - 2] [7] [i_0 - 1] [i_0] = ((/* implicit */unsigned long long int) max((arr_2 [i_4 - 1] [i_4 - 2]), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) <= (((/* implicit */int) (_Bool)0)))))));
                                arr_14 [i_4] [i_4] [i_4] [i_0] = ((/* implicit */unsigned long long int) ((((int) ((arr_2 [i_4 - 2] [i_2 - 1]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [(_Bool)1] [(_Bool)1] [i_4] [i_4] [i_4] [i_4] [i_4])))))) / (arr_8 [i_3] [i_2 - 1] [i_2] [i_1 + 2] [i_1] [i_1])));
                                var_15 &= ((/* implicit */signed char) arr_3 [i_0]);
                            }
                        } 
                    } 
                    arr_15 [i_1] [13] [i_1] = ((/* implicit */unsigned char) ((int) ((arr_0 [i_0 - 3]) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)231))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) 952840478U);
    var_17 = ((/* implicit */long long int) ((int) (-(var_2))));
    var_18 = ((/* implicit */long long int) (unsigned char)25);
}
