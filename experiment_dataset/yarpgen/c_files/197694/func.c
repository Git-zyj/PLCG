/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197694
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */long long int) arr_8 [i_0] [i_1] [i_1] [i_2]);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned long long int) var_7);
                                var_18 = ((/* implicit */unsigned char) min(((+(min((var_2), (-1761012597))))), (((/* implicit */int) arr_9 [i_0] [i_1] [i_1 - 2] [i_3]))));
                                arr_13 [i_0] [i_0] [6LL] [i_3] [i_0] = ((/* implicit */unsigned char) (-(max((var_1), (((/* implicit */int) var_10))))));
                                arr_14 [i_0] [i_0] [i_2] [i_2] [10ULL] = ((/* implicit */long long int) var_11);
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */_Bool) min((min((-1451726679), (arr_11 [i_1 - 2] [i_2] [i_1 - 2] [i_1 + 2] [i_1 - 2]))), (((arr_11 [10LL] [i_2] [i_1 - 1] [i_1] [i_1 - 1]) | (arr_11 [i_1] [i_1] [i_1 - 1] [i_1 + 2] [i_1])))));
                    var_20 = ((/* implicit */int) min((((/* implicit */long long int) (~(((/* implicit */int) (_Bool)0))))), (max((min((var_5), (((/* implicit */long long int) var_8)))), (((/* implicit */long long int) var_6))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */short) var_10);
    var_22 = var_14;
}
